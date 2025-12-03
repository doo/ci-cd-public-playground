// Auto-generated with ScanbotSDKCodegenV3. Modifications will be overwritten.
// Generated from SchemasV3/CoreSchemas/schemas/DocumentDataExtractorTypes.yaml
/**
 * @file ScanbotSDKDocumentDataExtractorTypes.h
 */

#pragma once
#ifndef SCANBOTSDK_DOCUMENTDATAEXTRACTORTYPES_H
#define SCANBOTSDK_DOCUMENTDATAEXTRACTORTYPES_H


#include <ScanbotSDKImage.h>
#include <common/ScanbotSDKCommonTypes.h>
#include <document_data/ScanbotSDKDocumentDataExtractorConfigurationTypes.h>
#include <document_scanner/ScanbotSDKDocumentScannerTypes.h>
#include <frame_accumulation/ScanbotSDKFrameAccumulationTypes.h>
#include <generic_document/ScanbotSDKCommonFieldType.h>
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
 * @brief scanbotsdk_document_data_extraction_status_t enum
 * @details The status of the extraction process.
 * @ingroup c_document_data
*/
typedef enum scanbotsdk_document_data_extraction_status_t {

    /**The document data was extracted.*/
    SCANBOTSDK_DOCUMENT_DATA_EXTRACTION_STATUS_OK = 0,

    /**The document data was extracted. Some fields in the document have failed validation, e.g. because the document is damaged, not authentic, or does not have all required fields.*/
    SCANBOTSDK_DOCUMENT_DATA_EXTRACTION_STATUS_OK_BUT_INVALID_DOCUMENT = 1,

    /**The document data was extracted. Some fields have not yet been confirmed.*/
    SCANBOTSDK_DOCUMENT_DATA_EXTRACTION_STATUS_OK_BUT_NOT_CONFIRMED = 2,

    /**Document data extraction in progress. Waiting for camera to finish focusing.*/
    SCANBOTSDK_DOCUMENT_DATA_EXTRACTION_STATUS_SCANNING_IN_PROGRESS_STILL_FOCUSING = 3,

    /**No document was detected.*/
    SCANBOTSDK_DOCUMENT_DATA_EXTRACTION_STATUS_ERROR_NOTHING_FOUND = 4,

    /**A document was detected at an angle or distance that would result in a poor quality crop.*/
    SCANBOTSDK_DOCUMENT_DATA_EXTRACTION_STATUS_ERROR_BAD_CROP = 5,

    /**A document was detected, but it does not match any supported document format.*/
    SCANBOTSDK_DOCUMENT_DATA_EXTRACTION_STATUS_ERROR_UNKNOWN_DOCUMENT = 6,

    /**A supported document was detected, but it is unacceptable in the current configuration.*/
    SCANBOTSDK_DOCUMENT_DATA_EXTRACTION_STATUS_ERROR_UNACCEPTABLE_DOCUMENT = 7,

} scanbotsdk_document_data_extraction_status_t;

/**
 * @brief Returns the string representation of the given scanbotsdk_document_data_extraction_status_t value.
 * @ingroup c_document_data
 * @details The returned string doesn't need to be freed.
 * @param value: The value to be converted to string.
 * @param result: Pointer to a variable that will store the string representation of the value.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_data_extraction_status_t_to_string(scanbotsdk_document_data_extraction_status_t value, const char** result);

/**
 * @brief scanbotsdk_document_data_extraction_result_t class
 * @details Contains the result of running the document data extractor.
 * @ingroup c_document_data
*/
typedef struct scanbotsdk_document_data_extraction_result_t scanbotsdk_document_data_extraction_result_t;

/**
 * @brief Frees the memory allocated for the instance of scanbotsdk_document_data_extraction_result_t. If null is passed, the function does nothing.
 * @ingroup c_document_data
 * @param object: Pointer to the instance of scanbotsdk_document_data_extraction_result_t to be freed
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_data_extraction_result_free(scanbotsdk_document_data_extraction_result_t* object);

/**
 * @brief Returns value of status field of the given object.
 * @ingroup c_document_data
 * @details The status of the extraction process.
 * @param self: Pointer to the instance of scanbotsdk_document_data_extraction_result_t
 * @param status: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_data_extraction_result_get_status(scanbotsdk_document_data_extraction_result_t* self, scanbotsdk_document_data_extraction_status_t* status);

/**
 * @brief Returns value of document field of the given object. The returned pointers do NOT own the underlying object, caller must not free them.
 * @ingroup c_document_data
 * @details The extracted document.
 * @param self: Pointer to the instance of scanbotsdk_document_data_extraction_result_t
 * @param document: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_data_extraction_result_get_document(scanbotsdk_document_data_extraction_result_t* self, scanbotsdk_generic_document_t** document);

/**
 * @brief Returns value of document_detection_result field of the given object. The returned pointers do NOT own the underlying object, caller must not free them.
 * @ingroup c_document_data
 * @details Result of the document detection in the input image.
 * @param self: Pointer to the instance of scanbotsdk_document_data_extraction_result_t
 * @param document_detection_result: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_data_extraction_result_get_document_detection_result(scanbotsdk_document_data_extraction_result_t* self, scanbotsdk_document_detection_result_t** document_detection_result);

/**
 * @brief Returns value of cropped_image field of the given object. The returned pointers do NOT own the underlying object, caller must not free them.
 * @ingroup c_document_data
 * @details Crop of the document if it was detected.
 * @param self: Pointer to the instance of scanbotsdk_document_data_extraction_result_t
 * @param cropped_image: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_data_extraction_result_get_cropped_image(scanbotsdk_document_data_extraction_result_t* self, scanbotsdk_image_t** cropped_image);


/**
 * @brief scanbotsdk_document_trust_mode_t enum
 * @details Level of trust in the authenticity of the extracted document.
 * @ingroup c_document_data
*/
typedef enum scanbotsdk_document_trust_mode_t {

    /**The extracted document is trusted, i.e. the scanner may assume that it's authentic. This allows certain optimizations that make extraction faster.*/
    SCANBOTSDK_DOCUMENT_TRUST_MODE_TRUSTED = 0,

    /**The extracted document is not trusted, i.e. its authenticity cannot be assumed. All fields will be read out independently and can be further verified. Extracting untrusted documents takes slightly longer, as the extractor is not allowed to employ certain time-saving optimizations.*/
    SCANBOTSDK_DOCUMENT_TRUST_MODE_UNTRUSTED = 1,

} scanbotsdk_document_trust_mode_t;

