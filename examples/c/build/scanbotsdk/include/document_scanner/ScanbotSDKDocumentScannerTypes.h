// Auto-generated with ScanbotSDKCodegenV3. Modifications will be overwritten.
// Generated from SchemasV3/CoreSchemas/schemas/DocumentScannerTypes.yaml
/**
 * @file ScanbotSDKDocumentScannerTypes.h
 */

#pragma once
#ifndef SCANBOTSDK_DOCUMENTSCANNERTYPES_H
#define SCANBOTSDK_DOCUMENTSCANNERTYPES_H


#include <ScanbotSDKImage.h>
#include <ScanbotSDKTypes.h>
#include <common/ScanbotSDKCommonTypes.h>
#include <geometry/ScanbotSDKGeometry.h>
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
 * @brief scanbotsdk_document_scanner_engine_mode_t enum
 * @details Engines for document scanning.
 * @ingroup c_document_scanner
*/
typedef enum scanbotsdk_document_scanner_engine_mode_t {

    /**Use the ML document scanner.*/
    SCANBOTSDK_DOCUMENT_SCANNER_ENGINE_MODE_ML = 0,

    /**Use the legacy edge-based document scanner.*/
    SCANBOTSDK_DOCUMENT_SCANNER_ENGINE_MODE_LEGACY = 1,

} scanbotsdk_document_scanner_engine_mode_t;

/**
 * @brief Returns the string representation of the given scanbotsdk_document_scanner_engine_mode_t value.
 * @ingroup c_document_scanner
 * @details The returned string doesn't need to be freed.
 * @param value: The value to be converted to string.
 * @param result: Pointer to a variable that will store the string representation of the value.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_scanner_engine_mode_t_to_string(scanbotsdk_document_scanner_engine_mode_t value, const char** result);

/**
 * @brief scanbotsdk_document_scanner_parameters_t class
 * @details Parameters for the document scanner.
 * @ingroup c_document_scanner
*/
typedef struct scanbotsdk_document_scanner_parameters_t scanbotsdk_document_scanner_parameters_t;

