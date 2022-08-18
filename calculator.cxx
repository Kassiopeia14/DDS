

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from calculator.idl
using RTI Code Generator (rtiddsgen) version 3.1.1.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#include "rti/topic/cdr/Serialization.hpp"

#include "calculator.hpp"
#include "calculatorPlugin.hpp"

#include <rti/util/ostream_operators.hpp>

// ---- CalculatorRequest: 

CalculatorRequest::CalculatorRequest() :
    m_a_ (0.0) ,
    m_b_ (0.0) ,
    m_operation_ (0)  {
}   

CalculatorRequest::CalculatorRequest (
    double a,
    double b,
    char operation)
    :
        m_a_( a ),
        m_b_( b ),
        m_operation_( operation ) {
}

#ifdef RTI_CXX11_RVALUE_REFERENCES
#ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
CalculatorRequest::CalculatorRequest(CalculatorRequest&& other_) OMG_NOEXCEPT  :m_a_ (std::move(other_.m_a_))
,
m_b_ (std::move(other_.m_b_))
,
m_operation_ (std::move(other_.m_operation_))
{
} 

CalculatorRequest& CalculatorRequest::operator=(CalculatorRequest&&  other_) OMG_NOEXCEPT {
    CalculatorRequest tmp(std::move(other_));
    swap(tmp); 
    return *this;
}
#endif
#endif   

void CalculatorRequest::swap(CalculatorRequest& other_)  OMG_NOEXCEPT 
{
    using std::swap;
    swap(m_a_, other_.m_a_);
    swap(m_b_, other_.m_b_);
    swap(m_operation_, other_.m_operation_);
}  

bool CalculatorRequest::operator == (const CalculatorRequest& other_) const {
    if (m_a_ != other_.m_a_) {
        return false;
    }
    if (m_b_ != other_.m_b_) {
        return false;
    }
    if (m_operation_ != other_.m_operation_) {
        return false;
    }
    return true;
}
bool CalculatorRequest::operator != (const CalculatorRequest& other_) const {
    return !this->operator ==(other_);
}

std::ostream& operator << (std::ostream& o,const CalculatorRequest& sample)
{
    ::rti::util::StreamFlagSaver flag_saver (o);
    o <<"[";
    o << "a: " << std::setprecision(15) <<sample.a()<<", ";
    o << "b: " << std::setprecision(15) <<sample.b()<<", ";
    o << "operation: '" << sample.operation() ;
    o <<"]";
    return o;
}

// ---- CalculatorResponse: 

CalculatorResponse::CalculatorResponse() :
    m_data_ ("")  {
}   

CalculatorResponse::CalculatorResponse (
    const std::string& data)
    :
        m_data_( data ) {
}

#ifdef RTI_CXX11_RVALUE_REFERENCES
#ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
CalculatorResponse::CalculatorResponse(CalculatorResponse&& other_) OMG_NOEXCEPT  :m_data_ (std::move(other_.m_data_))
{
} 

CalculatorResponse& CalculatorResponse::operator=(CalculatorResponse&&  other_) OMG_NOEXCEPT {
    CalculatorResponse tmp(std::move(other_));
    swap(tmp); 
    return *this;
}
#endif
#endif   

void CalculatorResponse::swap(CalculatorResponse& other_)  OMG_NOEXCEPT 
{
    using std::swap;
    swap(m_data_, other_.m_data_);
}  

bool CalculatorResponse::operator == (const CalculatorResponse& other_) const {
    if (m_data_ != other_.m_data_) {
        return false;
    }
    return true;
}
bool CalculatorResponse::operator != (const CalculatorResponse& other_) const {
    return !this->operator ==(other_);
}

std::ostream& operator << (std::ostream& o,const CalculatorResponse& sample)
{
    ::rti::util::StreamFlagSaver flag_saver (o);
    o <<"[";
    o << "data: " << sample.data() ;
    o <<"]";
    return o;
}