/**
 * @brief Returns the string representation of the given scanbotsdk_document_trust_mode_t value.
 * @ingroup c_document_data
 * @details The returned string doesn't need to be freed.
 * @param value: The value to be converted to string.
 * @param result: Pointer to a variable that will store the string representation of the value.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_trust_mode_t_to_string(scanbotsdk_document_trust_mode_t value, const char** result);

/**
 * @brief scanbotsdk_document_data_extractor_configuration_t class
 * @details Configuration for the document data extractor.
 * @ingroup c_document_data
*/
typedef struct scanbotsdk_document_data_extractor_configuration_t scanbotsdk_document_data_extractor_configuration_t;

/**
 * @brief Creates a new instance of scanbotsdk_document_data_extractor_configuration with given params and stores it in the location specified by the last argument.
 * @ingroup c_document_data
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param result_accumulation_config: Configuration for how to accumulate results.
 * The value must not be null.
 * @param field_exclude_list: Normalized names of the fields to exclude from the result.
 * Entries of the array must not be null.
 * @param field_exclude_list_size: Size of the array field_exclude_list
 * @param configurations: List of configuration elements for the document data extractor.
 * Entries of the array must not be null.
 * @param configurations_size: Size of the array configurations
 * @param return_crops: If true, crops of the detected documents and fields will be returned in the result.
 * 
 * Default is false
 * @param document_trust_mode: Level of trust in the authenticity of the extracted document.
 * 
 * Default is TRUSTED
 * @param processing_mode: Scanners typically can produce better results from a single image if they are allowed to spend a longer time analyzing it. 
 * 
 * On the other hand, scanners can produce even better results if they can analyze multiple images of the same subject and cross-check and combine the results. 
 * The processing mode tells the scanner whether to optimize for single or multiple images of a subject.
 * 
 * Default is AUTO
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_document_data_extractor_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_data_extractor_configuration_create(
    scanbotsdk_result_accumulation_configuration_t* result_accumulation_config,
    const char** field_exclude_list,
    size_t field_exclude_list_size,
    scanbotsdk_document_data_extractor_configuration_element_t** configurations,
    size_t configurations_size,
    bool return_crops,
    scanbotsdk_document_trust_mode_t document_trust_mode,
    scanbotsdk_processing_mode_t processing_mode,
    scanbotsdk_document_data_extractor_configuration_t** result);

/**
 * @brief Creates a new instance of scanbotsdk_document_data_extractor_configuration_t with given required params and stores it in the location specified by the last argument.
 * @ingroup c_document_data
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_document_data_extractor_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_data_extractor_configuration_create_with_defaults(
    scanbotsdk_document_data_extractor_configuration_t** result);


/**
 * @brief Frees the memory allocated for the instance of scanbotsdk_document_data_extractor_configuration_t. If null is passed, the function does nothing.
 * @ingroup c_document_data
 * @param object: Pointer to the instance of scanbotsdk_document_data_extractor_configuration_t to be freed
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_data_extractor_configuration_free(scanbotsdk_document_data_extractor_configuration_t* object);

/**
 * @brief Returns value of result_accumulation_config field of the given object. The returned pointers do NOT own the underlying object, caller must not free them.
 * @ingroup c_document_data
 * @details Configuration for how to accumulate results.
 * @param self: Pointer to the instance of scanbotsdk_document_data_extractor_configuration_t
 * @param result_accumulation_config: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_data_extractor_configuration_get_result_accumulation_config(scanbotsdk_document_data_extractor_configuration_t* self, scanbotsdk_result_accumulation_configuration_t** result_accumulation_config);
/**
 * @brief Sets value of result_accumulation_config field of the given object.
 * @ingroup c_document_data
 * @details Configuration for how to accumulate results.
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_document_data_extractor_configuration_t, the field of which will be set
 * @param result_accumulation_config: The value to be set. Must not be null.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_data_extractor_configuration_set_result_accumulation_config(scanbotsdk_document_data_extractor_configuration_t* self, scanbotsdk_result_accumulation_configuration_t* result_accumulation_config);

/**
 * @brief Returns value of field_exclude_list field of the given object. The returned pointers do NOT own the underlying object, caller must not free them.
 * @ingroup c_document_data
 * @details Normalized names of the fields to exclude from the result.
 * @param self: Pointer to the instance of scanbotsdk_document_data_extractor_configuration_t
 @param size: Size of the pre-allocated array. Must be equal to the size obtained by calling the corresponding _size function.
 * @param field_exclude_list: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_data_extractor_configuration_get_field_exclude_list(scanbotsdk_document_data_extractor_configuration_t* self, const char** field_exclude_list, size_t size);
/**
 * @brief Returns size of field_exclude_list array.
 * @ingroup c_document_data
 * @param self: Pointer to the instance of scanbotsdk_document_data_extractor_configuration_t
 * @param size: Pointer to a variable that will store the size.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_data_extractor_configuration_get_field_exclude_list_size(scanbotsdk_document_data_extractor_configuration_t* self, size_t* size);
/**
 * @brief Sets value of field_exclude_list field of the given object.
 * @ingroup c_document_data
 * @details Normalized names of the fields to exclude from the result.
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_document_data_extractor_configuration_t, the field of which will be set
 * @param field_exclude_list: The value to be set.
 * @param field_exclude_list_size: Size of the array.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_data_extractor_configuration_set_field_exclude_list(scanbotsdk_document_data_extractor_configuration_t* self, const char** field_exclude_list, size_t field_exclude_list_size);

/**
 * @brief Returns value of configurations field of the given object. The returned pointers do NOT own the underlying object, caller must not free them.
 * @ingroup c_document_data
 * @details List of configuration elements for the document data extractor.
 * @param self: Pointer to the instance of scanbotsdk_document_data_extractor_configuration_t
 @param size: Size of the pre-allocated array. Must be equal to the size obtained by calling the corresponding _size function.
 * @param configurations: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_data_extractor_configuration_get_configurations(scanbotsdk_document_data_extractor_configuration_t* self, scanbotsdk_document_data_extractor_configuration_element_t** configurations, size_t size);
/**
 * @brief Returns size of configurations array.
 * @ingroup c_document_data
 * @param self: Pointer to the instance of scanbotsdk_document_data_extractor_configuration_t
 * @param size: Pointer to a variable that will store the size.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_data_extractor_configuration_get_configurations_size(scanbotsdk_document_data_extractor_configuration_t* self, size_t* size);
/**
 * @brief Sets value of configurations field of the given object.
 * @ingroup c_document_data
 * @details List of configuration elements for the document data extractor.
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_document_data_extractor_configuration_t, the field of which will be set
 * @param configurations: The value to be set.
 * @param configurations_size: Size of the array.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_data_extractor_configuration_set_configurations(scanbotsdk_document_data_extractor_configuration_t* self, scanbotsdk_document_data_extractor_configuration_element_t** configurations, size_t configurations_size);

/**
 * @brief Returns value of return_crops field of the given object.
 * @ingroup c_document_data
 * @details If true, crops of the detected documents and fields will be returned in the result.
 * 
 * Default is false
 * @param self: Pointer to the instance of scanbotsdk_document_data_extractor_configuration_t
 * @param return_crops: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_data_extractor_configuration_get_return_crops(scanbotsdk_document_data_extractor_configuration_t* self, bool* return_crops);
/**
 * @brief Sets value of return_crops field of the given object.
 * @ingroup c_document_data
 * @details If true, crops of the detected documents and fields will be returned in the result.
 * 
 * Default is false
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_document_data_extractor_configuration_t, the field of which will be set
 * @param return_crops: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_data_extractor_configuration_set_return_crops(scanbotsdk_document_data_extractor_configuration_t* self, bool return_crops);

/**
 * @brief Returns value of document_trust_mode field of the given object.
 * @ingroup c_document_data
 * @details Level of trust in the authenticity of the extracted document.
 * 
 * Default is TRUSTED
 * @param self: Pointer to the instance of scanbotsdk_document_data_extractor_configuration_t
 * @param document_trust_mode: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_data_extractor_configuration_get_document_trust_mode(scanbotsdk_document_data_extractor_configuration_t* self, scanbotsdk_document_trust_mode_t* document_trust_mode);
/**
 * @brief Sets value of document_trust_mode field of the given object.
 * @ingroup c_document_data
 * @details Level of trust in the authenticity of the extracted document.
 * 
 * Default is TRUSTED
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_document_data_extractor_configuration_t, the field of which will be set
 * @param document_trust_mode: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_data_extractor_configuration_set_document_trust_mode(scanbotsdk_document_data_extractor_configuration_t* self, scanbotsdk_document_trust_mode_t document_trust_mode);

/**
 * @brief Returns value of processing_mode field of the given object.
 * @ingroup c_document_data
 * @details Scanners typically can produce better results from a single image if they are allowed to spend a longer time analyzing it. 
 * 
 * On the other hand, scanners can produce even better results if they can analyze multiple images of the same subject and cross-check and combine the results. 
 * The processing mode tells the scanner whether to optimize for single or multiple images of a subject.
 * 
 * Default is AUTO
 * @param self: Pointer to the instance of scanbotsdk_document_data_extractor_configuration_t
 * @param processing_mode: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_data_extractor_configuration_get_processing_mode(scanbotsdk_document_data_extractor_configuration_t* self, scanbotsdk_processing_mode_t* processing_mode);
/**
 * @brief Sets value of processing_mode field of the given object.
 * @ingroup c_document_data
 * @details Scanners typically can produce better results from a single image if they are allowed to spend a longer time analyzing it. 
 * 
 * On the other hand, scanners can produce even better results if they can analyze multiple images of the same subject and cross-check and combine the results. 
 * The processing mode tells the scanner whether to optimize for single or multiple images of a subject.
 * 
 * Default is AUTO
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_document_data_extractor_configuration_t, the field of which will be set
 * @param processing_mode: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_data_extractor_configuration_set_processing_mode(scanbotsdk_document_data_extractor_configuration_t* self, scanbotsdk_processing_mode_t processing_mode);


/**
 * @brief scanbotsdk_value_consistency_t enum
 * @details The status of the consistency verification.
 * @ingroup c_document_data
*/
typedef enum scanbotsdk_value_consistency_t {

    /**All values that correspond to the same logical field are exactly equal.*/
    SCANBOTSDK_VALUE_CONSISTENCY_OK = 0,

    /**All values that correspond to the same logical field are equal after punctuation is removed and all characters are converted to upper case.*/
    SCANBOTSDK_VALUE_CONSISTENCY_OK_PUNCTUATION_UPPER_CASE_CLEANED = 1,

    /**All values that correspond to the same logical field are equal after punctuation is removed, all characters are converted to upper case and diacritics are replaced with their base characters.*/
    SCANBOTSDK_VALUE_CONSISTENCY_OK_DEBURRED = 2,

    /**Same as OK_DEBURRED but allows replacing diacritics not only with their base characters but also with some more complex combinations. E.g., according to ICAO 9303 MRZ standard Ü can be replaced with U or UE or UXX.*/
    SCANBOTSDK_VALUE_CONSISTENCY_OK_DEBURRED_EXTENDED = 3,

    /**In addition to OK_DEBURRED_EXTENDED, allows one string to be a prefix of another string. Correctly works with complex diacritics replacements. In particular, if one string is MUEL and another is MÜLLER, then they are considered equal up to truncation.*/
    SCANBOTSDK_VALUE_CONSISTENCY_OK_TRUNCATED = 4,

    /**The values that correspond to the same logical field are inconsistent.*/
    SCANBOTSDK_VALUE_CONSISTENCY_INCONSISTENT = 5,

} scanbotsdk_value_consistency_t;