/**
 * @brief Creates a new instance of scanbotsdk_document_scanner_parameters with given params and stores it in the location specified by the last argument.
 * @ingroup c_document_scanner
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param accepted_angle_score: The minimum score in percent (0 - 100) of the perspective distortion to accept a detected document.
 * Set lower values to accept more perspective distortion.
 * 
 * Warning: Lower values result in more blurred document images.
 * 
 * Default is 75
 * @param accepted_size_score: The minimum size in percent (0 - 100) of the screen size to accept a detected document.
 * It is sufficient that height or width match the score.
 * 
 * Warning: Lower values result in low resolution document images.
 * 
 * Default is 80
 * @param accepted_brightness_threshold: The minimum brightness value (0-255) to accept a detected document.
 * 
 * Default is 0
 * @param accepted_aspect_ratio_score: The minimum score in percent (0 - 100) that the aspect ratio of the document
 * must match one of the required aspect ratios (if any) to accept a detected document.
 * If acceptedAspectRatioScore is more than 0, then the document is only accepted if the aspect ratio
 * matches one of the given aspect ratios (if any), otherwise OK_BUT_BAD_ASPECT_RATIO is returned.
 * 
 * Default is 85
 * @param aspect_ratios: The possible desired aspect ratios for the detected document.
 * A document matches if its aspect ratio matches any of the given aspect ratios.
 * If acceptedAspectRatioScore is more than 0, then the document is only accepted if the aspect ratio
 * matches one of the given aspect ratios, otherwise OK_BUT_BAD_ASPECT_RATIO is returned.
 * If empty, no aspect ratio is preferred.
 * Entries of the array must not be null.
 * @param aspect_ratios_size: Size of the array aspect_ratios
 * @param ignore_orientation_mismatch: If false, the document scanner will return OK_BUT_ORIENTATION_MISMATCH if the
 * detected document orientation does not match the input image orientation,
 * e.g. if the document is detected as landscape but the input image is portrait.
 * If true, the document scanner will ignore orientation mismatches.
 * 
 * Default is false
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_document_scanner_parameters_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_scanner_parameters_create(
    int accepted_angle_score,
    int accepted_size_score,
    int accepted_brightness_threshold,
    int accepted_aspect_ratio_score,
    scanbotsdk_aspect_ratio_t** aspect_ratios,
    size_t aspect_ratios_size,
    bool ignore_orientation_mismatch,
    scanbotsdk_document_scanner_parameters_t** result);

/**
 * @brief Creates a new instance of scanbotsdk_document_scanner_parameters_t with given required params and stores it in the location specified by the last argument.
 * @ingroup c_document_scanner
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_document_scanner_parameters_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_scanner_parameters_create_with_defaults(
    scanbotsdk_document_scanner_parameters_t** result);


/**
 * @brief Frees the memory allocated for the instance of scanbotsdk_document_scanner_parameters_t. If null is passed, the function does nothing.
 * @ingroup c_document_scanner
 * @param object: Pointer to the instance of scanbotsdk_document_scanner_parameters_t to be freed
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_scanner_parameters_free(scanbotsdk_document_scanner_parameters_t* object);

/**
 * @brief Returns value of accepted_angle_score field of the given object.
 * @ingroup c_document_scanner
 * @details The minimum score in percent (0 - 100) of the perspective distortion to accept a detected document.
 * Set lower values to accept more perspective distortion.
 * 
 * Warning: Lower values result in more blurred document images.
 * 
 * Default is 75
 * @param self: Pointer to the instance of scanbotsdk_document_scanner_parameters_t
 * @param accepted_angle_score: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_scanner_parameters_get_accepted_angle_score(scanbotsdk_document_scanner_parameters_t* self, int* accepted_angle_score);
/**
 * @brief Sets value of accepted_angle_score field of the given object.
 * @ingroup c_document_scanner
 * @details The minimum score in percent (0 - 100) of the perspective distortion to accept a detected document.
 * Set lower values to accept more perspective distortion.
 * 
 * Warning: Lower values result in more blurred document images.
 * 
 * Default is 75
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_document_scanner_parameters_t, the field of which will be set
 * @param accepted_angle_score: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_scanner_parameters_set_accepted_angle_score(scanbotsdk_document_scanner_parameters_t* self, int accepted_angle_score);

/**
 * @brief Returns value of accepted_size_score field of the given object.
 * @ingroup c_document_scanner
 * @details The minimum size in percent (0 - 100) of the screen size to accept a detected document.
 * It is sufficient that height or width match the score.
 * 
 * Warning: Lower values result in low resolution document images.
 * 
 * Default is 80
 * @param self: Pointer to the instance of scanbotsdk_document_scanner_parameters_t
 * @param accepted_size_score: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_scanner_parameters_get_accepted_size_score(scanbotsdk_document_scanner_parameters_t* self, int* accepted_size_score);
/**
 * @brief Sets value of accepted_size_score field of the given object.
 * @ingroup c_document_scanner
 * @details The minimum size in percent (0 - 100) of the screen size to accept a detected document.
 * It is sufficient that height or width match the score.
 * 
 * Warning: Lower values result in low resolution document images.
 * 
 * Default is 80
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_document_scanner_parameters_t, the field of which will be set
 * @param accepted_size_score: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_scanner_parameters_set_accepted_size_score(scanbotsdk_document_scanner_parameters_t* self, int accepted_size_score);

/**
 * @brief Returns value of accepted_brightness_threshold field of the given object.
 * @ingroup c_document_scanner
 * @details The minimum brightness value (0-255) to accept a detected document.
 * 
 * Default is 0
 * @param self: Pointer to the instance of scanbotsdk_document_scanner_parameters_t
 * @param accepted_brightness_threshold: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_scanner_parameters_get_accepted_brightness_threshold(scanbotsdk_document_scanner_parameters_t* self, int* accepted_brightness_threshold);
/**
 * @brief Sets value of accepted_brightness_threshold field of the given object.
 * @ingroup c_document_scanner
 * @details The minimum brightness value (0-255) to accept a detected document.
 * 
 * Default is 0
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_document_scanner_parameters_t, the field of which will be set
 * @param accepted_brightness_threshold: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_scanner_parameters_set_accepted_brightness_threshold(scanbotsdk_document_scanner_parameters_t* self, int accepted_brightness_threshold);

/**
 * @brief Returns value of accepted_aspect_ratio_score field of the given object.
 * @ingroup c_document_scanner
 * @details The minimum score in percent (0 - 100) that the aspect ratio of the document
 * must match one of the required aspect ratios (if any) to accept a detected document.
 * If acceptedAspectRatioScore is more than 0, then the document is only accepted if the aspect ratio
 * matches one of the given aspect ratios (if any), otherwise OK_BUT_BAD_ASPECT_RATIO is returned.
 * 
 * Default is 85
 * @param self: Pointer to the instance of scanbotsdk_document_scanner_parameters_t
 * @param accepted_aspect_ratio_score: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_scanner_parameters_get_accepted_aspect_ratio_score(scanbotsdk_document_scanner_parameters_t* self, int* accepted_aspect_ratio_score);
/**
 * @brief Sets value of accepted_aspect_ratio_score field of the given object.
 * @ingroup c_document_scanner
 * @details The minimum score in percent (0 - 100) that the aspect ratio of the document
 * must match one of the required aspect ratios (if any) to accept a detected document.
 * If acceptedAspectRatioScore is more than 0, then the document is only accepted if the aspect ratio
 * matches one of the given aspect ratios (if any), otherwise OK_BUT_BAD_ASPECT_RATIO is returned.
 * 
 * Default is 85
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_document_scanner_parameters_t, the field of which will be set
 * @param accepted_aspect_ratio_score: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_scanner_parameters_set_accepted_aspect_ratio_score(scanbotsdk_document_scanner_parameters_t* self, int accepted_aspect_ratio_score);

/**
 * @brief Returns value of aspect_ratios field of the given object. The returned pointers do NOT own the underlying object, caller must not free them.
 * @ingroup c_document_scanner
 * @details The possible desired aspect ratios for the detected document.
 * A document matches if its aspect ratio matches any of the given aspect ratios.
 * If acceptedAspectRatioScore is more than 0, then the document is only accepted if the aspect ratio
 * matches one of the given aspect ratios, otherwise OK_BUT_BAD_ASPECT_RATIO is returned.
 * If empty, no aspect ratio is preferred.
 * @param self: Pointer to the instance of scanbotsdk_document_scanner_parameters_t
 @param size: Size of the pre-allocated array. Must be equal to the size obtained by calling the corresponding _size function.
 * @param aspect_ratios: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_scanner_parameters_get_aspect_ratios(scanbotsdk_document_scanner_parameters_t* self, scanbotsdk_aspect_ratio_t** aspect_ratios, size_t size);
/**
 * @brief Returns size of aspect_ratios array.
 * @ingroup c_document_scanner
 * @param self: Pointer to the instance of scanbotsdk_document_scanner_parameters_t
 * @param size: Pointer to a variable that will store the size.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_scanner_parameters_get_aspect_ratios_size(scanbotsdk_document_scanner_parameters_t* self, size_t* size);
/**
 * @brief Sets value of aspect_ratios field of the given object.
 * @ingroup c_document_scanner
 * @details The possible desired aspect ratios for the detected document.
 * A document matches if its aspect ratio matches any of the given aspect ratios.
 * If acceptedAspectRatioScore is more than 0, then the document is only accepted if the aspect ratio
 * matches one of the given aspect ratios, otherwise OK_BUT_BAD_ASPECT_RATIO is returned.
 * If empty, no aspect ratio is preferred.
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_document_scanner_parameters_t, the field of which will be set
 * @param aspect_ratios: The value to be set.
 * @param aspect_ratios_size: Size of the array.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_scanner_parameters_set_aspect_ratios(scanbotsdk_document_scanner_parameters_t* self, scanbotsdk_aspect_ratio_t** aspect_ratios, size_t aspect_ratios_size);

/**
 * @brief Returns value of ignore_orientation_mismatch field of the given object.
 * @ingroup c_document_scanner
 * @details If false, the document scanner will return OK_BUT_ORIENTATION_MISMATCH if the
 * detected document orientation does not match the input image orientation,
 * e.g. if the document is detected as landscape but the input image is portrait.
 * If true, the document scanner will ignore orientation mismatches.
 * 
 * Default is false
 * @param self: Pointer to the instance of scanbotsdk_document_scanner_parameters_t
 * @param ignore_orientation_mismatch: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_scanner_parameters_get_ignore_orientation_mismatch(scanbotsdk_document_scanner_parameters_t* self, bool* ignore_orientation_mismatch);
/**
 * @brief Sets value of ignore_orientation_mismatch field of the given object.
 * @ingroup c_document_scanner
 * @details If false, the document scanner will return OK_BUT_ORIENTATION_MISMATCH if the
 * detected document orientation does not match the input image orientation,
 * e.g. if the document is detected as landscape but the input image is portrait.
 * If true, the document scanner will ignore orientation mismatches.
 * 
 * Default is false
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_document_scanner_parameters_t, the field of which will be set
 * @param ignore_orientation_mismatch: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_scanner_parameters_set_ignore_orientation_mismatch(scanbotsdk_document_scanner_parameters_t* self, bool ignore_orientation_mismatch);


/**
 * @brief scanbotsdk_partially_visible_document_configuration_t class
 * @details Configuration for handling partially visible documents.
 * @ingroup c_document_scanner
*/
typedef struct scanbotsdk_partially_visible_document_configuration_t scanbotsdk_partially_visible_document_configuration_t;

