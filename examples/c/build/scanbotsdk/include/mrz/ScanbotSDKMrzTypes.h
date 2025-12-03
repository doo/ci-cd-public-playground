// Auto-generated with ScanbotSDKCodegenV3. Modifications will be overwritten.
// Generated from SchemasV3/CoreSchemas/schemas/MRZTypes.yaml
/**
 * @file ScanbotSDKMrzTypes.h
 */

#pragma once
#ifndef SCANBOTSDK_MRZTYPES_H
#define SCANBOTSDK_MRZTYPES_H


#include <frame_accumulation/ScanbotSDKFrameAccumulationTypes.h>
#include <generic_document/ScanbotSDKGenericDocument.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <string.h>
#include <ScanbotSDKErrorCode.h>
#include <ScanbotSDKDefs.h>

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief scanbotsdk_mrz_document_type_t enum
 * @details Type of document containing the MRZ.
 * @ingroup c_mrz
*/
typedef enum scanbotsdk_mrz_document_type_t {

    /**Undefined.*/
    SCANBOTSDK_MRZ_DOCUMENT_TYPE_UNKNOWN = 0,

    /**Crew member certificate.*/
    SCANBOTSDK_MRZ_DOCUMENT_TYPE_CREW_MEMBER_CERTIFICATE = 1,

    /**ID card.*/
    SCANBOTSDK_MRZ_DOCUMENT_TYPE_ID_CARD = 2,

    /**Passport.*/
    SCANBOTSDK_MRZ_DOCUMENT_TYPE_PASSPORT = 3,

    /**Visa card.*/
    SCANBOTSDK_MRZ_DOCUMENT_TYPE_VISA = 4,

    /**Swiss driver license.*/
    SCANBOTSDK_MRZ_DOCUMENT_TYPE_CH_DRIVING_LICENSE = 5,

} scanbotsdk_mrz_document_type_t;

/**
 * @brief Returns the string representation of the given scanbotsdk_mrz_document_type_t value.
 * @ingroup c_mrz
 * @details The returned string doesn't need to be freed.
 * @param value: The value to be converted to string.
 * @param result: Pointer to a variable that will store the string representation of the value.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_mrz_document_type_t_to_string(scanbotsdk_mrz_document_type_t value, const char** result);

/**
 * @brief scanbotsdk_mrz_scanner_result_t class
 * @details Container for result of MRZ scanning attempt.
 * @ingroup c_mrz
*/
typedef struct scanbotsdk_mrz_scanner_result_t scanbotsdk_mrz_scanner_result_t;

/**
 * @brief Frees the memory allocated for the instance of scanbotsdk_mrz_scanner_result_t. If null is passed, the function does nothing.
 * @ingroup c_mrz
 * @param object: Pointer to the instance of scanbotsdk_mrz_scanner_result_t to be freed
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_mrz_scanner_result_free(scanbotsdk_mrz_scanner_result_t* object);

/**
 * @brief Returns value of success field of the given object.
 * @ingroup c_mrz
 * @details Scanning successful.
 * 
 * Default is false
 * @param self: Pointer to the instance of scanbotsdk_mrz_scanner_result_t
 * @param success: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_mrz_scanner_result_get_success(scanbotsdk_mrz_scanner_result_t* self, bool* success);

/**
 * @brief Returns value of raw_mrz field of the given object. The returned pointers do NOT own the underlying object, caller must not free them.
 * @ingroup c_mrz
 * @details Raw string value of MRZ.
 * @param self: Pointer to the instance of scanbotsdk_mrz_scanner_result_t
 * @param raw_mrz: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_mrz_scanner_result_get_raw_mrz(scanbotsdk_mrz_scanner_result_t* self, const char** raw_mrz);

/**
 * @brief Returns value of document field of the given object. The returned pointers do NOT own the underlying object, caller must not free them.
 * @ingroup c_mrz
 * @details Generic document containing MRZ data.
 * @param self: Pointer to the instance of scanbotsdk_mrz_scanner_result_t
 * @param document: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_mrz_scanner_result_get_document(scanbotsdk_mrz_scanner_result_t* self, scanbotsdk_generic_document_t** document);


/**
 * @brief scanbotsdk_mrz_incomplete_result_handling_t enum
 * @details Defines how to handle incomplete MRZ results (e.g. caused by failed validation).
 * @ingroup c_mrz
*/
typedef enum scanbotsdk_mrz_incomplete_result_handling_t {

    /**Accept incomplete results. Fields failing validation will have a validation status of INVALID. Typically used for single-shot scanning.*/
    SCANBOTSDK_MRZ_INCOMPLETE_RESULT_HANDLING_ACCEPT = 0,

    /**Reject incomplete results. If any fields are missing or fail validation, the result document will be empty. Typically used for live scanning.*/
    SCANBOTSDK_MRZ_INCOMPLETE_RESULT_HANDLING_REJECT = 1,

} scanbotsdk_mrz_incomplete_result_handling_t;