/**
 * @brief Returns the string representation of the given scanbotsdk_value_consistency_t value.
 * @ingroup c_document_data
 * @details The returned string doesn't need to be freed.
 * @param value: The value to be converted to string.
 * @param result: Pointer to a variable that will store the string representation of the value.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_value_consistency_t_to_string(scanbotsdk_value_consistency_t value, const char** result);

/**
 * @brief scanbotsdk_field_consistency_verification_report_t class
 * @details Report of the field consistency verification.
 * @ingroup c_document_data
*/
typedef struct scanbotsdk_field_consistency_verification_report_t scanbotsdk_field_consistency_verification_report_t;

/**
 * @brief Frees the memory allocated for the instance of scanbotsdk_field_consistency_verification_report_t. If null is passed, the function does nothing.
 * @ingroup c_document_data
 * @param object: Pointer to the instance of scanbotsdk_field_consistency_verification_report_t to be freed
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_field_consistency_verification_report_free(scanbotsdk_field_consistency_verification_report_t* object);

/**
 * @brief Returns value of field_type field of the given object.
 * @ingroup c_document_data
 * @details Logical field that is being verified.
 * @param self: Pointer to the instance of scanbotsdk_field_consistency_verification_report_t
 * @param field_type: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_field_consistency_verification_report_get_field_type(scanbotsdk_field_consistency_verification_report_t* self, scanbotsdk_common_field_type_t* field_type);

/**
 * @brief Returns value of consistency field of the given object.
 * @ingroup c_document_data
 * @details The status of the consistency verification.
 * @param self: Pointer to the instance of scanbotsdk_field_consistency_verification_report_t
 * @param consistency: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_field_consistency_verification_report_get_consistency(scanbotsdk_field_consistency_verification_report_t* self, scanbotsdk_value_consistency_t* consistency);

/**
 * @brief Returns value of field_full_names field of the given object. The returned pointers do NOT own the underlying object, caller must not free them.
 * @ingroup c_document_data
 * @details Full names of the fields that were considered during the verification.
 * @param self: Pointer to the instance of scanbotsdk_field_consistency_verification_report_t
 @param size: Size of the pre-allocated array. Must be equal to the size obtained by calling the corresponding _size function.
 * @param field_full_names: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_field_consistency_verification_report_get_field_full_names(scanbotsdk_field_consistency_verification_report_t* self, const char** field_full_names, size_t size);
/**
 * @brief Returns size of field_full_names array.
 * @ingroup c_document_data
 * @param self: Pointer to the instance of scanbotsdk_field_consistency_verification_report_t
 * @param size: Pointer to a variable that will store the size.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_field_consistency_verification_report_get_field_full_names_size(scanbotsdk_field_consistency_verification_report_t* self, size_t* size);


/**
 * @brief scanbotsdk_consistency_verification_report_t class
 * @details Report of the document consistency verification. Shows whether information in the fields that correspond to the same logical field is consistent.
 * @ingroup c_document_data
*/
typedef struct scanbotsdk_consistency_verification_report_t scanbotsdk_consistency_verification_report_t;