/**
 * @brief Creates a new instance of scanbotsdk_partially_visible_document_configuration with given params and stores it in the location specified by the last argument.
 * @ingroup c_document_scanner
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param allow_partially_visible_documents: If true, the document scanner will return a status of ERROR_PARTIALLY_VISIBLE or ERROR_PARTIALLY_VISIBLE_TOO_CLOSE 
 * if a document-like shape is detected, but not all four corners of the document are visible. 
 * If false, a status of ERROR_NOTHING_DETECTED will be returned instead.
 * 
 * Default is false
 * @param accumulation_duration: Duration in milliseconds over which the document has to be detected as partially visible. If on any frame the 
 * document is not detected as partially visible, or detected as having a completely different Displacement, the 
 * accumulation will be reset. During the accumulation, the document scanner will return a status of 
 * ERROR_NOTHING_DETECTED instead of one of the partially visible statuses. Set to 0 to disable this behavior.
 * 
 * Default is 700
 * @param retention_time: Time in milliseconds during which the detection status ERROR_NOTHING_DETECTED is changed to 
 * ERROR_PARTIALLY_VISIBLE_TOO_CLOSE if no document was detected following the detection of a partially visible 
 * document. Set to 0 to disable this behavior.
 * 
 * Default is 1500
 * @param minimum_brightness: Minimum brightness of a partially visible potential document. Increasing this value can reduce the number 
 * of spurious detections.
 * 
 * Default is 0
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_partially_visible_document_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_partially_visible_document_configuration_create(
    bool allow_partially_visible_documents,
    int accumulation_duration,
    int retention_time,
    int minimum_brightness,
    scanbotsdk_partially_visible_document_configuration_t** result);

/**
 * @brief Creates a new instance of scanbotsdk_partially_visible_document_configuration_t with given required params and stores it in the location specified by the last argument.
 * @ingroup c_document_scanner
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_partially_visible_document_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_partially_visible_document_configuration_create_with_defaults(
    scanbotsdk_partially_visible_document_configuration_t** result);


/**
 * @brief Frees the memory allocated for the instance of scanbotsdk_partially_visible_document_configuration_t. If null is passed, the function does nothing.
 * @ingroup c_document_scanner
 * @param object: Pointer to the instance of scanbotsdk_partially_visible_document_configuration_t to be freed
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_partially_visible_document_configuration_free(scanbotsdk_partially_visible_document_configuration_t* object);

/**
 * @brief Returns value of allow_partially_visible_documents field of the given object.
 * @ingroup c_document_scanner
 * @details If true, the document scanner will return a status of ERROR_PARTIALLY_VISIBLE or ERROR_PARTIALLY_VISIBLE_TOO_CLOSE 
 * if a document-like shape is detected, but not all four corners of the document are visible. 
 * If false, a status of ERROR_NOTHING_DETECTED will be returned instead.
 * 
 * Default is false
 * @param self: Pointer to the instance of scanbotsdk_partially_visible_document_configuration_t
 * @param allow_partially_visible_documents: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_partially_visible_document_configuration_get_allow_partially_visible_documents(scanbotsdk_partially_visible_document_configuration_t* self, bool* allow_partially_visible_documents);
/**
 * @brief Sets value of allow_partially_visible_documents field of the given object.
 * @ingroup c_document_scanner
 * @details If true, the document scanner will return a status of ERROR_PARTIALLY_VISIBLE or ERROR_PARTIALLY_VISIBLE_TOO_CLOSE 
 * if a document-like shape is detected, but not all four corners of the document are visible. 
 * If false, a status of ERROR_NOTHING_DETECTED will be returned instead.
 * 
 * Default is false
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_partially_visible_document_configuration_t, the field of which will be set
 * @param allow_partially_visible_documents: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_partially_visible_document_configuration_set_allow_partially_visible_documents(scanbotsdk_partially_visible_document_configuration_t* self, bool allow_partially_visible_documents);

/**
 * @brief Returns value of accumulation_duration field of the given object.
 * @ingroup c_document_scanner
 * @details Duration in milliseconds over which the document has to be detected as partially visible. If on any frame the 
 * document is not detected as partially visible, or detected as having a completely different Displacement, the 
 * accumulation will be reset. During the accumulation, the document scanner will return a status of 
 * ERROR_NOTHING_DETECTED instead of one of the partially visible statuses. Set to 0 to disable this behavior.
 * 
 * Default is 700
 * @param self: Pointer to the instance of scanbotsdk_partially_visible_document_configuration_t
 * @param accumulation_duration: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_partially_visible_document_configuration_get_accumulation_duration(scanbotsdk_partially_visible_document_configuration_t* self, int* accumulation_duration);
/**
 * @brief Sets value of accumulation_duration field of the given object.
 * @ingroup c_document_scanner
 * @details Duration in milliseconds over which the document has to be detected as partially visible. If on any frame the 
 * document is not detected as partially visible, or detected as having a completely different Displacement, the 
 * accumulation will be reset. During the accumulation, the document scanner will return a status of 
 * ERROR_NOTHING_DETECTED instead of one of the partially visible statuses. Set to 0 to disable this behavior.
 * 
 * Default is 700
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_partially_visible_document_configuration_t, the field of which will be set
 * @param accumulation_duration: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_partially_visible_document_configuration_set_accumulation_duration(scanbotsdk_partially_visible_document_configuration_t* self, int accumulation_duration);

/**
 * @brief Returns value of retention_time field of the given object.
 * @ingroup c_document_scanner
 * @details Time in milliseconds during which the detection status ERROR_NOTHING_DETECTED is changed to 
 * ERROR_PARTIALLY_VISIBLE_TOO_CLOSE if no document was detected following the detection of a partially visible 
 * document. Set to 0 to disable this behavior.
 * 
 * Default is 1500
 * @param self: Pointer to the instance of scanbotsdk_partially_visible_document_configuration_t
 * @param retention_time: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_partially_visible_document_configuration_get_retention_time(scanbotsdk_partially_visible_document_configuration_t* self, int* retention_time);
/**
 * @brief Sets value of retention_time field of the given object.
 * @ingroup c_document_scanner
 * @details Time in milliseconds during which the detection status ERROR_NOTHING_DETECTED is changed to 
 * ERROR_PARTIALLY_VISIBLE_TOO_CLOSE if no document was detected following the detection of a partially visible 
 * document. Set to 0 to disable this behavior.
 * 
 * Default is 1500
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_partially_visible_document_configuration_t, the field of which will be set
 * @param retention_time: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_partially_visible_document_configuration_set_retention_time(scanbotsdk_partially_visible_document_configuration_t* self, int retention_time);

/**
 * @brief Returns value of minimum_brightness field of the given object.
 * @ingroup c_document_scanner
 * @details Minimum brightness of a partially visible potential document. Increasing this value can reduce the number 
 * of spurious detections.
 * 
 * Default is 0
 * @param self: Pointer to the instance of scanbotsdk_partially_visible_document_configuration_t
 * @param minimum_brightness: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_partially_visible_document_configuration_get_minimum_brightness(scanbotsdk_partially_visible_document_configuration_t* self, int* minimum_brightness);
/**
 * @brief Sets value of minimum_brightness field of the given object.
 * @ingroup c_document_scanner
 * @details Minimum brightness of a partially visible potential document. Increasing this value can reduce the number 
 * of spurious detections.
 * 
 * Default is 0
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_partially_visible_document_configuration_t, the field of which will be set
 * @param minimum_brightness: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_partially_visible_document_configuration_set_minimum_brightness(scanbotsdk_partially_visible_document_configuration_t* self, int minimum_brightness);


/**
 * @brief scanbotsdk_document_scanner_configuration_t class
 * @details Configuration for the document scanner.
 * @ingroup c_document_scanner
*/
typedef struct scanbotsdk_document_scanner_configuration_t scanbotsdk_document_scanner_configuration_t;

