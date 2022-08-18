

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from calculator.idl
using RTI Code Generator (rtiddsgen) version 3.1.1.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef calculator_693593786_hpp
#define calculator_693593786_hpp

#include <iosfwd>

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef RTIUSERDllExport
#define RTIUSERDllExport __declspec(dllexport)
#endif

#include "dds/domain/DomainParticipant.hpp"
#include "dds/topic/TopicTraits.hpp"
#include "dds/core/SafeEnumeration.hpp"
#include "dds/core/String.hpp"
#include "dds/core/array.hpp"
#include "dds/core/vector.hpp"
#include "dds/core/Optional.hpp"
#include "dds/core/xtypes/DynamicType.hpp"
#include "dds/core/xtypes/StructType.hpp"
#include "dds/core/xtypes/UnionType.hpp"
#include "dds/core/xtypes/EnumType.hpp"
#include "dds/core/xtypes/AliasType.hpp"
#include "rti/core/array.hpp"
#include "rti/core/BoundedSequence.hpp"
#include "rti/util/StreamFlagSaver.hpp"
#include "rti/domain/PluginSupport.hpp"
#include "rti/core/LongDouble.hpp"
#include "dds/core/External.hpp"
#include "rti/core/Pointer.hpp"
#include "rti/topic/TopicTraits.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef RTIUSERDllExport
#define RTIUSERDllExport
#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

class NDDSUSERDllExport CalculatorRequest {
  public:
    CalculatorRequest();

    CalculatorRequest(
        double a,
        double b,
        char operation);

    #ifdef RTI_CXX11_RVALUE_REFERENCES
    #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
    CalculatorRequest (CalculatorRequest&&) = default;
    CalculatorRequest& operator=(CalculatorRequest&&) = default;
    CalculatorRequest& operator=(const CalculatorRequest&) = default;
    CalculatorRequest(const CalculatorRequest&) = default;
    #else
    CalculatorRequest(CalculatorRequest&& other_) OMG_NOEXCEPT;  
    CalculatorRequest& operator=(CalculatorRequest&&  other_) OMG_NOEXCEPT;
    #endif
    #endif 

    double& a() OMG_NOEXCEPT {
        return m_a_;
    }

    const double& a() const OMG_NOEXCEPT {
        return m_a_;
    }

    void a(double value) {
        m_a_ = value;
    }

    double& b() OMG_NOEXCEPT {
        return m_b_;
    }

    const double& b() const OMG_NOEXCEPT {
        return m_b_;
    }

    void b(double value) {
        m_b_ = value;
    }

    char& operation() OMG_NOEXCEPT {
        return m_operation_;
    }

    const char& operation() const OMG_NOEXCEPT {
        return m_operation_;
    }

    void operation(char value) {
        m_operation_ = value;
    }

    bool operator == (const CalculatorRequest& other_) const;
    bool operator != (const CalculatorRequest& other_) const;

    void swap(CalculatorRequest& other_) OMG_NOEXCEPT ;

  private:

    double m_a_;
    double m_b_;
    char m_operation_;

};

inline void swap(CalculatorRequest& a, CalculatorRequest& b)  OMG_NOEXCEPT 
{
    a.swap(b);
}

NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const CalculatorRequest& sample);

class NDDSUSERDllExport CalculatorResponse {
  public:
    CalculatorResponse();

    explicit CalculatorResponse(
        const std::string& data);

    #ifdef RTI_CXX11_RVALUE_REFERENCES
    #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
    CalculatorResponse (CalculatorResponse&&) = default;
    CalculatorResponse& operator=(CalculatorResponse&&) = default;
    CalculatorResponse& operator=(const CalculatorResponse&) = default;
    CalculatorResponse(const CalculatorResponse&) = default;
    #else
    CalculatorResponse(CalculatorResponse&& other_) OMG_NOEXCEPT;  
    CalculatorResponse& operator=(CalculatorResponse&&  other_) OMG_NOEXCEPT;
    #endif
    #endif 

    std::string& data() OMG_NOEXCEPT {
        return m_data_;
    }

    const std::string& data() const OMG_NOEXCEPT {
        return m_data_;
    }

    void data(const std::string& value) {
        m_data_ = value;
    }

    void data(std::string&& value) {
        m_data_ = std::move(value);
    }

    bool operator == (const CalculatorResponse& other_) const;
    bool operator != (const CalculatorResponse& other_) const;

    void swap(CalculatorResponse& other_) OMG_NOEXCEPT ;

  private:

    std::string m_data_;

};

inline void swap(CalculatorResponse& a, CalculatorResponse& b)  OMG_NOEXCEPT 
{
    a.swap(b);
}

NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const CalculatorResponse& sample);

namespace rti {
    namespace flat {
        namespace topic {
        }
    }
}
namespace dds {
    namespace topic {

        template<>
        struct topic_type_name< CalculatorRequest > {
            NDDSUSERDllExport static std::string value() {
                return "CalculatorRequest";
            }
        };

        template<>
        struct is_topic_type< CalculatorRequest > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< CalculatorRequest > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const CalculatorRequest& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(CalculatorRequest& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(CalculatorRequest& sample);

            NDDSUSERDllExport 
            static void allocate_sample(CalculatorRequest& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

        template<>
        struct topic_type_name< CalculatorResponse > {
            NDDSUSERDllExport static std::string value() {
                return "CalculatorResponse";
            }
        };

        template<>
        struct is_topic_type< CalculatorResponse > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< CalculatorResponse > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const CalculatorResponse& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(CalculatorResponse& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(CalculatorResponse& sample);

            NDDSUSERDllExport 
            static void allocate_sample(CalculatorResponse& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

    }
}

namespace rti { 
    namespace topic {
        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< CalculatorRequest > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< CalculatorRequest > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< CalculatorResponse > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< CalculatorResponse > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

    }
}

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif // calculator_693593786_hpp