/**
 * @brief Frees the memory allocated for the instance of scanbotsdk_consistency_verification_report_t. If null is passed, the function does nothing.
 * @ingroup c_document_data
 * @param object: Pointer to the instance of scanbotsdk_consistency_verification_report_t to be freed
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_consistency_verification_report_free(scanbotsdk_consistency_verification_report_t* object);

/**
 * @brief Returns value of overall_consistency field of the given object.
 * @ingroup c_document_data
 * @details Overall status of the consistency verification. Corresponds to the most severe status of all fields.
 * @param self: Pointer to the instance of scanbotsdk_consistency_verification_report_t
 * @param overall_consistency: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_consistency_verification_report_get_overall_consistency(scanbotsdk_consistency_verification_report_t* self, scanbotsdk_value_consistency_t* overall_consistency);

/**
 * @brief Returns value of field_details field of the given object. The returned pointers do NOT own the underlying object, caller must not free them.
 * @ingroup c_document_data
 * @details List of reports for each field that was verified.
 * @param self: Pointer to the instance of scanbotsdk_consistency_verification_report_t
 @param size: Size of the pre-allocated array. Must be equal to the size obtained by calling the corresponding _size function.
 * @param field_details: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_consistency_verification_report_get_field_details(scanbotsdk_consistency_verification_report_t* self, scanbotsdk_field_consistency_verification_report_t** field_details, size_t size);
/**
 * @brief Returns size of field_details array.
 * @ingroup c_document_data
 * @param self: Pointer to the instance of scanbotsdk_consistency_verification_report_t
 * @param size: Pointer to a variable that will store the size.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_consistency_verification_report_get_field_details_size(scanbotsdk_consistency_verification_report_t* self, size_t* size);


/**
 * @brief scanbotsdk_value_semantics_t enum
 * @details The result of the value semantics verification.
 * @ingroup c_document_data
*/
typedef enum scanbotsdk_value_semantics_t {

    /**Verification of the value semantics was skipped. For example, because the field is empty.*/
    SCANBOTSDK_VALUE_SEMANTICS_SKIPPED = 0,

    /**No errors were detected during semantics verification. For example, the date of birth is in the past, the date of expiry is in the future.*/
    SCANBOTSDK_VALUE_SEMANTICS_VALID = 1,

    /**Semantically invalid value. For example, the date of birth is in the future, the date of expiry is in the past.*/
    SCANBOTSDK_VALUE_SEMANTICS_INVALID = 2,

} scanbotsdk_value_semantics_t;

