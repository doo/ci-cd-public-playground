// Auto-generated with ScanbotSDKCodegenV3. Modifications will be overwritten.
// Generated from SchemasV3/CoreSchemas/schemas/VINScannerTypes.yaml
/**
 * @file ScanbotSDKVinScannerTypes.h
 */

#pragma once
#ifndef SCANBOTSDK_VINSCANNERTYPES_H
#define SCANBOTSDK_VINSCANNERTYPES_H


#include <ScanbotSDKTypes.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <string.h>
#include <text_pattern/ScanbotSDKTextPatternScannerTypes.h>
#include <ScanbotSDKErrorCode.h>
#include <ScanbotSDKDefs.h>

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief scanbotsdk_vin_barcode_extraction_status_t enum
 * @details Status of the barcode extraction.
 * @ingroup c_vin
*/
typedef enum scanbotsdk_vin_barcode_extraction_status_t {

    /**Barcode containing a VIN was successfully extracted.*/
    SCANBOTSDK_VIN_BARCODE_EXTRACTION_STATUS_SUCCESS = 0,

    /**Barcode was found but it does not contain a VIN.*/
    SCANBOTSDK_VIN_BARCODE_EXTRACTION_STATUS_BARCODE_WITHOUT_VIN = 1,

    /**No barcode was found in the image.*/
    SCANBOTSDK_VIN_BARCODE_EXTRACTION_STATUS_NO_BARCODE_FOUND = 2,

    /**Barcode extraction is disabled in the configuration.*/
    SCANBOTSDK_VIN_BARCODE_EXTRACTION_STATUS_BARCODE_EXTRACTION_DISABLED = 3,

} scanbotsdk_vin_barcode_extraction_status_t;

/**
 * @brief Returns the string representation of the given scanbotsdk_vin_barcode_extraction_status_t value.
 * @ingroup c_vin
 * @details The returned string doesn't need to be freed.
 * @param value: The value to be converted to string.
 * @param result: Pointer to a variable that will store the string representation of the value.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_vin_barcode_extraction_status_t_to_string(scanbotsdk_vin_barcode_extraction_status_t value, const char** result);

/**
 * @brief scanbotsdk_vin_barcode_result_t class
 * @details Result of the barcode scanner.
 * @ingroup c_vin
*/
typedef struct scanbotsdk_vin_barcode_result_t scanbotsdk_vin_barcode_result_t;

/**
 * @brief Frees the memory allocated for the instance of scanbotsdk_vin_barcode_result_t. If null is passed, the function does nothing.
 * @ingroup c_vin
 * @param object: Pointer to the instance of scanbotsdk_vin_barcode_result_t to be freed
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_vin_barcode_result_free(scanbotsdk_vin_barcode_result_t* object);

/**
 * @brief Returns value of extracted_vin field of the given object. The returned pointers do NOT own the underlying object, caller must not free them.
 * @ingroup c_vin
 * @details Text result of the barcode scanner.
 * @param self: Pointer to the instance of scanbotsdk_vin_barcode_result_t
 * @param extracted_vin: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_vin_barcode_result_get_extracted_vin(scanbotsdk_vin_barcode_result_t* self, const char** extracted_vin);

/**
 * @brief Returns value of rectangle field of the given object. The returned value is direct view into memory, no pre-allocations needed.
 * @ingroup c_vin
 * @details Rectangle of the barcode in the image.
 * @param self: Pointer to the instance of scanbotsdk_vin_barcode_result_t
 * @param rectangle: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_vin_barcode_result_get_rectangle(scanbotsdk_vin_barcode_result_t* self, scanbotsdk_point_t** rectangle);
/**
 * @brief Returns size of rectangle array.
 * @ingroup c_vin
 * @param self: Pointer to the instance of scanbotsdk_vin_barcode_result_t
 * @param size: Pointer to a variable that will store the size.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_vin_barcode_result_get_rectangle_size(scanbotsdk_vin_barcode_result_t* self, size_t* size);

/**
 * @brief Returns value of status field of the given object.
 * @ingroup c_vin
 * @details Status of the barcode extraction.
 * @param self: Pointer to the instance of scanbotsdk_vin_barcode_result_t
 * @param status: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_vin_barcode_result_get_status(scanbotsdk_vin_barcode_result_t* self, scanbotsdk_vin_barcode_extraction_status_t* status);


/**
 * @brief scanbotsdk_vin_scanner_result_t class
 * @details Result of the VIN scanner.
 * @ingroup c_vin
*/
typedef struct scanbotsdk_vin_scanner_result_t scanbotsdk_vin_scanner_result_t;