/**
 * @brief Creates a new instance of scanbotsdk_document_scanner_configuration with given params and stores it in the location specified by the last argument.
 * @ingroup c_document_scanner
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param engine_mode: The engine to use for document scanning.
 * 
 * Default is ML
 * @param processing_mode: In live mode, the document scanner will return only the best document contour. In single-shot mode it will return additional document contours, suitable for use in the cropping screen.
 * 
 * Default is AUTO
 * @param parameters: Initial parameters for the document scanner.
 * The value must not be null.
 * @param partially_visible_document_configuration: Configuration for handling partially visible documents.
 * The value must not be null.
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_document_scanner_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_scanner_configuration_create(
    scanbotsdk_document_scanner_engine_mode_t engine_mode,
    scanbotsdk_processing_mode_t processing_mode,
    scanbotsdk_document_scanner_parameters_t* parameters,
    scanbotsdk_partially_visible_document_configuration_t* partially_visible_document_configuration,
    scanbotsdk_document_scanner_configuration_t** result);

/**
 * @brief Creates a new instance of scanbotsdk_document_scanner_configuration_t with given required params and stores it in the location specified by the last argument.
 * @ingroup c_document_scanner
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_document_scanner_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_scanner_configuration_create_with_defaults(
    scanbotsdk_document_scanner_configuration_t** result);


/**
 * @brief Frees the memory allocated for the instance of scanbotsdk_document_scanner_configuration_t. If null is passed, the function does nothing.
 * @ingroup c_document_scanner
 * @param object: Pointer to the instance of scanbotsdk_document_scanner_configuration_t to be freed
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_scanner_configuration_free(scanbotsdk_document_scanner_configuration_t* object);

/**
 * @brief Returns value of engine_mode field of the given object.
 * @ingroup c_document_scanner
 * @details The engine to use for document scanning.
 * 
 * Default is ML
 * @param self: Pointer to the instance of scanbotsdk_document_scanner_configuration_t
 * @param engine_mode: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_scanner_configuration_get_engine_mode(scanbotsdk_document_scanner_configuration_t* self, scanbotsdk_document_scanner_engine_mode_t* engine_mode);
/**
 * @brief Sets value of engine_mode field of the given object.
 * @ingroup c_document_scanner
 * @details The engine to use for document scanning.
 * 
 * Default is ML
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_document_scanner_configuration_t, the field of which will be set
 * @param engine_mode: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_scanner_configuration_set_engine_mode(scanbotsdk_document_scanner_configuration_t* self, scanbotsdk_document_scanner_engine_mode_t engine_mode);

/**
 * @brief Returns value of processing_mode field of the given object.
 * @ingroup c_document_scanner
 * @details In live mode, the document scanner will return only the best document contour. In single-shot mode it will return additional document contours, suitable for use in the cropping screen.
 * 
 * Default is AUTO
 * @param self: Pointer to the instance of scanbotsdk_document_scanner_configuration_t
 * @param processing_mode: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_scanner_configuration_get_processing_mode(scanbotsdk_document_scanner_configuration_t* self, scanbotsdk_processing_mode_t* processing_mode);
/**
 * @brief Sets value of processing_mode field of the given object.
 * @ingroup c_document_scanner
 * @details In live mode, the document scanner will return only the best document contour. In single-shot mode it will return additional document contours, suitable for use in the cropping screen.
 * 
 * Default is AUTO
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_document_scanner_configuration_t, the field of which will be set
 * @param processing_mode: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_scanner_configuration_set_processing_mode(scanbotsdk_document_scanner_configuration_t* self, scanbotsdk_processing_mode_t processing_mode);

/**
 * @brief Returns value of parameters field of the given object. The returned pointers do NOT own the underlying object, caller must not free them.
 * @ingroup c_document_scanner
 * @details Initial parameters for the document scanner.
 * @param self: Pointer to the instance of scanbotsdk_document_scanner_configuration_t
 * @param parameters: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_scanner_configuration_get_parameters(scanbotsdk_document_scanner_configuration_t* self, scanbotsdk_document_scanner_parameters_t** parameters);
/**
 * @brief Sets value of parameters field of the given object.
 * @ingroup c_document_scanner
 * @details Initial parameters for the document scanner.
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_document_scanner_configuration_t, the field of which will be set
 * @param parameters: The value to be set. Must not be null.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_scanner_configuration_set_parameters(scanbotsdk_document_scanner_configuration_t* self, scanbotsdk_document_scanner_parameters_t* parameters);

/**
 * @brief Returns value of partially_visible_document_configuration field of the given object. The returned pointers do NOT own the underlying object, caller must not free them.
 * @ingroup c_document_scanner
 * @details Configuration for handling partially visible documents.
 * @param self: Pointer to the instance of scanbotsdk_document_scanner_configuration_t
 * @param partially_visible_document_configuration: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_scanner_configuration_get_partially_visible_document_configuration(scanbotsdk_document_scanner_configuration_t* self, scanbotsdk_partially_visible_document_configuration_t** partially_visible_document_configuration);
/**
 * @brief Sets value of partially_visible_document_configuration field of the given object.
 * @ingroup c_document_scanner
 * @details Configuration for handling partially visible documents.
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_document_scanner_configuration_t, the field of which will be set
 * @param partially_visible_document_configuration: The value to be set. Must not be null.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_scanner_configuration_set_partially_visible_document_configuration(scanbotsdk_document_scanner_configuration_t* self, scanbotsdk_partially_visible_document_configuration_t* partially_visible_document_configuration);


/**
 * @brief scanbotsdk_document_displacement_t enum
 * @details The displacement of the document from the image center if the document is partially visible.
 * @ingroup c_document_scanner
*/
typedef enum scanbotsdk_document_displacement_t {

    /**The document is fully visible.*/
    SCANBOTSDK_DOCUMENT_DISPLACEMENT_NONE = 0,

    /**The document is partially visible and occupies the upper part of the image.*/
    SCANBOTSDK_DOCUMENT_DISPLACEMENT_UP = 1,

    /**The document is partially visible and occupies the upper right part of the image.*/
    SCANBOTSDK_DOCUMENT_DISPLACEMENT_UPPER_RIGHT = 2,

    /**The document is partially visible and occupies the right part of the image.*/
    SCANBOTSDK_DOCUMENT_DISPLACEMENT_RIGHT = 3,

    /**The document is partially visible and occupies the lower right part of the image.*/
    SCANBOTSDK_DOCUMENT_DISPLACEMENT_LOWER_RIGHT = 4,

    /**The document is partially visible and occupies the lower part of the image.*/
    SCANBOTSDK_DOCUMENT_DISPLACEMENT_DOWN = 5,

    /**The document is partially visible and occupies the lower left part of the image.*/
    SCANBOTSDK_DOCUMENT_DISPLACEMENT_LOWER_LEFT = 6,

    /**The document is partially visible and occupies the left part of the image.*/
    SCANBOTSDK_DOCUMENT_DISPLACEMENT_LEFT = 7,

    /**The document is partially visible and occupies the upper left part of the image.*/
    SCANBOTSDK_DOCUMENT_DISPLACEMENT_UPPER_LEFT = 8,

} scanbotsdk_document_displacement_t;