/**
 * @brief Returns the string representation of the given scanbotsdk_value_semantics_t value.
 * @ingroup c_document_data
 * @details The returned string doesn't need to be freed.
 * @param value: The value to be converted to string.
 * @param result: Pointer to a variable that will store the string representation of the value.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_value_semantics_t_to_string(scanbotsdk_value_semantics_t value, const char** result);

/**
 * @brief scanbotsdk_field_value_semantics_t class
 * @details Report of the field value semantics verification.
 * @ingroup c_document_data
*/
typedef struct scanbotsdk_field_value_semantics_t scanbotsdk_field_value_semantics_t;

/**
 * @brief Frees the memory allocated for the instance of scanbotsdk_field_value_semantics_t. If null is passed, the function does nothing.
 * @ingroup c_document_data
 * @param object: Pointer to the instance of scanbotsdk_field_value_semantics_t to be freed
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_field_value_semantics_free(scanbotsdk_field_value_semantics_t* object);

/**
 * @brief Returns value of field_full_name field of the given object. The returned pointers do NOT own the underlying object, caller must not free them.
 * @ingroup c_document_data
 * @details Full name of the field that was considered during the verification.
 * @param self: Pointer to the instance of scanbotsdk_field_value_semantics_t
 * @param field_full_name: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_field_value_semantics_get_field_full_name(scanbotsdk_field_value_semantics_t* self, const char** field_full_name);

/**
 * @brief Returns value of invalid_semantics field of the given object.
 * @ingroup c_document_data
 * @details Shows whether the data in the field is semantically invalid, e.g. the date of birth is in the future.
 * @param self: Pointer to the instance of scanbotsdk_field_value_semantics_t
 * @param invalid_semantics: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_field_value_semantics_get_invalid_semantics(scanbotsdk_field_value_semantics_t* self, bool* invalid_semantics);


/**
 * @brief scanbotsdk_composite_field_value_semantics_t class
 * @details Report of a logical field value semantics verification. If some logical field, e.g. expiry date is present in multiple places in the document, it can occur that some entries are semantically correct and some are semantically incorrect. This report shows the overall status of the logical field value semantics verification and details for each field that was verified.
 * @ingroup c_document_data
*/
typedef struct scanbotsdk_composite_field_value_semantics_t scanbotsdk_composite_field_value_semantics_t;

/**
 * @brief Frees the memory allocated for the instance of scanbotsdk_composite_field_value_semantics_t. If null is passed, the function does nothing.
 * @ingroup c_document_data
 * @param object: Pointer to the instance of scanbotsdk_composite_field_value_semantics_t to be freed
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_composite_field_value_semantics_free(scanbotsdk_composite_field_value_semantics_t* object);

/**
 * @brief Returns value of overall_field_value_semantics field of the given object.
 * @ingroup c_document_data
 * @details Overall status of the logical value semantics verification. Corresponds to the most severe status of all fields, i.e. if at least one field is semantically incorrect, the overall status is semantically incorrect. If no fields are present, the overall status is SKIPPED.
 * @param self: Pointer to the instance of scanbotsdk_composite_field_value_semantics_t
 * @param overall_field_value_semantics: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_composite_field_value_semantics_get_overall_field_value_semantics(scanbotsdk_composite_field_value_semantics_t* self, scanbotsdk_value_semantics_t* overall_field_value_semantics);

/**
 * @brief Returns value of field_details field of the given object. The returned pointers do NOT own the underlying object, caller must not free them.
 * @ingroup c_document_data
 * @details List of value semantics for each field corresponding to the same logical field.
 * @param self: Pointer to the instance of scanbotsdk_composite_field_value_semantics_t
 @param size: Size of the pre-allocated array. Must be equal to the size obtained by calling the corresponding _size function.
 * @param field_details: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_composite_field_value_semantics_get_field_details(scanbotsdk_composite_field_value_semantics_t* self, scanbotsdk_field_value_semantics_t** field_details, size_t size);
/**
 * @brief Returns size of field_details array.
 * @ingroup c_document_data
 * @param self: Pointer to the instance of scanbotsdk_composite_field_value_semantics_t
 * @param size: Pointer to a variable that will store the size.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_composite_field_value_semantics_get_field_details_size(scanbotsdk_composite_field_value_semantics_t* self, size_t* size);


/**
 * @brief scanbotsdk_semantics_verification_report_t class
 * @details Report of the document value semantics verification.
 * @ingroup c_document_data
*/
typedef struct scanbotsdk_semantics_verification_report_t scanbotsdk_semantics_verification_report_t;

