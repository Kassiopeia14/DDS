#include <iostream>

#include <dds/pub/ddspub.hpp>
#include <rti/util/util.hpp>  
#include <rti/config/Logger.hpp>  

#include "calculator.hpp"
#include "application.hpp" 

#include <algorithm>

#include <dds/sub/ddssub.hpp>
#include <dds/core/ddscore.hpp>

#include <thread>

using namespace application;

unsigned int process_data(dds::sub::DataReader<CalculatorResponse>& reader)
{
    unsigned int responses_read = 0;
    dds::sub::LoanedSamples<CalculatorResponse> responses = reader.take();
    for (const auto& response : responses) {
        if (response.info().valid()) {
            responses_read++;
            std::cout << "Answer: " << response.data().data() << std::endl;
        }
    }

    return responses_read;
}

void catchData(unsigned int domain_id, unsigned int responses_count)
{
    dds::domain::DomainParticipant participant(domain_id);
    dds::topic::Topic<CalculatorResponse> topicResponse(participant, "Response");
    dds::sub::Subscriber subscriber(participant);
    dds::sub::DataReader<CalculatorResponse> reader(subscriber, topicResponse);
    dds::core::cond::StatusCondition status_condition(reader);
    status_condition.enabled_statuses(
        dds::core::status::StatusMask::data_available());

    unsigned int responses_read = 0;
    status_condition.extensions().handler([&reader, &responses_read]() {
        responses_read += process_data(reader);
        });

    dds::core::cond::WaitSet waitset;
    waitset += status_condition;

    while (!shutdown_requested) {
        waitset.dispatch(dds::core::Duration(4));
    }
}

void sendData(unsigned int domain_id, unsigned int response_count)
{
    dds::domain::DomainParticipant participant(domain_id);
    dds::topic::Topic<CalculatorRequest> topicRequest(participant, "Request");
    dds::pub::Publisher publisher(participant);
    dds::pub::DataWriter<CalculatorRequest> writer(publisher, topicRequest);

    CalculatorRequest req;
    std::string input;
    while (!shutdown_requested) {

        std::cout << "Input: " << std::endl;

        std::cin >> req.a();
        std::cin >> req.operation();
        std::cin >> req.b();

        try {
            if (std::cin.fail()) {
                throw "Wrong number or operation";
            }
        }
        catch (char* error) {
            std::cout << error << std::endl;
            break;
        }

        writer.write(req);
        //rti::util::sleep(dds::core::Duration(4));
    }
}

int main(int argc, char* argv[])
{
    auto arguments = parse_arguments(argc, argv);
    if (arguments.parse_result == ParseReturn::exit) {
        return EXIT_SUCCESS;
    }
    else if (arguments.parse_result == ParseReturn::failure) {
        return EXIT_FAILURE;
    }
    setup_signal_handlers();

    rti::config::Logger::instance().verbosity(arguments.verbosity);

    std::thread t1(catchData, arguments.domain_id, arguments.sample_count);

    try {
        sendData(arguments.domain_id, arguments.sample_count);
    }
    catch (const std::exception& ex) {
        std::cerr << "Exception in run_example(): " << ex.what()
            << std::endl;
        return EXIT_FAILURE;
    }

    t1.join();

    dds::domain::DomainParticipant::finalize_participant_factory();

    return EXIT_SUCCESS;
}