/**
 * @brief Returns the string representation of the given scanbotsdk_document_displacement_t value.
 * @ingroup c_document_scanner
 * @details The returned string doesn't need to be freed.
 * @param value: The value to be converted to string.
 * @param result: Pointer to a variable that will store the string representation of the value.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_displacement_t_to_string(scanbotsdk_document_displacement_t value, const char** result);

/**
 * @brief scanbotsdk_document_detection_status_t enum
 * @details Status of the document detection.
 * @ingroup c_document_scanner
*/
typedef enum scanbotsdk_document_detection_status_t {

    /**Detection has not yet happened.*/
    SCANBOTSDK_DOCUMENT_DETECTION_STATUS_NOT_ACQUIRED = 0,

    /**An acceptable document was detected.*/
    SCANBOTSDK_DOCUMENT_DETECTION_STATUS_OK = 1,

    /**A document was detected, but it is too small.*/
    SCANBOTSDK_DOCUMENT_DETECTION_STATUS_OK_BUT_TOO_SMALL = 2,

    /**A document was detected, but it has too much perspective distortion.*/
    SCANBOTSDK_DOCUMENT_DETECTION_STATUS_OK_BUT_BAD_ANGLES = 3,

    /**A document was detected, but its aspect ratio is not acceptable.*/
    SCANBOTSDK_DOCUMENT_DETECTION_STATUS_OK_BUT_BAD_ASPECT_RATIO = 4,

    /**A document was detected, but its orientation does not match the input image orientation.*/
    SCANBOTSDK_DOCUMENT_DETECTION_STATUS_OK_BUT_ORIENTATION_MISMATCH = 5,

    /**A document was detected, but its center is too far away from the input image center.
    
    Deprecation Warning: This status is never returned by the document scanner.*/
    SCANBOTSDK_DOCUMENT_DETECTION_STATUS_OK_BUT_OFF_CENTER = 6,

    /**A document was detected, but it is too dark.*/
    SCANBOTSDK_DOCUMENT_DETECTION_STATUS_OK_BUT_TOO_DARK = 7,

    /**No document was detected.*/
    SCANBOTSDK_DOCUMENT_DETECTION_STATUS_ERROR_NOTHING_DETECTED = 8,

    /**A document was detected, but not all of its corners are visible.*/
    SCANBOTSDK_DOCUMENT_DETECTION_STATUS_ERROR_PARTIALLY_VISIBLE = 9,

    /**A document was detected, but not all of its corners are visible and the document is too close to the camera.*/
    SCANBOTSDK_DOCUMENT_DETECTION_STATUS_ERROR_PARTIALLY_VISIBLE_TOO_CLOSE = 10,

    /**No document was detected, likely because the input image is too dark.*/
    SCANBOTSDK_DOCUMENT_DETECTION_STATUS_ERROR_TOO_DARK = 11,

    /**No document was detected, likely because the input image is too noisy or has a complex background.
    
    Deprecation Warning: This status is never returned by the document scanner.*/
    SCANBOTSDK_DOCUMENT_DETECTION_STATUS_ERROR_TOO_NOISY = 12,

} scanbotsdk_document_detection_status_t;