/**
 * @brief Frees the memory allocated for the instance of scanbotsdk_semantics_verification_report_t. If null is passed, the function does nothing.
 * @ingroup c_document_data
 * @param object: Pointer to the instance of scanbotsdk_semantics_verification_report_t to be freed
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_semantics_verification_report_free(scanbotsdk_semantics_verification_report_t* object);

/**
 * @brief Returns value of overall_invalid_semantics field of the given object.
 * @ingroup c_document_data
 * @details Overall status of the value semantics verification. Corresponds to the most severe status of all fields, i.e. if at least one field is semantically incorrect, the overall status is semantically incorrect. If some verifications are skipped, they do not impact the overall status.
 * @param self: Pointer to the instance of scanbotsdk_semantics_verification_report_t
 * @param overall_invalid_semantics: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_semantics_verification_report_get_overall_invalid_semantics(scanbotsdk_semantics_verification_report_t* self, bool* overall_invalid_semantics);

/**
 * @brief Returns value of expiry_date_semantics field of the given object. The returned pointers do NOT own the underlying object, caller must not free them.
 * @ingroup c_document_data
 * @details Status of the expiry date semantics verification. Shows whether the expiry date in the document is in the future.
 * @param self: Pointer to the instance of scanbotsdk_semantics_verification_report_t
 * @param expiry_date_semantics: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_semantics_verification_report_get_expiry_date_semantics(scanbotsdk_semantics_verification_report_t* self, scanbotsdk_composite_field_value_semantics_t** expiry_date_semantics);

/**
 * @brief Returns value of issue_date_semantics field of the given object. The returned pointers do NOT own the underlying object, caller must not free them.
 * @ingroup c_document_data
 * @details Status of the issue date semantics verification. Shows whether the issue date in the document is in the past.
 * @param self: Pointer to the instance of scanbotsdk_semantics_verification_report_t
 * @param issue_date_semantics: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_semantics_verification_report_get_issue_date_semantics(scanbotsdk_semantics_verification_report_t* self, scanbotsdk_composite_field_value_semantics_t** issue_date_semantics);

/**
 * @brief Returns value of birth_date_semantics field of the given object. The returned pointers do NOT own the underlying object, caller must not free them.
 * @ingroup c_document_data
 * @details Status of the birth date semantics verification. Shows whether the birth date in the document is in the past.
 * @param self: Pointer to the instance of scanbotsdk_semantics_verification_report_t
 * @param birth_date_semantics: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_semantics_verification_report_get_birth_date_semantics(scanbotsdk_semantics_verification_report_t* self, scanbotsdk_composite_field_value_semantics_t** birth_date_semantics);

/**
 * @brief Returns value of issue_date_before_expiry_date field of the given object.
 * @ingroup c_document_data
 * @details Result of verification whether the issue date is before the expiry date.
 * @param self: Pointer to the instance of scanbotsdk_semantics_verification_report_t
 * @param issue_date_before_expiry_date: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_semantics_verification_report_get_issue_date_before_expiry_date(scanbotsdk_semantics_verification_report_t* self, scanbotsdk_value_semantics_t* issue_date_before_expiry_date);

/**
 * @brief Returns value of birth_date_before_issue_date field of the given object.
 * @ingroup c_document_data
 * @details Result of verification whether the birth date is before the issue date.
 * @param self: Pointer to the instance of scanbotsdk_semantics_verification_report_t
 * @param birth_date_before_issue_date: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_semantics_verification_report_get_birth_date_before_issue_date(scanbotsdk_semantics_verification_report_t* self, scanbotsdk_value_semantics_t* birth_date_before_issue_date);

/**
 * @brief Returns value of birth_date_before_expiry_date field of the given object.
 * @ingroup c_document_data
 * @details Result of verification whether the birth date is before the expiry date.
 * @param self: Pointer to the instance of scanbotsdk_semantics_verification_report_t
 * @param birth_date_before_expiry_date: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_semantics_verification_report_get_birth_date_before_expiry_date(scanbotsdk_semantics_verification_report_t* self, scanbotsdk_value_semantics_t* birth_date_before_expiry_date);


/**
 * @brief scanbotsdk_field_suspicious_data_verification_report_t class
 * @details Report of the suspicious data field verification.
 * @ingroup c_document_data
*/
typedef struct scanbotsdk_field_suspicious_data_verification_report_t scanbotsdk_field_suspicious_data_verification_report_t;