/**
 * @brief Frees the memory allocated for the instance of scanbotsdk_vin_scanner_result_t. If null is passed, the function does nothing.
 * @ingroup c_vin
 * @param object: Pointer to the instance of scanbotsdk_vin_scanner_result_t to be freed
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_vin_scanner_result_free(scanbotsdk_vin_scanner_result_t* object);

/**
 * @brief Returns value of text_result field of the given object. The returned pointers do NOT own the underlying object, caller must not free them.
 * @ingroup c_vin
 * @details Text result of the VIN scanner.
 * @param self: Pointer to the instance of scanbotsdk_vin_scanner_result_t
 * @param text_result: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_vin_scanner_result_get_text_result(scanbotsdk_vin_scanner_result_t* self, scanbotsdk_text_pattern_scanner_result_t** text_result);

/**
 * @brief Returns value of barcode_result field of the given object. The returned pointers do NOT own the underlying object, caller must not free them.
 * @ingroup c_vin
 * @details Barcode result of the VIN scanner.
 * @param self: Pointer to the instance of scanbotsdk_vin_scanner_result_t
 * @param barcode_result: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_vin_scanner_result_get_barcode_result(scanbotsdk_vin_scanner_result_t* self, scanbotsdk_vin_barcode_result_t** barcode_result);


/**
 * @brief scanbotsdk_vin_scanner_configuration_t class
 * @details Configuration for the VIN scanner.
 * @ingroup c_vin
*/
typedef struct scanbotsdk_vin_scanner_configuration_t scanbotsdk_vin_scanner_configuration_t;