/**
 * @brief Returns the string representation of the given scanbotsdk_mrz_incomplete_result_handling_t value.
 * @ingroup c_mrz
 * @details The returned string doesn't need to be freed.
 * @param value: The value to be converted to string.
 * @param result: Pointer to a variable that will store the string representation of the value.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_mrz_incomplete_result_handling_t_to_string(scanbotsdk_mrz_incomplete_result_handling_t value, const char** result);

/**
 * @brief scanbotsdk_mrz_scanner_configuration_t class
 * @details Configuration for MRZ scanner.
 * @ingroup c_mrz
*/
typedef struct scanbotsdk_mrz_scanner_configuration_t scanbotsdk_mrz_scanner_configuration_t;

/**
 * @brief Creates a new instance of scanbotsdk_mrz_scanner_configuration with given params and stores it in the location specified by the last argument.
 * @ingroup c_mrz
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param frame_accumulation_configuration: Configure the frame accumulation process.
 * The value must not be null.
 * @param enable_detection: Enable MRZ detection. If disabled, the scanner skips the detection step and assumes that the input image is a crop of the MRZ area.
 * 
 * Default is true
 * @param incomplete_result_handling: Defines how to handle incomplete MRZ results (e.g. caused by failed validation).
 * 
 * Default is REJECT
 * @param return_crops: If true, crops of the detected MRZ and its fields will be returned in the result.
 * 
 * Default is false
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_mrz_scanner_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_mrz_scanner_configuration_create(
    scanbotsdk_accumulated_results_verifier_configuration_t* frame_accumulation_configuration,
    bool enable_detection,
    scanbotsdk_mrz_incomplete_result_handling_t incomplete_result_handling,
    bool return_crops,
    scanbotsdk_mrz_scanner_configuration_t** result);

/**
 * @brief Creates a new instance of scanbotsdk_mrz_scanner_configuration_t with given required params and stores it in the location specified by the last argument.
 * @ingroup c_mrz
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_mrz_scanner_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_mrz_scanner_configuration_create_with_defaults(
    scanbotsdk_mrz_scanner_configuration_t** result);


/**
 * @brief Frees the memory allocated for the instance of scanbotsdk_mrz_scanner_configuration_t. If null is passed, the function does nothing.
 * @ingroup c_mrz
 * @param object: Pointer to the instance of scanbotsdk_mrz_scanner_configuration_t to be freed
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_mrz_scanner_configuration_free(scanbotsdk_mrz_scanner_configuration_t* object);

/**
 * @brief Returns value of frame_accumulation_configuration field of the given object. The returned pointers do NOT own the underlying object, caller must not free them.
 * @ingroup c_mrz
 * @details Configure the frame accumulation process.
 * @param self: Pointer to the instance of scanbotsdk_mrz_scanner_configuration_t
 * @param frame_accumulation_configuration: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_mrz_scanner_configuration_get_frame_accumulation_configuration(scanbotsdk_mrz_scanner_configuration_t* self, scanbotsdk_accumulated_results_verifier_configuration_t** frame_accumulation_configuration);
/**
 * @brief Sets value of frame_accumulation_configuration field of the given object.
 * @ingroup c_mrz
 * @details Configure the frame accumulation process.
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_mrz_scanner_configuration_t, the field of which will be set
 * @param frame_accumulation_configuration: The value to be set. Must not be null.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_mrz_scanner_configuration_set_frame_accumulation_configuration(scanbotsdk_mrz_scanner_configuration_t* self, scanbotsdk_accumulated_results_verifier_configuration_t* frame_accumulation_configuration);

/**
 * @brief Returns value of enable_detection field of the given object.
 * @ingroup c_mrz
 * @details Enable MRZ detection. If disabled, the scanner skips the detection step and assumes that the input image is a crop of the MRZ area.
 * 
 * Default is true
 * @param self: Pointer to the instance of scanbotsdk_mrz_scanner_configuration_t
 * @param enable_detection: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_mrz_scanner_configuration_get_enable_detection(scanbotsdk_mrz_scanner_configuration_t* self, bool* enable_detection);
/**
 * @brief Sets value of enable_detection field of the given object.
 * @ingroup c_mrz
 * @details Enable MRZ detection. If disabled, the scanner skips the detection step and assumes that the input image is a crop of the MRZ area.
 * 
 * Default is true
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_mrz_scanner_configuration_t, the field of which will be set
 * @param enable_detection: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_mrz_scanner_configuration_set_enable_detection(scanbotsdk_mrz_scanner_configuration_t* self, bool enable_detection);

/**
 * @brief Returns value of incomplete_result_handling field of the given object.
 * @ingroup c_mrz
 * @details Defines how to handle incomplete MRZ results (e.g. caused by failed validation).
 * 
 * Default is REJECT
 * @param self: Pointer to the instance of scanbotsdk_mrz_scanner_configuration_t
 * @param incomplete_result_handling: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_mrz_scanner_configuration_get_incomplete_result_handling(scanbotsdk_mrz_scanner_configuration_t* self, scanbotsdk_mrz_incomplete_result_handling_t* incomplete_result_handling);
/**
 * @brief Sets value of incomplete_result_handling field of the given object.
 * @ingroup c_mrz
 * @details Defines how to handle incomplete MRZ results (e.g. caused by failed validation).
 * 
 * Default is REJECT
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_mrz_scanner_configuration_t, the field of which will be set
 * @param incomplete_result_handling: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_mrz_scanner_configuration_set_incomplete_result_handling(scanbotsdk_mrz_scanner_configuration_t* self, scanbotsdk_mrz_incomplete_result_handling_t incomplete_result_handling);

/**
 * @brief Returns value of return_crops field of the given object.
 * @ingroup c_mrz
 * @details If true, crops of the detected MRZ and its fields will be returned in the result.
 * 
 * Default is false
 * @param self: Pointer to the instance of scanbotsdk_mrz_scanner_configuration_t
 * @param return_crops: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_mrz_scanner_configuration_get_return_crops(scanbotsdk_mrz_scanner_configuration_t* self, bool* return_crops);
/**
 * @brief Sets value of return_crops field of the given object.
 * @ingroup c_mrz
 * @details If true, crops of the detected MRZ and its fields will be returned in the result.
 * 
 * Default is false
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_mrz_scanner_configuration_t, the field of which will be set
 * @param return_crops: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_mrz_scanner_configuration_set_return_crops(scanbotsdk_mrz_scanner_configuration_t* self, bool return_crops);


/**
 * @brief scanbotsdk_mrz_parser_configuration_t class
 * @details Configuration for MRZ parser.
 * @ingroup c_mrz
*/
typedef struct scanbotsdk_mrz_parser_configuration_t scanbotsdk_mrz_parser_configuration_t;