/**
 * @brief Frees the memory allocated for the instance of scanbotsdk_field_suspicious_data_verification_report_t. If null is passed, the function does nothing.
 * @ingroup c_document_data
 * @param object: Pointer to the instance of scanbotsdk_field_suspicious_data_verification_report_t to be freed
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_field_suspicious_data_verification_report_free(scanbotsdk_field_suspicious_data_verification_report_t* object);

/**
 * @brief Returns value of field_full_name field of the given object. The returned pointers do NOT own the underlying object, caller must not free them.
 * @ingroup c_document_data
 * @details Full name of the field that was considered during the verification.
 * @param self: Pointer to the instance of scanbotsdk_field_suspicious_data_verification_report_t
 * @param field_full_name: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_field_suspicious_data_verification_report_get_field_full_name(scanbotsdk_field_suspicious_data_verification_report_t* self, const char** field_full_name);

/**
 * @brief Returns value of is_suspicious field of the given object.
 * @ingroup c_document_data
 * @details Shows whether the data in the field is suspicious, e.g. contains word "Sample" in the name.
 * @param self: Pointer to the instance of scanbotsdk_field_suspicious_data_verification_report_t
 * @param is_suspicious: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_field_suspicious_data_verification_report_get_is_suspicious(scanbotsdk_field_suspicious_data_verification_report_t* self, bool* is_suspicious);


/**
 * @brief scanbotsdk_suspicious_data_verification_report_t class
 * @details Report of the suspicious data document verification.
 * @ingroup c_document_data
*/
typedef struct scanbotsdk_suspicious_data_verification_report_t scanbotsdk_suspicious_data_verification_report_t;

/**
 * @brief Frees the memory allocated for the instance of scanbotsdk_suspicious_data_verification_report_t. If null is passed, the function does nothing.
 * @ingroup c_document_data
 * @param object: Pointer to the instance of scanbotsdk_suspicious_data_verification_report_t to be freed
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_suspicious_data_verification_report_free(scanbotsdk_suspicious_data_verification_report_t* object);

/**
 * @brief Returns value of overall_suspicious_data field of the given object.
 * @ingroup c_document_data
 * @details Overall status of the suspicious data verification. Corresponds to the most severe status of all fields, i.e. if at least one field is suspicious, the overall status is suspicious.
 * @param self: Pointer to the instance of scanbotsdk_suspicious_data_verification_report_t
 * @param overall_suspicious_data: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_suspicious_data_verification_report_get_overall_suspicious_data(scanbotsdk_suspicious_data_verification_report_t* self, bool* overall_suspicious_data);

/**
 * @brief Returns value of field_details field of the given object. The returned pointers do NOT own the underlying object, caller must not free them.
 * @ingroup c_document_data
 * @details List of reports for each field that was verified.
 * @param self: Pointer to the instance of scanbotsdk_suspicious_data_verification_report_t
 @param size: Size of the pre-allocated array. Must be equal to the size obtained by calling the corresponding _size function.
 * @param field_details: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_suspicious_data_verification_report_get_field_details(scanbotsdk_suspicious_data_verification_report_t* self, scanbotsdk_field_suspicious_data_verification_report_t** field_details, size_t size);
/**
 * @brief Returns size of field_details array.
 * @ingroup c_document_data
 * @param self: Pointer to the instance of scanbotsdk_suspicious_data_verification_report_t
 * @param size: Pointer to a variable that will store the size.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_suspicious_data_verification_report_get_field_details_size(scanbotsdk_suspicious_data_verification_report_t* self, size_t* size);


/**
 * @brief scanbotsdk_field_invalid_data_verification_report_t class
 * @details Report which shows whether the data in the field that can be validated is valid.
 * @ingroup c_document_data
*/
typedef struct scanbotsdk_field_invalid_data_verification_report_t scanbotsdk_field_invalid_data_verification_report_t;

/**
 * @brief Frees the memory allocated for the instance of scanbotsdk_field_invalid_data_verification_report_t. If null is passed, the function does nothing.
 * @ingroup c_document_data
 * @param object: Pointer to the instance of scanbotsdk_field_invalid_data_verification_report_t to be freed
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_field_invalid_data_verification_report_free(scanbotsdk_field_invalid_data_verification_report_t* object);

/**
 * @brief Returns value of field_full_name field of the given object. The returned pointers do NOT own the underlying object, caller must not free them.
 * @ingroup c_document_data
 * @details Full name of the field that was considered during the verification.
 * @param self: Pointer to the instance of scanbotsdk_field_invalid_data_verification_report_t
 * @param field_full_name: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_field_invalid_data_verification_report_get_field_full_name(scanbotsdk_field_invalid_data_verification_report_t* self, const char** field_full_name);

/**
 * @brief Returns value of is_invalid field of the given object.
 * @ingroup c_document_data
 * @details Shows whether the data in the field is valid, e.g. if MRZ check digits are correct.
 * @param self: Pointer to the instance of scanbotsdk_field_invalid_data_verification_report_t
 * @param is_invalid: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_field_invalid_data_verification_report_get_is_invalid(scanbotsdk_field_invalid_data_verification_report_t* self, bool* is_invalid);


/**
 * @brief scanbotsdk_invalid_data_verification_report_t class
 * @details Report of the field validation verification.
 * @ingroup c_document_data
*/
typedef struct scanbotsdk_invalid_data_verification_report_t scanbotsdk_invalid_data_verification_report_t;

