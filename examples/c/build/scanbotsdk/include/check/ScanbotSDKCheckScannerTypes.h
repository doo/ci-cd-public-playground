// Auto-generated with ScanbotSDKCodegenV3. Modifications will be overwritten.
// Generated from SchemasV3/CoreSchemas/schemas/CheckScannerTypes.yaml
/**
 * @file ScanbotSDKCheckScannerTypes.h
 */

#pragma once
#ifndef SCANBOTSDK_CHECKSCANNERTYPES_H
#define SCANBOTSDK_CHECKSCANNERTYPES_H


#include <ScanbotSDKImage.h>
#include <common/ScanbotSDKCommonTypes.h>
#include <document_scanner/ScanbotSDKDocumentScannerTypes.h>
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
 * @brief scanbotsdk_check_document_detection_mode_t enum
 * @details Check document detection and extraction mode.
 * @ingroup c_check
*/
typedef enum scanbotsdk_check_document_detection_mode_t {

    /**Document detection is not performed. Successful check scans will only contain the machine-readable check data without a full crop of the check.*/
    SCANBOTSDK_CHECK_DOCUMENT_DETECTION_MODE_DISABLED = 0,

    /**Document scanner will be used to locate the complete check in the input image. The documentDetectionResult result field will contain the result of document detection.*/
    SCANBOTSDK_CHECK_DOCUMENT_DETECTION_MODE_DETECT_DOCUMENT = 1,

    /**Document scanner will be used to locate the complete check in the input image. The documentDetectionResult result field will contain the result of document detection. The croppedImage result field will contain a crop of the entire check.*/
    SCANBOTSDK_CHECK_DOCUMENT_DETECTION_MODE_DETECT_AND_CROP_DOCUMENT = 2,

} scanbotsdk_check_document_detection_mode_t;

/**
 * @brief Returns the string representation of the given scanbotsdk_check_document_detection_mode_t value.
 * @ingroup c_check
 * @details The returned string doesn't need to be freed.
 * @param value: The value to be converted to string.
 * @param result: Pointer to a variable that will store the string representation of the value.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_check_document_detection_mode_t_to_string(scanbotsdk_check_document_detection_mode_t value, const char** result);

/**
 * @brief scanbotsdk_check_magnetic_ink_strip_scanning_status_t enum
 * @details Check magnetic ink (MICR) strip scanning status.
 * @ingroup c_check
*/
typedef enum scanbotsdk_check_magnetic_ink_strip_scanning_status_t {

    /**Scanning successful.*/
    SCANBOTSDK_CHECK_MAGNETIC_INK_STRIP_SCANNING_STATUS_SUCCESS = 0,

    /**Magnetic ink strip was found, but validation failed, because of a format violation, an unsupported format, or an OCR error.*/
    SCANBOTSDK_CHECK_MAGNETIC_INK_STRIP_SCANNING_STATUS_INCOMPLETE_VALIDATION = 1,

    /**Magnetic ink strip was not found.*/
    SCANBOTSDK_CHECK_MAGNETIC_INK_STRIP_SCANNING_STATUS_ERROR_NOTHING_FOUND = 2,

} scanbotsdk_check_magnetic_ink_strip_scanning_status_t;

/**
 * @brief Returns the string representation of the given scanbotsdk_check_magnetic_ink_strip_scanning_status_t value.
 * @ingroup c_check
 * @details The returned string doesn't need to be freed.
 * @param value: The value to be converted to string.
 * @param result: Pointer to a variable that will store the string representation of the value.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_check_magnetic_ink_strip_scanning_status_t_to_string(scanbotsdk_check_magnetic_ink_strip_scanning_status_t value, const char** result);

/**
 * @brief scanbotsdk_check_scanning_result_t class
 * @details The result of check scanning.
 * @ingroup c_check
*/
typedef struct scanbotsdk_check_scanning_result_t scanbotsdk_check_scanning_result_t;