/**
 * @brief Returns the string representation of the given scanbotsdk_document_detection_status_t value.
 * @ingroup c_document_scanner
 * @details The returned string doesn't need to be freed.
 * @param value: The value to be converted to string.
 * @param result: Pointer to a variable that will store the string representation of the value.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_detection_status_t_to_string(scanbotsdk_document_detection_status_t value, const char** result);

/**
 * @brief scanbotsdk_document_detection_scores_t class
 * @details The total and partial scores for the detected document contour.
 * @ingroup c_document_scanner
*/
typedef struct scanbotsdk_document_detection_scores_t scanbotsdk_document_detection_scores_t;

/**
 * @brief Creates a new instance of scanbotsdk_document_detection_scores with given params and stores it in the location specified by the last argument.
 * @ingroup c_document_scanner
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param total_score: Weighted sum of all partial scores.
 * @param distance_score: 100 points, if the center of the contour is exactly in the image center.
 * @param angle_score: 100 points, if all angles are 90 degrees.
 * @param size_score: 100 points, if the contour occupies at least 50% of the area of the image.
 * @param aspect_ratio_score: 100 points, if the aspect ratio matches exactly one of the given aspect ratios.
 * @param line_coverage_score: Percentage of the document contour that the edge detector was able to find (in LEGACY engine mode only).
 * @param width_score: Percentage of the image width taken by the detected document.
 * @param height_score: Percentage of the image height taken by the detected document.
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_document_detection_scores_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_detection_scores_create(
    double total_score,
    double distance_score,
    double angle_score,
    double size_score,
    double aspect_ratio_score,
    double line_coverage_score,
    double width_score,
    double height_score,
    scanbotsdk_document_detection_scores_t** result);


/**
 * @brief Frees the memory allocated for the instance of scanbotsdk_document_detection_scores_t. If null is passed, the function does nothing.
 * @ingroup c_document_scanner
 * @param object: Pointer to the instance of scanbotsdk_document_detection_scores_t to be freed
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_detection_scores_free(scanbotsdk_document_detection_scores_t* object);

/**
 * @brief Returns value of total_score field of the given object.
 * @ingroup c_document_scanner
 * @details Weighted sum of all partial scores.
 * @param self: Pointer to the instance of scanbotsdk_document_detection_scores_t
 * @param total_score: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_detection_scores_get_total_score(scanbotsdk_document_detection_scores_t* self, double* total_score);

/**
 * @brief Returns value of distance_score field of the given object.
 * @ingroup c_document_scanner
 * @details 100 points, if the center of the contour is exactly in the image center.
 * @param self: Pointer to the instance of scanbotsdk_document_detection_scores_t
 * @param distance_score: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_detection_scores_get_distance_score(scanbotsdk_document_detection_scores_t* self, double* distance_score);

/**
 * @brief Returns value of angle_score field of the given object.
 * @ingroup c_document_scanner
 * @details 100 points, if all angles are 90 degrees.
 * @param self: Pointer to the instance of scanbotsdk_document_detection_scores_t
 * @param angle_score: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_detection_scores_get_angle_score(scanbotsdk_document_detection_scores_t* self, double* angle_score);

/**
 * @brief Returns value of size_score field of the given object.
 * @ingroup c_document_scanner
 * @details 100 points, if the contour occupies at least 50% of the area of the image.
 * @param self: Pointer to the instance of scanbotsdk_document_detection_scores_t
 * @param size_score: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_detection_scores_get_size_score(scanbotsdk_document_detection_scores_t* self, double* size_score);

/**
 * @brief Returns value of aspect_ratio_score field of the given object.
 * @ingroup c_document_scanner
 * @details 100 points, if the aspect ratio matches exactly one of the given aspect ratios.
 * @param self: Pointer to the instance of scanbotsdk_document_detection_scores_t
 * @param aspect_ratio_score: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_detection_scores_get_aspect_ratio_score(scanbotsdk_document_detection_scores_t* self, double* aspect_ratio_score);

/**
 * @brief Returns value of line_coverage_score field of the given object.
 * @ingroup c_document_scanner
 * @details Percentage of the document contour that the edge detector was able to find (in LEGACY engine mode only).
 * @param self: Pointer to the instance of scanbotsdk_document_detection_scores_t
 * @param line_coverage_score: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_detection_scores_get_line_coverage_score(scanbotsdk_document_detection_scores_t* self, double* line_coverage_score);

/**
 * @brief Returns value of width_score field of the given object.
 * @ingroup c_document_scanner
 * @details Percentage of the image width taken by the detected document.
 * @param self: Pointer to the instance of scanbotsdk_document_detection_scores_t
 * @param width_score: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_detection_scores_get_width_score(scanbotsdk_document_detection_scores_t* self, double* width_score);

/**
 * @brief Returns value of height_score field of the given object.
 * @ingroup c_document_scanner
 * @details Percentage of the image height taken by the detected document.
 * @param self: Pointer to the instance of scanbotsdk_document_detection_scores_t
 * @param height_score: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_detection_scores_get_height_score(scanbotsdk_document_detection_scores_t* self, double* height_score);


/**
 * @brief scanbotsdk_document_detection_result_t class
 * @details Result of the document contour detection.
 * @ingroup c_document_scanner
*/
typedef struct scanbotsdk_document_detection_result_t scanbotsdk_document_detection_result_t;