/**
 * @brief Creates a new instance of scanbotsdk_mrz_parser_configuration with given params and stores it in the location specified by the last argument.
 * @ingroup c_mrz
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param incomplete_result_handling: Defines how to handle incomplete MRZ results (e.g. caused by failed validation).
 * 
 * Default is ACCEPT
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_mrz_parser_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_mrz_parser_configuration_create(
    scanbotsdk_mrz_incomplete_result_handling_t incomplete_result_handling,
    scanbotsdk_mrz_parser_configuration_t** result);

/**
 * @brief Creates a new instance of scanbotsdk_mrz_parser_configuration_t with given required params and stores it in the location specified by the last argument.
 * @ingroup c_mrz
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_mrz_parser_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_mrz_parser_configuration_create_with_defaults(
    scanbotsdk_mrz_parser_configuration_t** result);


/**
 * @brief Frees the memory allocated for the instance of scanbotsdk_mrz_parser_configuration_t. If null is passed, the function does nothing.
 * @ingroup c_mrz
 * @param object: Pointer to the instance of scanbotsdk_mrz_parser_configuration_t to be freed
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_mrz_parser_configuration_free(scanbotsdk_mrz_parser_configuration_t* object);

/**
 * @brief Returns value of incomplete_result_handling field of the given object.
 * @ingroup c_mrz
 * @details Defines how to handle incomplete MRZ results (e.g. caused by failed validation).
 * 
 * Default is ACCEPT
 * @param self: Pointer to the instance of scanbotsdk_mrz_parser_configuration_t
 * @param incomplete_result_handling: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_mrz_parser_configuration_get_incomplete_result_handling(scanbotsdk_mrz_parser_configuration_t* self, scanbotsdk_mrz_incomplete_result_handling_t* incomplete_result_handling);
/**
 * @brief Sets value of incomplete_result_handling field of the given object.
 * @ingroup c_mrz
 * @details Defines how to handle incomplete MRZ results (e.g. caused by failed validation).
 * 
 * Default is ACCEPT
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_mrz_parser_configuration_t, the field of which will be set
 * @param incomplete_result_handling: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_mrz_parser_configuration_set_incomplete_result_handling(scanbotsdk_mrz_parser_configuration_t* self, scanbotsdk_mrz_incomplete_result_handling_t incomplete_result_handling);


#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* SCANBOTSDK_MRZTYPES_H */