

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from calculator.idl
using RTI Code Generator (rtiddsgen) version 3.1.1.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef calculatorPlugin_693593764_h
#define calculatorPlugin_693593764_h

#include "calculator.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#define CalculatorRequestPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

#define CalculatorRequestPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define CalculatorRequestPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

#define CalculatorRequestPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define CalculatorRequestPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern CalculatorRequest*
CalculatorRequestPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern CalculatorRequest*
CalculatorRequestPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern CalculatorRequest*
CalculatorRequestPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
CalculatorRequestPluginSupport_copy_data(
    CalculatorRequest *out,
    const CalculatorRequest *in);

NDDSUSERDllExport extern void 
CalculatorRequestPluginSupport_destroy_data_w_params(
    CalculatorRequest *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
CalculatorRequestPluginSupport_destroy_data_ex(
    CalculatorRequest *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
CalculatorRequestPluginSupport_destroy_data(
    CalculatorRequest *sample);

NDDSUSERDllExport extern void 
CalculatorRequestPluginSupport_print_data(
    const CalculatorRequest *sample,
    const char *desc,
    unsigned int indent);

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
CalculatorRequestPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
CalculatorRequestPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);

NDDSUSERDllExport extern PRESTypePluginEndpointData 
CalculatorRequestPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
CalculatorRequestPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern void    
CalculatorRequestPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    CalculatorRequest *sample,
    void *handle);    

NDDSUSERDllExport extern RTIBool 
CalculatorRequestPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    CalculatorRequest *out,
    const CalculatorRequest *in);

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool
CalculatorRequestPlugin_serialize_to_cdr_buffer(
    char * buffer,
    unsigned int * length,
    const CalculatorRequest *sample,
    ::dds::core::policy::DataRepresentationId representation
    = ::dds::core::policy::DataRepresentation::xcdr()); 

NDDSUSERDllExport extern RTIBool 
CalculatorRequestPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    CalculatorRequest **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
CalculatorRequestPlugin_deserialize_from_cdr_buffer(
    CalculatorRequest *sample,
    const char * buffer,
    unsigned int length);    

NDDSUSERDllExport extern unsigned int 
CalculatorRequestPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */
NDDSUSERDllExport extern PRESTypePluginKeyKind 
CalculatorRequestPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
CalculatorRequestPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
CalculatorRequestPlugin_get_serialized_key_max_size_for_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
CalculatorRequestPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    CalculatorRequest ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
CalculatorRequestPlugin_new(void);

NDDSUSERDllExport extern void
CalculatorRequestPlugin_delete(struct PRESTypePlugin *);

#define CalculatorResponsePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

#define CalculatorResponsePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define CalculatorResponsePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

#define CalculatorResponsePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define CalculatorResponsePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern CalculatorResponse*
CalculatorResponsePluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern CalculatorResponse*
CalculatorResponsePluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern CalculatorResponse*
CalculatorResponsePluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
CalculatorResponsePluginSupport_copy_data(
    CalculatorResponse *out,
    const CalculatorResponse *in);

NDDSUSERDllExport extern void 
CalculatorResponsePluginSupport_destroy_data_w_params(
    CalculatorResponse *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
CalculatorResponsePluginSupport_destroy_data_ex(
    CalculatorResponse *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
CalculatorResponsePluginSupport_destroy_data(
    CalculatorResponse *sample);

NDDSUSERDllExport extern void 
CalculatorResponsePluginSupport_print_data(
    const CalculatorResponse *sample,
    const char *desc,
    unsigned int indent);

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
CalculatorResponsePlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
CalculatorResponsePlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);

NDDSUSERDllExport extern PRESTypePluginEndpointData 
CalculatorResponsePlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
CalculatorResponsePlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern void    
CalculatorResponsePlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    CalculatorResponse *sample,
    void *handle);    

NDDSUSERDllExport extern RTIBool 
CalculatorResponsePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    CalculatorResponse *out,
    const CalculatorResponse *in);

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool
CalculatorResponsePlugin_serialize_to_cdr_buffer(
    char * buffer,
    unsigned int * length,
    const CalculatorResponse *sample,
    ::dds::core::policy::DataRepresentationId representation
    = ::dds::core::policy::DataRepresentation::xcdr()); 

NDDSUSERDllExport extern RTIBool 
CalculatorResponsePlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    CalculatorResponse **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
CalculatorResponsePlugin_deserialize_from_cdr_buffer(
    CalculatorResponse *sample,
    const char * buffer,
    unsigned int length);    

NDDSUSERDllExport extern unsigned int 
CalculatorResponsePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */
NDDSUSERDllExport extern PRESTypePluginKeyKind 
CalculatorResponsePlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
CalculatorResponsePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
CalculatorResponsePlugin_get_serialized_key_max_size_for_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
CalculatorResponsePlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    CalculatorResponse ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
CalculatorResponsePlugin_new(void);

NDDSUSERDllExport extern void
CalculatorResponsePlugin_delete(struct PRESTypePlugin *);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* calculatorPlugin_693593764_h */

