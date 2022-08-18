#include <algorithm>
#include <iostream>

#include <dds/sub/ddssub.hpp>
#include <dds/core/ddscore.hpp>
#include <rti/config/Logger.hpp>  

#include <dds/pub/ddspub.hpp>
#include <rti/util/util.hpp>  

#include "calculator.hpp"
#include "application.hpp" 

#include <thread>

using namespace application;

std::string process_data(dds::sub::DataReader<CalculatorRequest>& reader)
{
    unsigned int requests_read = 0;
    dds::sub::LoanedSamples<CalculatorRequest> requests = reader.take();
    for (const auto& request : requests) {
        if (request.info().valid()) {
            requests_read++;

            double
                a = request.data().a(),
                b = request.data().b(),
                result = 0;
            char operation = request.data().operation();

            switch (operation)
            {
            case '+': {

                result = a + b;
                break;
            }
            case '-': {

                result = a - b;
                break;
            }
            case '*': {

                result = a * b;
                break;
            }
            case '/': {

                result = a / b;
                break;
            }
            default:;
            }

            std::string data = "client received: " + std::to_string(a) + operation + std::to_string(b) + ", answer is: " + std::to_string(result);
            std::cout << data << std::endl;

            return std::to_string(result);
        }
    }

    return "nothing";
}

void catchData(unsigned int domain_id, unsigned int request_count)
{
    dds::domain::DomainParticipant participant(domain_id);
    dds::topic::Topic<CalculatorRequest> topicRequest(participant, "Request");
    dds::sub::Subscriber subscriber(participant);
    dds::sub::DataReader<CalculatorRequest> reader(subscriber, topicRequest);
    dds::core::cond::StatusCondition status_condition(reader);
    status_condition.enabled_statuses(
        dds::core::status::StatusMask::data_available());

    dds::topic::Topic<CalculatorResponse> topicResponse(participant, "Response");
    dds::pub::Publisher publisher(participant);
    dds::pub::DataWriter<CalculatorResponse> writer(publisher, topicResponse);

    unsigned int requests_read = 0;
    status_condition.extensions().handler([&reader, &writer, &requests_read]() {
        auto resp = process_data(reader);

        CalculatorResponse res;
        res.data(resp);
        writer.write(res);
        });

    dds::core::cond::WaitSet waitset;
    waitset += status_condition;

    while (!shutdown_requested) {
        waitset.dispatch(dds::core::Duration(4));
        rti::util::sleep(dds::core::Duration(4));
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

    try {
        catchData(arguments.domain_id, arguments.sample_count);
    }
    catch (const std::exception& ex) {
        std::cerr << "Exception in run_example(): " << ex.what()
            << std::endl;
        return EXIT_FAILURE;
    }

    dds::domain::DomainParticipant::finalize_participant_factory();

    return EXIT_SUCCESS;
}