/**
 * @brief Creates a new instance of scanbotsdk_vin_scanner_configuration with given params and stores it in the location specified by the last argument.
 * @ingroup c_vin
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param extract_vin_from_barcode: If true, the VIN scanner will also extract VINs from barcodes.
 * Requires a license that allows barcode scanning in addition to VIN scanning.
 * 
 * Default is false
 * @param ocr_resolution_limit: Maximum image size (height or width) for OCR process. 0 - do not rescale.
 * 
 * Default is 0
 * @param maximum_number_of_accumulated_frames: Maximum number of accumulated frames to inspect before actual result is returned.
 * 
 * Default is 3
 * @param minimum_number_of_required_frames_with_equal_scanning_result: Minimum number of accumulated frames that have equal result.
 * 
 * Default is 2
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_vin_scanner_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_vin_scanner_configuration_create(
    bool extract_vin_from_barcode,
    int ocr_resolution_limit,
    int maximum_number_of_accumulated_frames,
    int minimum_number_of_required_frames_with_equal_scanning_result,
    scanbotsdk_vin_scanner_configuration_t** result);

/**
 * @brief Creates a new instance of scanbotsdk_vin_scanner_configuration_t with given required params and stores it in the location specified by the last argument.
 * @ingroup c_vin
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_vin_scanner_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_vin_scanner_configuration_create_with_defaults(
    scanbotsdk_vin_scanner_configuration_t** result);


/**
 * @brief Frees the memory allocated for the instance of scanbotsdk_vin_scanner_configuration_t. If null is passed, the function does nothing.
 * @ingroup c_vin
 * @param object: Pointer to the instance of scanbotsdk_vin_scanner_configuration_t to be freed
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_vin_scanner_configuration_free(scanbotsdk_vin_scanner_configuration_t* object);

/**
 * @brief Returns value of extract_vin_from_barcode field of the given object.
 * @ingroup c_vin
 * @details If true, the VIN scanner will also extract VINs from barcodes.
 * Requires a license that allows barcode scanning in addition to VIN scanning.
 * 
 * Default is false
 * @param self: Pointer to the instance of scanbotsdk_vin_scanner_configuration_t
 * @param extract_vin_from_barcode: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_vin_scanner_configuration_get_extract_vin_from_barcode(scanbotsdk_vin_scanner_configuration_t* self, bool* extract_vin_from_barcode);
/**
 * @brief Sets value of extract_vin_from_barcode field of the given object.
 * @ingroup c_vin
 * @details If true, the VIN scanner will also extract VINs from barcodes.
 * Requires a license that allows barcode scanning in addition to VIN scanning.
 * 
 * Default is false
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_vin_scanner_configuration_t, the field of which will be set
 * @param extract_vin_from_barcode: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_vin_scanner_configuration_set_extract_vin_from_barcode(scanbotsdk_vin_scanner_configuration_t* self, bool extract_vin_from_barcode);

/**
 * @brief Returns value of ocr_resolution_limit field of the given object.
 * @ingroup c_vin
 * @details Maximum image size (height or width) for OCR process. 0 - do not rescale.
 * 
 * Default is 0
 * @param self: Pointer to the instance of scanbotsdk_vin_scanner_configuration_t
 * @param ocr_resolution_limit: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_vin_scanner_configuration_get_ocr_resolution_limit(scanbotsdk_vin_scanner_configuration_t* self, int* ocr_resolution_limit);
/**
 * @brief Sets value of ocr_resolution_limit field of the given object.
 * @ingroup c_vin
 * @details Maximum image size (height or width) for OCR process. 0 - do not rescale.
 * 
 * Default is 0
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_vin_scanner_configuration_t, the field of which will be set
 * @param ocr_resolution_limit: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_vin_scanner_configuration_set_ocr_resolution_limit(scanbotsdk_vin_scanner_configuration_t* self, int ocr_resolution_limit);

/**
 * @brief Returns value of maximum_number_of_accumulated_frames field of the given object.
 * @ingroup c_vin
 * @details Maximum number of accumulated frames to inspect before actual result is returned.
 * 
 * Default is 3
 * @param self: Pointer to the instance of scanbotsdk_vin_scanner_configuration_t
 * @param maximum_number_of_accumulated_frames: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_vin_scanner_configuration_get_maximum_number_of_accumulated_frames(scanbotsdk_vin_scanner_configuration_t* self, int* maximum_number_of_accumulated_frames);
/**
 * @brief Sets value of maximum_number_of_accumulated_frames field of the given object.
 * @ingroup c_vin
 * @details Maximum number of accumulated frames to inspect before actual result is returned.
 * 
 * Default is 3
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_vin_scanner_configuration_t, the field of which will be set
 * @param maximum_number_of_accumulated_frames: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_vin_scanner_configuration_set_maximum_number_of_accumulated_frames(scanbotsdk_vin_scanner_configuration_t* self, int maximum_number_of_accumulated_frames);

/**
 * @brief Returns value of minimum_number_of_required_frames_with_equal_scanning_result field of the given object.
 * @ingroup c_vin
 * @details Minimum number of accumulated frames that have equal result.
 * 
 * Default is 2
 * @param self: Pointer to the instance of scanbotsdk_vin_scanner_configuration_t
 * @param minimum_number_of_required_frames_with_equal_scanning_result: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_vin_scanner_configuration_get_minimum_number_of_required_frames_with_equal_scanning_result(scanbotsdk_vin_scanner_configuration_t* self, int* minimum_number_of_required_frames_with_equal_scanning_result);
/**
 * @brief Sets value of minimum_number_of_required_frames_with_equal_scanning_result field of the given object.
 * @ingroup c_vin
 * @details Minimum number of accumulated frames that have equal result.
 * 
 * Default is 2
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_vin_scanner_configuration_t, the field of which will be set
 * @param minimum_number_of_required_frames_with_equal_scanning_result: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_vin_scanner_configuration_set_minimum_number_of_required_frames_with_equal_scanning_result(scanbotsdk_vin_scanner_configuration_t* self, int minimum_number_of_required_frames_with_equal_scanning_result);


#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* SCANBOTSDK_VINSCANNERTYPES_H */