/**
 * @brief Frees the memory allocated for the instance of scanbotsdk_document_detection_result_t. If null is passed, the function does nothing.
 * @ingroup c_document_scanner
 * @param object: Pointer to the instance of scanbotsdk_document_detection_result_t to be freed
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_detection_result_free(scanbotsdk_document_detection_result_t* object);

/**
 * @brief Returns value of status field of the given object.
 * @ingroup c_document_scanner
 * @details Detection status.
 * 
 * Default is NOT_ACQUIRED
 * @param self: Pointer to the instance of scanbotsdk_document_detection_result_t
 * @param status: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_detection_result_get_status(scanbotsdk_document_detection_result_t* self, scanbotsdk_document_detection_status_t* status);

/**
 * @brief Returns value of detection_scores field of the given object. The returned pointers do NOT own the underlying object, caller must not free them.
 * @ingroup c_document_scanner
 * @details The total and partial scores for the detected quad.
 * @param self: Pointer to the instance of scanbotsdk_document_detection_result_t
 * @param detection_scores: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_detection_result_get_detection_scores(scanbotsdk_document_detection_result_t* self, scanbotsdk_document_detection_scores_t** detection_scores);

/**
 * @brief Returns value of points field of the given object. The returned value is direct view into memory, no pre-allocations needed.
 * @ingroup c_document_scanner
 * @details Absolute coordinates of the detected document contour in image space 
 * sorted in clockwise order, starting from the top left corner.
 * @param self: Pointer to the instance of scanbotsdk_document_detection_result_t
 * @param points: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_detection_result_get_points(scanbotsdk_document_detection_result_t* self, scanbotsdk_point_t** points);
/**
 * @brief Returns size of points array.
 * @ingroup c_document_scanner
 * @param self: Pointer to the instance of scanbotsdk_document_detection_result_t
 * @param size: Pointer to a variable that will store the size.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_detection_result_get_points_size(scanbotsdk_document_detection_result_t* self, size_t* size);

/**
 * @brief Returns value of horizontal_lines field of the given object. The returned pointers do NOT own the underlying object, caller must not free them.
 * @ingroup c_document_scanner
 * @details All detected horizontal lines in image space.
 * @param self: Pointer to the instance of scanbotsdk_document_detection_result_t
 @param size: Size of the pre-allocated array. Must be equal to the size obtained by calling the corresponding _size function.
 * @param horizontal_lines: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_detection_result_get_horizontal_lines(scanbotsdk_document_detection_result_t* self, scanbotsdk_line_segment_int_t** horizontal_lines, size_t size);
/**
 * @brief Returns size of horizontal_lines array.
 * @ingroup c_document_scanner
 * @param self: Pointer to the instance of scanbotsdk_document_detection_result_t
 * @param size: Pointer to a variable that will store the size.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_detection_result_get_horizontal_lines_size(scanbotsdk_document_detection_result_t* self, size_t* size);

/**
 * @brief Returns value of vertical_lines field of the given object. The returned pointers do NOT own the underlying object, caller must not free them.
 * @ingroup c_document_scanner
 * @details All detected vertical lines in image space.
 * @param self: Pointer to the instance of scanbotsdk_document_detection_result_t
 @param size: Size of the pre-allocated array. Must be equal to the size obtained by calling the corresponding _size function.
 * @param vertical_lines: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_detection_result_get_vertical_lines(scanbotsdk_document_detection_result_t* self, scanbotsdk_line_segment_int_t** vertical_lines, size_t size);
/**
 * @brief Returns size of vertical_lines array.
 * @ingroup c_document_scanner
 * @param self: Pointer to the instance of scanbotsdk_document_detection_result_t
 * @param size: Pointer to a variable that will store the size.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_detection_result_get_vertical_lines_size(scanbotsdk_document_detection_result_t* self, size_t* size);

/**
 * @brief Returns value of points_normalized field of the given object. The returned value is direct view into memory, no pre-allocations needed.
 * @ingroup c_document_scanner
 * @details Normalized coordinates of the detected document contour in image space 
 * sorted in clockwise order, starting from the top left corner.
 * @param self: Pointer to the instance of scanbotsdk_document_detection_result_t
 * @param points_normalized: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_detection_result_get_points_normalized(scanbotsdk_document_detection_result_t* self, scanbotsdk_pointf_t** points_normalized);
/**
 * @brief Returns size of points_normalized array.
 * @ingroup c_document_scanner
 * @param self: Pointer to the instance of scanbotsdk_document_detection_result_t
 * @param size: Pointer to a variable that will store the size.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_detection_result_get_points_normalized_size(scanbotsdk_document_detection_result_t* self, size_t* size);

/**
 * @brief Returns value of horizontal_lines_normalized field of the given object. The returned pointers do NOT own the underlying object, caller must not free them.
 * @ingroup c_document_scanner
 * @details Normalized horizontal lines in image space.
 * @param self: Pointer to the instance of scanbotsdk_document_detection_result_t
 @param size: Size of the pre-allocated array. Must be equal to the size obtained by calling the corresponding _size function.
 * @param horizontal_lines_normalized: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_detection_result_get_horizontal_lines_normalized(scanbotsdk_document_detection_result_t* self, scanbotsdk_line_segment_float_t** horizontal_lines_normalized, size_t size);
/**
 * @brief Returns size of horizontal_lines_normalized array.
 * @ingroup c_document_scanner
 * @param self: Pointer to the instance of scanbotsdk_document_detection_result_t
 * @param size: Pointer to a variable that will store the size.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_detection_result_get_horizontal_lines_normalized_size(scanbotsdk_document_detection_result_t* self, size_t* size);

/**
 * @brief Returns value of vertical_lines_normalized field of the given object. The returned pointers do NOT own the underlying object, caller must not free them.
 * @ingroup c_document_scanner
 * @details Normalized vertical lines in image space.
 * @param self: Pointer to the instance of scanbotsdk_document_detection_result_t
 @param size: Size of the pre-allocated array. Must be equal to the size obtained by calling the corresponding _size function.
 * @param vertical_lines_normalized: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_detection_result_get_vertical_lines_normalized(scanbotsdk_document_detection_result_t* self, scanbotsdk_line_segment_float_t** vertical_lines_normalized, size_t size);
/**
 * @brief Returns size of vertical_lines_normalized array.
 * @ingroup c_document_scanner
 * @param self: Pointer to the instance of scanbotsdk_document_detection_result_t
 * @param size: Pointer to a variable that will store the size.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_detection_result_get_vertical_lines_normalized_size(scanbotsdk_document_detection_result_t* self, size_t* size);

/**
 * @brief Returns value of aspect_ratio field of the given object.
 * @ingroup c_document_scanner
 * @details Aspect ratio of the detected document contour.
 * @param self: Pointer to the instance of scanbotsdk_document_detection_result_t
 * @param aspect_ratio: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_detection_result_get_aspect_ratio(scanbotsdk_document_detection_result_t* self, double* aspect_ratio);

/**
 * @brief Returns value of average_brightness field of the given object.
 * @ingroup c_document_scanner
 * @details Average brightness, calculated as the average
 * of the Value channel in the HSV color space of:
 * - the whole image, if no document was detected
 * - the document crop, if a document was detected
 * Ranges from 0 to 255.
 * 
 * Default is 0
 * @param self: Pointer to the instance of scanbotsdk_document_detection_result_t
 * @param average_brightness: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_detection_result_get_average_brightness(scanbotsdk_document_detection_result_t* self, int* average_brightness);

/**
 * @brief Returns value of displacement field of the given object.
 * @ingroup c_document_scanner
 * @details The displacement of the document from the image center if the document is partially visible.
 * 
 * Default is NONE
 * @param self: Pointer to the instance of scanbotsdk_document_detection_result_t
 * @param displacement: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_detection_result_get_displacement(scanbotsdk_document_detection_result_t* self, scanbotsdk_document_displacement_t* displacement);

/**
 * @brief Returns value of displacement_vector field of the given object.
 * @ingroup c_document_scanner
 * @details The displacement vector of the document from the image center if the document is partially visible
 * in normalized coordinates.
 * @param self: Pointer to the instance of scanbotsdk_document_detection_result_t
 * @param displacement_vector: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_detection_result_get_displacement_vector(scanbotsdk_document_detection_result_t* self, scanbotsdk_pointf_t* displacement_vector);


/**
 * @brief scanbotsdk_document_scanning_result_t class
 * @details Result of the document detection followed by cropping of the found document.
 * @ingroup c_document_scanner
*/
typedef struct scanbotsdk_document_scanning_result_t scanbotsdk_document_scanning_result_t;