/**
 * @brief Frees the memory allocated for the instance of scanbotsdk_invalid_data_verification_report_t. If null is passed, the function does nothing.
 * @ingroup c_document_data
 * @param object: Pointer to the instance of scanbotsdk_invalid_data_verification_report_t to be freed
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_invalid_data_verification_report_free(scanbotsdk_invalid_data_verification_report_t* object);

/**
 * @brief Returns value of overall_is_invalid field of the given object.
 * @ingroup c_document_data
 * @details Overall status of the document verification. Corresponds to the most severe status of all fields, i.e. if at least one field is invalid, the overall status is invalid.
 * @param self: Pointer to the instance of scanbotsdk_invalid_data_verification_report_t
 * @param overall_is_invalid: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_invalid_data_verification_report_get_overall_is_invalid(scanbotsdk_invalid_data_verification_report_t* self, bool* overall_is_invalid);

/**
 * @brief Returns value of field_details field of the given object. The returned pointers do NOT own the underlying object, caller must not free them.
 * @ingroup c_document_data
 * @details List of reports for each field that was verified.
 * @param self: Pointer to the instance of scanbotsdk_invalid_data_verification_report_t
 @param size: Size of the pre-allocated array. Must be equal to the size obtained by calling the corresponding _size function.
 * @param field_details: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_invalid_data_verification_report_get_field_details(scanbotsdk_invalid_data_verification_report_t* self, scanbotsdk_field_invalid_data_verification_report_t** field_details, size_t size);
/**
 * @brief Returns size of field_details array.
 * @ingroup c_document_data
 * @param self: Pointer to the instance of scanbotsdk_invalid_data_verification_report_t
 * @param size: Pointer to a variable that will store the size.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_invalid_data_verification_report_get_field_details_size(scanbotsdk_invalid_data_verification_report_t* self, size_t* size);


/**
 * @brief scanbotsdk_document_verification_status_t enum
 * @details Overall status of the document verification.
 * @ingroup c_document_data
*/
typedef enum scanbotsdk_document_verification_status_t {

    /**All the verifications passed successfully.*/
    SCANBOTSDK_DOCUMENT_VERIFICATION_STATUS_OK = 0,

    /**No verifications failed, but some of them returned warnings.*/
    SCANBOTSDK_DOCUMENT_VERIFICATION_STATUS_OK_WITH_WARNINGS = 1,

    /**At least one verification failed.*/
    SCANBOTSDK_DOCUMENT_VERIFICATION_STATUS_INVALID = 2,

} scanbotsdk_document_verification_status_t;

/**
 * @brief Returns the string representation of the given scanbotsdk_document_verification_status_t value.
 * @ingroup c_document_data
 * @details The returned string doesn't need to be freed.
 * @param value: The value to be converted to string.
 * @param result: Pointer to a variable that will store the string representation of the value.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_verification_status_t_to_string(scanbotsdk_document_verification_status_t value, const char** result);

/**
 * @brief scanbotsdk_document_verification_report_t class
 * @details Report of the document verification.
 * @ingroup c_document_data
*/
typedef struct scanbotsdk_document_verification_report_t scanbotsdk_document_verification_report_t;

/**
 * @brief Frees the memory allocated for the instance of scanbotsdk_document_verification_report_t. If null is passed, the function does nothing.
 * @ingroup c_document_data
 * @param object: Pointer to the instance of scanbotsdk_document_verification_report_t to be freed
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_verification_report_free(scanbotsdk_document_verification_report_t* object);

/**
 * @brief Returns value of overall_verification_status field of the given object.
 * @ingroup c_document_data
 * @details Overall status of the document verification.
 * @param self: Pointer to the instance of scanbotsdk_document_verification_report_t
 * @param overall_verification_status: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_verification_report_get_overall_verification_status(scanbotsdk_document_verification_report_t* self, scanbotsdk_document_verification_status_t* overall_verification_status);

/**
 * @brief Returns value of consistency_verification_report field of the given object. The returned pointers do NOT own the underlying object, caller must not free them.
 * @ingroup c_document_data
 * @details Report of the document consistency verification. Shows whether information in the fields that correspond to the same logical field and is present in different parts of the document is consistent.
 * @param self: Pointer to the instance of scanbotsdk_document_verification_report_t
 * @param consistency_verification_report: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_verification_report_get_consistency_verification_report(scanbotsdk_document_verification_report_t* self, scanbotsdk_consistency_verification_report_t** consistency_verification_report);

/**
 * @brief Returns value of semantics_verification_report field of the given object. The returned pointers do NOT own the underlying object, caller must not free them.
 * @ingroup c_document_data
 * @details Report of the semantics verification. Shows whether the values in the fields are semantically correct.
 * @param self: Pointer to the instance of scanbotsdk_document_verification_report_t
 * @param semantics_verification_report: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_verification_report_get_semantics_verification_report(scanbotsdk_document_verification_report_t* self, scanbotsdk_semantics_verification_report_t** semantics_verification_report);

/**
 * @brief Returns value of suspicious_data_verification_report field of the given object. The returned pointers do NOT own the underlying object, caller must not free them.
 * @ingroup c_document_data
 * @details Shows whether the data in the document is suspicious, e.g. contains word "Sample" in the name.
 * @param self: Pointer to the instance of scanbotsdk_document_verification_report_t
 * @param suspicious_data_verification_report: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_verification_report_get_suspicious_data_verification_report(scanbotsdk_document_verification_report_t* self, scanbotsdk_suspicious_data_verification_report_t** suspicious_data_verification_report);

/**
 * @brief Returns value of invalid_data_verification_report field of the given object. The returned pointers do NOT own the underlying object, caller must not free them.
 * @ingroup c_document_data
 * @details Some fields in the documents allow validation, for example, MRZ contains check digits to verify the data. This report shows whether there are any invalid fields in the document.
 * @param self: Pointer to the instance of scanbotsdk_document_verification_report_t
 * @param invalid_data_verification_report: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_verification_report_get_invalid_data_verification_report(scanbotsdk_document_verification_report_t* self, scanbotsdk_invalid_data_verification_report_t** invalid_data_verification_report);


#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* SCANBOTSDK_DOCUMENTDATAEXTRACTORTYPES_H */