/**
 * @brief Frees the memory allocated for the instance of scanbotsdk_check_scanning_result_t. If null is passed, the function does nothing.
 * @ingroup c_check
 * @param object: Pointer to the instance of scanbotsdk_check_scanning_result_t to be freed
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_check_scanning_result_free(scanbotsdk_check_scanning_result_t* object);

/**
 * @brief Returns value of status field of the given object.
 * @ingroup c_check
 * @details Magnetic ink strip scanning status.
 * 
 * Default is ERROR_NOTHING_FOUND
 * @param self: Pointer to the instance of scanbotsdk_check_scanning_result_t
 * @param status: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_check_scanning_result_get_status(scanbotsdk_check_scanning_result_t* self, scanbotsdk_check_magnetic_ink_strip_scanning_status_t* status);

/**
 * @brief Returns value of check field of the given object. The returned pointers do NOT own the underlying object, caller must not free them.
 * @ingroup c_check
 * @details Generic document containing check data. Not present, if status is FAIL.
 * @param self: Pointer to the instance of scanbotsdk_check_scanning_result_t
 * @param check: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_check_scanning_result_get_check(scanbotsdk_check_scanning_result_t* self, scanbotsdk_generic_document_t** check);

/**
 * @brief Returns value of document_detection_result field of the given object. The returned pointers do NOT own the underlying object, caller must not free them.
 * @ingroup c_check
 * @details The result of document detection. Will be set only if detectDocument in the configuration is set to true. Check scanning may still succeed even if the whole document is not visible in the input image and the complete document could not be located.
 * @param self: Pointer to the instance of scanbotsdk_check_scanning_result_t
 * @param document_detection_result: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_check_scanning_result_get_document_detection_result(scanbotsdk_check_scanning_result_t* self, scanbotsdk_document_detection_result_t** document_detection_result);

/**
 * @brief Returns value of cropped_image field of the given object. The returned pointers do NOT own the underlying object, caller must not free them.
 * @ingroup c_check
 * @details Crop of the check if documentDetectionMode is set to DETECT_AND_CROP_DOCUMENT. Will be non-empty, only if check recognition succeeded.
 * @param self: Pointer to the instance of scanbotsdk_check_scanning_result_t
 * @param cropped_image: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_check_scanning_result_get_cropped_image(scanbotsdk_check_scanning_result_t* self, scanbotsdk_image_t** cropped_image);


/**
 * @brief scanbotsdk_check_standard_t enum
 * @details Supported check standards.
 * @ingroup c_check
*/
typedef enum scanbotsdk_check_standard_t {

    /**A check compatible with the ASC X9 standard used in the USA.*/
    SCANBOTSDK_CHECK_STANDARD_USA = 0,

    /**A check format commonly used in France.*/
    SCANBOTSDK_CHECK_STANDARD_FRA = 1,

    /**A check format commonly used in Kuwait.*/
    SCANBOTSDK_CHECK_STANDARD_KWT = 2,

    /**A check compatible with the Australian Paper Clearing System cheque standard.*/
    SCANBOTSDK_CHECK_STANDARD_AUS = 3,

    /**A check compatible with the CTS-2010 standard issued by the Reserve Bank of India in 2012.*/
    SCANBOTSDK_CHECK_STANDARD_IND = 4,

    /**A check format commonly used in Israel.*/
    SCANBOTSDK_CHECK_STANDARD_ISR = 5,

    /**A check format commonly used in the United Arab Emirates.*/
    SCANBOTSDK_CHECK_STANDARD_UAE = 6,

    /**A check format commonly used in Canada.*/
    SCANBOTSDK_CHECK_STANDARD_CAN = 7,

} scanbotsdk_check_standard_t;

/**
 * @brief Returns the string representation of the given scanbotsdk_check_standard_t value.
 * @ingroup c_check
 * @details The returned string doesn't need to be freed.
 * @param value: The value to be converted to string.
 * @param result: Pointer to a variable that will store the string representation of the value.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_check_standard_t_to_string(scanbotsdk_check_standard_t value, const char** result);

/**
 * @brief scanbotsdk_check_scanner_configuration_t class
 * @details Configuration of the check scanner.
 * @ingroup c_check
*/
typedef struct scanbotsdk_check_scanner_configuration_t scanbotsdk_check_scanner_configuration_t;