/**
 * @brief Frees the memory allocated for the instance of scanbotsdk_document_scanning_result_t. If null is passed, the function does nothing.
 * @ingroup c_document_scanner
 * @param object: Pointer to the instance of scanbotsdk_document_scanning_result_t to be freed
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_scanning_result_free(scanbotsdk_document_scanning_result_t* object);

/**
 * @brief Returns value of detection_result field of the given object. The returned pointers do NOT own the underlying object, caller must not free them.
 * @ingroup c_document_scanner
 * @details Result of the document contour detection.
 * @param self: Pointer to the instance of scanbotsdk_document_scanning_result_t
 * @param detection_result: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_scanning_result_get_detection_result(scanbotsdk_document_scanning_result_t* self, scanbotsdk_document_detection_result_t** detection_result);

/**
 * @brief Returns value of cropped_image field of the given object. The returned pointers do NOT own the underlying object, caller must not free them.
 * @ingroup c_document_scanner
 * @details Cropped document image.
 * @param self: Pointer to the instance of scanbotsdk_document_scanning_result_t
 * @param cropped_image: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_scanning_result_get_cropped_image(scanbotsdk_document_scanning_result_t* self, scanbotsdk_image_t** cropped_image);


#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* SCANBOTSDK_DOCUMENTSCANNERTYPES_H */