// --- Type traits: -------------------------------------------------

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct native_type_code< CalculatorRequest > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member CalculatorRequest_g_tc_members[3]=
                {

                    {
                        (char *)"a",/* Member name */
                        {
                            0,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"b",/* Member name */
                        {
                            1,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"operation",/* Member name */
                        {
                            2,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode CalculatorRequest_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"CalculatorRequest", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        3, /* Number of members */
                        CalculatorRequest_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for CalculatorRequest*/

                if (is_initialized) {
                    return &CalculatorRequest_g_tc;
                }

                CalculatorRequest_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                CalculatorRequest_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
                CalculatorRequest_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
                CalculatorRequest_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_char;

                /* Initialize the values for member annotations. */
                CalculatorRequest_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                CalculatorRequest_g_tc_members[0]._annotations._defaultValue._u.double_value = 0.0;
                CalculatorRequest_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                CalculatorRequest_g_tc_members[0]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                CalculatorRequest_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                CalculatorRequest_g_tc_members[0]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                CalculatorRequest_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                CalculatorRequest_g_tc_members[1]._annotations._defaultValue._u.double_value = 0.0;
                CalculatorRequest_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                CalculatorRequest_g_tc_members[1]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
                CalculatorRequest_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                CalculatorRequest_g_tc_members[1]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

                CalculatorRequest_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_CHAR;
                CalculatorRequest_g_tc_members[2]._annotations._defaultValue._u.char_value = 0;

                CalculatorRequest_g_tc._data._sampleAccessInfo = sample_access_info();
                CalculatorRequest_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &CalculatorRequest_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                CalculatorRequest *sample;

                static RTIXCdrMemberAccessInfo CalculatorRequest_g_memberAccessInfos[3] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo CalculatorRequest_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &CalculatorRequest_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    CalculatorRequest);
                if (sample == NULL) {
                    return NULL;
                }

                CalculatorRequest_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->a() - (char *)sample);

                CalculatorRequest_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->b() - (char *)sample);

                CalculatorRequest_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->operation() - (char *)sample);

                CalculatorRequest_g_sampleAccessInfo.memberAccessInfos = 
                CalculatorRequest_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(CalculatorRequest);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        CalculatorRequest_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        CalculatorRequest_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                CalculatorRequest_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                CalculatorRequest_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< CalculatorRequest >;

                CalculatorRequest_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &CalculatorRequest_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin CalculatorRequest_g_typePlugin = 
                {
                    NULL, /* serialize */
                    NULL, /* serialize_key */
                    NULL, /* deserialize_sample */
                    NULL, /* deserialize_key_sample */
                    NULL, /* skip */
                    NULL, /* get_serialized_sample_size */
                    NULL, /* get_serialized_sample_max_size_ex */
                    NULL, /* get_serialized_key_max_size_ex */
                    NULL, /* get_serialized_sample_min_size */
                    NULL, /* serialized_sample_to_key */
                    NULL,
                    NULL,
                    NULL,
                    NULL
                };

                return &CalculatorRequest_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< CalculatorRequest >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< CalculatorRequest >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct native_type_code< CalculatorResponse > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode CalculatorResponse_g_tc_data_string;

                static DDS_TypeCode_Member CalculatorResponse_g_tc_members[1]=
                {

                    {
                        (char *)"data",/* Member name */
                        {
                            0,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode CalculatorResponse_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"CalculatorResponse", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        CalculatorResponse_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for CalculatorResponse*/

                if (is_initialized) {
                    return &CalculatorResponse_g_tc;
                }

                CalculatorResponse_g_tc_data_string = initialize_string_typecode((256L));

                CalculatorResponse_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                CalculatorResponse_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&CalculatorResponse_g_tc_data_string;

                /* Initialize the values for member annotations. */
                CalculatorResponse_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
                CalculatorResponse_g_tc_members[0]._annotations._defaultValue._u.string_value = (DDS_Char *) "";

                CalculatorResponse_g_tc._data._sampleAccessInfo = sample_access_info();
                CalculatorResponse_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &CalculatorResponse_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                CalculatorResponse *sample;

                static RTIXCdrMemberAccessInfo CalculatorResponse_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo CalculatorResponse_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &CalculatorResponse_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    CalculatorResponse);
                if (sample == NULL) {
                    return NULL;
                }

                CalculatorResponse_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->data() - (char *)sample);

                CalculatorResponse_g_sampleAccessInfo.memberAccessInfos = 
                CalculatorResponse_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(CalculatorResponse);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        CalculatorResponse_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        CalculatorResponse_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                CalculatorResponse_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                CalculatorResponse_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< CalculatorResponse >;

                CalculatorResponse_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &CalculatorResponse_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin CalculatorResponse_g_typePlugin = 
                {
                    NULL, /* serialize */
                    NULL, /* serialize_key */
                    NULL, /* deserialize_sample */
                    NULL, /* deserialize_key_sample */
                    NULL, /* skip */
                    NULL, /* get_serialized_sample_size */
                    NULL, /* get_serialized_sample_max_size_ex */
                    NULL, /* get_serialized_key_max_size_ex */
                    NULL, /* get_serialized_sample_min_size */
                    NULL, /* serialized_sample_to_key */
                    NULL,
                    NULL,
                    NULL,
                    NULL
                };

                return &CalculatorResponse_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< CalculatorResponse >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< CalculatorResponse >::get())));
        }

    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< CalculatorRequest >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                CalculatorRequestPlugin_new,
                CalculatorRequestPlugin_delete);
        }

        std::vector<char>& topic_type_support< CalculatorRequest >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const CalculatorRequest& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = CalculatorRequestPlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = CalculatorRequestPlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< CalculatorRequest >::from_cdr_buffer(CalculatorRequest& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = CalculatorRequestPlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create CalculatorRequest from cdr buffer");
        }

        void topic_type_support< CalculatorRequest >::reset_sample(CalculatorRequest& sample) 
        {
            sample.a(0.0);
            sample.b(0.0);
            sample.operation(0);
        }

        void topic_type_support< CalculatorRequest >::allocate_sample(CalculatorRequest& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample);
        }

        void topic_type_support< CalculatorResponse >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                CalculatorResponsePlugin_new,
                CalculatorResponsePlugin_delete);
        }

        std::vector<char>& topic_type_support< CalculatorResponse >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const CalculatorResponse& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = CalculatorResponsePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = CalculatorResponsePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< CalculatorResponse >::from_cdr_buffer(CalculatorResponse& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = CalculatorResponsePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create CalculatorResponse from cdr buffer");
        }

        void topic_type_support< CalculatorResponse >::reset_sample(CalculatorResponse& sample) 
        {
            sample.data("");
        }

        void topic_type_support< CalculatorResponse >::allocate_sample(CalculatorResponse& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.data(),  -1, 256L);
        }

    }
}  