/**
 * @brief Creates a new instance of scanbotsdk_check_scanner_configuration with given params and stores it in the location specified by the last argument.
 * @ingroup c_check
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param document_detection_mode: Document detection to be performed in addition to scanning the machine-readable data in the check.
 * 
 * By default only the machine-readable data is extracted during check scanning. Optionally, the coordinates and a crop of the entire check document can be returned, in addition to the check data.
 * A check scan result may still be successful even if the whole document is not visible in the input image and the complete document could not be located.
 * 
 * If cropping is enabled, check recognition will be performed on the cropped image of the check, which may improve recognition results.
 * 
 * Default is DISABLED
 * @param accepted_check_standards: Accepted check standards. Optional, by default - all checks are accepted.
 * With an empty list no filter is applied and all checks are accepted.
 * @param accepted_check_standards_size: Size of the array accepted_check_standards
 * @param processing_mode: Scanners typically can produce better results from a single image if they are allowed to spend a longer time analyzing it. 
 * 
 * On the other hand, scanners can produce even better results if they can analyze multiple images of the same subject and cross-check and combine the results. 
 * The processing mode tells the scanner whether to optimize for single or multiple images of a subject.
 * 
 * Default is AUTO
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_check_scanner_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_check_scanner_configuration_create(
    scanbotsdk_check_document_detection_mode_t document_detection_mode,
    scanbotsdk_check_standard_t* accepted_check_standards,
    size_t accepted_check_standards_size,
    scanbotsdk_processing_mode_t processing_mode,
    scanbotsdk_check_scanner_configuration_t** result);

/**
 * @brief Creates a new instance of scanbotsdk_check_scanner_configuration_t with given required params and stores it in the location specified by the last argument.
 * @ingroup c_check
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_check_scanner_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_check_scanner_configuration_create_with_defaults(
    scanbotsdk_check_scanner_configuration_t** result);


/**
 * @brief Frees the memory allocated for the instance of scanbotsdk_check_scanner_configuration_t. If null is passed, the function does nothing.
 * @ingroup c_check
 * @param object: Pointer to the instance of scanbotsdk_check_scanner_configuration_t to be freed
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_check_scanner_configuration_free(scanbotsdk_check_scanner_configuration_t* object);

/**
 * @brief Returns value of document_detection_mode field of the given object.
 * @ingroup c_check
 * @details Document detection to be performed in addition to scanning the machine-readable data in the check.
 * 
 * By default only the machine-readable data is extracted during check scanning. Optionally, the coordinates and a crop of the entire check document can be returned, in addition to the check data.
 * A check scan result may still be successful even if the whole document is not visible in the input image and the complete document could not be located.
 * 
 * If cropping is enabled, check recognition will be performed on the cropped image of the check, which may improve recognition results.
 * 
 * Default is DISABLED
 * @param self: Pointer to the instance of scanbotsdk_check_scanner_configuration_t
 * @param document_detection_mode: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_check_scanner_configuration_get_document_detection_mode(scanbotsdk_check_scanner_configuration_t* self, scanbotsdk_check_document_detection_mode_t* document_detection_mode);
/**
 * @brief Sets value of document_detection_mode field of the given object.
 * @ingroup c_check
 * @details Document detection to be performed in addition to scanning the machine-readable data in the check.
 * 
 * By default only the machine-readable data is extracted during check scanning. Optionally, the coordinates and a crop of the entire check document can be returned, in addition to the check data.
 * A check scan result may still be successful even if the whole document is not visible in the input image and the complete document could not be located.
 * 
 * If cropping is enabled, check recognition will be performed on the cropped image of the check, which may improve recognition results.
 * 
 * Default is DISABLED
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_check_scanner_configuration_t, the field of which will be set
 * @param document_detection_mode: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_check_scanner_configuration_set_document_detection_mode(scanbotsdk_check_scanner_configuration_t* self, scanbotsdk_check_document_detection_mode_t document_detection_mode);

/**
 * @brief Returns value of accepted_check_standards field of the given object. The returned value is direct view into memory, no pre-allocations needed.
 * @ingroup c_check
 * @details Accepted check standards. Optional, by default - all checks are accepted.
 * With an empty list no filter is applied and all checks are accepted.
 * @param self: Pointer to the instance of scanbotsdk_check_scanner_configuration_t
 * @param accepted_check_standards: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_check_scanner_configuration_get_accepted_check_standards(scanbotsdk_check_scanner_configuration_t* self, scanbotsdk_check_standard_t** accepted_check_standards);
/**
 * @brief Returns size of accepted_check_standards array.
 * @ingroup c_check
 * @param self: Pointer to the instance of scanbotsdk_check_scanner_configuration_t
 * @param size: Pointer to a variable that will store the size.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_check_scanner_configuration_get_accepted_check_standards_size(scanbotsdk_check_scanner_configuration_t* self, size_t* size);
/**
 * @brief Sets value of accepted_check_standards field of the given object.
 * @ingroup c_check
 * @details Accepted check standards. Optional, by default - all checks are accepted.
 * With an empty list no filter is applied and all checks are accepted.
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_check_scanner_configuration_t, the field of which will be set
 * @param accepted_check_standards: The value to be set.
 * @param accepted_check_standards_size: Size of the array.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_check_scanner_configuration_set_accepted_check_standards(scanbotsdk_check_scanner_configuration_t* self, scanbotsdk_check_standard_t* accepted_check_standards, size_t accepted_check_standards_size);

/**
 * @brief Returns value of processing_mode field of the given object.
 * @ingroup c_check
 * @details Scanners typically can produce better results from a single image if they are allowed to spend a longer time analyzing it. 
 * 
 * On the other hand, scanners can produce even better results if they can analyze multiple images of the same subject and cross-check and combine the results. 
 * The processing mode tells the scanner whether to optimize for single or multiple images of a subject.
 * 
 * Default is AUTO
 * @param self: Pointer to the instance of scanbotsdk_check_scanner_configuration_t
 * @param processing_mode: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_check_scanner_configuration_get_processing_mode(scanbotsdk_check_scanner_configuration_t* self, scanbotsdk_processing_mode_t* processing_mode);
/**
 * @brief Sets value of processing_mode field of the given object.
 * @ingroup c_check
 * @details Scanners typically can produce better results from a single image if they are allowed to spend a longer time analyzing it. 
 * 
 * On the other hand, scanners can produce even better results if they can analyze multiple images of the same subject and cross-check and combine the results. 
 * The processing mode tells the scanner whether to optimize for single or multiple images of a subject.
 * 
 * Default is AUTO
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_check_scanner_configuration_t, the field of which will be set
 * @param processing_mode: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_check_scanner_configuration_set_processing_mode(scanbotsdk_check_scanner_configuration_t* self, scanbotsdk_processing_mode_t processing_mode);


#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* SCANBOTSDK_CHECKSCANNERTYPES_H */