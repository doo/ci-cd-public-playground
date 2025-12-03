// Auto-generated with ScanbotSDKCodegenV3. Modifications will be overwritten.
// Generated from SchemasV3/CoreSchemas/schemas/BarcodeConfigurationTypes.yaml
/**
 * @file ScanbotSDKBarcodeConfigurationTypes.h
 */

#pragma once
#ifndef SCANBOTSDK_BARCODECONFIGURATIONTYPES_H
#define SCANBOTSDK_BARCODECONFIGURATIONTYPES_H


#include <barcode/ScanbotSDKBarcodeTypes.h>
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
 * @brief scanbotsdk_barcode_format_configuration_base_t class
 * @details Base class for all barcode configurations.
 * @ingroup c_barcode
*/
typedef struct scanbotsdk_barcode_format_configuration_base_t scanbotsdk_barcode_format_configuration_base_t;

/**
 * @brief Frees the memory allocated for the instance of scanbotsdk_barcode_format_configuration_base_t. If null is passed, the function does nothing.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_configuration_base_t to be freed
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_configuration_base_free(scanbotsdk_barcode_format_configuration_base_t* object);

/**
 * @brief Returns value of regex_filter field of the given object. The returned pointers do NOT own the underlying object, caller must not free them.
 * @ingroup c_barcode
 * @details Regular expression filter for barcode text. If the barcode text does not match the regular expression, it will not be scanned. The default is an empty string (setting is turned off).
 * 
 * Default is ""
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_configuration_base_t
 * @param regex_filter: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_configuration_base_get_regex_filter(scanbotsdk_barcode_format_configuration_base_t* self, const char** regex_filter);
/**
 * @brief Sets value of regex_filter field of the given object.
 * @ingroup c_barcode
 * @details Regular expression filter for barcode text. If the barcode text does not match the regular expression, it will not be scanned. The default is an empty string (setting is turned off).
 * 
 * Default is ""
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_configuration_base_t, the field of which will be set
 * @param regex_filter: The value to be set. Must not be null.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_configuration_base_set_regex_filter(scanbotsdk_barcode_format_configuration_base_t* self, const char* regex_filter);

/**
 * @brief Returns value of minimum_size_score field of the given object.
 * @ingroup c_barcode
 * @details Minimum acceptable value of a result BarcodeItem's sizeScore (between 0 and 1). 
 * Barcodes with a sizeScore less than this value will not be scanned. 
 * When set to 0, barcodes are returned no matter what their size is.
 * 
 * Default is 0
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_configuration_base_t
 * @param minimum_size_score: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_configuration_base_get_minimum_size_score(scanbotsdk_barcode_format_configuration_base_t* self, double* minimum_size_score);
/**
 * @brief Sets value of minimum_size_score field of the given object.
 * @ingroup c_barcode
 * @details Minimum acceptable value of a result BarcodeItem's sizeScore (between 0 and 1). 
 * Barcodes with a sizeScore less than this value will not be scanned. 
 * When set to 0, barcodes are returned no matter what their size is.
 * 
 * Default is 0
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_configuration_base_t, the field of which will be set
 * @param minimum_size_score: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_configuration_base_set_minimum_size_score(scanbotsdk_barcode_format_configuration_base_t* self, double minimum_size_score);

/**
 * @brief Returns value of add_additional_quiet_zone field of the given object.
 * @ingroup c_barcode
 * @details If true, we process the barcode scanning with an artificial quiet zone that we add to the input image. 
 * This flag should be used to scan sharp crops of a barcode in single-shot mode.
 * 
 * Default is false
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_configuration_base_t
 * @param add_additional_quiet_zone: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_configuration_base_get_add_additional_quiet_zone(scanbotsdk_barcode_format_configuration_base_t* self, bool* add_additional_quiet_zone);
/**
 * @brief Sets value of add_additional_quiet_zone field of the given object.
 * @ingroup c_barcode
 * @details If true, we process the barcode scanning with an artificial quiet zone that we add to the input image. 
 * This flag should be used to scan sharp crops of a barcode in single-shot mode.
 * 
 * Default is false
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_configuration_base_t, the field of which will be set
 * @param add_additional_quiet_zone: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_configuration_base_set_add_additional_quiet_zone(scanbotsdk_barcode_format_configuration_base_t* self, bool add_additional_quiet_zone);


/**
 * @brief scanbotsdk_barcode_format_one_d_configuration_base_t class
 * @details Base class for all linear (1D) barcode configurations.
 * @ingroup c_barcode
*/
typedef struct scanbotsdk_barcode_format_one_d_configuration_base_t scanbotsdk_barcode_format_one_d_configuration_base_t;

/**
 * @brief Frees the memory allocated for the instance of scanbotsdk_barcode_format_one_d_configuration_base_t. If null is passed, the function does nothing.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_one_d_configuration_base_t to be freed
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_one_d_configuration_base_free(scanbotsdk_barcode_format_one_d_configuration_base_t* object);

/**
 * @brief Checks if the given instance of scanbotsdk_barcode_format_configuration_base_t is an instance of its subtype scanbotsdk_barcode_format_one_d_configuration_base_t.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_configuration_base_t to be checked
 * @param result: Pointer to a variable that will store the result of the check
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
 */
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_configuration_base_is_scanbotsdk_barcode_format_one_d_configuration_base(scanbotsdk_barcode_format_configuration_base_t* object, bool* result);
/**
 * @brief Casts the given instance of scanbotsdk_barcode_format_configuration_base_t to its subtype scanbotsdk_barcode_format_one_d_configuration_base_t. If the given instance is not an instance of the subtype, result will be null.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_configuration_base_t to be casted
 * @param result: Pointer to a variable that will store the casted instance of scanbotsdk_barcode_format_one_d_configuration_base_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_configuration_base_as_scanbotsdk_barcode_format_one_d_configuration_base(scanbotsdk_barcode_format_configuration_base_t* object, scanbotsdk_barcode_format_one_d_configuration_base_t** result);
/**
 * @brief Casts the given instance of scanbotsdk_barcode_format_one_d_configuration_base_t to its parent type scanbotsdk_barcode_format_configuration_base_t.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_configuration_base_t to be casted
 * @param result: Pointer to a variable that will store the casted instance of scanbotsdk_barcode_format_one_d_configuration_base_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_one_d_configuration_base_as_scanbotsdk_barcode_format_configuration_base(scanbotsdk_barcode_format_one_d_configuration_base_t* object, scanbotsdk_barcode_format_configuration_base_t** result);

/**
 * @brief Returns value of minimum_1_d_quiet_zone_size field of the given object.
 * @ingroup c_barcode
 * @details Minimum quiet zone size on the left and right sides of a 1D barcode, measured in number of modules.
 * The quiet zone is only for 1D barcodes with weak start/stop patterns, i.e. Iata2Of5, Industrial2Of5, Code25, Itf, Codabar, MsiPlessey and Code11.
 * 
 * Default is 6
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_one_d_configuration_base_t
 * @param minimum_1_d_quiet_zone_size: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_one_d_configuration_base_get_minimum_1_d_quiet_zone_size(scanbotsdk_barcode_format_one_d_configuration_base_t* self, int* minimum_1_d_quiet_zone_size);
/**
 * @brief Sets value of minimum_1_d_quiet_zone_size field of the given object.
 * @ingroup c_barcode
 * @details Minimum quiet zone size on the left and right sides of a 1D barcode, measured in number of modules.
 * The quiet zone is only for 1D barcodes with weak start/stop patterns, i.e. Iata2Of5, Industrial2Of5, Code25, Itf, Codabar, MsiPlessey and Code11.
 * 
 * Default is 6
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_one_d_configuration_base_t, the field of which will be set
 * @param minimum_1_d_quiet_zone_size: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_one_d_configuration_base_set_minimum_1_d_quiet_zone_size(scanbotsdk_barcode_format_one_d_configuration_base_t* self, int minimum_1_d_quiet_zone_size);

/**
 * @brief Returns value of minimum_1_d_confirmation_count field of the given object.
 * @ingroup c_barcode
 * @details In case of live scanning, we require confirmations across frames to consider the one-d barcode as valid.
 * 
 * Default is 1
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_one_d_configuration_base_t
 * @param minimum_1_d_confirmation_count: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_one_d_configuration_base_get_minimum_1_d_confirmation_count(scanbotsdk_barcode_format_one_d_configuration_base_t* self, int* minimum_1_d_confirmation_count);
/**
 * @brief Sets value of minimum_1_d_confirmation_count field of the given object.
 * @ingroup c_barcode
 * @details In case of live scanning, we require confirmations across frames to consider the one-d barcode as valid.
 * 
 * Default is 1
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_one_d_configuration_base_t, the field of which will be set
 * @param minimum_1_d_confirmation_count: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_one_d_configuration_base_set_minimum_1_d_confirmation_count(scanbotsdk_barcode_format_one_d_configuration_base_t* self, int minimum_1_d_confirmation_count);


/**
 * @brief scanbotsdk_barcode_format_codabar_configuration_t class
 * @details Codabar barcode configuration. Add to scanner configuration to scan Codabar barcodes.
 * @ingroup c_barcode
*/
typedef struct scanbotsdk_barcode_format_codabar_configuration_t scanbotsdk_barcode_format_codabar_configuration_t;

/**
 * @brief Creates a new instance of scanbotsdk_barcode_format_codabar_configuration with given params and stores it in the location specified by the last argument.
 * @ingroup c_barcode
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param regex_filter: Regular expression filter for barcode text. If the barcode text does not match the regular expression, it will not be scanned. The default is an empty string (setting is turned off).
 * 
 * Default is ""
 * The value must not be null.
 * @param minimum_size_score: Minimum acceptable value of a result BarcodeItem's sizeScore (between 0 and 1). 
 * Barcodes with a sizeScore less than this value will not be scanned. 
 * When set to 0, barcodes are returned no matter what their size is.
 * 
 * Default is 0
 * @param add_additional_quiet_zone: If true, we process the barcode scanning with an artificial quiet zone that we add to the input image. 
 * This flag should be used to scan sharp crops of a barcode in single-shot mode.
 * 
 * Default is false
 * @param minimum_1_d_quiet_zone_size: Minimum quiet zone size on the left and right sides of a 1D barcode, measured in number of modules.
 * The quiet zone is only for 1D barcodes with weak start/stop patterns, i.e. Iata2Of5, Industrial2Of5, Code25, Itf, Codabar, MsiPlessey and Code11.
 * 
 * Default is 6
 * @param minimum_1_d_confirmation_count: In case of live scanning, we require confirmations across frames to consider the one-d barcode as valid.
 * 
 * Default is 1
 * @param minimum_text_length: Minimum text length. Applied only to linear barcode formats that allow variable length.
 * 
 * Default is 1
 * @param maximum_text_length: Maximum text length. 0 implies no maximum. Applied only to linear barcode formats that allow variable length.
 * 
 * Default is 0
 * @param enable_one_d_blur_scanner: If true, barcodes with heavy blur or from far distance are tried to scan.
 * 
 * Default is true
 * @param return_start_end: If true, return the start and end characters.
 * 
 * Default is false
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_barcode_format_codabar_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_codabar_configuration_create(
    const char* regex_filter,
    double minimum_size_score,
    bool add_additional_quiet_zone,
    int minimum_1_d_quiet_zone_size,
    int minimum_1_d_confirmation_count,
    int minimum_text_length,
    int maximum_text_length,
    bool enable_one_d_blur_scanner,
    bool return_start_end,
    scanbotsdk_barcode_format_codabar_configuration_t** result);

/**
 * @brief Creates a new instance of scanbotsdk_barcode_format_codabar_configuration_t with given required params and stores it in the location specified by the last argument.
 * @ingroup c_barcode
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_barcode_format_codabar_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_codabar_configuration_create_with_defaults(
    scanbotsdk_barcode_format_codabar_configuration_t** result);


/**
 * @brief Frees the memory allocated for the instance of scanbotsdk_barcode_format_codabar_configuration_t. If null is passed, the function does nothing.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_codabar_configuration_t to be freed
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_codabar_configuration_free(scanbotsdk_barcode_format_codabar_configuration_t* object);

/**
 * @brief Checks if the given instance of scanbotsdk_barcode_format_configuration_base_t is an instance of its subtype scanbotsdk_barcode_format_codabar_configuration_t.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_configuration_base_t to be checked
 * @param result: Pointer to a variable that will store the result of the check
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
 */
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_configuration_base_is_scanbotsdk_barcode_format_codabar_configuration(scanbotsdk_barcode_format_configuration_base_t* object, bool* result);
/**
 * @brief Casts the given instance of scanbotsdk_barcode_format_configuration_base_t to its subtype scanbotsdk_barcode_format_codabar_configuration_t. If the given instance is not an instance of the subtype, result will be null.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_configuration_base_t to be casted
 * @param result: Pointer to a variable that will store the casted instance of scanbotsdk_barcode_format_codabar_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_configuration_base_as_scanbotsdk_barcode_format_codabar_configuration(scanbotsdk_barcode_format_configuration_base_t* object, scanbotsdk_barcode_format_codabar_configuration_t** result);
/**
 * @brief Casts the given instance of scanbotsdk_barcode_format_codabar_configuration_t to its parent type scanbotsdk_barcode_format_configuration_base_t.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_configuration_base_t to be casted
 * @param result: Pointer to a variable that will store the casted instance of scanbotsdk_barcode_format_codabar_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_codabar_configuration_as_scanbotsdk_barcode_format_configuration_base(scanbotsdk_barcode_format_codabar_configuration_t* object, scanbotsdk_barcode_format_configuration_base_t** result);

/**
 * @brief Checks if the given instance of scanbotsdk_barcode_format_one_d_configuration_base_t is an instance of its subtype scanbotsdk_barcode_format_codabar_configuration_t.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_one_d_configuration_base_t to be checked
 * @param result: Pointer to a variable that will store the result of the check
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
 */
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_one_d_configuration_base_is_scanbotsdk_barcode_format_codabar_configuration(scanbotsdk_barcode_format_one_d_configuration_base_t* object, bool* result);
/**
 * @brief Casts the given instance of scanbotsdk_barcode_format_one_d_configuration_base_t to its subtype scanbotsdk_barcode_format_codabar_configuration_t. If the given instance is not an instance of the subtype, result will be null.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_one_d_configuration_base_t to be casted
 * @param result: Pointer to a variable that will store the casted instance of scanbotsdk_barcode_format_codabar_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_one_d_configuration_base_as_scanbotsdk_barcode_format_codabar_configuration(scanbotsdk_barcode_format_one_d_configuration_base_t* object, scanbotsdk_barcode_format_codabar_configuration_t** result);
/**
 * @brief Casts the given instance of scanbotsdk_barcode_format_codabar_configuration_t to its parent type scanbotsdk_barcode_format_one_d_configuration_base_t.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_one_d_configuration_base_t to be casted
 * @param result: Pointer to a variable that will store the casted instance of scanbotsdk_barcode_format_codabar_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_codabar_configuration_as_scanbotsdk_barcode_format_one_d_configuration_base(scanbotsdk_barcode_format_codabar_configuration_t* object, scanbotsdk_barcode_format_one_d_configuration_base_t** result);

/**
 * @brief Returns value of minimum_text_length field of the given object.
 * @ingroup c_barcode
 * @details Minimum text length. Applied only to linear barcode formats that allow variable length.
 * 
 * Default is 1
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_codabar_configuration_t
 * @param minimum_text_length: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_codabar_configuration_get_minimum_text_length(scanbotsdk_barcode_format_codabar_configuration_t* self, int* minimum_text_length);
/**
 * @brief Sets value of minimum_text_length field of the given object.
 * @ingroup c_barcode
 * @details Minimum text length. Applied only to linear barcode formats that allow variable length.
 * 
 * Default is 1
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_codabar_configuration_t, the field of which will be set
 * @param minimum_text_length: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_codabar_configuration_set_minimum_text_length(scanbotsdk_barcode_format_codabar_configuration_t* self, int minimum_text_length);

/**
 * @brief Returns value of maximum_text_length field of the given object.
 * @ingroup c_barcode
 * @details Maximum text length. 0 implies no maximum. Applied only to linear barcode formats that allow variable length.
 * 
 * Default is 0
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_codabar_configuration_t
 * @param maximum_text_length: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_codabar_configuration_get_maximum_text_length(scanbotsdk_barcode_format_codabar_configuration_t* self, int* maximum_text_length);
/**
 * @brief Sets value of maximum_text_length field of the given object.
 * @ingroup c_barcode
 * @details Maximum text length. 0 implies no maximum. Applied only to linear barcode formats that allow variable length.
 * 
 * Default is 0
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_codabar_configuration_t, the field of which will be set
 * @param maximum_text_length: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_codabar_configuration_set_maximum_text_length(scanbotsdk_barcode_format_codabar_configuration_t* self, int maximum_text_length);

/**
 * @brief Returns value of enable_one_d_blur_scanner field of the given object.
 * @ingroup c_barcode
 * @details If true, barcodes with heavy blur or from far distance are tried to scan.
 * 
 * Default is true
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_codabar_configuration_t
 * @param enable_one_d_blur_scanner: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_codabar_configuration_get_enable_one_d_blur_scanner(scanbotsdk_barcode_format_codabar_configuration_t* self, bool* enable_one_d_blur_scanner);
/**
 * @brief Sets value of enable_one_d_blur_scanner field of the given object.
 * @ingroup c_barcode
 * @details If true, barcodes with heavy blur or from far distance are tried to scan.
 * 
 * Default is true
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_codabar_configuration_t, the field of which will be set
 * @param enable_one_d_blur_scanner: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_codabar_configuration_set_enable_one_d_blur_scanner(scanbotsdk_barcode_format_codabar_configuration_t* self, bool enable_one_d_blur_scanner);

/**
 * @brief Returns value of return_start_end field of the given object.
 * @ingroup c_barcode
 * @details If true, return the start and end characters.
 * 
 * Default is false
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_codabar_configuration_t
 * @param return_start_end: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_codabar_configuration_get_return_start_end(scanbotsdk_barcode_format_codabar_configuration_t* self, bool* return_start_end);
/**
 * @brief Sets value of return_start_end field of the given object.
 * @ingroup c_barcode
 * @details If true, return the start and end characters.
 * 
 * Default is false
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_codabar_configuration_t, the field of which will be set
 * @param return_start_end: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_codabar_configuration_set_return_start_end(scanbotsdk_barcode_format_codabar_configuration_t* self, bool return_start_end);


/**
 * @brief scanbotsdk_barcode_format_code_11_configuration_t class
 * @details Code 11 barcode configuration. Add to scanner configuration to scan Code 11 barcodes.
 * @ingroup c_barcode
*/
typedef struct scanbotsdk_barcode_format_code_11_configuration_t scanbotsdk_barcode_format_code_11_configuration_t;

/**
 * @brief Creates a new instance of scanbotsdk_barcode_format_code_11_configuration with given params and stores it in the location specified by the last argument.
 * @ingroup c_barcode
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param regex_filter: Regular expression filter for barcode text. If the barcode text does not match the regular expression, it will not be scanned. The default is an empty string (setting is turned off).
 * 
 * Default is ""
 * The value must not be null.
 * @param minimum_size_score: Minimum acceptable value of a result BarcodeItem's sizeScore (between 0 and 1). 
 * Barcodes with a sizeScore less than this value will not be scanned. 
 * When set to 0, barcodes are returned no matter what their size is.
 * 
 * Default is 0
 * @param add_additional_quiet_zone: If true, we process the barcode scanning with an artificial quiet zone that we add to the input image. 
 * This flag should be used to scan sharp crops of a barcode in single-shot mode.
 * 
 * Default is false
 * @param minimum_1_d_quiet_zone_size: Minimum quiet zone size on the left and right sides of a 1D barcode, measured in number of modules.
 * The quiet zone is only for 1D barcodes with weak start/stop patterns, i.e. Iata2Of5, Industrial2Of5, Code25, Itf, Codabar, MsiPlessey and Code11.
 * 
 * Default is 6
 * @param minimum_1_d_confirmation_count: In case of live scanning, we require confirmations across frames to consider the one-d barcode as valid.
 * 
 * Default is 1
 * @param strip_check_digits: If true, the check digits are stripped from the result.
 * 
 * Default is false
 * @param minimum_text_length: Minimum text length. Applied only to linear barcode formats that allow variable length.
 * 
 * Default is 1
 * @param maximum_text_length: Maximum text length. 0 implies no maximum. Applied only to linear barcode formats that allow variable length.
 * 
 * Default is 0
 * @param checksum: If true, return CODE_11 barcodes only if they have a valid checksum.
 * 
 * Default is true
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_barcode_format_code_11_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_code_11_configuration_create(
    const char* regex_filter,
    double minimum_size_score,
    bool add_additional_quiet_zone,
    int minimum_1_d_quiet_zone_size,
    int minimum_1_d_confirmation_count,
    bool strip_check_digits,
    int minimum_text_length,
    int maximum_text_length,
    bool checksum,
    scanbotsdk_barcode_format_code_11_configuration_t** result);

/**
 * @brief Creates a new instance of scanbotsdk_barcode_format_code_11_configuration_t with given required params and stores it in the location specified by the last argument.
 * @ingroup c_barcode
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_barcode_format_code_11_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_code_11_configuration_create_with_defaults(
    scanbotsdk_barcode_format_code_11_configuration_t** result);


/**
 * @brief Frees the memory allocated for the instance of scanbotsdk_barcode_format_code_11_configuration_t. If null is passed, the function does nothing.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_code_11_configuration_t to be freed
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_code_11_configuration_free(scanbotsdk_barcode_format_code_11_configuration_t* object);

/**
 * @brief Checks if the given instance of scanbotsdk_barcode_format_configuration_base_t is an instance of its subtype scanbotsdk_barcode_format_code_11_configuration_t.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_configuration_base_t to be checked
 * @param result: Pointer to a variable that will store the result of the check
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
 */
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_configuration_base_is_scanbotsdk_barcode_format_code_11_configuration(scanbotsdk_barcode_format_configuration_base_t* object, bool* result);
/**
 * @brief Casts the given instance of scanbotsdk_barcode_format_configuration_base_t to its subtype scanbotsdk_barcode_format_code_11_configuration_t. If the given instance is not an instance of the subtype, result will be null.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_configuration_base_t to be casted
 * @param result: Pointer to a variable that will store the casted instance of scanbotsdk_barcode_format_code_11_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_configuration_base_as_scanbotsdk_barcode_format_code_11_configuration(scanbotsdk_barcode_format_configuration_base_t* object, scanbotsdk_barcode_format_code_11_configuration_t** result);
/**
 * @brief Casts the given instance of scanbotsdk_barcode_format_code_11_configuration_t to its parent type scanbotsdk_barcode_format_configuration_base_t.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_configuration_base_t to be casted
 * @param result: Pointer to a variable that will store the casted instance of scanbotsdk_barcode_format_code_11_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_code_11_configuration_as_scanbotsdk_barcode_format_configuration_base(scanbotsdk_barcode_format_code_11_configuration_t* object, scanbotsdk_barcode_format_configuration_base_t** result);

/**
 * @brief Checks if the given instance of scanbotsdk_barcode_format_one_d_configuration_base_t is an instance of its subtype scanbotsdk_barcode_format_code_11_configuration_t.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_one_d_configuration_base_t to be checked
 * @param result: Pointer to a variable that will store the result of the check
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
 */
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_one_d_configuration_base_is_scanbotsdk_barcode_format_code_11_configuration(scanbotsdk_barcode_format_one_d_configuration_base_t* object, bool* result);
/**
 * @brief Casts the given instance of scanbotsdk_barcode_format_one_d_configuration_base_t to its subtype scanbotsdk_barcode_format_code_11_configuration_t. If the given instance is not an instance of the subtype, result will be null.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_one_d_configuration_base_t to be casted
 * @param result: Pointer to a variable that will store the casted instance of scanbotsdk_barcode_format_code_11_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_one_d_configuration_base_as_scanbotsdk_barcode_format_code_11_configuration(scanbotsdk_barcode_format_one_d_configuration_base_t* object, scanbotsdk_barcode_format_code_11_configuration_t** result);
/**
 * @brief Casts the given instance of scanbotsdk_barcode_format_code_11_configuration_t to its parent type scanbotsdk_barcode_format_one_d_configuration_base_t.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_one_d_configuration_base_t to be casted
 * @param result: Pointer to a variable that will store the casted instance of scanbotsdk_barcode_format_code_11_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_code_11_configuration_as_scanbotsdk_barcode_format_one_d_configuration_base(scanbotsdk_barcode_format_code_11_configuration_t* object, scanbotsdk_barcode_format_one_d_configuration_base_t** result);

/**
 * @brief Returns value of strip_check_digits field of the given object.
 * @ingroup c_barcode
 * @details If true, the check digits are stripped from the result.
 * 
 * Default is false
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_code_11_configuration_t
 * @param strip_check_digits: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_code_11_configuration_get_strip_check_digits(scanbotsdk_barcode_format_code_11_configuration_t* self, bool* strip_check_digits);
/**
 * @brief Sets value of strip_check_digits field of the given object.
 * @ingroup c_barcode
 * @details If true, the check digits are stripped from the result.
 * 
 * Default is false
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_code_11_configuration_t, the field of which will be set
 * @param strip_check_digits: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_code_11_configuration_set_strip_check_digits(scanbotsdk_barcode_format_code_11_configuration_t* self, bool strip_check_digits);

/**
 * @brief Returns value of minimum_text_length field of the given object.
 * @ingroup c_barcode
 * @details Minimum text length. Applied only to linear barcode formats that allow variable length.
 * 
 * Default is 1
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_code_11_configuration_t
 * @param minimum_text_length: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_code_11_configuration_get_minimum_text_length(scanbotsdk_barcode_format_code_11_configuration_t* self, int* minimum_text_length);
/**
 * @brief Sets value of minimum_text_length field of the given object.
 * @ingroup c_barcode
 * @details Minimum text length. Applied only to linear barcode formats that allow variable length.
 * 
 * Default is 1
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_code_11_configuration_t, the field of which will be set
 * @param minimum_text_length: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_code_11_configuration_set_minimum_text_length(scanbotsdk_barcode_format_code_11_configuration_t* self, int minimum_text_length);

/**
 * @brief Returns value of maximum_text_length field of the given object.
 * @ingroup c_barcode
 * @details Maximum text length. 0 implies no maximum. Applied only to linear barcode formats that allow variable length.
 * 
 * Default is 0
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_code_11_configuration_t
 * @param maximum_text_length: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_code_11_configuration_get_maximum_text_length(scanbotsdk_barcode_format_code_11_configuration_t* self, int* maximum_text_length);
/**
 * @brief Sets value of maximum_text_length field of the given object.
 * @ingroup c_barcode
 * @details Maximum text length. 0 implies no maximum. Applied only to linear barcode formats that allow variable length.
 * 
 * Default is 0
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_code_11_configuration_t, the field of which will be set
 * @param maximum_text_length: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_code_11_configuration_set_maximum_text_length(scanbotsdk_barcode_format_code_11_configuration_t* self, int maximum_text_length);

/**
 * @brief Returns value of checksum field of the given object.
 * @ingroup c_barcode
 * @details If true, return CODE_11 barcodes only if they have a valid checksum.
 * 
 * Default is true
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_code_11_configuration_t
 * @param checksum: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_code_11_configuration_get_checksum(scanbotsdk_barcode_format_code_11_configuration_t* self, bool* checksum);
/**
 * @brief Sets value of checksum field of the given object.
 * @ingroup c_barcode
 * @details If true, return CODE_11 barcodes only if they have a valid checksum.
 * 
 * Default is true
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_code_11_configuration_t, the field of which will be set
 * @param checksum: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_code_11_configuration_set_checksum(scanbotsdk_barcode_format_code_11_configuration_t* self, bool checksum);


/**
 * @brief scanbotsdk_barcode_format_code_39_configuration_t class
 * @details Code 39 barcode and derivatives configuration. Add to scanner configuration to scan Code 39, Code 32 (Italian Pharmacode), PZN7 and PZN8 (Pharmazentralnummer) barcodes.
 * @ingroup c_barcode
*/
typedef struct scanbotsdk_barcode_format_code_39_configuration_t scanbotsdk_barcode_format_code_39_configuration_t;

/**
 * @brief Creates a new instance of scanbotsdk_barcode_format_code_39_configuration with given params and stores it in the location specified by the last argument.
 * @ingroup c_barcode
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param regex_filter: Regular expression filter for barcode text. If the barcode text does not match the regular expression, it will not be scanned. The default is an empty string (setting is turned off).
 * 
 * Default is ""
 * The value must not be null.
 * @param minimum_size_score: Minimum acceptable value of a result BarcodeItem's sizeScore (between 0 and 1). 
 * Barcodes with a sizeScore less than this value will not be scanned. 
 * When set to 0, barcodes are returned no matter what their size is.
 * 
 * Default is 0
 * @param add_additional_quiet_zone: If true, we process the barcode scanning with an artificial quiet zone that we add to the input image. 
 * This flag should be used to scan sharp crops of a barcode in single-shot mode.
 * 
 * Default is false
 * @param minimum_1_d_quiet_zone_size: Minimum quiet zone size on the left and right sides of a 1D barcode, measured in number of modules.
 * The quiet zone is only for 1D barcodes with weak start/stop patterns, i.e. Iata2Of5, Industrial2Of5, Code25, Itf, Codabar, MsiPlessey and Code11.
 * 
 * Default is 6
 * @param minimum_1_d_confirmation_count: In case of live scanning, we require confirmations across frames to consider the one-d barcode as valid.
 * 
 * Default is 1
 * @param strip_check_digits: If true, the check digits are stripped from the result.
 * 
 * Default is false
 * @param minimum_text_length: Minimum text length. Applied only to linear barcode formats that allow variable length.
 * 
 * Default is 1
 * @param maximum_text_length: Maximum text length. 0 implies no maximum. Applied only to linear barcode formats that allow variable length.
 * 
 * Default is 0
 * @param enable_one_d_blur_scanner: If true, barcodes with heavy blur or from far distance are tried to scan.
 * 
 * Default is true
 * @param code_32: If true, scan and return valid CODE_32 (Italian Pharmacode) barcodes. If false, CODE_32 barcodes are not decoded and are returned as CODE_39 instead.
 * 
 * Default is false
 * @param code_39: If true, scan CODE_39 barcodes.
 * 
 * Default is true
 * @param pzn_7: If true, scan PZN7 (legacy Pharmazentralnummer) barcodes. If false, PZN7 barcodes are not decoded and are returned as CODE_39 instead.
 * 
 * Default is true
 * @param pzn_8: If true, scan PZN8 (Pharmazentralnummer) barcodes. If false, PZN8 barcodes are not decoded and are returned as CODE_39 instead.
 * 
 * Default is true
 * @param try_code_39_extended_mode: If true, try to scan CODE_39 in extended mode.
 * 
 * Default is false
 * @param use_code_39_check_digit: If true, return CODE_39 barcodes only if they have a valid check digit.
 * 
 * Default is false
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_barcode_format_code_39_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_code_39_configuration_create(
    const char* regex_filter,
    double minimum_size_score,
    bool add_additional_quiet_zone,
    int minimum_1_d_quiet_zone_size,
    int minimum_1_d_confirmation_count,
    bool strip_check_digits,
    int minimum_text_length,
    int maximum_text_length,
    bool enable_one_d_blur_scanner,
    bool code_32,
    bool code_39,
    bool pzn_7,
    bool pzn_8,
    bool try_code_39_extended_mode,
    bool use_code_39_check_digit,
    scanbotsdk_barcode_format_code_39_configuration_t** result);

/**
 * @brief Creates a new instance of scanbotsdk_barcode_format_code_39_configuration_t with given required params and stores it in the location specified by the last argument.
 * @ingroup c_barcode
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_barcode_format_code_39_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_code_39_configuration_create_with_defaults(
    scanbotsdk_barcode_format_code_39_configuration_t** result);


/**
 * @brief Frees the memory allocated for the instance of scanbotsdk_barcode_format_code_39_configuration_t. If null is passed, the function does nothing.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_code_39_configuration_t to be freed
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_code_39_configuration_free(scanbotsdk_barcode_format_code_39_configuration_t* object);

/**
 * @brief Checks if the given instance of scanbotsdk_barcode_format_configuration_base_t is an instance of its subtype scanbotsdk_barcode_format_code_39_configuration_t.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_configuration_base_t to be checked
 * @param result: Pointer to a variable that will store the result of the check
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
 */
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_configuration_base_is_scanbotsdk_barcode_format_code_39_configuration(scanbotsdk_barcode_format_configuration_base_t* object, bool* result);
/**
 * @brief Casts the given instance of scanbotsdk_barcode_format_configuration_base_t to its subtype scanbotsdk_barcode_format_code_39_configuration_t. If the given instance is not an instance of the subtype, result will be null.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_configuration_base_t to be casted
 * @param result: Pointer to a variable that will store the casted instance of scanbotsdk_barcode_format_code_39_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_configuration_base_as_scanbotsdk_barcode_format_code_39_configuration(scanbotsdk_barcode_format_configuration_base_t* object, scanbotsdk_barcode_format_code_39_configuration_t** result);
/**
 * @brief Casts the given instance of scanbotsdk_barcode_format_code_39_configuration_t to its parent type scanbotsdk_barcode_format_configuration_base_t.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_configuration_base_t to be casted
 * @param result: Pointer to a variable that will store the casted instance of scanbotsdk_barcode_format_code_39_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_code_39_configuration_as_scanbotsdk_barcode_format_configuration_base(scanbotsdk_barcode_format_code_39_configuration_t* object, scanbotsdk_barcode_format_configuration_base_t** result);

/**
 * @brief Checks if the given instance of scanbotsdk_barcode_format_one_d_configuration_base_t is an instance of its subtype scanbotsdk_barcode_format_code_39_configuration_t.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_one_d_configuration_base_t to be checked
 * @param result: Pointer to a variable that will store the result of the check
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
 */
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_one_d_configuration_base_is_scanbotsdk_barcode_format_code_39_configuration(scanbotsdk_barcode_format_one_d_configuration_base_t* object, bool* result);
/**
 * @brief Casts the given instance of scanbotsdk_barcode_format_one_d_configuration_base_t to its subtype scanbotsdk_barcode_format_code_39_configuration_t. If the given instance is not an instance of the subtype, result will be null.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_one_d_configuration_base_t to be casted
 * @param result: Pointer to a variable that will store the casted instance of scanbotsdk_barcode_format_code_39_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_one_d_configuration_base_as_scanbotsdk_barcode_format_code_39_configuration(scanbotsdk_barcode_format_one_d_configuration_base_t* object, scanbotsdk_barcode_format_code_39_configuration_t** result);
/**
 * @brief Casts the given instance of scanbotsdk_barcode_format_code_39_configuration_t to its parent type scanbotsdk_barcode_format_one_d_configuration_base_t.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_one_d_configuration_base_t to be casted
 * @param result: Pointer to a variable that will store the casted instance of scanbotsdk_barcode_format_code_39_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_code_39_configuration_as_scanbotsdk_barcode_format_one_d_configuration_base(scanbotsdk_barcode_format_code_39_configuration_t* object, scanbotsdk_barcode_format_one_d_configuration_base_t** result);

/**
 * @brief Returns value of strip_check_digits field of the given object.
 * @ingroup c_barcode
 * @details If true, the check digits are stripped from the result.
 * 
 * Default is false
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_code_39_configuration_t
 * @param strip_check_digits: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_code_39_configuration_get_strip_check_digits(scanbotsdk_barcode_format_code_39_configuration_t* self, bool* strip_check_digits);
/**
 * @brief Sets value of strip_check_digits field of the given object.
 * @ingroup c_barcode
 * @details If true, the check digits are stripped from the result.
 * 
 * Default is false
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_code_39_configuration_t, the field of which will be set
 * @param strip_check_digits: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_code_39_configuration_set_strip_check_digits(scanbotsdk_barcode_format_code_39_configuration_t* self, bool strip_check_digits);

/**
 * @brief Returns value of minimum_text_length field of the given object.
 * @ingroup c_barcode
 * @details Minimum text length. Applied only to linear barcode formats that allow variable length.
 * 
 * Default is 1
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_code_39_configuration_t
 * @param minimum_text_length: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_code_39_configuration_get_minimum_text_length(scanbotsdk_barcode_format_code_39_configuration_t* self, int* minimum_text_length);
/**
 * @brief Sets value of minimum_text_length field of the given object.
 * @ingroup c_barcode
 * @details Minimum text length. Applied only to linear barcode formats that allow variable length.
 * 
 * Default is 1
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_code_39_configuration_t, the field of which will be set
 * @param minimum_text_length: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_code_39_configuration_set_minimum_text_length(scanbotsdk_barcode_format_code_39_configuration_t* self, int minimum_text_length);

/**
 * @brief Returns value of maximum_text_length field of the given object.
 * @ingroup c_barcode
 * @details Maximum text length. 0 implies no maximum. Applied only to linear barcode formats that allow variable length.
 * 
 * Default is 0
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_code_39_configuration_t
 * @param maximum_text_length: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_code_39_configuration_get_maximum_text_length(scanbotsdk_barcode_format_code_39_configuration_t* self, int* maximum_text_length);
/**
 * @brief Sets value of maximum_text_length field of the given object.
 * @ingroup c_barcode
 * @details Maximum text length. 0 implies no maximum. Applied only to linear barcode formats that allow variable length.
 * 
 * Default is 0
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_code_39_configuration_t, the field of which will be set
 * @param maximum_text_length: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_code_39_configuration_set_maximum_text_length(scanbotsdk_barcode_format_code_39_configuration_t* self, int maximum_text_length);

/**
 * @brief Returns value of enable_one_d_blur_scanner field of the given object.
 * @ingroup c_barcode
 * @details If true, barcodes with heavy blur or from far distance are tried to scan.
 * 
 * Default is true
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_code_39_configuration_t
 * @param enable_one_d_blur_scanner: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_code_39_configuration_get_enable_one_d_blur_scanner(scanbotsdk_barcode_format_code_39_configuration_t* self, bool* enable_one_d_blur_scanner);
/**
 * @brief Sets value of enable_one_d_blur_scanner field of the given object.
 * @ingroup c_barcode
 * @details If true, barcodes with heavy blur or from far distance are tried to scan.
 * 
 * Default is true
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_code_39_configuration_t, the field of which will be set
 * @param enable_one_d_blur_scanner: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_code_39_configuration_set_enable_one_d_blur_scanner(scanbotsdk_barcode_format_code_39_configuration_t* self, bool enable_one_d_blur_scanner);

/**
 * @brief Returns value of code_32 field of the given object.
 * @ingroup c_barcode
 * @details If true, scan and return valid CODE_32 (Italian Pharmacode) barcodes. If false, CODE_32 barcodes are not decoded and are returned as CODE_39 instead.
 * 
 * Default is false
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_code_39_configuration_t
 * @param code_32: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_code_39_configuration_get_code_32(scanbotsdk_barcode_format_code_39_configuration_t* self, bool* code_32);
/**
 * @brief Sets value of code_32 field of the given object.
 * @ingroup c_barcode
 * @details If true, scan and return valid CODE_32 (Italian Pharmacode) barcodes. If false, CODE_32 barcodes are not decoded and are returned as CODE_39 instead.
 * 
 * Default is false
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_code_39_configuration_t, the field of which will be set
 * @param code_32: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_code_39_configuration_set_code_32(scanbotsdk_barcode_format_code_39_configuration_t* self, bool code_32);

/**
 * @brief Returns value of code_39 field of the given object.
 * @ingroup c_barcode
 * @details If true, scan CODE_39 barcodes.
 * 
 * Default is true
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_code_39_configuration_t
 * @param code_39: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_code_39_configuration_get_code_39(scanbotsdk_barcode_format_code_39_configuration_t* self, bool* code_39);
/**
 * @brief Sets value of code_39 field of the given object.
 * @ingroup c_barcode
 * @details If true, scan CODE_39 barcodes.
 * 
 * Default is true
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_code_39_configuration_t, the field of which will be set
 * @param code_39: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_code_39_configuration_set_code_39(scanbotsdk_barcode_format_code_39_configuration_t* self, bool code_39);

/**
 * @brief Returns value of pzn_7 field of the given object.
 * @ingroup c_barcode
 * @details If true, scan PZN7 (legacy Pharmazentralnummer) barcodes. If false, PZN7 barcodes are not decoded and are returned as CODE_39 instead.
 * 
 * Default is true
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_code_39_configuration_t
 * @param pzn_7: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_code_39_configuration_get_pzn_7(scanbotsdk_barcode_format_code_39_configuration_t* self, bool* pzn_7);
/**
 * @brief Sets value of pzn_7 field of the given object.
 * @ingroup c_barcode
 * @details If true, scan PZN7 (legacy Pharmazentralnummer) barcodes. If false, PZN7 barcodes are not decoded and are returned as CODE_39 instead.
 * 
 * Default is true
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_code_39_configuration_t, the field of which will be set
 * @param pzn_7: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_code_39_configuration_set_pzn_7(scanbotsdk_barcode_format_code_39_configuration_t* self, bool pzn_7);

/**
 * @brief Returns value of pzn_8 field of the given object.
 * @ingroup c_barcode
 * @details If true, scan PZN8 (Pharmazentralnummer) barcodes. If false, PZN8 barcodes are not decoded and are returned as CODE_39 instead.
 * 
 * Default is true
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_code_39_configuration_t
 * @param pzn_8: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_code_39_configuration_get_pzn_8(scanbotsdk_barcode_format_code_39_configuration_t* self, bool* pzn_8);
/**
 * @brief Sets value of pzn_8 field of the given object.
 * @ingroup c_barcode
 * @details If true, scan PZN8 (Pharmazentralnummer) barcodes. If false, PZN8 barcodes are not decoded and are returned as CODE_39 instead.
 * 
 * Default is true
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_code_39_configuration_t, the field of which will be set
 * @param pzn_8: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_code_39_configuration_set_pzn_8(scanbotsdk_barcode_format_code_39_configuration_t* self, bool pzn_8);

/**
 * @brief Returns value of try_code_39_extended_mode field of the given object.
 * @ingroup c_barcode
 * @details If true, try to scan CODE_39 in extended mode.
 * 
 * Default is false
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_code_39_configuration_t
 * @param try_code_39_extended_mode: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_code_39_configuration_get_try_code_39_extended_mode(scanbotsdk_barcode_format_code_39_configuration_t* self, bool* try_code_39_extended_mode);
/**
 * @brief Sets value of try_code_39_extended_mode field of the given object.
 * @ingroup c_barcode
 * @details If true, try to scan CODE_39 in extended mode.
 * 
 * Default is false
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_code_39_configuration_t, the field of which will be set
 * @param try_code_39_extended_mode: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_code_39_configuration_set_try_code_39_extended_mode(scanbotsdk_barcode_format_code_39_configuration_t* self, bool try_code_39_extended_mode);

/**
 * @brief Returns value of use_code_39_check_digit field of the given object.
 * @ingroup c_barcode
 * @details If true, return CODE_39 barcodes only if they have a valid check digit.
 * 
 * Default is false
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_code_39_configuration_t
 * @param use_code_39_check_digit: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_code_39_configuration_get_use_code_39_check_digit(scanbotsdk_barcode_format_code_39_configuration_t* self, bool* use_code_39_check_digit);
/**
 * @brief Sets value of use_code_39_check_digit field of the given object.
 * @ingroup c_barcode
 * @details If true, return CODE_39 barcodes only if they have a valid check digit.
 * 
 * Default is false
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_code_39_configuration_t, the field of which will be set
 * @param use_code_39_check_digit: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_code_39_configuration_set_use_code_39_check_digit(scanbotsdk_barcode_format_code_39_configuration_t* self, bool use_code_39_check_digit);


/**
 * @brief scanbotsdk_barcode_format_code_93_configuration_t class
 * @details Code 93 barcode configuration. Add to scanner configuration to scan Code 93 barcodes.
 * @ingroup c_barcode
*/
typedef struct scanbotsdk_barcode_format_code_93_configuration_t scanbotsdk_barcode_format_code_93_configuration_t;

/**
 * @brief Creates a new instance of scanbotsdk_barcode_format_code_93_configuration with given params and stores it in the location specified by the last argument.
 * @ingroup c_barcode
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param regex_filter: Regular expression filter for barcode text. If the barcode text does not match the regular expression, it will not be scanned. The default is an empty string (setting is turned off).
 * 
 * Default is ""
 * The value must not be null.
 * @param minimum_size_score: Minimum acceptable value of a result BarcodeItem's sizeScore (between 0 and 1). 
 * Barcodes with a sizeScore less than this value will not be scanned. 
 * When set to 0, barcodes are returned no matter what their size is.
 * 
 * Default is 0
 * @param add_additional_quiet_zone: If true, we process the barcode scanning with an artificial quiet zone that we add to the input image. 
 * This flag should be used to scan sharp crops of a barcode in single-shot mode.
 * 
 * Default is false
 * @param minimum_1_d_quiet_zone_size: Minimum quiet zone size on the left and right sides of a 1D barcode, measured in number of modules.
 * The quiet zone is only for 1D barcodes with weak start/stop patterns, i.e. Iata2Of5, Industrial2Of5, Code25, Itf, Codabar, MsiPlessey and Code11.
 * 
 * Default is 6
 * @param minimum_1_d_confirmation_count: In case of live scanning, we require confirmations across frames to consider the one-d barcode as valid.
 * 
 * Default is 1
 * @param strip_check_digits: If true, the check digits are stripped from the result.
 * 
 * Default is false
 * @param minimum_text_length: Minimum text length. Applied only to linear barcode formats that allow variable length.
 * 
 * Default is 1
 * @param maximum_text_length: Maximum text length. 0 implies no maximum. Applied only to linear barcode formats that allow variable length.
 * 
 * Default is 0
 * @param enable_one_d_blur_scanner: If true, barcodes with heavy blur or from far distance are tried to scan.
 * 
 * Default is true
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_barcode_format_code_93_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_code_93_configuration_create(
    const char* regex_filter,
    double minimum_size_score,
    bool add_additional_quiet_zone,
    int minimum_1_d_quiet_zone_size,
    int minimum_1_d_confirmation_count,
    bool strip_check_digits,
    int minimum_text_length,
    int maximum_text_length,
    bool enable_one_d_blur_scanner,
    scanbotsdk_barcode_format_code_93_configuration_t** result);

/**
 * @brief Creates a new instance of scanbotsdk_barcode_format_code_93_configuration_t with given required params and stores it in the location specified by the last argument.
 * @ingroup c_barcode
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_barcode_format_code_93_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_code_93_configuration_create_with_defaults(
    scanbotsdk_barcode_format_code_93_configuration_t** result);


/**
 * @brief Frees the memory allocated for the instance of scanbotsdk_barcode_format_code_93_configuration_t. If null is passed, the function does nothing.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_code_93_configuration_t to be freed
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_code_93_configuration_free(scanbotsdk_barcode_format_code_93_configuration_t* object);

/**
 * @brief Checks if the given instance of scanbotsdk_barcode_format_configuration_base_t is an instance of its subtype scanbotsdk_barcode_format_code_93_configuration_t.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_configuration_base_t to be checked
 * @param result: Pointer to a variable that will store the result of the check
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
 */
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_configuration_base_is_scanbotsdk_barcode_format_code_93_configuration(scanbotsdk_barcode_format_configuration_base_t* object, bool* result);
/**
 * @brief Casts the given instance of scanbotsdk_barcode_format_configuration_base_t to its subtype scanbotsdk_barcode_format_code_93_configuration_t. If the given instance is not an instance of the subtype, result will be null.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_configuration_base_t to be casted
 * @param result: Pointer to a variable that will store the casted instance of scanbotsdk_barcode_format_code_93_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_configuration_base_as_scanbotsdk_barcode_format_code_93_configuration(scanbotsdk_barcode_format_configuration_base_t* object, scanbotsdk_barcode_format_code_93_configuration_t** result);
/**
 * @brief Casts the given instance of scanbotsdk_barcode_format_code_93_configuration_t to its parent type scanbotsdk_barcode_format_configuration_base_t.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_configuration_base_t to be casted
 * @param result: Pointer to a variable that will store the casted instance of scanbotsdk_barcode_format_code_93_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_code_93_configuration_as_scanbotsdk_barcode_format_configuration_base(scanbotsdk_barcode_format_code_93_configuration_t* object, scanbotsdk_barcode_format_configuration_base_t** result);

/**
 * @brief Checks if the given instance of scanbotsdk_barcode_format_one_d_configuration_base_t is an instance of its subtype scanbotsdk_barcode_format_code_93_configuration_t.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_one_d_configuration_base_t to be checked
 * @param result: Pointer to a variable that will store the result of the check
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
 */
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_one_d_configuration_base_is_scanbotsdk_barcode_format_code_93_configuration(scanbotsdk_barcode_format_one_d_configuration_base_t* object, bool* result);
/**
 * @brief Casts the given instance of scanbotsdk_barcode_format_one_d_configuration_base_t to its subtype scanbotsdk_barcode_format_code_93_configuration_t. If the given instance is not an instance of the subtype, result will be null.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_one_d_configuration_base_t to be casted
 * @param result: Pointer to a variable that will store the casted instance of scanbotsdk_barcode_format_code_93_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_one_d_configuration_base_as_scanbotsdk_barcode_format_code_93_configuration(scanbotsdk_barcode_format_one_d_configuration_base_t* object, scanbotsdk_barcode_format_code_93_configuration_t** result);
/**
 * @brief Casts the given instance of scanbotsdk_barcode_format_code_93_configuration_t to its parent type scanbotsdk_barcode_format_one_d_configuration_base_t.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_one_d_configuration_base_t to be casted
 * @param result: Pointer to a variable that will store the casted instance of scanbotsdk_barcode_format_code_93_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_code_93_configuration_as_scanbotsdk_barcode_format_one_d_configuration_base(scanbotsdk_barcode_format_code_93_configuration_t* object, scanbotsdk_barcode_format_one_d_configuration_base_t** result);

/**
 * @brief Returns value of strip_check_digits field of the given object.
 * @ingroup c_barcode
 * @details If true, the check digits are stripped from the result.
 * 
 * Default is false
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_code_93_configuration_t
 * @param strip_check_digits: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_code_93_configuration_get_strip_check_digits(scanbotsdk_barcode_format_code_93_configuration_t* self, bool* strip_check_digits);
/**
 * @brief Sets value of strip_check_digits field of the given object.
 * @ingroup c_barcode
 * @details If true, the check digits are stripped from the result.
 * 
 * Default is false
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_code_93_configuration_t, the field of which will be set
 * @param strip_check_digits: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_code_93_configuration_set_strip_check_digits(scanbotsdk_barcode_format_code_93_configuration_t* self, bool strip_check_digits);

/**
 * @brief Returns value of minimum_text_length field of the given object.
 * @ingroup c_barcode
 * @details Minimum text length. Applied only to linear barcode formats that allow variable length.
 * 
 * Default is 1
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_code_93_configuration_t
 * @param minimum_text_length: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_code_93_configuration_get_minimum_text_length(scanbotsdk_barcode_format_code_93_configuration_t* self, int* minimum_text_length);
/**
 * @brief Sets value of minimum_text_length field of the given object.
 * @ingroup c_barcode
 * @details Minimum text length. Applied only to linear barcode formats that allow variable length.
 * 
 * Default is 1
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_code_93_configuration_t, the field of which will be set
 * @param minimum_text_length: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_code_93_configuration_set_minimum_text_length(scanbotsdk_barcode_format_code_93_configuration_t* self, int minimum_text_length);

/**
 * @brief Returns value of maximum_text_length field of the given object.
 * @ingroup c_barcode
 * @details Maximum text length. 0 implies no maximum. Applied only to linear barcode formats that allow variable length.
 * 
 * Default is 0
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_code_93_configuration_t
 * @param maximum_text_length: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_code_93_configuration_get_maximum_text_length(scanbotsdk_barcode_format_code_93_configuration_t* self, int* maximum_text_length);
/**
 * @brief Sets value of maximum_text_length field of the given object.
 * @ingroup c_barcode
 * @details Maximum text length. 0 implies no maximum. Applied only to linear barcode formats that allow variable length.
 * 
 * Default is 0
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_code_93_configuration_t, the field of which will be set
 * @param maximum_text_length: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_code_93_configuration_set_maximum_text_length(scanbotsdk_barcode_format_code_93_configuration_t* self, int maximum_text_length);

/**
 * @brief Returns value of enable_one_d_blur_scanner field of the given object.
 * @ingroup c_barcode
 * @details If true, barcodes with heavy blur or from far distance are tried to scan.
 * 
 * Default is true
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_code_93_configuration_t
 * @param enable_one_d_blur_scanner: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_code_93_configuration_get_enable_one_d_blur_scanner(scanbotsdk_barcode_format_code_93_configuration_t* self, bool* enable_one_d_blur_scanner);
/**
 * @brief Sets value of enable_one_d_blur_scanner field of the given object.
 * @ingroup c_barcode
 * @details If true, barcodes with heavy blur or from far distance are tried to scan.
 * 
 * Default is true
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_code_93_configuration_t, the field of which will be set
 * @param enable_one_d_blur_scanner: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_code_93_configuration_set_enable_one_d_blur_scanner(scanbotsdk_barcode_format_code_93_configuration_t* self, bool enable_one_d_blur_scanner);


/**
 * @brief scanbotsdk_barcode_format_code_128_configuration_t class
 * @details Code 128 barcode configuration. Add to scanner configuration to scan Code 128 barcodes.
 * @ingroup c_barcode
*/
typedef struct scanbotsdk_barcode_format_code_128_configuration_t scanbotsdk_barcode_format_code_128_configuration_t;

/**
 * @brief Creates a new instance of scanbotsdk_barcode_format_code_128_configuration with given params and stores it in the location specified by the last argument.
 * @ingroup c_barcode
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param regex_filter: Regular expression filter for barcode text. If the barcode text does not match the regular expression, it will not be scanned. The default is an empty string (setting is turned off).
 * 
 * Default is ""
 * The value must not be null.
 * @param minimum_size_score: Minimum acceptable value of a result BarcodeItem's sizeScore (between 0 and 1). 
 * Barcodes with a sizeScore less than this value will not be scanned. 
 * When set to 0, barcodes are returned no matter what their size is.
 * 
 * Default is 0
 * @param add_additional_quiet_zone: If true, we process the barcode scanning with an artificial quiet zone that we add to the input image. 
 * This flag should be used to scan sharp crops of a barcode in single-shot mode.
 * 
 * Default is false
 * @param minimum_1_d_quiet_zone_size: Minimum quiet zone size on the left and right sides of a 1D barcode, measured in number of modules.
 * The quiet zone is only for 1D barcodes with weak start/stop patterns, i.e. Iata2Of5, Industrial2Of5, Code25, Itf, Codabar, MsiPlessey and Code11.
 * 
 * Default is 6
 * @param minimum_1_d_confirmation_count: In case of live scanning, we require confirmations across frames to consider the one-d barcode as valid.
 * 
 * Default is 1
 * @param gs_1_handling: GS1 message handling options.
 * 
 * Default is PARSE
 * @param minimum_text_length: Minimum text length. Applied only to linear barcode formats that allow variable length.
 * 
 * Default is 1
 * @param maximum_text_length: Maximum text length. 0 implies no maximum. Applied only to linear barcode formats that allow variable length.
 * 
 * Default is 0
 * @param enable_one_d_blur_scanner: If true, barcodes with heavy blur or from far distance are tried to scan.
 * 
 * Default is true
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_barcode_format_code_128_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_code_128_configuration_create(
    const char* regex_filter,
    double minimum_size_score,
    bool add_additional_quiet_zone,
    int minimum_1_d_quiet_zone_size,
    int minimum_1_d_confirmation_count,
    scanbotsdk_gs_1_handling_t gs_1_handling,
    int minimum_text_length,
    int maximum_text_length,
    bool enable_one_d_blur_scanner,
    scanbotsdk_barcode_format_code_128_configuration_t** result);

/**
 * @brief Creates a new instance of scanbotsdk_barcode_format_code_128_configuration_t with given required params and stores it in the location specified by the last argument.
 * @ingroup c_barcode
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_barcode_format_code_128_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_code_128_configuration_create_with_defaults(
    scanbotsdk_barcode_format_code_128_configuration_t** result);


/**
 * @brief Frees the memory allocated for the instance of scanbotsdk_barcode_format_code_128_configuration_t. If null is passed, the function does nothing.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_code_128_configuration_t to be freed
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_code_128_configuration_free(scanbotsdk_barcode_format_code_128_configuration_t* object);

/**
 * @brief Checks if the given instance of scanbotsdk_barcode_format_configuration_base_t is an instance of its subtype scanbotsdk_barcode_format_code_128_configuration_t.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_configuration_base_t to be checked
 * @param result: Pointer to a variable that will store the result of the check
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
 */
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_configuration_base_is_scanbotsdk_barcode_format_code_128_configuration(scanbotsdk_barcode_format_configuration_base_t* object, bool* result);
/**
 * @brief Casts the given instance of scanbotsdk_barcode_format_configuration_base_t to its subtype scanbotsdk_barcode_format_code_128_configuration_t. If the given instance is not an instance of the subtype, result will be null.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_configuration_base_t to be casted
 * @param result: Pointer to a variable that will store the casted instance of scanbotsdk_barcode_format_code_128_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_configuration_base_as_scanbotsdk_barcode_format_code_128_configuration(scanbotsdk_barcode_format_configuration_base_t* object, scanbotsdk_barcode_format_code_128_configuration_t** result);
/**
 * @brief Casts the given instance of scanbotsdk_barcode_format_code_128_configuration_t to its parent type scanbotsdk_barcode_format_configuration_base_t.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_configuration_base_t to be casted
 * @param result: Pointer to a variable that will store the casted instance of scanbotsdk_barcode_format_code_128_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_code_128_configuration_as_scanbotsdk_barcode_format_configuration_base(scanbotsdk_barcode_format_code_128_configuration_t* object, scanbotsdk_barcode_format_configuration_base_t** result);

/**
 * @brief Checks if the given instance of scanbotsdk_barcode_format_one_d_configuration_base_t is an instance of its subtype scanbotsdk_barcode_format_code_128_configuration_t.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_one_d_configuration_base_t to be checked
 * @param result: Pointer to a variable that will store the result of the check
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
 */
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_one_d_configuration_base_is_scanbotsdk_barcode_format_code_128_configuration(scanbotsdk_barcode_format_one_d_configuration_base_t* object, bool* result);
/**
 * @brief Casts the given instance of scanbotsdk_barcode_format_one_d_configuration_base_t to its subtype scanbotsdk_barcode_format_code_128_configuration_t. If the given instance is not an instance of the subtype, result will be null.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_one_d_configuration_base_t to be casted
 * @param result: Pointer to a variable that will store the casted instance of scanbotsdk_barcode_format_code_128_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_one_d_configuration_base_as_scanbotsdk_barcode_format_code_128_configuration(scanbotsdk_barcode_format_one_d_configuration_base_t* object, scanbotsdk_barcode_format_code_128_configuration_t** result);
/**
 * @brief Casts the given instance of scanbotsdk_barcode_format_code_128_configuration_t to its parent type scanbotsdk_barcode_format_one_d_configuration_base_t.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_one_d_configuration_base_t to be casted
 * @param result: Pointer to a variable that will store the casted instance of scanbotsdk_barcode_format_code_128_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_code_128_configuration_as_scanbotsdk_barcode_format_one_d_configuration_base(scanbotsdk_barcode_format_code_128_configuration_t* object, scanbotsdk_barcode_format_one_d_configuration_base_t** result);

/**
 * @brief Returns value of gs_1_handling field of the given object.
 * @ingroup c_barcode
 * @details GS1 message handling options.
 * 
 * Default is PARSE
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_code_128_configuration_t
 * @param gs_1_handling: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_code_128_configuration_get_gs_1_handling(scanbotsdk_barcode_format_code_128_configuration_t* self, scanbotsdk_gs_1_handling_t* gs_1_handling);
/**
 * @brief Sets value of gs_1_handling field of the given object.
 * @ingroup c_barcode
 * @details GS1 message handling options.
 * 
 * Default is PARSE
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_code_128_configuration_t, the field of which will be set
 * @param gs_1_handling: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_code_128_configuration_set_gs_1_handling(scanbotsdk_barcode_format_code_128_configuration_t* self, scanbotsdk_gs_1_handling_t gs_1_handling);

/**
 * @brief Returns value of minimum_text_length field of the given object.
 * @ingroup c_barcode
 * @details Minimum text length. Applied only to linear barcode formats that allow variable length.
 * 
 * Default is 1
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_code_128_configuration_t
 * @param minimum_text_length: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_code_128_configuration_get_minimum_text_length(scanbotsdk_barcode_format_code_128_configuration_t* self, int* minimum_text_length);
/**
 * @brief Sets value of minimum_text_length field of the given object.
 * @ingroup c_barcode
 * @details Minimum text length. Applied only to linear barcode formats that allow variable length.
 * 
 * Default is 1
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_code_128_configuration_t, the field of which will be set
 * @param minimum_text_length: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_code_128_configuration_set_minimum_text_length(scanbotsdk_barcode_format_code_128_configuration_t* self, int minimum_text_length);

/**
 * @brief Returns value of maximum_text_length field of the given object.
 * @ingroup c_barcode
 * @details Maximum text length. 0 implies no maximum. Applied only to linear barcode formats that allow variable length.
 * 
 * Default is 0
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_code_128_configuration_t
 * @param maximum_text_length: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_code_128_configuration_get_maximum_text_length(scanbotsdk_barcode_format_code_128_configuration_t* self, int* maximum_text_length);
/**
 * @brief Sets value of maximum_text_length field of the given object.
 * @ingroup c_barcode
 * @details Maximum text length. 0 implies no maximum. Applied only to linear barcode formats that allow variable length.
 * 
 * Default is 0
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_code_128_configuration_t, the field of which will be set
 * @param maximum_text_length: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_code_128_configuration_set_maximum_text_length(scanbotsdk_barcode_format_code_128_configuration_t* self, int maximum_text_length);

/**
 * @brief Returns value of enable_one_d_blur_scanner field of the given object.
 * @ingroup c_barcode
 * @details If true, barcodes with heavy blur or from far distance are tried to scan.
 * 
 * Default is true
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_code_128_configuration_t
 * @param enable_one_d_blur_scanner: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_code_128_configuration_get_enable_one_d_blur_scanner(scanbotsdk_barcode_format_code_128_configuration_t* self, bool* enable_one_d_blur_scanner);
/**
 * @brief Sets value of enable_one_d_blur_scanner field of the given object.
 * @ingroup c_barcode
 * @details If true, barcodes with heavy blur or from far distance are tried to scan.
 * 
 * Default is true
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_code_128_configuration_t, the field of which will be set
 * @param enable_one_d_blur_scanner: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_code_128_configuration_set_enable_one_d_blur_scanner(scanbotsdk_barcode_format_code_128_configuration_t* self, bool enable_one_d_blur_scanner);


/**
 * @brief scanbotsdk_barcode_format_code_2_of_5_configuration_t class
 * @details Configuration for all 2-of-5 barcode types (except Interleaved 2-of-5, which is handled by ItfConfig).
 * Add to scanner configuration to scan Code 25, IATA 2-of-5 and Industrial 2-of-5 barcodes.
 * 
 * Industrial 2-of-5 barcodes are a subset of Code 25 barcodes.
 * Any valid Industrial 2-of-5 barcode is also a valid Code 25 barcode.
 * @ingroup c_barcode
*/
typedef struct scanbotsdk_barcode_format_code_2_of_5_configuration_t scanbotsdk_barcode_format_code_2_of_5_configuration_t;

/**
 * @brief Creates a new instance of scanbotsdk_barcode_format_code_2_of_5_configuration with given params and stores it in the location specified by the last argument.
 * @ingroup c_barcode
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param regex_filter: Regular expression filter for barcode text. If the barcode text does not match the regular expression, it will not be scanned. The default is an empty string (setting is turned off).
 * 
 * Default is ""
 * The value must not be null.
 * @param minimum_size_score: Minimum acceptable value of a result BarcodeItem's sizeScore (between 0 and 1). 
 * Barcodes with a sizeScore less than this value will not be scanned. 
 * When set to 0, barcodes are returned no matter what their size is.
 * 
 * Default is 0
 * @param add_additional_quiet_zone: If true, we process the barcode scanning with an artificial quiet zone that we add to the input image. 
 * This flag should be used to scan sharp crops of a barcode in single-shot mode.
 * 
 * Default is false
 * @param minimum_1_d_quiet_zone_size: Minimum quiet zone size on the left and right sides of a 1D barcode, measured in number of modules.
 * The quiet zone is only for 1D barcodes with weak start/stop patterns, i.e. Iata2Of5, Industrial2Of5, Code25, Itf, Codabar, MsiPlessey and Code11.
 * 
 * Default is 6
 * @param minimum_1_d_confirmation_count: In case of live scanning, we require confirmations across frames to consider the one-d barcode as valid.
 * 
 * Default is 1
 * @param strip_check_digits: If true, the check digits are stripped from the result.
 * 
 * Default is false
 * @param minimum_text_length: Minimum text length. Applied only to linear barcode formats that allow variable length.
 * 
 * Default is 1
 * @param maximum_text_length: Maximum text length. 0 implies no maximum. Applied only to linear barcode formats that allow variable length.
 * 
 * Default is 0
 * @param iata_2of_5: If true, scan IATA 2-of-5 barcodes. If useIATA2OF5Checksum is true, only barcodes with a valid checksum are returned.
 * 
 * Default is true
 * @param code_25: If true, scan and return Code 25 (Code 2-of-5) barcodes. If industrial2of5 is also true, then valid Industrial 2-of-5 barcodes will preferentially be returned as such, instead of Code 25.
 * 
 * Default is false
 * @param industrial_2of_5: If true, scan and return valid Industrial 2-of-5 barcodes. If false, but code25 is true, Industrial 2-of-5 barcodes will be returned as Code 25 barcodes.
 * 
 * Default is true
 * @param use_iata_2_of_5_checksum: If true, return IATA_2_OF_5 barcodes only if they have a valid check digit.
 * 
 * Default is true
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_barcode_format_code_2_of_5_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_code_2_of_5_configuration_create(
    const char* regex_filter,
    double minimum_size_score,
    bool add_additional_quiet_zone,
    int minimum_1_d_quiet_zone_size,
    int minimum_1_d_confirmation_count,
    bool strip_check_digits,
    int minimum_text_length,
    int maximum_text_length,
    bool iata_2of_5,
    bool code_25,
    bool industrial_2of_5,
    bool use_iata_2_of_5_checksum,
    scanbotsdk_barcode_format_code_2_of_5_configuration_t** result);

/**
 * @brief Creates a new instance of scanbotsdk_barcode_format_code_2_of_5_configuration_t with given required params and stores it in the location specified by the last argument.
 * @ingroup c_barcode
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_barcode_format_code_2_of_5_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_code_2_of_5_configuration_create_with_defaults(
    scanbotsdk_barcode_format_code_2_of_5_configuration_t** result);


/**
 * @brief Frees the memory allocated for the instance of scanbotsdk_barcode_format_code_2_of_5_configuration_t. If null is passed, the function does nothing.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_code_2_of_5_configuration_t to be freed
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_code_2_of_5_configuration_free(scanbotsdk_barcode_format_code_2_of_5_configuration_t* object);

/**
 * @brief Checks if the given instance of scanbotsdk_barcode_format_configuration_base_t is an instance of its subtype scanbotsdk_barcode_format_code_2_of_5_configuration_t.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_configuration_base_t to be checked
 * @param result: Pointer to a variable that will store the result of the check
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
 */
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_configuration_base_is_scanbotsdk_barcode_format_code_2_of_5_configuration(scanbotsdk_barcode_format_configuration_base_t* object, bool* result);
/**
 * @brief Casts the given instance of scanbotsdk_barcode_format_configuration_base_t to its subtype scanbotsdk_barcode_format_code_2_of_5_configuration_t. If the given instance is not an instance of the subtype, result will be null.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_configuration_base_t to be casted
 * @param result: Pointer to a variable that will store the casted instance of scanbotsdk_barcode_format_code_2_of_5_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_configuration_base_as_scanbotsdk_barcode_format_code_2_of_5_configuration(scanbotsdk_barcode_format_configuration_base_t* object, scanbotsdk_barcode_format_code_2_of_5_configuration_t** result);
/**
 * @brief Casts the given instance of scanbotsdk_barcode_format_code_2_of_5_configuration_t to its parent type scanbotsdk_barcode_format_configuration_base_t.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_configuration_base_t to be casted
 * @param result: Pointer to a variable that will store the casted instance of scanbotsdk_barcode_format_code_2_of_5_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_code_2_of_5_configuration_as_scanbotsdk_barcode_format_configuration_base(scanbotsdk_barcode_format_code_2_of_5_configuration_t* object, scanbotsdk_barcode_format_configuration_base_t** result);

/**
 * @brief Checks if the given instance of scanbotsdk_barcode_format_one_d_configuration_base_t is an instance of its subtype scanbotsdk_barcode_format_code_2_of_5_configuration_t.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_one_d_configuration_base_t to be checked
 * @param result: Pointer to a variable that will store the result of the check
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
 */
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_one_d_configuration_base_is_scanbotsdk_barcode_format_code_2_of_5_configuration(scanbotsdk_barcode_format_one_d_configuration_base_t* object, bool* result);
/**
 * @brief Casts the given instance of scanbotsdk_barcode_format_one_d_configuration_base_t to its subtype scanbotsdk_barcode_format_code_2_of_5_configuration_t. If the given instance is not an instance of the subtype, result will be null.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_one_d_configuration_base_t to be casted
 * @param result: Pointer to a variable that will store the casted instance of scanbotsdk_barcode_format_code_2_of_5_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_one_d_configuration_base_as_scanbotsdk_barcode_format_code_2_of_5_configuration(scanbotsdk_barcode_format_one_d_configuration_base_t* object, scanbotsdk_barcode_format_code_2_of_5_configuration_t** result);
/**
 * @brief Casts the given instance of scanbotsdk_barcode_format_code_2_of_5_configuration_t to its parent type scanbotsdk_barcode_format_one_d_configuration_base_t.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_one_d_configuration_base_t to be casted
 * @param result: Pointer to a variable that will store the casted instance of scanbotsdk_barcode_format_code_2_of_5_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_code_2_of_5_configuration_as_scanbotsdk_barcode_format_one_d_configuration_base(scanbotsdk_barcode_format_code_2_of_5_configuration_t* object, scanbotsdk_barcode_format_one_d_configuration_base_t** result);

/**
 * @brief Returns value of strip_check_digits field of the given object.
 * @ingroup c_barcode
 * @details If true, the check digits are stripped from the result.
 * 
 * Default is false
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_code_2_of_5_configuration_t
 * @param strip_check_digits: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_code_2_of_5_configuration_get_strip_check_digits(scanbotsdk_barcode_format_code_2_of_5_configuration_t* self, bool* strip_check_digits);
/**
 * @brief Sets value of strip_check_digits field of the given object.
 * @ingroup c_barcode
 * @details If true, the check digits are stripped from the result.
 * 
 * Default is false
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_code_2_of_5_configuration_t, the field of which will be set
 * @param strip_check_digits: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_code_2_of_5_configuration_set_strip_check_digits(scanbotsdk_barcode_format_code_2_of_5_configuration_t* self, bool strip_check_digits);

/**
 * @brief Returns value of minimum_text_length field of the given object.
 * @ingroup c_barcode
 * @details Minimum text length. Applied only to linear barcode formats that allow variable length.
 * 
 * Default is 1
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_code_2_of_5_configuration_t
 * @param minimum_text_length: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_code_2_of_5_configuration_get_minimum_text_length(scanbotsdk_barcode_format_code_2_of_5_configuration_t* self, int* minimum_text_length);
/**
 * @brief Sets value of minimum_text_length field of the given object.
 * @ingroup c_barcode
 * @details Minimum text length. Applied only to linear barcode formats that allow variable length.
 * 
 * Default is 1
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_code_2_of_5_configuration_t, the field of which will be set
 * @param minimum_text_length: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_code_2_of_5_configuration_set_minimum_text_length(scanbotsdk_barcode_format_code_2_of_5_configuration_t* self, int minimum_text_length);

/**
 * @brief Returns value of maximum_text_length field of the given object.
 * @ingroup c_barcode
 * @details Maximum text length. 0 implies no maximum. Applied only to linear barcode formats that allow variable length.
 * 
 * Default is 0
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_code_2_of_5_configuration_t
 * @param maximum_text_length: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_code_2_of_5_configuration_get_maximum_text_length(scanbotsdk_barcode_format_code_2_of_5_configuration_t* self, int* maximum_text_length);
/**
 * @brief Sets value of maximum_text_length field of the given object.
 * @ingroup c_barcode
 * @details Maximum text length. 0 implies no maximum. Applied only to linear barcode formats that allow variable length.
 * 
 * Default is 0
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_code_2_of_5_configuration_t, the field of which will be set
 * @param maximum_text_length: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_code_2_of_5_configuration_set_maximum_text_length(scanbotsdk_barcode_format_code_2_of_5_configuration_t* self, int maximum_text_length);

/**
 * @brief Returns value of iata_2of_5 field of the given object.
 * @ingroup c_barcode
 * @details If true, scan IATA 2-of-5 barcodes. If useIATA2OF5Checksum is true, only barcodes with a valid checksum are returned.
 * 
 * Default is true
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_code_2_of_5_configuration_t
 * @param iata_2of_5: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_code_2_of_5_configuration_get_iata_2of_5(scanbotsdk_barcode_format_code_2_of_5_configuration_t* self, bool* iata_2of_5);
/**
 * @brief Sets value of iata_2of_5 field of the given object.
 * @ingroup c_barcode
 * @details If true, scan IATA 2-of-5 barcodes. If useIATA2OF5Checksum is true, only barcodes with a valid checksum are returned.
 * 
 * Default is true
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_code_2_of_5_configuration_t, the field of which will be set
 * @param iata_2of_5: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_code_2_of_5_configuration_set_iata_2of_5(scanbotsdk_barcode_format_code_2_of_5_configuration_t* self, bool iata_2of_5);

/**
 * @brief Returns value of code_25 field of the given object.
 * @ingroup c_barcode
 * @details If true, scan and return Code 25 (Code 2-of-5) barcodes. If industrial2of5 is also true, then valid Industrial 2-of-5 barcodes will preferentially be returned as such, instead of Code 25.
 * 
 * Default is false
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_code_2_of_5_configuration_t
 * @param code_25: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_code_2_of_5_configuration_get_code_25(scanbotsdk_barcode_format_code_2_of_5_configuration_t* self, bool* code_25);
/**
 * @brief Sets value of code_25 field of the given object.
 * @ingroup c_barcode
 * @details If true, scan and return Code 25 (Code 2-of-5) barcodes. If industrial2of5 is also true, then valid Industrial 2-of-5 barcodes will preferentially be returned as such, instead of Code 25.
 * 
 * Default is false
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_code_2_of_5_configuration_t, the field of which will be set
 * @param code_25: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_code_2_of_5_configuration_set_code_25(scanbotsdk_barcode_format_code_2_of_5_configuration_t* self, bool code_25);

/**
 * @brief Returns value of industrial_2of_5 field of the given object.
 * @ingroup c_barcode
 * @details If true, scan and return valid Industrial 2-of-5 barcodes. If false, but code25 is true, Industrial 2-of-5 barcodes will be returned as Code 25 barcodes.
 * 
 * Default is true
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_code_2_of_5_configuration_t
 * @param industrial_2of_5: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_code_2_of_5_configuration_get_industrial_2of_5(scanbotsdk_barcode_format_code_2_of_5_configuration_t* self, bool* industrial_2of_5);
/**
 * @brief Sets value of industrial_2of_5 field of the given object.
 * @ingroup c_barcode
 * @details If true, scan and return valid Industrial 2-of-5 barcodes. If false, but code25 is true, Industrial 2-of-5 barcodes will be returned as Code 25 barcodes.
 * 
 * Default is true
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_code_2_of_5_configuration_t, the field of which will be set
 * @param industrial_2of_5: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_code_2_of_5_configuration_set_industrial_2of_5(scanbotsdk_barcode_format_code_2_of_5_configuration_t* self, bool industrial_2of_5);

/**
 * @brief Returns value of use_iata_2_of_5_checksum field of the given object.
 * @ingroup c_barcode
 * @details If true, return IATA_2_OF_5 barcodes only if they have a valid check digit.
 * 
 * Default is true
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_code_2_of_5_configuration_t
 * @param use_iata_2_of_5_checksum: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_code_2_of_5_configuration_get_use_iata_2_of_5_checksum(scanbotsdk_barcode_format_code_2_of_5_configuration_t* self, bool* use_iata_2_of_5_checksum);
/**
 * @brief Sets value of use_iata_2_of_5_checksum field of the given object.
 * @ingroup c_barcode
 * @details If true, return IATA_2_OF_5 barcodes only if they have a valid check digit.
 * 
 * Default is true
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_code_2_of_5_configuration_t, the field of which will be set
 * @param use_iata_2_of_5_checksum: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_code_2_of_5_configuration_set_use_iata_2_of_5_checksum(scanbotsdk_barcode_format_code_2_of_5_configuration_t* self, bool use_iata_2_of_5_checksum);


/**
 * @brief scanbotsdk_barcode_format_data_bar_configuration_t class
 * @details GS1 DataBar barcode configuration. Add to scanner configuration to scan GS1 DataBar-14, GS1 DataBar-14 Truncated, GS1 DataBar-14 Stacked and GS1 DataBar-14 Stacked Omnidirectional barcodes.
 * @ingroup c_barcode
*/
typedef struct scanbotsdk_barcode_format_data_bar_configuration_t scanbotsdk_barcode_format_data_bar_configuration_t;

/**
 * @brief Creates a new instance of scanbotsdk_barcode_format_data_bar_configuration with given params and stores it in the location specified by the last argument.
 * @ingroup c_barcode
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param regex_filter: Regular expression filter for barcode text. If the barcode text does not match the regular expression, it will not be scanned. The default is an empty string (setting is turned off).
 * 
 * Default is ""
 * The value must not be null.
 * @param minimum_size_score: Minimum acceptable value of a result BarcodeItem's sizeScore (between 0 and 1). 
 * Barcodes with a sizeScore less than this value will not be scanned. 
 * When set to 0, barcodes are returned no matter what their size is.
 * 
 * Default is 0
 * @param add_additional_quiet_zone: If true, we process the barcode scanning with an artificial quiet zone that we add to the input image. 
 * This flag should be used to scan sharp crops of a barcode in single-shot mode.
 * 
 * Default is false
 * @param minimum_1_d_quiet_zone_size: Minimum quiet zone size on the left and right sides of a 1D barcode, measured in number of modules.
 * The quiet zone is only for 1D barcodes with weak start/stop patterns, i.e. Iata2Of5, Industrial2Of5, Code25, Itf, Codabar, MsiPlessey and Code11.
 * 
 * Default is 6
 * @param minimum_1_d_confirmation_count: In case of live scanning, we require confirmations across frames to consider the one-d barcode as valid.
 * 
 * Default is 1
 * @param gs_1_handling: GS1 message handling options.
 * 
 * Default is PARSE
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_barcode_format_data_bar_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_data_bar_configuration_create(
    const char* regex_filter,
    double minimum_size_score,
    bool add_additional_quiet_zone,
    int minimum_1_d_quiet_zone_size,
    int minimum_1_d_confirmation_count,
    scanbotsdk_gs_1_handling_t gs_1_handling,
    scanbotsdk_barcode_format_data_bar_configuration_t** result);

/**
 * @brief Creates a new instance of scanbotsdk_barcode_format_data_bar_configuration_t with given required params and stores it in the location specified by the last argument.
 * @ingroup c_barcode
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_barcode_format_data_bar_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_data_bar_configuration_create_with_defaults(
    scanbotsdk_barcode_format_data_bar_configuration_t** result);


/**
 * @brief Frees the memory allocated for the instance of scanbotsdk_barcode_format_data_bar_configuration_t. If null is passed, the function does nothing.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_data_bar_configuration_t to be freed
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_data_bar_configuration_free(scanbotsdk_barcode_format_data_bar_configuration_t* object);

/**
 * @brief Checks if the given instance of scanbotsdk_barcode_format_configuration_base_t is an instance of its subtype scanbotsdk_barcode_format_data_bar_configuration_t.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_configuration_base_t to be checked
 * @param result: Pointer to a variable that will store the result of the check
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
 */
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_configuration_base_is_scanbotsdk_barcode_format_data_bar_configuration(scanbotsdk_barcode_format_configuration_base_t* object, bool* result);
/**
 * @brief Casts the given instance of scanbotsdk_barcode_format_configuration_base_t to its subtype scanbotsdk_barcode_format_data_bar_configuration_t. If the given instance is not an instance of the subtype, result will be null.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_configuration_base_t to be casted
 * @param result: Pointer to a variable that will store the casted instance of scanbotsdk_barcode_format_data_bar_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_configuration_base_as_scanbotsdk_barcode_format_data_bar_configuration(scanbotsdk_barcode_format_configuration_base_t* object, scanbotsdk_barcode_format_data_bar_configuration_t** result);
/**
 * @brief Casts the given instance of scanbotsdk_barcode_format_data_bar_configuration_t to its parent type scanbotsdk_barcode_format_configuration_base_t.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_configuration_base_t to be casted
 * @param result: Pointer to a variable that will store the casted instance of scanbotsdk_barcode_format_data_bar_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_data_bar_configuration_as_scanbotsdk_barcode_format_configuration_base(scanbotsdk_barcode_format_data_bar_configuration_t* object, scanbotsdk_barcode_format_configuration_base_t** result);

/**
 * @brief Checks if the given instance of scanbotsdk_barcode_format_one_d_configuration_base_t is an instance of its subtype scanbotsdk_barcode_format_data_bar_configuration_t.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_one_d_configuration_base_t to be checked
 * @param result: Pointer to a variable that will store the result of the check
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
 */
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_one_d_configuration_base_is_scanbotsdk_barcode_format_data_bar_configuration(scanbotsdk_barcode_format_one_d_configuration_base_t* object, bool* result);
/**
 * @brief Casts the given instance of scanbotsdk_barcode_format_one_d_configuration_base_t to its subtype scanbotsdk_barcode_format_data_bar_configuration_t. If the given instance is not an instance of the subtype, result will be null.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_one_d_configuration_base_t to be casted
 * @param result: Pointer to a variable that will store the casted instance of scanbotsdk_barcode_format_data_bar_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_one_d_configuration_base_as_scanbotsdk_barcode_format_data_bar_configuration(scanbotsdk_barcode_format_one_d_configuration_base_t* object, scanbotsdk_barcode_format_data_bar_configuration_t** result);
/**
 * @brief Casts the given instance of scanbotsdk_barcode_format_data_bar_configuration_t to its parent type scanbotsdk_barcode_format_one_d_configuration_base_t.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_one_d_configuration_base_t to be casted
 * @param result: Pointer to a variable that will store the casted instance of scanbotsdk_barcode_format_data_bar_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_data_bar_configuration_as_scanbotsdk_barcode_format_one_d_configuration_base(scanbotsdk_barcode_format_data_bar_configuration_t* object, scanbotsdk_barcode_format_one_d_configuration_base_t** result);

/**
 * @brief Returns value of gs_1_handling field of the given object.
 * @ingroup c_barcode
 * @details GS1 message handling options.
 * 
 * Default is PARSE
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_data_bar_configuration_t
 * @param gs_1_handling: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_data_bar_configuration_get_gs_1_handling(scanbotsdk_barcode_format_data_bar_configuration_t* self, scanbotsdk_gs_1_handling_t* gs_1_handling);
/**
 * @brief Sets value of gs_1_handling field of the given object.
 * @ingroup c_barcode
 * @details GS1 message handling options.
 * 
 * Default is PARSE
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_data_bar_configuration_t, the field of which will be set
 * @param gs_1_handling: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_data_bar_configuration_set_gs_1_handling(scanbotsdk_barcode_format_data_bar_configuration_t* self, scanbotsdk_gs_1_handling_t gs_1_handling);


/**
 * @brief scanbotsdk_barcode_format_data_bar_expanded_configuration_t class
 * @details GS1 DataBar Expanded barcode configuration. Add to scanner configuration to scan GS1 DataBar Expanded and GS1 DataBar Expanded Stacked barcodes.
 * @ingroup c_barcode
*/
typedef struct scanbotsdk_barcode_format_data_bar_expanded_configuration_t scanbotsdk_barcode_format_data_bar_expanded_configuration_t;

/**
 * @brief Creates a new instance of scanbotsdk_barcode_format_data_bar_expanded_configuration with given params and stores it in the location specified by the last argument.
 * @ingroup c_barcode
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param regex_filter: Regular expression filter for barcode text. If the barcode text does not match the regular expression, it will not be scanned. The default is an empty string (setting is turned off).
 * 
 * Default is ""
 * The value must not be null.
 * @param minimum_size_score: Minimum acceptable value of a result BarcodeItem's sizeScore (between 0 and 1). 
 * Barcodes with a sizeScore less than this value will not be scanned. 
 * When set to 0, barcodes are returned no matter what their size is.
 * 
 * Default is 0
 * @param add_additional_quiet_zone: If true, we process the barcode scanning with an artificial quiet zone that we add to the input image. 
 * This flag should be used to scan sharp crops of a barcode in single-shot mode.
 * 
 * Default is false
 * @param minimum_1_d_quiet_zone_size: Minimum quiet zone size on the left and right sides of a 1D barcode, measured in number of modules.
 * The quiet zone is only for 1D barcodes with weak start/stop patterns, i.e. Iata2Of5, Industrial2Of5, Code25, Itf, Codabar, MsiPlessey and Code11.
 * 
 * Default is 6
 * @param minimum_1_d_confirmation_count: In case of live scanning, we require confirmations across frames to consider the one-d barcode as valid.
 * 
 * Default is 1
 * @param gs_1_handling: GS1 message handling options.
 * 
 * Default is PARSE
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_barcode_format_data_bar_expanded_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_data_bar_expanded_configuration_create(
    const char* regex_filter,
    double minimum_size_score,
    bool add_additional_quiet_zone,
    int minimum_1_d_quiet_zone_size,
    int minimum_1_d_confirmation_count,
    scanbotsdk_gs_1_handling_t gs_1_handling,
    scanbotsdk_barcode_format_data_bar_expanded_configuration_t** result);

/**
 * @brief Creates a new instance of scanbotsdk_barcode_format_data_bar_expanded_configuration_t with given required params and stores it in the location specified by the last argument.
 * @ingroup c_barcode
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_barcode_format_data_bar_expanded_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_data_bar_expanded_configuration_create_with_defaults(
    scanbotsdk_barcode_format_data_bar_expanded_configuration_t** result);


/**
 * @brief Frees the memory allocated for the instance of scanbotsdk_barcode_format_data_bar_expanded_configuration_t. If null is passed, the function does nothing.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_data_bar_expanded_configuration_t to be freed
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_data_bar_expanded_configuration_free(scanbotsdk_barcode_format_data_bar_expanded_configuration_t* object);

/**
 * @brief Checks if the given instance of scanbotsdk_barcode_format_configuration_base_t is an instance of its subtype scanbotsdk_barcode_format_data_bar_expanded_configuration_t.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_configuration_base_t to be checked
 * @param result: Pointer to a variable that will store the result of the check
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
 */
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_configuration_base_is_scanbotsdk_barcode_format_data_bar_expanded_configuration(scanbotsdk_barcode_format_configuration_base_t* object, bool* result);
/**
 * @brief Casts the given instance of scanbotsdk_barcode_format_configuration_base_t to its subtype scanbotsdk_barcode_format_data_bar_expanded_configuration_t. If the given instance is not an instance of the subtype, result will be null.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_configuration_base_t to be casted
 * @param result: Pointer to a variable that will store the casted instance of scanbotsdk_barcode_format_data_bar_expanded_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_configuration_base_as_scanbotsdk_barcode_format_data_bar_expanded_configuration(scanbotsdk_barcode_format_configuration_base_t* object, scanbotsdk_barcode_format_data_bar_expanded_configuration_t** result);
/**
 * @brief Casts the given instance of scanbotsdk_barcode_format_data_bar_expanded_configuration_t to its parent type scanbotsdk_barcode_format_configuration_base_t.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_configuration_base_t to be casted
 * @param result: Pointer to a variable that will store the casted instance of scanbotsdk_barcode_format_data_bar_expanded_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_data_bar_expanded_configuration_as_scanbotsdk_barcode_format_configuration_base(scanbotsdk_barcode_format_data_bar_expanded_configuration_t* object, scanbotsdk_barcode_format_configuration_base_t** result);

/**
 * @brief Checks if the given instance of scanbotsdk_barcode_format_one_d_configuration_base_t is an instance of its subtype scanbotsdk_barcode_format_data_bar_expanded_configuration_t.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_one_d_configuration_base_t to be checked
 * @param result: Pointer to a variable that will store the result of the check
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
 */
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_one_d_configuration_base_is_scanbotsdk_barcode_format_data_bar_expanded_configuration(scanbotsdk_barcode_format_one_d_configuration_base_t* object, bool* result);
/**
 * @brief Casts the given instance of scanbotsdk_barcode_format_one_d_configuration_base_t to its subtype scanbotsdk_barcode_format_data_bar_expanded_configuration_t. If the given instance is not an instance of the subtype, result will be null.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_one_d_configuration_base_t to be casted
 * @param result: Pointer to a variable that will store the casted instance of scanbotsdk_barcode_format_data_bar_expanded_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_one_d_configuration_base_as_scanbotsdk_barcode_format_data_bar_expanded_configuration(scanbotsdk_barcode_format_one_d_configuration_base_t* object, scanbotsdk_barcode_format_data_bar_expanded_configuration_t** result);
/**
 * @brief Casts the given instance of scanbotsdk_barcode_format_data_bar_expanded_configuration_t to its parent type scanbotsdk_barcode_format_one_d_configuration_base_t.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_one_d_configuration_base_t to be casted
 * @param result: Pointer to a variable that will store the casted instance of scanbotsdk_barcode_format_data_bar_expanded_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_data_bar_expanded_configuration_as_scanbotsdk_barcode_format_one_d_configuration_base(scanbotsdk_barcode_format_data_bar_expanded_configuration_t* object, scanbotsdk_barcode_format_one_d_configuration_base_t** result);

/**
 * @brief Returns value of gs_1_handling field of the given object.
 * @ingroup c_barcode
 * @details GS1 message handling options.
 * 
 * Default is PARSE
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_data_bar_expanded_configuration_t
 * @param gs_1_handling: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_data_bar_expanded_configuration_get_gs_1_handling(scanbotsdk_barcode_format_data_bar_expanded_configuration_t* self, scanbotsdk_gs_1_handling_t* gs_1_handling);
/**
 * @brief Sets value of gs_1_handling field of the given object.
 * @ingroup c_barcode
 * @details GS1 message handling options.
 * 
 * Default is PARSE
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_data_bar_expanded_configuration_t, the field of which will be set
 * @param gs_1_handling: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_data_bar_expanded_configuration_set_gs_1_handling(scanbotsdk_barcode_format_data_bar_expanded_configuration_t* self, scanbotsdk_gs_1_handling_t gs_1_handling);


/**
 * @brief scanbotsdk_barcode_format_data_bar_limited_configuration_t class
 * @details GS1 DataBar Limited barcode configuration. Add to scanner configuration to scan GS1 DataBar Limited barcodes.
 * @ingroup c_barcode
*/
typedef struct scanbotsdk_barcode_format_data_bar_limited_configuration_t scanbotsdk_barcode_format_data_bar_limited_configuration_t;

/**
 * @brief Creates a new instance of scanbotsdk_barcode_format_data_bar_limited_configuration with given params and stores it in the location specified by the last argument.
 * @ingroup c_barcode
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param regex_filter: Regular expression filter for barcode text. If the barcode text does not match the regular expression, it will not be scanned. The default is an empty string (setting is turned off).
 * 
 * Default is ""
 * The value must not be null.
 * @param minimum_size_score: Minimum acceptable value of a result BarcodeItem's sizeScore (between 0 and 1). 
 * Barcodes with a sizeScore less than this value will not be scanned. 
 * When set to 0, barcodes are returned no matter what their size is.
 * 
 * Default is 0
 * @param add_additional_quiet_zone: If true, we process the barcode scanning with an artificial quiet zone that we add to the input image. 
 * This flag should be used to scan sharp crops of a barcode in single-shot mode.
 * 
 * Default is false
 * @param minimum_1_d_quiet_zone_size: Minimum quiet zone size on the left and right sides of a 1D barcode, measured in number of modules.
 * The quiet zone is only for 1D barcodes with weak start/stop patterns, i.e. Iata2Of5, Industrial2Of5, Code25, Itf, Codabar, MsiPlessey and Code11.
 * 
 * Default is 6
 * @param minimum_1_d_confirmation_count: In case of live scanning, we require confirmations across frames to consider the one-d barcode as valid.
 * 
 * Default is 1
 * @param gs_1_handling: GS1 message handling options.
 * 
 * Default is PARSE
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_barcode_format_data_bar_limited_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_data_bar_limited_configuration_create(
    const char* regex_filter,
    double minimum_size_score,
    bool add_additional_quiet_zone,
    int minimum_1_d_quiet_zone_size,
    int minimum_1_d_confirmation_count,
    scanbotsdk_gs_1_handling_t gs_1_handling,
    scanbotsdk_barcode_format_data_bar_limited_configuration_t** result);

/**
 * @brief Creates a new instance of scanbotsdk_barcode_format_data_bar_limited_configuration_t with given required params and stores it in the location specified by the last argument.
 * @ingroup c_barcode
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_barcode_format_data_bar_limited_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_data_bar_limited_configuration_create_with_defaults(
    scanbotsdk_barcode_format_data_bar_limited_configuration_t** result);


/**
 * @brief Frees the memory allocated for the instance of scanbotsdk_barcode_format_data_bar_limited_configuration_t. If null is passed, the function does nothing.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_data_bar_limited_configuration_t to be freed
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_data_bar_limited_configuration_free(scanbotsdk_barcode_format_data_bar_limited_configuration_t* object);

/**
 * @brief Checks if the given instance of scanbotsdk_barcode_format_configuration_base_t is an instance of its subtype scanbotsdk_barcode_format_data_bar_limited_configuration_t.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_configuration_base_t to be checked
 * @param result: Pointer to a variable that will store the result of the check
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
 */
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_configuration_base_is_scanbotsdk_barcode_format_data_bar_limited_configuration(scanbotsdk_barcode_format_configuration_base_t* object, bool* result);
/**
 * @brief Casts the given instance of scanbotsdk_barcode_format_configuration_base_t to its subtype scanbotsdk_barcode_format_data_bar_limited_configuration_t. If the given instance is not an instance of the subtype, result will be null.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_configuration_base_t to be casted
 * @param result: Pointer to a variable that will store the casted instance of scanbotsdk_barcode_format_data_bar_limited_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_configuration_base_as_scanbotsdk_barcode_format_data_bar_limited_configuration(scanbotsdk_barcode_format_configuration_base_t* object, scanbotsdk_barcode_format_data_bar_limited_configuration_t** result);
/**
 * @brief Casts the given instance of scanbotsdk_barcode_format_data_bar_limited_configuration_t to its parent type scanbotsdk_barcode_format_configuration_base_t.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_configuration_base_t to be casted
 * @param result: Pointer to a variable that will store the casted instance of scanbotsdk_barcode_format_data_bar_limited_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_data_bar_limited_configuration_as_scanbotsdk_barcode_format_configuration_base(scanbotsdk_barcode_format_data_bar_limited_configuration_t* object, scanbotsdk_barcode_format_configuration_base_t** result);

/**
 * @brief Checks if the given instance of scanbotsdk_barcode_format_one_d_configuration_base_t is an instance of its subtype scanbotsdk_barcode_format_data_bar_limited_configuration_t.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_one_d_configuration_base_t to be checked
 * @param result: Pointer to a variable that will store the result of the check
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
 */
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_one_d_configuration_base_is_scanbotsdk_barcode_format_data_bar_limited_configuration(scanbotsdk_barcode_format_one_d_configuration_base_t* object, bool* result);
/**
 * @brief Casts the given instance of scanbotsdk_barcode_format_one_d_configuration_base_t to its subtype scanbotsdk_barcode_format_data_bar_limited_configuration_t. If the given instance is not an instance of the subtype, result will be null.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_one_d_configuration_base_t to be casted
 * @param result: Pointer to a variable that will store the casted instance of scanbotsdk_barcode_format_data_bar_limited_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_one_d_configuration_base_as_scanbotsdk_barcode_format_data_bar_limited_configuration(scanbotsdk_barcode_format_one_d_configuration_base_t* object, scanbotsdk_barcode_format_data_bar_limited_configuration_t** result);
/**
 * @brief Casts the given instance of scanbotsdk_barcode_format_data_bar_limited_configuration_t to its parent type scanbotsdk_barcode_format_one_d_configuration_base_t.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_one_d_configuration_base_t to be casted
 * @param result: Pointer to a variable that will store the casted instance of scanbotsdk_barcode_format_data_bar_limited_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_data_bar_limited_configuration_as_scanbotsdk_barcode_format_one_d_configuration_base(scanbotsdk_barcode_format_data_bar_limited_configuration_t* object, scanbotsdk_barcode_format_one_d_configuration_base_t** result);

/**
 * @brief Returns value of gs_1_handling field of the given object.
 * @ingroup c_barcode
 * @details GS1 message handling options.
 * 
 * Default is PARSE
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_data_bar_limited_configuration_t
 * @param gs_1_handling: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_data_bar_limited_configuration_get_gs_1_handling(scanbotsdk_barcode_format_data_bar_limited_configuration_t* self, scanbotsdk_gs_1_handling_t* gs_1_handling);
/**
 * @brief Sets value of gs_1_handling field of the given object.
 * @ingroup c_barcode
 * @details GS1 message handling options.
 * 
 * Default is PARSE
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_data_bar_limited_configuration_t, the field of which will be set
 * @param gs_1_handling: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_data_bar_limited_configuration_set_gs_1_handling(scanbotsdk_barcode_format_data_bar_limited_configuration_t* self, scanbotsdk_gs_1_handling_t gs_1_handling);


/**
 * @brief scanbotsdk_barcode_format_itf_configuration_t class
 * @details ITF (Interleaved 2-of-5) barcode configuration. Add to scanner configuration to scan Interleaved 2-of-5 (ITF) barcodes.
 * @ingroup c_barcode
*/
typedef struct scanbotsdk_barcode_format_itf_configuration_t scanbotsdk_barcode_format_itf_configuration_t;

/**
 * @brief Creates a new instance of scanbotsdk_barcode_format_itf_configuration with given params and stores it in the location specified by the last argument.
 * @ingroup c_barcode
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param regex_filter: Regular expression filter for barcode text. If the barcode text does not match the regular expression, it will not be scanned. The default is an empty string (setting is turned off).
 * 
 * Default is ""
 * The value must not be null.
 * @param minimum_size_score: Minimum acceptable value of a result BarcodeItem's sizeScore (between 0 and 1). 
 * Barcodes with a sizeScore less than this value will not be scanned. 
 * When set to 0, barcodes are returned no matter what their size is.
 * 
 * Default is 0
 * @param add_additional_quiet_zone: If true, we process the barcode scanning with an artificial quiet zone that we add to the input image. 
 * This flag should be used to scan sharp crops of a barcode in single-shot mode.
 * 
 * Default is false
 * @param minimum_1_d_quiet_zone_size: Minimum quiet zone size on the left and right sides of a 1D barcode, measured in number of modules.
 * The quiet zone is only for 1D barcodes with weak start/stop patterns, i.e. Iata2Of5, Industrial2Of5, Code25, Itf, Codabar, MsiPlessey and Code11.
 * 
 * Default is 6
 * @param minimum_1_d_confirmation_count: In case of live scanning, we require confirmations across frames to consider the one-d barcode as valid.
 * 
 * Default is 1
 * @param minimum_text_length: Minimum text length. Applied only to linear barcode formats that allow variable length.
 * 
 * Default is 1
 * @param maximum_text_length: Maximum text length. 0 implies no maximum. Applied only to linear barcode formats that allow variable length.
 * 
 * Default is 0
 * @param enable_one_d_blur_scanner: If true, barcodes with heavy blur or from far distance are tried to scan.
 * 
 * Default is true
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_barcode_format_itf_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_itf_configuration_create(
    const char* regex_filter,
    double minimum_size_score,
    bool add_additional_quiet_zone,
    int minimum_1_d_quiet_zone_size,
    int minimum_1_d_confirmation_count,
    int minimum_text_length,
    int maximum_text_length,
    bool enable_one_d_blur_scanner,
    scanbotsdk_barcode_format_itf_configuration_t** result);

/**
 * @brief Creates a new instance of scanbotsdk_barcode_format_itf_configuration_t with given required params and stores it in the location specified by the last argument.
 * @ingroup c_barcode
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_barcode_format_itf_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_itf_configuration_create_with_defaults(
    scanbotsdk_barcode_format_itf_configuration_t** result);


/**
 * @brief Frees the memory allocated for the instance of scanbotsdk_barcode_format_itf_configuration_t. If null is passed, the function does nothing.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_itf_configuration_t to be freed
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_itf_configuration_free(scanbotsdk_barcode_format_itf_configuration_t* object);

/**
 * @brief Checks if the given instance of scanbotsdk_barcode_format_configuration_base_t is an instance of its subtype scanbotsdk_barcode_format_itf_configuration_t.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_configuration_base_t to be checked
 * @param result: Pointer to a variable that will store the result of the check
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
 */
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_configuration_base_is_scanbotsdk_barcode_format_itf_configuration(scanbotsdk_barcode_format_configuration_base_t* object, bool* result);
/**
 * @brief Casts the given instance of scanbotsdk_barcode_format_configuration_base_t to its subtype scanbotsdk_barcode_format_itf_configuration_t. If the given instance is not an instance of the subtype, result will be null.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_configuration_base_t to be casted
 * @param result: Pointer to a variable that will store the casted instance of scanbotsdk_barcode_format_itf_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_configuration_base_as_scanbotsdk_barcode_format_itf_configuration(scanbotsdk_barcode_format_configuration_base_t* object, scanbotsdk_barcode_format_itf_configuration_t** result);
/**
 * @brief Casts the given instance of scanbotsdk_barcode_format_itf_configuration_t to its parent type scanbotsdk_barcode_format_configuration_base_t.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_configuration_base_t to be casted
 * @param result: Pointer to a variable that will store the casted instance of scanbotsdk_barcode_format_itf_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_itf_configuration_as_scanbotsdk_barcode_format_configuration_base(scanbotsdk_barcode_format_itf_configuration_t* object, scanbotsdk_barcode_format_configuration_base_t** result);

/**
 * @brief Checks if the given instance of scanbotsdk_barcode_format_one_d_configuration_base_t is an instance of its subtype scanbotsdk_barcode_format_itf_configuration_t.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_one_d_configuration_base_t to be checked
 * @param result: Pointer to a variable that will store the result of the check
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
 */
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_one_d_configuration_base_is_scanbotsdk_barcode_format_itf_configuration(scanbotsdk_barcode_format_one_d_configuration_base_t* object, bool* result);
/**
 * @brief Casts the given instance of scanbotsdk_barcode_format_one_d_configuration_base_t to its subtype scanbotsdk_barcode_format_itf_configuration_t. If the given instance is not an instance of the subtype, result will be null.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_one_d_configuration_base_t to be casted
 * @param result: Pointer to a variable that will store the casted instance of scanbotsdk_barcode_format_itf_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_one_d_configuration_base_as_scanbotsdk_barcode_format_itf_configuration(scanbotsdk_barcode_format_one_d_configuration_base_t* object, scanbotsdk_barcode_format_itf_configuration_t** result);
/**
 * @brief Casts the given instance of scanbotsdk_barcode_format_itf_configuration_t to its parent type scanbotsdk_barcode_format_one_d_configuration_base_t.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_one_d_configuration_base_t to be casted
 * @param result: Pointer to a variable that will store the casted instance of scanbotsdk_barcode_format_itf_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_itf_configuration_as_scanbotsdk_barcode_format_one_d_configuration_base(scanbotsdk_barcode_format_itf_configuration_t* object, scanbotsdk_barcode_format_one_d_configuration_base_t** result);

/**
 * @brief Returns value of minimum_text_length field of the given object.
 * @ingroup c_barcode
 * @details Minimum text length. Applied only to linear barcode formats that allow variable length.
 * 
 * Default is 1
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_itf_configuration_t
 * @param minimum_text_length: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_itf_configuration_get_minimum_text_length(scanbotsdk_barcode_format_itf_configuration_t* self, int* minimum_text_length);
/**
 * @brief Sets value of minimum_text_length field of the given object.
 * @ingroup c_barcode
 * @details Minimum text length. Applied only to linear barcode formats that allow variable length.
 * 
 * Default is 1
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_itf_configuration_t, the field of which will be set
 * @param minimum_text_length: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_itf_configuration_set_minimum_text_length(scanbotsdk_barcode_format_itf_configuration_t* self, int minimum_text_length);

/**
 * @brief Returns value of maximum_text_length field of the given object.
 * @ingroup c_barcode
 * @details Maximum text length. 0 implies no maximum. Applied only to linear barcode formats that allow variable length.
 * 
 * Default is 0
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_itf_configuration_t
 * @param maximum_text_length: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_itf_configuration_get_maximum_text_length(scanbotsdk_barcode_format_itf_configuration_t* self, int* maximum_text_length);
/**
 * @brief Sets value of maximum_text_length field of the given object.
 * @ingroup c_barcode
 * @details Maximum text length. 0 implies no maximum. Applied only to linear barcode formats that allow variable length.
 * 
 * Default is 0
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_itf_configuration_t, the field of which will be set
 * @param maximum_text_length: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_itf_configuration_set_maximum_text_length(scanbotsdk_barcode_format_itf_configuration_t* self, int maximum_text_length);

/**
 * @brief Returns value of enable_one_d_blur_scanner field of the given object.
 * @ingroup c_barcode
 * @details If true, barcodes with heavy blur or from far distance are tried to scan.
 * 
 * Default is true
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_itf_configuration_t
 * @param enable_one_d_blur_scanner: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_itf_configuration_get_enable_one_d_blur_scanner(scanbotsdk_barcode_format_itf_configuration_t* self, bool* enable_one_d_blur_scanner);
/**
 * @brief Sets value of enable_one_d_blur_scanner field of the given object.
 * @ingroup c_barcode
 * @details If true, barcodes with heavy blur or from far distance are tried to scan.
 * 
 * Default is true
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_itf_configuration_t, the field of which will be set
 * @param enable_one_d_blur_scanner: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_itf_configuration_set_enable_one_d_blur_scanner(scanbotsdk_barcode_format_itf_configuration_t* self, bool enable_one_d_blur_scanner);


/**
 * @brief scanbotsdk_msi_plessey_checksum_algorithm_t enum
 * @details Checksum algorithm for MSI_PLESSEY.
 * @ingroup c_barcode
*/
typedef enum scanbotsdk_msi_plessey_checksum_algorithm_t {

    /**Modulo 10.*/
    SCANBOTSDK_MSI_PLESSEY_CHECKSUM_ALGORITHM_MOD_10 = 0,

    /**Modulo 11 IBM.*/
    SCANBOTSDK_MSI_PLESSEY_CHECKSUM_ALGORITHM_MOD_11_IBM = 1,

    /**Modulo 11 NCR.*/
    SCANBOTSDK_MSI_PLESSEY_CHECKSUM_ALGORITHM_MOD_11_NCR = 2,

    /**Modulo 1010.*/
    SCANBOTSDK_MSI_PLESSEY_CHECKSUM_ALGORITHM_MOD_10_10 = 3,

    /**Modulo 1110 IBM.*/
    SCANBOTSDK_MSI_PLESSEY_CHECKSUM_ALGORITHM_MOD_11_10_IBM = 4,

    /**Modulo 1110 NCR.*/
    SCANBOTSDK_MSI_PLESSEY_CHECKSUM_ALGORITHM_MOD_11_10_NCR = 5,

} scanbotsdk_msi_plessey_checksum_algorithm_t;

/**
 * @brief Returns the string representation of the given scanbotsdk_msi_plessey_checksum_algorithm_t value.
 * @ingroup c_barcode
 * @details The returned string doesn't need to be freed.
 * @param value: The value to be converted to string.
 * @param result: Pointer to a variable that will store the string representation of the value.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_msi_plessey_checksum_algorithm_t_to_string(scanbotsdk_msi_plessey_checksum_algorithm_t value, const char** result);

/**
 * @brief scanbotsdk_barcode_format_msi_plessey_configuration_t class
 * @details MSI Plessey barcode configuration. Add to scanner configuration to scan MSI Plessey barcodes.
 * @ingroup c_barcode
*/
typedef struct scanbotsdk_barcode_format_msi_plessey_configuration_t scanbotsdk_barcode_format_msi_plessey_configuration_t;

/**
 * @brief Creates a new instance of scanbotsdk_barcode_format_msi_plessey_configuration with given params and stores it in the location specified by the last argument.
 * @ingroup c_barcode
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param regex_filter: Regular expression filter for barcode text. If the barcode text does not match the regular expression, it will not be scanned. The default is an empty string (setting is turned off).
 * 
 * Default is ""
 * The value must not be null.
 * @param minimum_size_score: Minimum acceptable value of a result BarcodeItem's sizeScore (between 0 and 1). 
 * Barcodes with a sizeScore less than this value will not be scanned. 
 * When set to 0, barcodes are returned no matter what their size is.
 * 
 * Default is 0
 * @param add_additional_quiet_zone: If true, we process the barcode scanning with an artificial quiet zone that we add to the input image. 
 * This flag should be used to scan sharp crops of a barcode in single-shot mode.
 * 
 * Default is false
 * @param minimum_1_d_quiet_zone_size: Minimum quiet zone size on the left and right sides of a 1D barcode, measured in number of modules.
 * The quiet zone is only for 1D barcodes with weak start/stop patterns, i.e. Iata2Of5, Industrial2Of5, Code25, Itf, Codabar, MsiPlessey and Code11.
 * 
 * Default is 6
 * @param minimum_1_d_confirmation_count: In case of live scanning, we require confirmations across frames to consider the one-d barcode as valid.
 * 
 * Default is 1
 * @param strip_check_digits: If true, the check digits are stripped from the result.
 * 
 * Default is false
 * @param minimum_text_length: Minimum text length. Applied only to linear barcode formats that allow variable length.
 * 
 * Default is 1
 * @param maximum_text_length: Maximum text length. 0 implies no maximum. Applied only to linear barcode formats that allow variable length.
 * 
 * Default is 0
 * @param enable_one_d_blur_scanner: If true, barcodes with heavy blur or from far distance are tried to scan.
 * 
 * Default is true
 * @param checksum_algorithms: List of MSI Plessey checksum algorithms to apply during scanning.
 * A barcode is considered valid if it passes any of the checksum algorithms in the list.
 * If the list is empty, no checksum validation is performed.
 * @param checksum_algorithms_size: Size of the array checksum_algorithms
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_barcode_format_msi_plessey_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_msi_plessey_configuration_create(
    const char* regex_filter,
    double minimum_size_score,
    bool add_additional_quiet_zone,
    int minimum_1_d_quiet_zone_size,
    int minimum_1_d_confirmation_count,
    bool strip_check_digits,
    int minimum_text_length,
    int maximum_text_length,
    bool enable_one_d_blur_scanner,
    scanbotsdk_msi_plessey_checksum_algorithm_t* checksum_algorithms,
    size_t checksum_algorithms_size,
    scanbotsdk_barcode_format_msi_plessey_configuration_t** result);

/**
 * @brief Creates a new instance of scanbotsdk_barcode_format_msi_plessey_configuration_t with given required params and stores it in the location specified by the last argument.
 * @ingroup c_barcode
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_barcode_format_msi_plessey_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_msi_plessey_configuration_create_with_defaults(
    scanbotsdk_barcode_format_msi_plessey_configuration_t** result);


/**
 * @brief Frees the memory allocated for the instance of scanbotsdk_barcode_format_msi_plessey_configuration_t. If null is passed, the function does nothing.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_msi_plessey_configuration_t to be freed
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_msi_plessey_configuration_free(scanbotsdk_barcode_format_msi_plessey_configuration_t* object);

/**
 * @brief Checks if the given instance of scanbotsdk_barcode_format_configuration_base_t is an instance of its subtype scanbotsdk_barcode_format_msi_plessey_configuration_t.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_configuration_base_t to be checked
 * @param result: Pointer to a variable that will store the result of the check
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
 */
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_configuration_base_is_scanbotsdk_barcode_format_msi_plessey_configuration(scanbotsdk_barcode_format_configuration_base_t* object, bool* result);
/**
 * @brief Casts the given instance of scanbotsdk_barcode_format_configuration_base_t to its subtype scanbotsdk_barcode_format_msi_plessey_configuration_t. If the given instance is not an instance of the subtype, result will be null.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_configuration_base_t to be casted
 * @param result: Pointer to a variable that will store the casted instance of scanbotsdk_barcode_format_msi_plessey_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_configuration_base_as_scanbotsdk_barcode_format_msi_plessey_configuration(scanbotsdk_barcode_format_configuration_base_t* object, scanbotsdk_barcode_format_msi_plessey_configuration_t** result);
/**
 * @brief Casts the given instance of scanbotsdk_barcode_format_msi_plessey_configuration_t to its parent type scanbotsdk_barcode_format_configuration_base_t.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_configuration_base_t to be casted
 * @param result: Pointer to a variable that will store the casted instance of scanbotsdk_barcode_format_msi_plessey_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_msi_plessey_configuration_as_scanbotsdk_barcode_format_configuration_base(scanbotsdk_barcode_format_msi_plessey_configuration_t* object, scanbotsdk_barcode_format_configuration_base_t** result);

/**
 * @brief Checks if the given instance of scanbotsdk_barcode_format_one_d_configuration_base_t is an instance of its subtype scanbotsdk_barcode_format_msi_plessey_configuration_t.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_one_d_configuration_base_t to be checked
 * @param result: Pointer to a variable that will store the result of the check
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
 */
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_one_d_configuration_base_is_scanbotsdk_barcode_format_msi_plessey_configuration(scanbotsdk_barcode_format_one_d_configuration_base_t* object, bool* result);
/**
 * @brief Casts the given instance of scanbotsdk_barcode_format_one_d_configuration_base_t to its subtype scanbotsdk_barcode_format_msi_plessey_configuration_t. If the given instance is not an instance of the subtype, result will be null.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_one_d_configuration_base_t to be casted
 * @param result: Pointer to a variable that will store the casted instance of scanbotsdk_barcode_format_msi_plessey_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_one_d_configuration_base_as_scanbotsdk_barcode_format_msi_plessey_configuration(scanbotsdk_barcode_format_one_d_configuration_base_t* object, scanbotsdk_barcode_format_msi_plessey_configuration_t** result);
/**
 * @brief Casts the given instance of scanbotsdk_barcode_format_msi_plessey_configuration_t to its parent type scanbotsdk_barcode_format_one_d_configuration_base_t.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_one_d_configuration_base_t to be casted
 * @param result: Pointer to a variable that will store the casted instance of scanbotsdk_barcode_format_msi_plessey_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_msi_plessey_configuration_as_scanbotsdk_barcode_format_one_d_configuration_base(scanbotsdk_barcode_format_msi_plessey_configuration_t* object, scanbotsdk_barcode_format_one_d_configuration_base_t** result);

/**
 * @brief Returns value of strip_check_digits field of the given object.
 * @ingroup c_barcode
 * @details If true, the check digits are stripped from the result.
 * 
 * Default is false
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_msi_plessey_configuration_t
 * @param strip_check_digits: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_msi_plessey_configuration_get_strip_check_digits(scanbotsdk_barcode_format_msi_plessey_configuration_t* self, bool* strip_check_digits);
/**
 * @brief Sets value of strip_check_digits field of the given object.
 * @ingroup c_barcode
 * @details If true, the check digits are stripped from the result.
 * 
 * Default is false
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_msi_plessey_configuration_t, the field of which will be set
 * @param strip_check_digits: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_msi_plessey_configuration_set_strip_check_digits(scanbotsdk_barcode_format_msi_plessey_configuration_t* self, bool strip_check_digits);

/**
 * @brief Returns value of minimum_text_length field of the given object.
 * @ingroup c_barcode
 * @details Minimum text length. Applied only to linear barcode formats that allow variable length.
 * 
 * Default is 1
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_msi_plessey_configuration_t
 * @param minimum_text_length: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_msi_plessey_configuration_get_minimum_text_length(scanbotsdk_barcode_format_msi_plessey_configuration_t* self, int* minimum_text_length);
/**
 * @brief Sets value of minimum_text_length field of the given object.
 * @ingroup c_barcode
 * @details Minimum text length. Applied only to linear barcode formats that allow variable length.
 * 
 * Default is 1
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_msi_plessey_configuration_t, the field of which will be set
 * @param minimum_text_length: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_msi_plessey_configuration_set_minimum_text_length(scanbotsdk_barcode_format_msi_plessey_configuration_t* self, int minimum_text_length);

/**
 * @brief Returns value of maximum_text_length field of the given object.
 * @ingroup c_barcode
 * @details Maximum text length. 0 implies no maximum. Applied only to linear barcode formats that allow variable length.
 * 
 * Default is 0
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_msi_plessey_configuration_t
 * @param maximum_text_length: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_msi_plessey_configuration_get_maximum_text_length(scanbotsdk_barcode_format_msi_plessey_configuration_t* self, int* maximum_text_length);
/**
 * @brief Sets value of maximum_text_length field of the given object.
 * @ingroup c_barcode
 * @details Maximum text length. 0 implies no maximum. Applied only to linear barcode formats that allow variable length.
 * 
 * Default is 0
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_msi_plessey_configuration_t, the field of which will be set
 * @param maximum_text_length: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_msi_plessey_configuration_set_maximum_text_length(scanbotsdk_barcode_format_msi_plessey_configuration_t* self, int maximum_text_length);

/**
 * @brief Returns value of enable_one_d_blur_scanner field of the given object.
 * @ingroup c_barcode
 * @details If true, barcodes with heavy blur or from far distance are tried to scan.
 * 
 * Default is true
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_msi_plessey_configuration_t
 * @param enable_one_d_blur_scanner: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_msi_plessey_configuration_get_enable_one_d_blur_scanner(scanbotsdk_barcode_format_msi_plessey_configuration_t* self, bool* enable_one_d_blur_scanner);
/**
 * @brief Sets value of enable_one_d_blur_scanner field of the given object.
 * @ingroup c_barcode
 * @details If true, barcodes with heavy blur or from far distance are tried to scan.
 * 
 * Default is true
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_msi_plessey_configuration_t, the field of which will be set
 * @param enable_one_d_blur_scanner: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_msi_plessey_configuration_set_enable_one_d_blur_scanner(scanbotsdk_barcode_format_msi_plessey_configuration_t* self, bool enable_one_d_blur_scanner);

/**
 * @brief Returns value of checksum_algorithms field of the given object. The returned value is direct view into memory, no pre-allocations needed.
 * @ingroup c_barcode
 * @details List of MSI Plessey checksum algorithms to apply during scanning.
 * A barcode is considered valid if it passes any of the checksum algorithms in the list.
 * If the list is empty, no checksum validation is performed.
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_msi_plessey_configuration_t
 * @param checksum_algorithms: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_msi_plessey_configuration_get_checksum_algorithms(scanbotsdk_barcode_format_msi_plessey_configuration_t* self, scanbotsdk_msi_plessey_checksum_algorithm_t** checksum_algorithms);
/**
 * @brief Returns size of checksum_algorithms array.
 * @ingroup c_barcode
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_msi_plessey_configuration_t
 * @param size: Pointer to a variable that will store the size.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_msi_plessey_configuration_get_checksum_algorithms_size(scanbotsdk_barcode_format_msi_plessey_configuration_t* self, size_t* size);
/**
 * @brief Sets value of checksum_algorithms field of the given object.
 * @ingroup c_barcode
 * @details List of MSI Plessey checksum algorithms to apply during scanning.
 * A barcode is considered valid if it passes any of the checksum algorithms in the list.
 * If the list is empty, no checksum validation is performed.
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_msi_plessey_configuration_t, the field of which will be set
 * @param checksum_algorithms: The value to be set.
 * @param checksum_algorithms_size: Size of the array.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_msi_plessey_configuration_set_checksum_algorithms(scanbotsdk_barcode_format_msi_plessey_configuration_t* self, scanbotsdk_msi_plessey_checksum_algorithm_t* checksum_algorithms, size_t checksum_algorithms_size);


/**
 * @brief scanbotsdk_barcode_format_upc_ean_configuration_t class
 * @details UPC/EAN barcode configuration. Add to scanner configuration to scan EAN-8, EAN-13, UPC-E and UPC-A barcodes.
 * @ingroup c_barcode
*/
typedef struct scanbotsdk_barcode_format_upc_ean_configuration_t scanbotsdk_barcode_format_upc_ean_configuration_t;

/**
 * @brief Creates a new instance of scanbotsdk_barcode_format_upc_ean_configuration with given params and stores it in the location specified by the last argument.
 * @ingroup c_barcode
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param regex_filter: Regular expression filter for barcode text. If the barcode text does not match the regular expression, it will not be scanned. The default is an empty string (setting is turned off).
 * 
 * Default is ""
 * The value must not be null.
 * @param minimum_size_score: Minimum acceptable value of a result BarcodeItem's sizeScore (between 0 and 1). 
 * Barcodes with a sizeScore less than this value will not be scanned. 
 * When set to 0, barcodes are returned no matter what their size is.
 * 
 * Default is 0
 * @param add_additional_quiet_zone: If true, we process the barcode scanning with an artificial quiet zone that we add to the input image. 
 * This flag should be used to scan sharp crops of a barcode in single-shot mode.
 * 
 * Default is false
 * @param minimum_1_d_quiet_zone_size: Minimum quiet zone size on the left and right sides of a 1D barcode, measured in number of modules.
 * The quiet zone is only for 1D barcodes with weak start/stop patterns, i.e. Iata2Of5, Industrial2Of5, Code25, Itf, Codabar, MsiPlessey and Code11.
 * 
 * Default is 6
 * @param minimum_1_d_confirmation_count: In case of live scanning, we require confirmations across frames to consider the one-d barcode as valid.
 * 
 * Default is 1
 * @param strip_check_digits: If true, the check digits are stripped from the result.
 * 
 * Default is false
 * @param enable_one_d_blur_scanner: If true, barcodes with heavy blur or from far distance are tried to scan.
 * 
 * Default is true
 * @param ean_8: If true, scan and return valid EAN-8 barcodes.
 * 
 * Default is true
 * @param ean_13: If true, scan and return valid EAN-13 barcodes.
 * 
 * Default is true
 * @param upca: If true, scan and return valid UPC-A barcodes. If false, but ean13 is true, then UPC-A barcodes will be returned as EAN-13 barcodes.
 * 
 * Default is true
 * @param upce: If true, scan and return valid UPC-E barcodes.
 * 
 * Default is true
 * @param extensions: Behavior when scanning UPC/EAN barcodes with EAN-2 or EAN-5 extensions.
 * 
 * Default is ALLOW_ANY
 * @param minimum_standalone_confirmation_count: In case that ean/upc both with and without extensions are allowed, 
 * we require confirmations to consider a standalone EAN or UPC (i.e. without extension) as valid.
 * 
 * Default is 1
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_barcode_format_upc_ean_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_upc_ean_configuration_create(
    const char* regex_filter,
    double minimum_size_score,
    bool add_additional_quiet_zone,
    int minimum_1_d_quiet_zone_size,
    int minimum_1_d_confirmation_count,
    bool strip_check_digits,
    bool enable_one_d_blur_scanner,
    bool ean_8,
    bool ean_13,
    bool upca,
    bool upce,
    scanbotsdk_upc_ean_extension_behavior_t extensions,
    int minimum_standalone_confirmation_count,
    scanbotsdk_barcode_format_upc_ean_configuration_t** result);

/**
 * @brief Creates a new instance of scanbotsdk_barcode_format_upc_ean_configuration_t with given required params and stores it in the location specified by the last argument.
 * @ingroup c_barcode
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_barcode_format_upc_ean_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_upc_ean_configuration_create_with_defaults(
    scanbotsdk_barcode_format_upc_ean_configuration_t** result);


/**
 * @brief Frees the memory allocated for the instance of scanbotsdk_barcode_format_upc_ean_configuration_t. If null is passed, the function does nothing.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_upc_ean_configuration_t to be freed
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_upc_ean_configuration_free(scanbotsdk_barcode_format_upc_ean_configuration_t* object);

/**
 * @brief Checks if the given instance of scanbotsdk_barcode_format_configuration_base_t is an instance of its subtype scanbotsdk_barcode_format_upc_ean_configuration_t.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_configuration_base_t to be checked
 * @param result: Pointer to a variable that will store the result of the check
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
 */
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_configuration_base_is_scanbotsdk_barcode_format_upc_ean_configuration(scanbotsdk_barcode_format_configuration_base_t* object, bool* result);
/**
 * @brief Casts the given instance of scanbotsdk_barcode_format_configuration_base_t to its subtype scanbotsdk_barcode_format_upc_ean_configuration_t. If the given instance is not an instance of the subtype, result will be null.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_configuration_base_t to be casted
 * @param result: Pointer to a variable that will store the casted instance of scanbotsdk_barcode_format_upc_ean_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_configuration_base_as_scanbotsdk_barcode_format_upc_ean_configuration(scanbotsdk_barcode_format_configuration_base_t* object, scanbotsdk_barcode_format_upc_ean_configuration_t** result);
/**
 * @brief Casts the given instance of scanbotsdk_barcode_format_upc_ean_configuration_t to its parent type scanbotsdk_barcode_format_configuration_base_t.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_configuration_base_t to be casted
 * @param result: Pointer to a variable that will store the casted instance of scanbotsdk_barcode_format_upc_ean_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_upc_ean_configuration_as_scanbotsdk_barcode_format_configuration_base(scanbotsdk_barcode_format_upc_ean_configuration_t* object, scanbotsdk_barcode_format_configuration_base_t** result);

/**
 * @brief Checks if the given instance of scanbotsdk_barcode_format_one_d_configuration_base_t is an instance of its subtype scanbotsdk_barcode_format_upc_ean_configuration_t.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_one_d_configuration_base_t to be checked
 * @param result: Pointer to a variable that will store the result of the check
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
 */
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_one_d_configuration_base_is_scanbotsdk_barcode_format_upc_ean_configuration(scanbotsdk_barcode_format_one_d_configuration_base_t* object, bool* result);
/**
 * @brief Casts the given instance of scanbotsdk_barcode_format_one_d_configuration_base_t to its subtype scanbotsdk_barcode_format_upc_ean_configuration_t. If the given instance is not an instance of the subtype, result will be null.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_one_d_configuration_base_t to be casted
 * @param result: Pointer to a variable that will store the casted instance of scanbotsdk_barcode_format_upc_ean_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_one_d_configuration_base_as_scanbotsdk_barcode_format_upc_ean_configuration(scanbotsdk_barcode_format_one_d_configuration_base_t* object, scanbotsdk_barcode_format_upc_ean_configuration_t** result);
/**
 * @brief Casts the given instance of scanbotsdk_barcode_format_upc_ean_configuration_t to its parent type scanbotsdk_barcode_format_one_d_configuration_base_t.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_one_d_configuration_base_t to be casted
 * @param result: Pointer to a variable that will store the casted instance of scanbotsdk_barcode_format_upc_ean_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_upc_ean_configuration_as_scanbotsdk_barcode_format_one_d_configuration_base(scanbotsdk_barcode_format_upc_ean_configuration_t* object, scanbotsdk_barcode_format_one_d_configuration_base_t** result);

/**
 * @brief Returns value of strip_check_digits field of the given object.
 * @ingroup c_barcode
 * @details If true, the check digits are stripped from the result.
 * 
 * Default is false
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_upc_ean_configuration_t
 * @param strip_check_digits: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_upc_ean_configuration_get_strip_check_digits(scanbotsdk_barcode_format_upc_ean_configuration_t* self, bool* strip_check_digits);
/**
 * @brief Sets value of strip_check_digits field of the given object.
 * @ingroup c_barcode
 * @details If true, the check digits are stripped from the result.
 * 
 * Default is false
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_upc_ean_configuration_t, the field of which will be set
 * @param strip_check_digits: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_upc_ean_configuration_set_strip_check_digits(scanbotsdk_barcode_format_upc_ean_configuration_t* self, bool strip_check_digits);

/**
 * @brief Returns value of enable_one_d_blur_scanner field of the given object.
 * @ingroup c_barcode
 * @details If true, barcodes with heavy blur or from far distance are tried to scan.
 * 
 * Default is true
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_upc_ean_configuration_t
 * @param enable_one_d_blur_scanner: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_upc_ean_configuration_get_enable_one_d_blur_scanner(scanbotsdk_barcode_format_upc_ean_configuration_t* self, bool* enable_one_d_blur_scanner);
/**
 * @brief Sets value of enable_one_d_blur_scanner field of the given object.
 * @ingroup c_barcode
 * @details If true, barcodes with heavy blur or from far distance are tried to scan.
 * 
 * Default is true
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_upc_ean_configuration_t, the field of which will be set
 * @param enable_one_d_blur_scanner: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_upc_ean_configuration_set_enable_one_d_blur_scanner(scanbotsdk_barcode_format_upc_ean_configuration_t* self, bool enable_one_d_blur_scanner);

/**
 * @brief Returns value of ean_8 field of the given object.
 * @ingroup c_barcode
 * @details If true, scan and return valid EAN-8 barcodes.
 * 
 * Default is true
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_upc_ean_configuration_t
 * @param ean_8: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_upc_ean_configuration_get_ean_8(scanbotsdk_barcode_format_upc_ean_configuration_t* self, bool* ean_8);
/**
 * @brief Sets value of ean_8 field of the given object.
 * @ingroup c_barcode
 * @details If true, scan and return valid EAN-8 barcodes.
 * 
 * Default is true
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_upc_ean_configuration_t, the field of which will be set
 * @param ean_8: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_upc_ean_configuration_set_ean_8(scanbotsdk_barcode_format_upc_ean_configuration_t* self, bool ean_8);

/**
 * @brief Returns value of ean_13 field of the given object.
 * @ingroup c_barcode
 * @details If true, scan and return valid EAN-13 barcodes.
 * 
 * Default is true
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_upc_ean_configuration_t
 * @param ean_13: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_upc_ean_configuration_get_ean_13(scanbotsdk_barcode_format_upc_ean_configuration_t* self, bool* ean_13);
/**
 * @brief Sets value of ean_13 field of the given object.
 * @ingroup c_barcode
 * @details If true, scan and return valid EAN-13 barcodes.
 * 
 * Default is true
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_upc_ean_configuration_t, the field of which will be set
 * @param ean_13: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_upc_ean_configuration_set_ean_13(scanbotsdk_barcode_format_upc_ean_configuration_t* self, bool ean_13);

/**
 * @brief Returns value of upca field of the given object.
 * @ingroup c_barcode
 * @details If true, scan and return valid UPC-A barcodes. If false, but ean13 is true, then UPC-A barcodes will be returned as EAN-13 barcodes.
 * 
 * Default is true
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_upc_ean_configuration_t
 * @param upca: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_upc_ean_configuration_get_upca(scanbotsdk_barcode_format_upc_ean_configuration_t* self, bool* upca);
/**
 * @brief Sets value of upca field of the given object.
 * @ingroup c_barcode
 * @details If true, scan and return valid UPC-A barcodes. If false, but ean13 is true, then UPC-A barcodes will be returned as EAN-13 barcodes.
 * 
 * Default is true
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_upc_ean_configuration_t, the field of which will be set
 * @param upca: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_upc_ean_configuration_set_upca(scanbotsdk_barcode_format_upc_ean_configuration_t* self, bool upca);

/**
 * @brief Returns value of upce field of the given object.
 * @ingroup c_barcode
 * @details If true, scan and return valid UPC-E barcodes.
 * 
 * Default is true
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_upc_ean_configuration_t
 * @param upce: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_upc_ean_configuration_get_upce(scanbotsdk_barcode_format_upc_ean_configuration_t* self, bool* upce);
/**
 * @brief Sets value of upce field of the given object.
 * @ingroup c_barcode
 * @details If true, scan and return valid UPC-E barcodes.
 * 
 * Default is true
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_upc_ean_configuration_t, the field of which will be set
 * @param upce: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_upc_ean_configuration_set_upce(scanbotsdk_barcode_format_upc_ean_configuration_t* self, bool upce);

/**
 * @brief Returns value of extensions field of the given object.
 * @ingroup c_barcode
 * @details Behavior when scanning UPC/EAN barcodes with EAN-2 or EAN-5 extensions.
 * 
 * Default is ALLOW_ANY
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_upc_ean_configuration_t
 * @param extensions: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_upc_ean_configuration_get_extensions(scanbotsdk_barcode_format_upc_ean_configuration_t* self, scanbotsdk_upc_ean_extension_behavior_t* extensions);
/**
 * @brief Sets value of extensions field of the given object.
 * @ingroup c_barcode
 * @details Behavior when scanning UPC/EAN barcodes with EAN-2 or EAN-5 extensions.
 * 
 * Default is ALLOW_ANY
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_upc_ean_configuration_t, the field of which will be set
 * @param extensions: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_upc_ean_configuration_set_extensions(scanbotsdk_barcode_format_upc_ean_configuration_t* self, scanbotsdk_upc_ean_extension_behavior_t extensions);

/**
 * @brief Returns value of minimum_standalone_confirmation_count field of the given object.
 * @ingroup c_barcode
 * @details In case that ean/upc both with and without extensions are allowed, 
 * we require confirmations to consider a standalone EAN or UPC (i.e. without extension) as valid.
 * 
 * Default is 1
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_upc_ean_configuration_t
 * @param minimum_standalone_confirmation_count: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_upc_ean_configuration_get_minimum_standalone_confirmation_count(scanbotsdk_barcode_format_upc_ean_configuration_t* self, int* minimum_standalone_confirmation_count);
/**
 * @brief Sets value of minimum_standalone_confirmation_count field of the given object.
 * @ingroup c_barcode
 * @details In case that ean/upc both with and without extensions are allowed, 
 * we require confirmations to consider a standalone EAN or UPC (i.e. without extension) as valid.
 * 
 * Default is 1
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_upc_ean_configuration_t, the field of which will be set
 * @param minimum_standalone_confirmation_count: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_upc_ean_configuration_set_minimum_standalone_confirmation_count(scanbotsdk_barcode_format_upc_ean_configuration_t* self, int minimum_standalone_confirmation_count);


/**
 * @brief scanbotsdk_barcode_format_pharma_code_configuration_t class
 * @details PharmaCode barcode configuration. Add to scanner configuration to scan linear (1D) Laetus Pharmacode barcodes. Two-track PharmaCode scanning is configured separately through the PharmaCodeTwoTrackConfig class.
 * @ingroup c_barcode
*/
typedef struct scanbotsdk_barcode_format_pharma_code_configuration_t scanbotsdk_barcode_format_pharma_code_configuration_t;

/**
 * @brief Creates a new instance of scanbotsdk_barcode_format_pharma_code_configuration with given params and stores it in the location specified by the last argument.
 * @ingroup c_barcode
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param regex_filter: Regular expression filter for barcode text. If the barcode text does not match the regular expression, it will not be scanned. The default is an empty string (setting is turned off).
 * 
 * Default is ""
 * The value must not be null.
 * @param minimum_size_score: Minimum acceptable value of a result BarcodeItem's sizeScore (between 0 and 1). 
 * Barcodes with a sizeScore less than this value will not be scanned. 
 * When set to 0, barcodes are returned no matter what their size is.
 * 
 * Default is 0
 * @param add_additional_quiet_zone: If true, we process the barcode scanning with an artificial quiet zone that we add to the input image. 
 * This flag should be used to scan sharp crops of a barcode in single-shot mode.
 * 
 * Default is false
 * @param minimum_1_d_quiet_zone_size: Minimum quiet zone size on the left and right sides of a 1D barcode, measured in number of modules.
 * The quiet zone is only for 1D barcodes with weak start/stop patterns, i.e. Iata2Of5, Industrial2Of5, Code25, Itf, Codabar, MsiPlessey and Code11.
 * 
 * Default is 6
 * @param minimum_1_d_confirmation_count: In case of live scanning, we require confirmations across frames to consider the one-d barcode as valid.
 * 
 * Default is 1
 * @param minimum_value: Minimum value for PharmaCode. Very low values are likely to produce more false positives.
 * 
 * Default is 16
 * @param allow_narrow_bars_only: If true, a result consisting of only narrow bars is accepted as valid. The specification does not recommend such barcodes. Default is false.
 * 
 * Default is false
 * @param allow_wide_bars_only: If true, a result consisting of only wide bars is accepted as valid. The specification does not recommend such barcodes. Default is false.
 * 
 * Default is false
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_barcode_format_pharma_code_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_pharma_code_configuration_create(
    const char* regex_filter,
    double minimum_size_score,
    bool add_additional_quiet_zone,
    int minimum_1_d_quiet_zone_size,
    int minimum_1_d_confirmation_count,
    int minimum_value,
    bool allow_narrow_bars_only,
    bool allow_wide_bars_only,
    scanbotsdk_barcode_format_pharma_code_configuration_t** result);

/**
 * @brief Creates a new instance of scanbotsdk_barcode_format_pharma_code_configuration_t with given required params and stores it in the location specified by the last argument.
 * @ingroup c_barcode
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_barcode_format_pharma_code_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_pharma_code_configuration_create_with_defaults(
    scanbotsdk_barcode_format_pharma_code_configuration_t** result);


/**
 * @brief Frees the memory allocated for the instance of scanbotsdk_barcode_format_pharma_code_configuration_t. If null is passed, the function does nothing.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_pharma_code_configuration_t to be freed
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_pharma_code_configuration_free(scanbotsdk_barcode_format_pharma_code_configuration_t* object);

/**
 * @brief Checks if the given instance of scanbotsdk_barcode_format_configuration_base_t is an instance of its subtype scanbotsdk_barcode_format_pharma_code_configuration_t.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_configuration_base_t to be checked
 * @param result: Pointer to a variable that will store the result of the check
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
 */
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_configuration_base_is_scanbotsdk_barcode_format_pharma_code_configuration(scanbotsdk_barcode_format_configuration_base_t* object, bool* result);
/**
 * @brief Casts the given instance of scanbotsdk_barcode_format_configuration_base_t to its subtype scanbotsdk_barcode_format_pharma_code_configuration_t. If the given instance is not an instance of the subtype, result will be null.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_configuration_base_t to be casted
 * @param result: Pointer to a variable that will store the casted instance of scanbotsdk_barcode_format_pharma_code_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_configuration_base_as_scanbotsdk_barcode_format_pharma_code_configuration(scanbotsdk_barcode_format_configuration_base_t* object, scanbotsdk_barcode_format_pharma_code_configuration_t** result);
/**
 * @brief Casts the given instance of scanbotsdk_barcode_format_pharma_code_configuration_t to its parent type scanbotsdk_barcode_format_configuration_base_t.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_configuration_base_t to be casted
 * @param result: Pointer to a variable that will store the casted instance of scanbotsdk_barcode_format_pharma_code_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_pharma_code_configuration_as_scanbotsdk_barcode_format_configuration_base(scanbotsdk_barcode_format_pharma_code_configuration_t* object, scanbotsdk_barcode_format_configuration_base_t** result);

/**
 * @brief Checks if the given instance of scanbotsdk_barcode_format_one_d_configuration_base_t is an instance of its subtype scanbotsdk_barcode_format_pharma_code_configuration_t.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_one_d_configuration_base_t to be checked
 * @param result: Pointer to a variable that will store the result of the check
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
 */
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_one_d_configuration_base_is_scanbotsdk_barcode_format_pharma_code_configuration(scanbotsdk_barcode_format_one_d_configuration_base_t* object, bool* result);
/**
 * @brief Casts the given instance of scanbotsdk_barcode_format_one_d_configuration_base_t to its subtype scanbotsdk_barcode_format_pharma_code_configuration_t. If the given instance is not an instance of the subtype, result will be null.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_one_d_configuration_base_t to be casted
 * @param result: Pointer to a variable that will store the casted instance of scanbotsdk_barcode_format_pharma_code_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_one_d_configuration_base_as_scanbotsdk_barcode_format_pharma_code_configuration(scanbotsdk_barcode_format_one_d_configuration_base_t* object, scanbotsdk_barcode_format_pharma_code_configuration_t** result);
/**
 * @brief Casts the given instance of scanbotsdk_barcode_format_pharma_code_configuration_t to its parent type scanbotsdk_barcode_format_one_d_configuration_base_t.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_one_d_configuration_base_t to be casted
 * @param result: Pointer to a variable that will store the casted instance of scanbotsdk_barcode_format_pharma_code_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_pharma_code_configuration_as_scanbotsdk_barcode_format_one_d_configuration_base(scanbotsdk_barcode_format_pharma_code_configuration_t* object, scanbotsdk_barcode_format_one_d_configuration_base_t** result);

/**
 * @brief Returns value of minimum_value field of the given object.
 * @ingroup c_barcode
 * @details Minimum value for PharmaCode. Very low values are likely to produce more false positives.
 * 
 * Default is 16
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_pharma_code_configuration_t
 * @param minimum_value: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_pharma_code_configuration_get_minimum_value(scanbotsdk_barcode_format_pharma_code_configuration_t* self, int* minimum_value);
/**
 * @brief Sets value of minimum_value field of the given object.
 * @ingroup c_barcode
 * @details Minimum value for PharmaCode. Very low values are likely to produce more false positives.
 * 
 * Default is 16
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_pharma_code_configuration_t, the field of which will be set
 * @param minimum_value: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_pharma_code_configuration_set_minimum_value(scanbotsdk_barcode_format_pharma_code_configuration_t* self, int minimum_value);

/**
 * @brief Returns value of allow_narrow_bars_only field of the given object.
 * @ingroup c_barcode
 * @details If true, a result consisting of only narrow bars is accepted as valid. The specification does not recommend such barcodes. Default is false.
 * 
 * Default is false
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_pharma_code_configuration_t
 * @param allow_narrow_bars_only: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_pharma_code_configuration_get_allow_narrow_bars_only(scanbotsdk_barcode_format_pharma_code_configuration_t* self, bool* allow_narrow_bars_only);
/**
 * @brief Sets value of allow_narrow_bars_only field of the given object.
 * @ingroup c_barcode
 * @details If true, a result consisting of only narrow bars is accepted as valid. The specification does not recommend such barcodes. Default is false.
 * 
 * Default is false
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_pharma_code_configuration_t, the field of which will be set
 * @param allow_narrow_bars_only: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_pharma_code_configuration_set_allow_narrow_bars_only(scanbotsdk_barcode_format_pharma_code_configuration_t* self, bool allow_narrow_bars_only);

/**
 * @brief Returns value of allow_wide_bars_only field of the given object.
 * @ingroup c_barcode
 * @details If true, a result consisting of only wide bars is accepted as valid. The specification does not recommend such barcodes. Default is false.
 * 
 * Default is false
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_pharma_code_configuration_t
 * @param allow_wide_bars_only: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_pharma_code_configuration_get_allow_wide_bars_only(scanbotsdk_barcode_format_pharma_code_configuration_t* self, bool* allow_wide_bars_only);
/**
 * @brief Sets value of allow_wide_bars_only field of the given object.
 * @ingroup c_barcode
 * @details If true, a result consisting of only wide bars is accepted as valid. The specification does not recommend such barcodes. Default is false.
 * 
 * Default is false
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_pharma_code_configuration_t, the field of which will be set
 * @param allow_wide_bars_only: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_pharma_code_configuration_set_allow_wide_bars_only(scanbotsdk_barcode_format_pharma_code_configuration_t* self, bool allow_wide_bars_only);


/**
 * @brief scanbotsdk_barcode_format_two_d_configuration_base_t class
 * @details Base class for all 2D barcode configurations.
 * @ingroup c_barcode
*/
typedef struct scanbotsdk_barcode_format_two_d_configuration_base_t scanbotsdk_barcode_format_two_d_configuration_base_t;

/**
 * @brief Frees the memory allocated for the instance of scanbotsdk_barcode_format_two_d_configuration_base_t. If null is passed, the function does nothing.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_two_d_configuration_base_t to be freed
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_two_d_configuration_base_free(scanbotsdk_barcode_format_two_d_configuration_base_t* object);

/**
 * @brief Checks if the given instance of scanbotsdk_barcode_format_configuration_base_t is an instance of its subtype scanbotsdk_barcode_format_two_d_configuration_base_t.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_configuration_base_t to be checked
 * @param result: Pointer to a variable that will store the result of the check
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
 */
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_configuration_base_is_scanbotsdk_barcode_format_two_d_configuration_base(scanbotsdk_barcode_format_configuration_base_t* object, bool* result);
/**
 * @brief Casts the given instance of scanbotsdk_barcode_format_configuration_base_t to its subtype scanbotsdk_barcode_format_two_d_configuration_base_t. If the given instance is not an instance of the subtype, result will be null.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_configuration_base_t to be casted
 * @param result: Pointer to a variable that will store the casted instance of scanbotsdk_barcode_format_two_d_configuration_base_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_configuration_base_as_scanbotsdk_barcode_format_two_d_configuration_base(scanbotsdk_barcode_format_configuration_base_t* object, scanbotsdk_barcode_format_two_d_configuration_base_t** result);
/**
 * @brief Casts the given instance of scanbotsdk_barcode_format_two_d_configuration_base_t to its parent type scanbotsdk_barcode_format_configuration_base_t.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_configuration_base_t to be casted
 * @param result: Pointer to a variable that will store the casted instance of scanbotsdk_barcode_format_two_d_configuration_base_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_two_d_configuration_base_as_scanbotsdk_barcode_format_configuration_base(scanbotsdk_barcode_format_two_d_configuration_base_t* object, scanbotsdk_barcode_format_configuration_base_t** result);


/**
 * @brief scanbotsdk_barcode_format_aztec_configuration_t class
 * @details Aztec configuration. Add to scanner configuration to scan Aztec codes.
 * @ingroup c_barcode
*/
typedef struct scanbotsdk_barcode_format_aztec_configuration_t scanbotsdk_barcode_format_aztec_configuration_t;

/**
 * @brief Creates a new instance of scanbotsdk_barcode_format_aztec_configuration with given params and stores it in the location specified by the last argument.
 * @ingroup c_barcode
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param regex_filter: Regular expression filter for barcode text. If the barcode text does not match the regular expression, it will not be scanned. The default is an empty string (setting is turned off).
 * 
 * Default is ""
 * The value must not be null.
 * @param minimum_size_score: Minimum acceptable value of a result BarcodeItem's sizeScore (between 0 and 1). 
 * Barcodes with a sizeScore less than this value will not be scanned. 
 * When set to 0, barcodes are returned no matter what their size is.
 * 
 * Default is 0
 * @param add_additional_quiet_zone: If true, we process the barcode scanning with an artificial quiet zone that we add to the input image. 
 * This flag should be used to scan sharp crops of a barcode in single-shot mode.
 * 
 * Default is false
 * @param gs_1_handling: GS1 message handling options.
 * 
 * Default is PARSE
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_barcode_format_aztec_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_aztec_configuration_create(
    const char* regex_filter,
    double minimum_size_score,
    bool add_additional_quiet_zone,
    scanbotsdk_gs_1_handling_t gs_1_handling,
    scanbotsdk_barcode_format_aztec_configuration_t** result);

/**
 * @brief Creates a new instance of scanbotsdk_barcode_format_aztec_configuration_t with given required params and stores it in the location specified by the last argument.
 * @ingroup c_barcode
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_barcode_format_aztec_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_aztec_configuration_create_with_defaults(
    scanbotsdk_barcode_format_aztec_configuration_t** result);


/**
 * @brief Frees the memory allocated for the instance of scanbotsdk_barcode_format_aztec_configuration_t. If null is passed, the function does nothing.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_aztec_configuration_t to be freed
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_aztec_configuration_free(scanbotsdk_barcode_format_aztec_configuration_t* object);

/**
 * @brief Checks if the given instance of scanbotsdk_barcode_format_configuration_base_t is an instance of its subtype scanbotsdk_barcode_format_aztec_configuration_t.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_configuration_base_t to be checked
 * @param result: Pointer to a variable that will store the result of the check
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
 */
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_configuration_base_is_scanbotsdk_barcode_format_aztec_configuration(scanbotsdk_barcode_format_configuration_base_t* object, bool* result);
/**
 * @brief Casts the given instance of scanbotsdk_barcode_format_configuration_base_t to its subtype scanbotsdk_barcode_format_aztec_configuration_t. If the given instance is not an instance of the subtype, result will be null.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_configuration_base_t to be casted
 * @param result: Pointer to a variable that will store the casted instance of scanbotsdk_barcode_format_aztec_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_configuration_base_as_scanbotsdk_barcode_format_aztec_configuration(scanbotsdk_barcode_format_configuration_base_t* object, scanbotsdk_barcode_format_aztec_configuration_t** result);
/**
 * @brief Casts the given instance of scanbotsdk_barcode_format_aztec_configuration_t to its parent type scanbotsdk_barcode_format_configuration_base_t.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_configuration_base_t to be casted
 * @param result: Pointer to a variable that will store the casted instance of scanbotsdk_barcode_format_aztec_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_aztec_configuration_as_scanbotsdk_barcode_format_configuration_base(scanbotsdk_barcode_format_aztec_configuration_t* object, scanbotsdk_barcode_format_configuration_base_t** result);

/**
 * @brief Checks if the given instance of scanbotsdk_barcode_format_two_d_configuration_base_t is an instance of its subtype scanbotsdk_barcode_format_aztec_configuration_t.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_two_d_configuration_base_t to be checked
 * @param result: Pointer to a variable that will store the result of the check
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
 */
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_two_d_configuration_base_is_scanbotsdk_barcode_format_aztec_configuration(scanbotsdk_barcode_format_two_d_configuration_base_t* object, bool* result);
/**
 * @brief Casts the given instance of scanbotsdk_barcode_format_two_d_configuration_base_t to its subtype scanbotsdk_barcode_format_aztec_configuration_t. If the given instance is not an instance of the subtype, result will be null.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_two_d_configuration_base_t to be casted
 * @param result: Pointer to a variable that will store the casted instance of scanbotsdk_barcode_format_aztec_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_two_d_configuration_base_as_scanbotsdk_barcode_format_aztec_configuration(scanbotsdk_barcode_format_two_d_configuration_base_t* object, scanbotsdk_barcode_format_aztec_configuration_t** result);
/**
 * @brief Casts the given instance of scanbotsdk_barcode_format_aztec_configuration_t to its parent type scanbotsdk_barcode_format_two_d_configuration_base_t.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_two_d_configuration_base_t to be casted
 * @param result: Pointer to a variable that will store the casted instance of scanbotsdk_barcode_format_aztec_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_aztec_configuration_as_scanbotsdk_barcode_format_two_d_configuration_base(scanbotsdk_barcode_format_aztec_configuration_t* object, scanbotsdk_barcode_format_two_d_configuration_base_t** result);

/**
 * @brief Returns value of gs_1_handling field of the given object.
 * @ingroup c_barcode
 * @details GS1 message handling options.
 * 
 * Default is PARSE
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_aztec_configuration_t
 * @param gs_1_handling: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_aztec_configuration_get_gs_1_handling(scanbotsdk_barcode_format_aztec_configuration_t* self, scanbotsdk_gs_1_handling_t* gs_1_handling);
/**
 * @brief Sets value of gs_1_handling field of the given object.
 * @ingroup c_barcode
 * @details GS1 message handling options.
 * 
 * Default is PARSE
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_aztec_configuration_t, the field of which will be set
 * @param gs_1_handling: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_aztec_configuration_set_gs_1_handling(scanbotsdk_barcode_format_aztec_configuration_t* self, scanbotsdk_gs_1_handling_t gs_1_handling);


/**
 * @brief scanbotsdk_barcode_format_qr_code_configuration_t class
 * @details QR Code configuration. Add to scanner configuration to scan QR codes, Micro QR codes and rectangular Micro QR (rMQR) codes.
 * @ingroup c_barcode
*/
typedef struct scanbotsdk_barcode_format_qr_code_configuration_t scanbotsdk_barcode_format_qr_code_configuration_t;

/**
 * @brief Creates a new instance of scanbotsdk_barcode_format_qr_code_configuration with given params and stores it in the location specified by the last argument.
 * @ingroup c_barcode
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param regex_filter: Regular expression filter for barcode text. If the barcode text does not match the regular expression, it will not be scanned. The default is an empty string (setting is turned off).
 * 
 * Default is ""
 * The value must not be null.
 * @param minimum_size_score: Minimum acceptable value of a result BarcodeItem's sizeScore (between 0 and 1). 
 * Barcodes with a sizeScore less than this value will not be scanned. 
 * When set to 0, barcodes are returned no matter what their size is.
 * 
 * Default is 0
 * @param add_additional_quiet_zone: If true, we process the barcode scanning with an artificial quiet zone that we add to the input image. 
 * This flag should be used to scan sharp crops of a barcode in single-shot mode.
 * 
 * Default is false
 * @param gs_1_handling: GS1 message handling options.
 * 
 * Default is PARSE
 * @param strict_mode: If true, the barcode scanner will only return barcodes that pass the strict validation checks according to standards to avoid false positives.
 * 
 * Default is true
 * @param qr: If true, scan and return QR codes.
 * 
 * Default is true
 * @param micro_qr: If true, scan and return Micro QR codes.
 * 
 * Default is false
 * @param rmqr: If true, scan and return rectangular Micro QR (rMQR) codes.
 * 
 * Default is false
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_barcode_format_qr_code_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_qr_code_configuration_create(
    const char* regex_filter,
    double minimum_size_score,
    bool add_additional_quiet_zone,
    scanbotsdk_gs_1_handling_t gs_1_handling,
    bool strict_mode,
    bool qr,
    bool micro_qr,
    bool rmqr,
    scanbotsdk_barcode_format_qr_code_configuration_t** result);

/**
 * @brief Creates a new instance of scanbotsdk_barcode_format_qr_code_configuration_t with given required params and stores it in the location specified by the last argument.
 * @ingroup c_barcode
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_barcode_format_qr_code_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_qr_code_configuration_create_with_defaults(
    scanbotsdk_barcode_format_qr_code_configuration_t** result);


/**
 * @brief Frees the memory allocated for the instance of scanbotsdk_barcode_format_qr_code_configuration_t. If null is passed, the function does nothing.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_qr_code_configuration_t to be freed
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_qr_code_configuration_free(scanbotsdk_barcode_format_qr_code_configuration_t* object);

/**
 * @brief Checks if the given instance of scanbotsdk_barcode_format_configuration_base_t is an instance of its subtype scanbotsdk_barcode_format_qr_code_configuration_t.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_configuration_base_t to be checked
 * @param result: Pointer to a variable that will store the result of the check
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
 */
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_configuration_base_is_scanbotsdk_barcode_format_qr_code_configuration(scanbotsdk_barcode_format_configuration_base_t* object, bool* result);
/**
 * @brief Casts the given instance of scanbotsdk_barcode_format_configuration_base_t to its subtype scanbotsdk_barcode_format_qr_code_configuration_t. If the given instance is not an instance of the subtype, result will be null.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_configuration_base_t to be casted
 * @param result: Pointer to a variable that will store the casted instance of scanbotsdk_barcode_format_qr_code_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_configuration_base_as_scanbotsdk_barcode_format_qr_code_configuration(scanbotsdk_barcode_format_configuration_base_t* object, scanbotsdk_barcode_format_qr_code_configuration_t** result);
/**
 * @brief Casts the given instance of scanbotsdk_barcode_format_qr_code_configuration_t to its parent type scanbotsdk_barcode_format_configuration_base_t.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_configuration_base_t to be casted
 * @param result: Pointer to a variable that will store the casted instance of scanbotsdk_barcode_format_qr_code_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_qr_code_configuration_as_scanbotsdk_barcode_format_configuration_base(scanbotsdk_barcode_format_qr_code_configuration_t* object, scanbotsdk_barcode_format_configuration_base_t** result);

/**
 * @brief Checks if the given instance of scanbotsdk_barcode_format_two_d_configuration_base_t is an instance of its subtype scanbotsdk_barcode_format_qr_code_configuration_t.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_two_d_configuration_base_t to be checked
 * @param result: Pointer to a variable that will store the result of the check
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
 */
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_two_d_configuration_base_is_scanbotsdk_barcode_format_qr_code_configuration(scanbotsdk_barcode_format_two_d_configuration_base_t* object, bool* result);
/**
 * @brief Casts the given instance of scanbotsdk_barcode_format_two_d_configuration_base_t to its subtype scanbotsdk_barcode_format_qr_code_configuration_t. If the given instance is not an instance of the subtype, result will be null.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_two_d_configuration_base_t to be casted
 * @param result: Pointer to a variable that will store the casted instance of scanbotsdk_barcode_format_qr_code_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_two_d_configuration_base_as_scanbotsdk_barcode_format_qr_code_configuration(scanbotsdk_barcode_format_two_d_configuration_base_t* object, scanbotsdk_barcode_format_qr_code_configuration_t** result);
/**
 * @brief Casts the given instance of scanbotsdk_barcode_format_qr_code_configuration_t to its parent type scanbotsdk_barcode_format_two_d_configuration_base_t.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_two_d_configuration_base_t to be casted
 * @param result: Pointer to a variable that will store the casted instance of scanbotsdk_barcode_format_qr_code_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_qr_code_configuration_as_scanbotsdk_barcode_format_two_d_configuration_base(scanbotsdk_barcode_format_qr_code_configuration_t* object, scanbotsdk_barcode_format_two_d_configuration_base_t** result);

/**
 * @brief Returns value of gs_1_handling field of the given object.
 * @ingroup c_barcode
 * @details GS1 message handling options.
 * 
 * Default is PARSE
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_qr_code_configuration_t
 * @param gs_1_handling: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_qr_code_configuration_get_gs_1_handling(scanbotsdk_barcode_format_qr_code_configuration_t* self, scanbotsdk_gs_1_handling_t* gs_1_handling);
/**
 * @brief Sets value of gs_1_handling field of the given object.
 * @ingroup c_barcode
 * @details GS1 message handling options.
 * 
 * Default is PARSE
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_qr_code_configuration_t, the field of which will be set
 * @param gs_1_handling: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_qr_code_configuration_set_gs_1_handling(scanbotsdk_barcode_format_qr_code_configuration_t* self, scanbotsdk_gs_1_handling_t gs_1_handling);

/**
 * @brief Returns value of strict_mode field of the given object.
 * @ingroup c_barcode
 * @details If true, the barcode scanner will only return barcodes that pass the strict validation checks according to standards to avoid false positives.
 * 
 * Default is true
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_qr_code_configuration_t
 * @param strict_mode: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_qr_code_configuration_get_strict_mode(scanbotsdk_barcode_format_qr_code_configuration_t* self, bool* strict_mode);
/**
 * @brief Sets value of strict_mode field of the given object.
 * @ingroup c_barcode
 * @details If true, the barcode scanner will only return barcodes that pass the strict validation checks according to standards to avoid false positives.
 * 
 * Default is true
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_qr_code_configuration_t, the field of which will be set
 * @param strict_mode: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_qr_code_configuration_set_strict_mode(scanbotsdk_barcode_format_qr_code_configuration_t* self, bool strict_mode);

/**
 * @brief Returns value of qr field of the given object.
 * @ingroup c_barcode
 * @details If true, scan and return QR codes.
 * 
 * Default is true
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_qr_code_configuration_t
 * @param qr: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_qr_code_configuration_get_qr(scanbotsdk_barcode_format_qr_code_configuration_t* self, bool* qr);
/**
 * @brief Sets value of qr field of the given object.
 * @ingroup c_barcode
 * @details If true, scan and return QR codes.
 * 
 * Default is true
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_qr_code_configuration_t, the field of which will be set
 * @param qr: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_qr_code_configuration_set_qr(scanbotsdk_barcode_format_qr_code_configuration_t* self, bool qr);

/**
 * @brief Returns value of micro_qr field of the given object.
 * @ingroup c_barcode
 * @details If true, scan and return Micro QR codes.
 * 
 * Default is false
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_qr_code_configuration_t
 * @param micro_qr: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_qr_code_configuration_get_micro_qr(scanbotsdk_barcode_format_qr_code_configuration_t* self, bool* micro_qr);
/**
 * @brief Sets value of micro_qr field of the given object.
 * @ingroup c_barcode
 * @details If true, scan and return Micro QR codes.
 * 
 * Default is false
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_qr_code_configuration_t, the field of which will be set
 * @param micro_qr: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_qr_code_configuration_set_micro_qr(scanbotsdk_barcode_format_qr_code_configuration_t* self, bool micro_qr);

/**
 * @brief Returns value of rmqr field of the given object.
 * @ingroup c_barcode
 * @details If true, scan and return rectangular Micro QR (rMQR) codes.
 * 
 * Default is false
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_qr_code_configuration_t
 * @param rmqr: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_qr_code_configuration_get_rmqr(scanbotsdk_barcode_format_qr_code_configuration_t* self, bool* rmqr);
/**
 * @brief Sets value of rmqr field of the given object.
 * @ingroup c_barcode
 * @details If true, scan and return rectangular Micro QR (rMQR) codes.
 * 
 * Default is false
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_qr_code_configuration_t, the field of which will be set
 * @param rmqr: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_qr_code_configuration_set_rmqr(scanbotsdk_barcode_format_qr_code_configuration_t* self, bool rmqr);


/**
 * @brief scanbotsdk_barcode_format_pdf_417_configuration_t class
 * @details PDF417 configuration. Add to scanner configuration to scan PDF417 codes.
 * @ingroup c_barcode
*/
typedef struct scanbotsdk_barcode_format_pdf_417_configuration_t scanbotsdk_barcode_format_pdf_417_configuration_t;

/**
 * @brief Creates a new instance of scanbotsdk_barcode_format_pdf_417_configuration with given params and stores it in the location specified by the last argument.
 * @ingroup c_barcode
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param regex_filter: Regular expression filter for barcode text. If the barcode text does not match the regular expression, it will not be scanned. The default is an empty string (setting is turned off).
 * 
 * Default is ""
 * The value must not be null.
 * @param minimum_size_score: Minimum acceptable value of a result BarcodeItem's sizeScore (between 0 and 1). 
 * Barcodes with a sizeScore less than this value will not be scanned. 
 * When set to 0, barcodes are returned no matter what their size is.
 * 
 * Default is 0
 * @param add_additional_quiet_zone: If true, we process the barcode scanning with an artificial quiet zone that we add to the input image. 
 * This flag should be used to scan sharp crops of a barcode in single-shot mode.
 * 
 * Default is false
 * @param gs_1_handling: GS1 message handling options.
 * 
 * Default is PARSE
 * @param strict_mode: If true, the barcode scanner will only return barcodes that pass the strict validation checks according to standards to avoid false positives.
 * 
 * Default is true
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_barcode_format_pdf_417_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_pdf_417_configuration_create(
    const char* regex_filter,
    double minimum_size_score,
    bool add_additional_quiet_zone,
    scanbotsdk_gs_1_handling_t gs_1_handling,
    bool strict_mode,
    scanbotsdk_barcode_format_pdf_417_configuration_t** result);

/**
 * @brief Creates a new instance of scanbotsdk_barcode_format_pdf_417_configuration_t with given required params and stores it in the location specified by the last argument.
 * @ingroup c_barcode
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_barcode_format_pdf_417_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_pdf_417_configuration_create_with_defaults(
    scanbotsdk_barcode_format_pdf_417_configuration_t** result);


/**
 * @brief Frees the memory allocated for the instance of scanbotsdk_barcode_format_pdf_417_configuration_t. If null is passed, the function does nothing.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_pdf_417_configuration_t to be freed
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_pdf_417_configuration_free(scanbotsdk_barcode_format_pdf_417_configuration_t* object);

/**
 * @brief Checks if the given instance of scanbotsdk_barcode_format_configuration_base_t is an instance of its subtype scanbotsdk_barcode_format_pdf_417_configuration_t.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_configuration_base_t to be checked
 * @param result: Pointer to a variable that will store the result of the check
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
 */
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_configuration_base_is_scanbotsdk_barcode_format_pdf_417_configuration(scanbotsdk_barcode_format_configuration_base_t* object, bool* result);
/**
 * @brief Casts the given instance of scanbotsdk_barcode_format_configuration_base_t to its subtype scanbotsdk_barcode_format_pdf_417_configuration_t. If the given instance is not an instance of the subtype, result will be null.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_configuration_base_t to be casted
 * @param result: Pointer to a variable that will store the casted instance of scanbotsdk_barcode_format_pdf_417_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_configuration_base_as_scanbotsdk_barcode_format_pdf_417_configuration(scanbotsdk_barcode_format_configuration_base_t* object, scanbotsdk_barcode_format_pdf_417_configuration_t** result);
/**
 * @brief Casts the given instance of scanbotsdk_barcode_format_pdf_417_configuration_t to its parent type scanbotsdk_barcode_format_configuration_base_t.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_configuration_base_t to be casted
 * @param result: Pointer to a variable that will store the casted instance of scanbotsdk_barcode_format_pdf_417_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_pdf_417_configuration_as_scanbotsdk_barcode_format_configuration_base(scanbotsdk_barcode_format_pdf_417_configuration_t* object, scanbotsdk_barcode_format_configuration_base_t** result);

/**
 * @brief Checks if the given instance of scanbotsdk_barcode_format_two_d_configuration_base_t is an instance of its subtype scanbotsdk_barcode_format_pdf_417_configuration_t.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_two_d_configuration_base_t to be checked
 * @param result: Pointer to a variable that will store the result of the check
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
 */
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_two_d_configuration_base_is_scanbotsdk_barcode_format_pdf_417_configuration(scanbotsdk_barcode_format_two_d_configuration_base_t* object, bool* result);
/**
 * @brief Casts the given instance of scanbotsdk_barcode_format_two_d_configuration_base_t to its subtype scanbotsdk_barcode_format_pdf_417_configuration_t. If the given instance is not an instance of the subtype, result will be null.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_two_d_configuration_base_t to be casted
 * @param result: Pointer to a variable that will store the casted instance of scanbotsdk_barcode_format_pdf_417_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_two_d_configuration_base_as_scanbotsdk_barcode_format_pdf_417_configuration(scanbotsdk_barcode_format_two_d_configuration_base_t* object, scanbotsdk_barcode_format_pdf_417_configuration_t** result);
/**
 * @brief Casts the given instance of scanbotsdk_barcode_format_pdf_417_configuration_t to its parent type scanbotsdk_barcode_format_two_d_configuration_base_t.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_two_d_configuration_base_t to be casted
 * @param result: Pointer to a variable that will store the casted instance of scanbotsdk_barcode_format_pdf_417_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_pdf_417_configuration_as_scanbotsdk_barcode_format_two_d_configuration_base(scanbotsdk_barcode_format_pdf_417_configuration_t* object, scanbotsdk_barcode_format_two_d_configuration_base_t** result);

/**
 * @brief Returns value of gs_1_handling field of the given object.
 * @ingroup c_barcode
 * @details GS1 message handling options.
 * 
 * Default is PARSE
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_pdf_417_configuration_t
 * @param gs_1_handling: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_pdf_417_configuration_get_gs_1_handling(scanbotsdk_barcode_format_pdf_417_configuration_t* self, scanbotsdk_gs_1_handling_t* gs_1_handling);
/**
 * @brief Sets value of gs_1_handling field of the given object.
 * @ingroup c_barcode
 * @details GS1 message handling options.
 * 
 * Default is PARSE
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_pdf_417_configuration_t, the field of which will be set
 * @param gs_1_handling: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_pdf_417_configuration_set_gs_1_handling(scanbotsdk_barcode_format_pdf_417_configuration_t* self, scanbotsdk_gs_1_handling_t gs_1_handling);

/**
 * @brief Returns value of strict_mode field of the given object.
 * @ingroup c_barcode
 * @details If true, the barcode scanner will only return barcodes that pass the strict validation checks according to standards to avoid false positives.
 * 
 * Default is true
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_pdf_417_configuration_t
 * @param strict_mode: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_pdf_417_configuration_get_strict_mode(scanbotsdk_barcode_format_pdf_417_configuration_t* self, bool* strict_mode);
/**
 * @brief Sets value of strict_mode field of the given object.
 * @ingroup c_barcode
 * @details If true, the barcode scanner will only return barcodes that pass the strict validation checks according to standards to avoid false positives.
 * 
 * Default is true
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_pdf_417_configuration_t, the field of which will be set
 * @param strict_mode: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_pdf_417_configuration_set_strict_mode(scanbotsdk_barcode_format_pdf_417_configuration_t* self, bool strict_mode);


/**
 * @brief scanbotsdk_barcode_format_micro_pdf_417_configuration_t class
 * @details MicroPDF417 configuration. Add to scanner configuration to scan MicroPDF417 codes.
 * @ingroup c_barcode
*/
typedef struct scanbotsdk_barcode_format_micro_pdf_417_configuration_t scanbotsdk_barcode_format_micro_pdf_417_configuration_t;

/**
 * @brief Creates a new instance of scanbotsdk_barcode_format_micro_pdf_417_configuration with given params and stores it in the location specified by the last argument.
 * @ingroup c_barcode
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param regex_filter: Regular expression filter for barcode text. If the barcode text does not match the regular expression, it will not be scanned. The default is an empty string (setting is turned off).
 * 
 * Default is ""
 * The value must not be null.
 * @param minimum_size_score: Minimum acceptable value of a result BarcodeItem's sizeScore (between 0 and 1). 
 * Barcodes with a sizeScore less than this value will not be scanned. 
 * When set to 0, barcodes are returned no matter what their size is.
 * 
 * Default is 0
 * @param add_additional_quiet_zone: If true, we process the barcode scanning with an artificial quiet zone that we add to the input image. 
 * This flag should be used to scan sharp crops of a barcode in single-shot mode.
 * 
 * Default is false
 * @param gs_1_handling: GS1 message handling options.
 * 
 * Default is PARSE
 * @param strict_mode: If true, the barcode scanner will only return barcodes that pass the strict validation checks according to standards to avoid false positives.
 * 
 * Default is true
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_barcode_format_micro_pdf_417_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_micro_pdf_417_configuration_create(
    const char* regex_filter,
    double minimum_size_score,
    bool add_additional_quiet_zone,
    scanbotsdk_gs_1_handling_t gs_1_handling,
    bool strict_mode,
    scanbotsdk_barcode_format_micro_pdf_417_configuration_t** result);

/**
 * @brief Creates a new instance of scanbotsdk_barcode_format_micro_pdf_417_configuration_t with given required params and stores it in the location specified by the last argument.
 * @ingroup c_barcode
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_barcode_format_micro_pdf_417_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_micro_pdf_417_configuration_create_with_defaults(
    scanbotsdk_barcode_format_micro_pdf_417_configuration_t** result);


/**
 * @brief Frees the memory allocated for the instance of scanbotsdk_barcode_format_micro_pdf_417_configuration_t. If null is passed, the function does nothing.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_micro_pdf_417_configuration_t to be freed
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_micro_pdf_417_configuration_free(scanbotsdk_barcode_format_micro_pdf_417_configuration_t* object);

/**
 * @brief Checks if the given instance of scanbotsdk_barcode_format_configuration_base_t is an instance of its subtype scanbotsdk_barcode_format_micro_pdf_417_configuration_t.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_configuration_base_t to be checked
 * @param result: Pointer to a variable that will store the result of the check
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
 */
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_configuration_base_is_scanbotsdk_barcode_format_micro_pdf_417_configuration(scanbotsdk_barcode_format_configuration_base_t* object, bool* result);
/**
 * @brief Casts the given instance of scanbotsdk_barcode_format_configuration_base_t to its subtype scanbotsdk_barcode_format_micro_pdf_417_configuration_t. If the given instance is not an instance of the subtype, result will be null.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_configuration_base_t to be casted
 * @param result: Pointer to a variable that will store the casted instance of scanbotsdk_barcode_format_micro_pdf_417_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_configuration_base_as_scanbotsdk_barcode_format_micro_pdf_417_configuration(scanbotsdk_barcode_format_configuration_base_t* object, scanbotsdk_barcode_format_micro_pdf_417_configuration_t** result);
/**
 * @brief Casts the given instance of scanbotsdk_barcode_format_micro_pdf_417_configuration_t to its parent type scanbotsdk_barcode_format_configuration_base_t.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_configuration_base_t to be casted
 * @param result: Pointer to a variable that will store the casted instance of scanbotsdk_barcode_format_micro_pdf_417_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_micro_pdf_417_configuration_as_scanbotsdk_barcode_format_configuration_base(scanbotsdk_barcode_format_micro_pdf_417_configuration_t* object, scanbotsdk_barcode_format_configuration_base_t** result);

/**
 * @brief Checks if the given instance of scanbotsdk_barcode_format_two_d_configuration_base_t is an instance of its subtype scanbotsdk_barcode_format_micro_pdf_417_configuration_t.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_two_d_configuration_base_t to be checked
 * @param result: Pointer to a variable that will store the result of the check
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
 */
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_two_d_configuration_base_is_scanbotsdk_barcode_format_micro_pdf_417_configuration(scanbotsdk_barcode_format_two_d_configuration_base_t* object, bool* result);
/**
 * @brief Casts the given instance of scanbotsdk_barcode_format_two_d_configuration_base_t to its subtype scanbotsdk_barcode_format_micro_pdf_417_configuration_t. If the given instance is not an instance of the subtype, result will be null.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_two_d_configuration_base_t to be casted
 * @param result: Pointer to a variable that will store the casted instance of scanbotsdk_barcode_format_micro_pdf_417_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_two_d_configuration_base_as_scanbotsdk_barcode_format_micro_pdf_417_configuration(scanbotsdk_barcode_format_two_d_configuration_base_t* object, scanbotsdk_barcode_format_micro_pdf_417_configuration_t** result);
/**
 * @brief Casts the given instance of scanbotsdk_barcode_format_micro_pdf_417_configuration_t to its parent type scanbotsdk_barcode_format_two_d_configuration_base_t.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_two_d_configuration_base_t to be casted
 * @param result: Pointer to a variable that will store the casted instance of scanbotsdk_barcode_format_micro_pdf_417_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_micro_pdf_417_configuration_as_scanbotsdk_barcode_format_two_d_configuration_base(scanbotsdk_barcode_format_micro_pdf_417_configuration_t* object, scanbotsdk_barcode_format_two_d_configuration_base_t** result);

/**
 * @brief Returns value of gs_1_handling field of the given object.
 * @ingroup c_barcode
 * @details GS1 message handling options.
 * 
 * Default is PARSE
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_micro_pdf_417_configuration_t
 * @param gs_1_handling: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_micro_pdf_417_configuration_get_gs_1_handling(scanbotsdk_barcode_format_micro_pdf_417_configuration_t* self, scanbotsdk_gs_1_handling_t* gs_1_handling);
/**
 * @brief Sets value of gs_1_handling field of the given object.
 * @ingroup c_barcode
 * @details GS1 message handling options.
 * 
 * Default is PARSE
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_micro_pdf_417_configuration_t, the field of which will be set
 * @param gs_1_handling: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_micro_pdf_417_configuration_set_gs_1_handling(scanbotsdk_barcode_format_micro_pdf_417_configuration_t* self, scanbotsdk_gs_1_handling_t gs_1_handling);

/**
 * @brief Returns value of strict_mode field of the given object.
 * @ingroup c_barcode
 * @details If true, the barcode scanner will only return barcodes that pass the strict validation checks according to standards to avoid false positives.
 * 
 * Default is true
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_micro_pdf_417_configuration_t
 * @param strict_mode: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_micro_pdf_417_configuration_get_strict_mode(scanbotsdk_barcode_format_micro_pdf_417_configuration_t* self, bool* strict_mode);
/**
 * @brief Sets value of strict_mode field of the given object.
 * @ingroup c_barcode
 * @details If true, the barcode scanner will only return barcodes that pass the strict validation checks according to standards to avoid false positives.
 * 
 * Default is true
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_micro_pdf_417_configuration_t, the field of which will be set
 * @param strict_mode: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_micro_pdf_417_configuration_set_strict_mode(scanbotsdk_barcode_format_micro_pdf_417_configuration_t* self, bool strict_mode);


/**
 * @brief scanbotsdk_barcode_format_data_matrix_configuration_t class
 * @details DataMatrix configuration. Add to scanner configuration to scan DataMatrix and DataMatrix rectangular extensions (DMRE) codes.
 * @ingroup c_barcode
*/
typedef struct scanbotsdk_barcode_format_data_matrix_configuration_t scanbotsdk_barcode_format_data_matrix_configuration_t;

/**
 * @brief Creates a new instance of scanbotsdk_barcode_format_data_matrix_configuration with given params and stores it in the location specified by the last argument.
 * @ingroup c_barcode
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param regex_filter: Regular expression filter for barcode text. If the barcode text does not match the regular expression, it will not be scanned. The default is an empty string (setting is turned off).
 * 
 * Default is ""
 * The value must not be null.
 * @param minimum_size_score: Minimum acceptable value of a result BarcodeItem's sizeScore (between 0 and 1). 
 * Barcodes with a sizeScore less than this value will not be scanned. 
 * When set to 0, barcodes are returned no matter what their size is.
 * 
 * Default is 0
 * @param add_additional_quiet_zone: If true, we process the barcode scanning with an artificial quiet zone that we add to the input image. 
 * This flag should be used to scan sharp crops of a barcode in single-shot mode.
 * 
 * Default is false
 * @param gs_1_handling: GS1 message handling options.
 * 
 * Default is PARSE
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_barcode_format_data_matrix_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_data_matrix_configuration_create(
    const char* regex_filter,
    double minimum_size_score,
    bool add_additional_quiet_zone,
    scanbotsdk_gs_1_handling_t gs_1_handling,
    scanbotsdk_barcode_format_data_matrix_configuration_t** result);

/**
 * @brief Creates a new instance of scanbotsdk_barcode_format_data_matrix_configuration_t with given required params and stores it in the location specified by the last argument.
 * @ingroup c_barcode
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_barcode_format_data_matrix_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_data_matrix_configuration_create_with_defaults(
    scanbotsdk_barcode_format_data_matrix_configuration_t** result);


/**
 * @brief Frees the memory allocated for the instance of scanbotsdk_barcode_format_data_matrix_configuration_t. If null is passed, the function does nothing.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_data_matrix_configuration_t to be freed
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_data_matrix_configuration_free(scanbotsdk_barcode_format_data_matrix_configuration_t* object);

/**
 * @brief Checks if the given instance of scanbotsdk_barcode_format_configuration_base_t is an instance of its subtype scanbotsdk_barcode_format_data_matrix_configuration_t.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_configuration_base_t to be checked
 * @param result: Pointer to a variable that will store the result of the check
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
 */
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_configuration_base_is_scanbotsdk_barcode_format_data_matrix_configuration(scanbotsdk_barcode_format_configuration_base_t* object, bool* result);
/**
 * @brief Casts the given instance of scanbotsdk_barcode_format_configuration_base_t to its subtype scanbotsdk_barcode_format_data_matrix_configuration_t. If the given instance is not an instance of the subtype, result will be null.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_configuration_base_t to be casted
 * @param result: Pointer to a variable that will store the casted instance of scanbotsdk_barcode_format_data_matrix_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_configuration_base_as_scanbotsdk_barcode_format_data_matrix_configuration(scanbotsdk_barcode_format_configuration_base_t* object, scanbotsdk_barcode_format_data_matrix_configuration_t** result);
/**
 * @brief Casts the given instance of scanbotsdk_barcode_format_data_matrix_configuration_t to its parent type scanbotsdk_barcode_format_configuration_base_t.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_configuration_base_t to be casted
 * @param result: Pointer to a variable that will store the casted instance of scanbotsdk_barcode_format_data_matrix_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_data_matrix_configuration_as_scanbotsdk_barcode_format_configuration_base(scanbotsdk_barcode_format_data_matrix_configuration_t* object, scanbotsdk_barcode_format_configuration_base_t** result);

/**
 * @brief Checks if the given instance of scanbotsdk_barcode_format_two_d_configuration_base_t is an instance of its subtype scanbotsdk_barcode_format_data_matrix_configuration_t.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_two_d_configuration_base_t to be checked
 * @param result: Pointer to a variable that will store the result of the check
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
 */
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_two_d_configuration_base_is_scanbotsdk_barcode_format_data_matrix_configuration(scanbotsdk_barcode_format_two_d_configuration_base_t* object, bool* result);
/**
 * @brief Casts the given instance of scanbotsdk_barcode_format_two_d_configuration_base_t to its subtype scanbotsdk_barcode_format_data_matrix_configuration_t. If the given instance is not an instance of the subtype, result will be null.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_two_d_configuration_base_t to be casted
 * @param result: Pointer to a variable that will store the casted instance of scanbotsdk_barcode_format_data_matrix_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_two_d_configuration_base_as_scanbotsdk_barcode_format_data_matrix_configuration(scanbotsdk_barcode_format_two_d_configuration_base_t* object, scanbotsdk_barcode_format_data_matrix_configuration_t** result);
/**
 * @brief Casts the given instance of scanbotsdk_barcode_format_data_matrix_configuration_t to its parent type scanbotsdk_barcode_format_two_d_configuration_base_t.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_two_d_configuration_base_t to be casted
 * @param result: Pointer to a variable that will store the casted instance of scanbotsdk_barcode_format_data_matrix_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_data_matrix_configuration_as_scanbotsdk_barcode_format_two_d_configuration_base(scanbotsdk_barcode_format_data_matrix_configuration_t* object, scanbotsdk_barcode_format_two_d_configuration_base_t** result);

/**
 * @brief Returns value of gs_1_handling field of the given object.
 * @ingroup c_barcode
 * @details GS1 message handling options.
 * 
 * Default is PARSE
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_data_matrix_configuration_t
 * @param gs_1_handling: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_data_matrix_configuration_get_gs_1_handling(scanbotsdk_barcode_format_data_matrix_configuration_t* self, scanbotsdk_gs_1_handling_t* gs_1_handling);
/**
 * @brief Sets value of gs_1_handling field of the given object.
 * @ingroup c_barcode
 * @details GS1 message handling options.
 * 
 * Default is PARSE
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_data_matrix_configuration_t, the field of which will be set
 * @param gs_1_handling: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_data_matrix_configuration_set_gs_1_handling(scanbotsdk_barcode_format_data_matrix_configuration_t* self, scanbotsdk_gs_1_handling_t gs_1_handling);


/**
 * @brief scanbotsdk_barcode_format_maxi_code_configuration_t class
 * @details MaxiCode configuration. Add to scanner configuration to scan MaxiCode codes.
 * @ingroup c_barcode
*/
typedef struct scanbotsdk_barcode_format_maxi_code_configuration_t scanbotsdk_barcode_format_maxi_code_configuration_t;

/**
 * @brief Creates a new instance of scanbotsdk_barcode_format_maxi_code_configuration with given params and stores it in the location specified by the last argument.
 * @ingroup c_barcode
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param regex_filter: Regular expression filter for barcode text. If the barcode text does not match the regular expression, it will not be scanned. The default is an empty string (setting is turned off).
 * 
 * Default is ""
 * The value must not be null.
 * @param minimum_size_score: Minimum acceptable value of a result BarcodeItem's sizeScore (between 0 and 1). 
 * Barcodes with a sizeScore less than this value will not be scanned. 
 * When set to 0, barcodes are returned no matter what their size is.
 * 
 * Default is 0
 * @param add_additional_quiet_zone: If true, we process the barcode scanning with an artificial quiet zone that we add to the input image. 
 * This flag should be used to scan sharp crops of a barcode in single-shot mode.
 * 
 * Default is false
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_barcode_format_maxi_code_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_maxi_code_configuration_create(
    const char* regex_filter,
    double minimum_size_score,
    bool add_additional_quiet_zone,
    scanbotsdk_barcode_format_maxi_code_configuration_t** result);

/**
 * @brief Creates a new instance of scanbotsdk_barcode_format_maxi_code_configuration_t with given required params and stores it in the location specified by the last argument.
 * @ingroup c_barcode
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_barcode_format_maxi_code_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_maxi_code_configuration_create_with_defaults(
    scanbotsdk_barcode_format_maxi_code_configuration_t** result);


/**
 * @brief Frees the memory allocated for the instance of scanbotsdk_barcode_format_maxi_code_configuration_t. If null is passed, the function does nothing.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_maxi_code_configuration_t to be freed
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_maxi_code_configuration_free(scanbotsdk_barcode_format_maxi_code_configuration_t* object);

/**
 * @brief Checks if the given instance of scanbotsdk_barcode_format_configuration_base_t is an instance of its subtype scanbotsdk_barcode_format_maxi_code_configuration_t.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_configuration_base_t to be checked
 * @param result: Pointer to a variable that will store the result of the check
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
 */
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_configuration_base_is_scanbotsdk_barcode_format_maxi_code_configuration(scanbotsdk_barcode_format_configuration_base_t* object, bool* result);
/**
 * @brief Casts the given instance of scanbotsdk_barcode_format_configuration_base_t to its subtype scanbotsdk_barcode_format_maxi_code_configuration_t. If the given instance is not an instance of the subtype, result will be null.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_configuration_base_t to be casted
 * @param result: Pointer to a variable that will store the casted instance of scanbotsdk_barcode_format_maxi_code_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_configuration_base_as_scanbotsdk_barcode_format_maxi_code_configuration(scanbotsdk_barcode_format_configuration_base_t* object, scanbotsdk_barcode_format_maxi_code_configuration_t** result);
/**
 * @brief Casts the given instance of scanbotsdk_barcode_format_maxi_code_configuration_t to its parent type scanbotsdk_barcode_format_configuration_base_t.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_configuration_base_t to be casted
 * @param result: Pointer to a variable that will store the casted instance of scanbotsdk_barcode_format_maxi_code_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_maxi_code_configuration_as_scanbotsdk_barcode_format_configuration_base(scanbotsdk_barcode_format_maxi_code_configuration_t* object, scanbotsdk_barcode_format_configuration_base_t** result);

/**
 * @brief Checks if the given instance of scanbotsdk_barcode_format_two_d_configuration_base_t is an instance of its subtype scanbotsdk_barcode_format_maxi_code_configuration_t.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_two_d_configuration_base_t to be checked
 * @param result: Pointer to a variable that will store the result of the check
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
 */
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_two_d_configuration_base_is_scanbotsdk_barcode_format_maxi_code_configuration(scanbotsdk_barcode_format_two_d_configuration_base_t* object, bool* result);
/**
 * @brief Casts the given instance of scanbotsdk_barcode_format_two_d_configuration_base_t to its subtype scanbotsdk_barcode_format_maxi_code_configuration_t. If the given instance is not an instance of the subtype, result will be null.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_two_d_configuration_base_t to be casted
 * @param result: Pointer to a variable that will store the casted instance of scanbotsdk_barcode_format_maxi_code_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_two_d_configuration_base_as_scanbotsdk_barcode_format_maxi_code_configuration(scanbotsdk_barcode_format_two_d_configuration_base_t* object, scanbotsdk_barcode_format_maxi_code_configuration_t** result);
/**
 * @brief Casts the given instance of scanbotsdk_barcode_format_maxi_code_configuration_t to its parent type scanbotsdk_barcode_format_two_d_configuration_base_t.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_two_d_configuration_base_t to be casted
 * @param result: Pointer to a variable that will store the casted instance of scanbotsdk_barcode_format_maxi_code_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_maxi_code_configuration_as_scanbotsdk_barcode_format_two_d_configuration_base(scanbotsdk_barcode_format_maxi_code_configuration_t* object, scanbotsdk_barcode_format_two_d_configuration_base_t** result);


/**
 * @brief scanbotsdk_barcode_format_four_state_configuration_base_t class
 * @details Base class for all four-state barcode configurations.
 * @ingroup c_barcode
*/
typedef struct scanbotsdk_barcode_format_four_state_configuration_base_t scanbotsdk_barcode_format_four_state_configuration_base_t;

/**
 * @brief Frees the memory allocated for the instance of scanbotsdk_barcode_format_four_state_configuration_base_t. If null is passed, the function does nothing.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_four_state_configuration_base_t to be freed
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_four_state_configuration_base_free(scanbotsdk_barcode_format_four_state_configuration_base_t* object);

/**
 * @brief Checks if the given instance of scanbotsdk_barcode_format_configuration_base_t is an instance of its subtype scanbotsdk_barcode_format_four_state_configuration_base_t.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_configuration_base_t to be checked
 * @param result: Pointer to a variable that will store the result of the check
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
 */
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_configuration_base_is_scanbotsdk_barcode_format_four_state_configuration_base(scanbotsdk_barcode_format_configuration_base_t* object, bool* result);
/**
 * @brief Casts the given instance of scanbotsdk_barcode_format_configuration_base_t to its subtype scanbotsdk_barcode_format_four_state_configuration_base_t. If the given instance is not an instance of the subtype, result will be null.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_configuration_base_t to be casted
 * @param result: Pointer to a variable that will store the casted instance of scanbotsdk_barcode_format_four_state_configuration_base_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_configuration_base_as_scanbotsdk_barcode_format_four_state_configuration_base(scanbotsdk_barcode_format_configuration_base_t* object, scanbotsdk_barcode_format_four_state_configuration_base_t** result);
/**
 * @brief Casts the given instance of scanbotsdk_barcode_format_four_state_configuration_base_t to its parent type scanbotsdk_barcode_format_configuration_base_t.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_configuration_base_t to be casted
 * @param result: Pointer to a variable that will store the casted instance of scanbotsdk_barcode_format_four_state_configuration_base_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_four_state_configuration_base_as_scanbotsdk_barcode_format_configuration_base(scanbotsdk_barcode_format_four_state_configuration_base_t* object, scanbotsdk_barcode_format_configuration_base_t** result);


/**
 * @brief scanbotsdk_australia_post_customer_format_t enum
 * @details Can be either numeric or alphanumeric and is only relevant for Format Codes 59 and 62.
 * @ingroup c_barcode
*/
typedef enum scanbotsdk_australia_post_customer_format_t {

    /**Numeric.*/
    SCANBOTSDK_AUSTRALIA_POST_CUSTOMER_FORMAT_NUMERIC = 0,

    /**AlphaNumeric.*/
    SCANBOTSDK_AUSTRALIA_POST_CUSTOMER_FORMAT_ALPHA_NUMERIC = 1,

} scanbotsdk_australia_post_customer_format_t;

/**
 * @brief Returns the string representation of the given scanbotsdk_australia_post_customer_format_t value.
 * @ingroup c_barcode
 * @details The returned string doesn't need to be freed.
 * @param value: The value to be converted to string.
 * @param result: Pointer to a variable that will store the string representation of the value.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_australia_post_customer_format_t_to_string(scanbotsdk_australia_post_customer_format_t value, const char** result);

/**
 * @brief scanbotsdk_barcode_format_australia_post_configuration_t class
 * @details Australia Post barcode configuration. Add to scanner configuration to scan Australia Post barcodes.
 * @ingroup c_barcode
*/
typedef struct scanbotsdk_barcode_format_australia_post_configuration_t scanbotsdk_barcode_format_australia_post_configuration_t;

/**
 * @brief Creates a new instance of scanbotsdk_barcode_format_australia_post_configuration with given params and stores it in the location specified by the last argument.
 * @ingroup c_barcode
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param regex_filter: Regular expression filter for barcode text. If the barcode text does not match the regular expression, it will not be scanned. The default is an empty string (setting is turned off).
 * 
 * Default is ""
 * The value must not be null.
 * @param minimum_size_score: Minimum acceptable value of a result BarcodeItem's sizeScore (between 0 and 1). 
 * Barcodes with a sizeScore less than this value will not be scanned. 
 * When set to 0, barcodes are returned no matter what their size is.
 * 
 * Default is 0
 * @param add_additional_quiet_zone: If true, we process the barcode scanning with an artificial quiet zone that we add to the input image. 
 * This flag should be used to scan sharp crops of a barcode in single-shot mode.
 * 
 * Default is false
 * @param australia_post_customer_format: Can be either numeric or alphanumeric and is only relevant for Format Codes 59 and 62.
 * 
 * Default is ALPHA_NUMERIC
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_barcode_format_australia_post_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_australia_post_configuration_create(
    const char* regex_filter,
    double minimum_size_score,
    bool add_additional_quiet_zone,
    scanbotsdk_australia_post_customer_format_t australia_post_customer_format,
    scanbotsdk_barcode_format_australia_post_configuration_t** result);

/**
 * @brief Creates a new instance of scanbotsdk_barcode_format_australia_post_configuration_t with given required params and stores it in the location specified by the last argument.
 * @ingroup c_barcode
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_barcode_format_australia_post_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_australia_post_configuration_create_with_defaults(
    scanbotsdk_barcode_format_australia_post_configuration_t** result);


/**
 * @brief Frees the memory allocated for the instance of scanbotsdk_barcode_format_australia_post_configuration_t. If null is passed, the function does nothing.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_australia_post_configuration_t to be freed
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_australia_post_configuration_free(scanbotsdk_barcode_format_australia_post_configuration_t* object);

/**
 * @brief Checks if the given instance of scanbotsdk_barcode_format_configuration_base_t is an instance of its subtype scanbotsdk_barcode_format_australia_post_configuration_t.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_configuration_base_t to be checked
 * @param result: Pointer to a variable that will store the result of the check
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
 */
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_configuration_base_is_scanbotsdk_barcode_format_australia_post_configuration(scanbotsdk_barcode_format_configuration_base_t* object, bool* result);
/**
 * @brief Casts the given instance of scanbotsdk_barcode_format_configuration_base_t to its subtype scanbotsdk_barcode_format_australia_post_configuration_t. If the given instance is not an instance of the subtype, result will be null.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_configuration_base_t to be casted
 * @param result: Pointer to a variable that will store the casted instance of scanbotsdk_barcode_format_australia_post_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_configuration_base_as_scanbotsdk_barcode_format_australia_post_configuration(scanbotsdk_barcode_format_configuration_base_t* object, scanbotsdk_barcode_format_australia_post_configuration_t** result);
/**
 * @brief Casts the given instance of scanbotsdk_barcode_format_australia_post_configuration_t to its parent type scanbotsdk_barcode_format_configuration_base_t.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_configuration_base_t to be casted
 * @param result: Pointer to a variable that will store the casted instance of scanbotsdk_barcode_format_australia_post_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_australia_post_configuration_as_scanbotsdk_barcode_format_configuration_base(scanbotsdk_barcode_format_australia_post_configuration_t* object, scanbotsdk_barcode_format_configuration_base_t** result);

/**
 * @brief Checks if the given instance of scanbotsdk_barcode_format_four_state_configuration_base_t is an instance of its subtype scanbotsdk_barcode_format_australia_post_configuration_t.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_four_state_configuration_base_t to be checked
 * @param result: Pointer to a variable that will store the result of the check
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
 */
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_four_state_configuration_base_is_scanbotsdk_barcode_format_australia_post_configuration(scanbotsdk_barcode_format_four_state_configuration_base_t* object, bool* result);
/**
 * @brief Casts the given instance of scanbotsdk_barcode_format_four_state_configuration_base_t to its subtype scanbotsdk_barcode_format_australia_post_configuration_t. If the given instance is not an instance of the subtype, result will be null.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_four_state_configuration_base_t to be casted
 * @param result: Pointer to a variable that will store the casted instance of scanbotsdk_barcode_format_australia_post_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_four_state_configuration_base_as_scanbotsdk_barcode_format_australia_post_configuration(scanbotsdk_barcode_format_four_state_configuration_base_t* object, scanbotsdk_barcode_format_australia_post_configuration_t** result);
/**
 * @brief Casts the given instance of scanbotsdk_barcode_format_australia_post_configuration_t to its parent type scanbotsdk_barcode_format_four_state_configuration_base_t.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_four_state_configuration_base_t to be casted
 * @param result: Pointer to a variable that will store the casted instance of scanbotsdk_barcode_format_australia_post_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_australia_post_configuration_as_scanbotsdk_barcode_format_four_state_configuration_base(scanbotsdk_barcode_format_australia_post_configuration_t* object, scanbotsdk_barcode_format_four_state_configuration_base_t** result);

/**
 * @brief Returns value of australia_post_customer_format field of the given object.
 * @ingroup c_barcode
 * @details Can be either numeric or alphanumeric and is only relevant for Format Codes 59 and 62.
 * 
 * Default is ALPHA_NUMERIC
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_australia_post_configuration_t
 * @param australia_post_customer_format: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_australia_post_configuration_get_australia_post_customer_format(scanbotsdk_barcode_format_australia_post_configuration_t* self, scanbotsdk_australia_post_customer_format_t* australia_post_customer_format);
/**
 * @brief Sets value of australia_post_customer_format field of the given object.
 * @ingroup c_barcode
 * @details Can be either numeric or alphanumeric and is only relevant for Format Codes 59 and 62.
 * 
 * Default is ALPHA_NUMERIC
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_australia_post_configuration_t, the field of which will be set
 * @param australia_post_customer_format: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_australia_post_configuration_set_australia_post_customer_format(scanbotsdk_barcode_format_australia_post_configuration_t* self, scanbotsdk_australia_post_customer_format_t australia_post_customer_format);


/**
 * @brief scanbotsdk_barcode_format_japan_post_configuration_t class
 * @details Japan Post barcode configuration. Add to scanner configuration to scan Japan Post barcodes.
 * @ingroup c_barcode
*/
typedef struct scanbotsdk_barcode_format_japan_post_configuration_t scanbotsdk_barcode_format_japan_post_configuration_t;

/**
 * @brief Creates a new instance of scanbotsdk_barcode_format_japan_post_configuration with given params and stores it in the location specified by the last argument.
 * @ingroup c_barcode
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param regex_filter: Regular expression filter for barcode text. If the barcode text does not match the regular expression, it will not be scanned. The default is an empty string (setting is turned off).
 * 
 * Default is ""
 * The value must not be null.
 * @param minimum_size_score: Minimum acceptable value of a result BarcodeItem's sizeScore (between 0 and 1). 
 * Barcodes with a sizeScore less than this value will not be scanned. 
 * When set to 0, barcodes are returned no matter what their size is.
 * 
 * Default is 0
 * @param add_additional_quiet_zone: If true, we process the barcode scanning with an artificial quiet zone that we add to the input image. 
 * This flag should be used to scan sharp crops of a barcode in single-shot mode.
 * 
 * Default is false
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_barcode_format_japan_post_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_japan_post_configuration_create(
    const char* regex_filter,
    double minimum_size_score,
    bool add_additional_quiet_zone,
    scanbotsdk_barcode_format_japan_post_configuration_t** result);

/**
 * @brief Creates a new instance of scanbotsdk_barcode_format_japan_post_configuration_t with given required params and stores it in the location specified by the last argument.
 * @ingroup c_barcode
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_barcode_format_japan_post_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_japan_post_configuration_create_with_defaults(
    scanbotsdk_barcode_format_japan_post_configuration_t** result);


/**
 * @brief Frees the memory allocated for the instance of scanbotsdk_barcode_format_japan_post_configuration_t. If null is passed, the function does nothing.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_japan_post_configuration_t to be freed
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_japan_post_configuration_free(scanbotsdk_barcode_format_japan_post_configuration_t* object);

/**
 * @brief Checks if the given instance of scanbotsdk_barcode_format_configuration_base_t is an instance of its subtype scanbotsdk_barcode_format_japan_post_configuration_t.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_configuration_base_t to be checked
 * @param result: Pointer to a variable that will store the result of the check
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
 */
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_configuration_base_is_scanbotsdk_barcode_format_japan_post_configuration(scanbotsdk_barcode_format_configuration_base_t* object, bool* result);
/**
 * @brief Casts the given instance of scanbotsdk_barcode_format_configuration_base_t to its subtype scanbotsdk_barcode_format_japan_post_configuration_t. If the given instance is not an instance of the subtype, result will be null.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_configuration_base_t to be casted
 * @param result: Pointer to a variable that will store the casted instance of scanbotsdk_barcode_format_japan_post_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_configuration_base_as_scanbotsdk_barcode_format_japan_post_configuration(scanbotsdk_barcode_format_configuration_base_t* object, scanbotsdk_barcode_format_japan_post_configuration_t** result);
/**
 * @brief Casts the given instance of scanbotsdk_barcode_format_japan_post_configuration_t to its parent type scanbotsdk_barcode_format_configuration_base_t.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_configuration_base_t to be casted
 * @param result: Pointer to a variable that will store the casted instance of scanbotsdk_barcode_format_japan_post_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_japan_post_configuration_as_scanbotsdk_barcode_format_configuration_base(scanbotsdk_barcode_format_japan_post_configuration_t* object, scanbotsdk_barcode_format_configuration_base_t** result);

/**
 * @brief Checks if the given instance of scanbotsdk_barcode_format_four_state_configuration_base_t is an instance of its subtype scanbotsdk_barcode_format_japan_post_configuration_t.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_four_state_configuration_base_t to be checked
 * @param result: Pointer to a variable that will store the result of the check
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
 */
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_four_state_configuration_base_is_scanbotsdk_barcode_format_japan_post_configuration(scanbotsdk_barcode_format_four_state_configuration_base_t* object, bool* result);
/**
 * @brief Casts the given instance of scanbotsdk_barcode_format_four_state_configuration_base_t to its subtype scanbotsdk_barcode_format_japan_post_configuration_t. If the given instance is not an instance of the subtype, result will be null.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_four_state_configuration_base_t to be casted
 * @param result: Pointer to a variable that will store the casted instance of scanbotsdk_barcode_format_japan_post_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_four_state_configuration_base_as_scanbotsdk_barcode_format_japan_post_configuration(scanbotsdk_barcode_format_four_state_configuration_base_t* object, scanbotsdk_barcode_format_japan_post_configuration_t** result);
/**
 * @brief Casts the given instance of scanbotsdk_barcode_format_japan_post_configuration_t to its parent type scanbotsdk_barcode_format_four_state_configuration_base_t.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_four_state_configuration_base_t to be casted
 * @param result: Pointer to a variable that will store the casted instance of scanbotsdk_barcode_format_japan_post_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_japan_post_configuration_as_scanbotsdk_barcode_format_four_state_configuration_base(scanbotsdk_barcode_format_japan_post_configuration_t* object, scanbotsdk_barcode_format_four_state_configuration_base_t** result);


/**
 * @brief scanbotsdk_barcode_format_royal_mail_configuration_t class
 * @details Royal Mail barcode configuration. Add to scanner configuration to scan Royal Mail (a.k.a. RM4SCC, CBC, BPO 4-State) barcodes.
 * @ingroup c_barcode
*/
typedef struct scanbotsdk_barcode_format_royal_mail_configuration_t scanbotsdk_barcode_format_royal_mail_configuration_t;

/**
 * @brief Creates a new instance of scanbotsdk_barcode_format_royal_mail_configuration with given params and stores it in the location specified by the last argument.
 * @ingroup c_barcode
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param regex_filter: Regular expression filter for barcode text. If the barcode text does not match the regular expression, it will not be scanned. The default is an empty string (setting is turned off).
 * 
 * Default is ""
 * The value must not be null.
 * @param minimum_size_score: Minimum acceptable value of a result BarcodeItem's sizeScore (between 0 and 1). 
 * Barcodes with a sizeScore less than this value will not be scanned. 
 * When set to 0, barcodes are returned no matter what their size is.
 * 
 * Default is 0
 * @param add_additional_quiet_zone: If true, we process the barcode scanning with an artificial quiet zone that we add to the input image. 
 * This flag should be used to scan sharp crops of a barcode in single-shot mode.
 * 
 * Default is false
 * @param strip_check_digits: If true, the check digits are stripped from the result.
 * 
 * Default is false
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_barcode_format_royal_mail_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_royal_mail_configuration_create(
    const char* regex_filter,
    double minimum_size_score,
    bool add_additional_quiet_zone,
    bool strip_check_digits,
    scanbotsdk_barcode_format_royal_mail_configuration_t** result);

/**
 * @brief Creates a new instance of scanbotsdk_barcode_format_royal_mail_configuration_t with given required params and stores it in the location specified by the last argument.
 * @ingroup c_barcode
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_barcode_format_royal_mail_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_royal_mail_configuration_create_with_defaults(
    scanbotsdk_barcode_format_royal_mail_configuration_t** result);


/**
 * @brief Frees the memory allocated for the instance of scanbotsdk_barcode_format_royal_mail_configuration_t. If null is passed, the function does nothing.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_royal_mail_configuration_t to be freed
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_royal_mail_configuration_free(scanbotsdk_barcode_format_royal_mail_configuration_t* object);

/**
 * @brief Checks if the given instance of scanbotsdk_barcode_format_configuration_base_t is an instance of its subtype scanbotsdk_barcode_format_royal_mail_configuration_t.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_configuration_base_t to be checked
 * @param result: Pointer to a variable that will store the result of the check
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
 */
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_configuration_base_is_scanbotsdk_barcode_format_royal_mail_configuration(scanbotsdk_barcode_format_configuration_base_t* object, bool* result);
/**
 * @brief Casts the given instance of scanbotsdk_barcode_format_configuration_base_t to its subtype scanbotsdk_barcode_format_royal_mail_configuration_t. If the given instance is not an instance of the subtype, result will be null.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_configuration_base_t to be casted
 * @param result: Pointer to a variable that will store the casted instance of scanbotsdk_barcode_format_royal_mail_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_configuration_base_as_scanbotsdk_barcode_format_royal_mail_configuration(scanbotsdk_barcode_format_configuration_base_t* object, scanbotsdk_barcode_format_royal_mail_configuration_t** result);
/**
 * @brief Casts the given instance of scanbotsdk_barcode_format_royal_mail_configuration_t to its parent type scanbotsdk_barcode_format_configuration_base_t.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_configuration_base_t to be casted
 * @param result: Pointer to a variable that will store the casted instance of scanbotsdk_barcode_format_royal_mail_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_royal_mail_configuration_as_scanbotsdk_barcode_format_configuration_base(scanbotsdk_barcode_format_royal_mail_configuration_t* object, scanbotsdk_barcode_format_configuration_base_t** result);

/**
 * @brief Checks if the given instance of scanbotsdk_barcode_format_four_state_configuration_base_t is an instance of its subtype scanbotsdk_barcode_format_royal_mail_configuration_t.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_four_state_configuration_base_t to be checked
 * @param result: Pointer to a variable that will store the result of the check
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
 */
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_four_state_configuration_base_is_scanbotsdk_barcode_format_royal_mail_configuration(scanbotsdk_barcode_format_four_state_configuration_base_t* object, bool* result);
/**
 * @brief Casts the given instance of scanbotsdk_barcode_format_four_state_configuration_base_t to its subtype scanbotsdk_barcode_format_royal_mail_configuration_t. If the given instance is not an instance of the subtype, result will be null.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_four_state_configuration_base_t to be casted
 * @param result: Pointer to a variable that will store the casted instance of scanbotsdk_barcode_format_royal_mail_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_four_state_configuration_base_as_scanbotsdk_barcode_format_royal_mail_configuration(scanbotsdk_barcode_format_four_state_configuration_base_t* object, scanbotsdk_barcode_format_royal_mail_configuration_t** result);
/**
 * @brief Casts the given instance of scanbotsdk_barcode_format_royal_mail_configuration_t to its parent type scanbotsdk_barcode_format_four_state_configuration_base_t.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_four_state_configuration_base_t to be casted
 * @param result: Pointer to a variable that will store the casted instance of scanbotsdk_barcode_format_royal_mail_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_royal_mail_configuration_as_scanbotsdk_barcode_format_four_state_configuration_base(scanbotsdk_barcode_format_royal_mail_configuration_t* object, scanbotsdk_barcode_format_four_state_configuration_base_t** result);

/**
 * @brief Returns value of strip_check_digits field of the given object.
 * @ingroup c_barcode
 * @details If true, the check digits are stripped from the result.
 * 
 * Default is false
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_royal_mail_configuration_t
 * @param strip_check_digits: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_royal_mail_configuration_get_strip_check_digits(scanbotsdk_barcode_format_royal_mail_configuration_t* self, bool* strip_check_digits);
/**
 * @brief Sets value of strip_check_digits field of the given object.
 * @ingroup c_barcode
 * @details If true, the check digits are stripped from the result.
 * 
 * Default is false
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_royal_mail_configuration_t, the field of which will be set
 * @param strip_check_digits: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_royal_mail_configuration_set_strip_check_digits(scanbotsdk_barcode_format_royal_mail_configuration_t* self, bool strip_check_digits);


/**
 * @brief scanbotsdk_barcode_format_royal_tnt_post_configuration_t class
 * @details Royal TNT Post barcode configuration. Add to scanner configuration to scan Royal TNT Post (a.k.a. KIX, Klant IndeX) barcodes.
 * @ingroup c_barcode
*/
typedef struct scanbotsdk_barcode_format_royal_tnt_post_configuration_t scanbotsdk_barcode_format_royal_tnt_post_configuration_t;

/**
 * @brief Creates a new instance of scanbotsdk_barcode_format_royal_tnt_post_configuration with given params and stores it in the location specified by the last argument.
 * @ingroup c_barcode
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param regex_filter: Regular expression filter for barcode text. If the barcode text does not match the regular expression, it will not be scanned. The default is an empty string (setting is turned off).
 * 
 * Default is ""
 * The value must not be null.
 * @param minimum_size_score: Minimum acceptable value of a result BarcodeItem's sizeScore (between 0 and 1). 
 * Barcodes with a sizeScore less than this value will not be scanned. 
 * When set to 0, barcodes are returned no matter what their size is.
 * 
 * Default is 0
 * @param add_additional_quiet_zone: If true, we process the barcode scanning with an artificial quiet zone that we add to the input image. 
 * This flag should be used to scan sharp crops of a barcode in single-shot mode.
 * 
 * Default is false
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_barcode_format_royal_tnt_post_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_royal_tnt_post_configuration_create(
    const char* regex_filter,
    double minimum_size_score,
    bool add_additional_quiet_zone,
    scanbotsdk_barcode_format_royal_tnt_post_configuration_t** result);

/**
 * @brief Creates a new instance of scanbotsdk_barcode_format_royal_tnt_post_configuration_t with given required params and stores it in the location specified by the last argument.
 * @ingroup c_barcode
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_barcode_format_royal_tnt_post_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_royal_tnt_post_configuration_create_with_defaults(
    scanbotsdk_barcode_format_royal_tnt_post_configuration_t** result);


/**
 * @brief Frees the memory allocated for the instance of scanbotsdk_barcode_format_royal_tnt_post_configuration_t. If null is passed, the function does nothing.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_royal_tnt_post_configuration_t to be freed
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_royal_tnt_post_configuration_free(scanbotsdk_barcode_format_royal_tnt_post_configuration_t* object);

/**
 * @brief Checks if the given instance of scanbotsdk_barcode_format_configuration_base_t is an instance of its subtype scanbotsdk_barcode_format_royal_tnt_post_configuration_t.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_configuration_base_t to be checked
 * @param result: Pointer to a variable that will store the result of the check
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
 */
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_configuration_base_is_scanbotsdk_barcode_format_royal_tnt_post_configuration(scanbotsdk_barcode_format_configuration_base_t* object, bool* result);
/**
 * @brief Casts the given instance of scanbotsdk_barcode_format_configuration_base_t to its subtype scanbotsdk_barcode_format_royal_tnt_post_configuration_t. If the given instance is not an instance of the subtype, result will be null.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_configuration_base_t to be casted
 * @param result: Pointer to a variable that will store the casted instance of scanbotsdk_barcode_format_royal_tnt_post_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_configuration_base_as_scanbotsdk_barcode_format_royal_tnt_post_configuration(scanbotsdk_barcode_format_configuration_base_t* object, scanbotsdk_barcode_format_royal_tnt_post_configuration_t** result);
/**
 * @brief Casts the given instance of scanbotsdk_barcode_format_royal_tnt_post_configuration_t to its parent type scanbotsdk_barcode_format_configuration_base_t.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_configuration_base_t to be casted
 * @param result: Pointer to a variable that will store the casted instance of scanbotsdk_barcode_format_royal_tnt_post_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_royal_tnt_post_configuration_as_scanbotsdk_barcode_format_configuration_base(scanbotsdk_barcode_format_royal_tnt_post_configuration_t* object, scanbotsdk_barcode_format_configuration_base_t** result);

/**
 * @brief Checks if the given instance of scanbotsdk_barcode_format_four_state_configuration_base_t is an instance of its subtype scanbotsdk_barcode_format_royal_tnt_post_configuration_t.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_four_state_configuration_base_t to be checked
 * @param result: Pointer to a variable that will store the result of the check
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
 */
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_four_state_configuration_base_is_scanbotsdk_barcode_format_royal_tnt_post_configuration(scanbotsdk_barcode_format_four_state_configuration_base_t* object, bool* result);
/**
 * @brief Casts the given instance of scanbotsdk_barcode_format_four_state_configuration_base_t to its subtype scanbotsdk_barcode_format_royal_tnt_post_configuration_t. If the given instance is not an instance of the subtype, result will be null.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_four_state_configuration_base_t to be casted
 * @param result: Pointer to a variable that will store the casted instance of scanbotsdk_barcode_format_royal_tnt_post_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_four_state_configuration_base_as_scanbotsdk_barcode_format_royal_tnt_post_configuration(scanbotsdk_barcode_format_four_state_configuration_base_t* object, scanbotsdk_barcode_format_royal_tnt_post_configuration_t** result);
/**
 * @brief Casts the given instance of scanbotsdk_barcode_format_royal_tnt_post_configuration_t to its parent type scanbotsdk_barcode_format_four_state_configuration_base_t.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_four_state_configuration_base_t to be casted
 * @param result: Pointer to a variable that will store the casted instance of scanbotsdk_barcode_format_royal_tnt_post_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_royal_tnt_post_configuration_as_scanbotsdk_barcode_format_four_state_configuration_base(scanbotsdk_barcode_format_royal_tnt_post_configuration_t* object, scanbotsdk_barcode_format_four_state_configuration_base_t** result);


/**
 * @brief scanbotsdk_barcode_format_usps_intelligent_mail_configuration_t class
 * @details USPS Intelligent Mail barcode configuration. Add to scanner configuration to scan USPS Intelligent Mail (a.k.a. USPS OneCode, USPS-STD-11) barcodes.
 * @ingroup c_barcode
*/
typedef struct scanbotsdk_barcode_format_usps_intelligent_mail_configuration_t scanbotsdk_barcode_format_usps_intelligent_mail_configuration_t;

/**
 * @brief Creates a new instance of scanbotsdk_barcode_format_usps_intelligent_mail_configuration with given params and stores it in the location specified by the last argument.
 * @ingroup c_barcode
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param regex_filter: Regular expression filter for barcode text. If the barcode text does not match the regular expression, it will not be scanned. The default is an empty string (setting is turned off).
 * 
 * Default is ""
 * The value must not be null.
 * @param minimum_size_score: Minimum acceptable value of a result BarcodeItem's sizeScore (between 0 and 1). 
 * Barcodes with a sizeScore less than this value will not be scanned. 
 * When set to 0, barcodes are returned no matter what their size is.
 * 
 * Default is 0
 * @param add_additional_quiet_zone: If true, we process the barcode scanning with an artificial quiet zone that we add to the input image. 
 * This flag should be used to scan sharp crops of a barcode in single-shot mode.
 * 
 * Default is false
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_barcode_format_usps_intelligent_mail_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_usps_intelligent_mail_configuration_create(
    const char* regex_filter,
    double minimum_size_score,
    bool add_additional_quiet_zone,
    scanbotsdk_barcode_format_usps_intelligent_mail_configuration_t** result);

/**
 * @brief Creates a new instance of scanbotsdk_barcode_format_usps_intelligent_mail_configuration_t with given required params and stores it in the location specified by the last argument.
 * @ingroup c_barcode
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_barcode_format_usps_intelligent_mail_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_usps_intelligent_mail_configuration_create_with_defaults(
    scanbotsdk_barcode_format_usps_intelligent_mail_configuration_t** result);


/**
 * @brief Frees the memory allocated for the instance of scanbotsdk_barcode_format_usps_intelligent_mail_configuration_t. If null is passed, the function does nothing.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_usps_intelligent_mail_configuration_t to be freed
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_usps_intelligent_mail_configuration_free(scanbotsdk_barcode_format_usps_intelligent_mail_configuration_t* object);

/**
 * @brief Checks if the given instance of scanbotsdk_barcode_format_configuration_base_t is an instance of its subtype scanbotsdk_barcode_format_usps_intelligent_mail_configuration_t.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_configuration_base_t to be checked
 * @param result: Pointer to a variable that will store the result of the check
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
 */
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_configuration_base_is_scanbotsdk_barcode_format_usps_intelligent_mail_configuration(scanbotsdk_barcode_format_configuration_base_t* object, bool* result);
/**
 * @brief Casts the given instance of scanbotsdk_barcode_format_configuration_base_t to its subtype scanbotsdk_barcode_format_usps_intelligent_mail_configuration_t. If the given instance is not an instance of the subtype, result will be null.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_configuration_base_t to be casted
 * @param result: Pointer to a variable that will store the casted instance of scanbotsdk_barcode_format_usps_intelligent_mail_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_configuration_base_as_scanbotsdk_barcode_format_usps_intelligent_mail_configuration(scanbotsdk_barcode_format_configuration_base_t* object, scanbotsdk_barcode_format_usps_intelligent_mail_configuration_t** result);
/**
 * @brief Casts the given instance of scanbotsdk_barcode_format_usps_intelligent_mail_configuration_t to its parent type scanbotsdk_barcode_format_configuration_base_t.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_configuration_base_t to be casted
 * @param result: Pointer to a variable that will store the casted instance of scanbotsdk_barcode_format_usps_intelligent_mail_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_usps_intelligent_mail_configuration_as_scanbotsdk_barcode_format_configuration_base(scanbotsdk_barcode_format_usps_intelligent_mail_configuration_t* object, scanbotsdk_barcode_format_configuration_base_t** result);

/**
 * @brief Checks if the given instance of scanbotsdk_barcode_format_four_state_configuration_base_t is an instance of its subtype scanbotsdk_barcode_format_usps_intelligent_mail_configuration_t.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_four_state_configuration_base_t to be checked
 * @param result: Pointer to a variable that will store the result of the check
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
 */
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_four_state_configuration_base_is_scanbotsdk_barcode_format_usps_intelligent_mail_configuration(scanbotsdk_barcode_format_four_state_configuration_base_t* object, bool* result);
/**
 * @brief Casts the given instance of scanbotsdk_barcode_format_four_state_configuration_base_t to its subtype scanbotsdk_barcode_format_usps_intelligent_mail_configuration_t. If the given instance is not an instance of the subtype, result will be null.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_four_state_configuration_base_t to be casted
 * @param result: Pointer to a variable that will store the casted instance of scanbotsdk_barcode_format_usps_intelligent_mail_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_four_state_configuration_base_as_scanbotsdk_barcode_format_usps_intelligent_mail_configuration(scanbotsdk_barcode_format_four_state_configuration_base_t* object, scanbotsdk_barcode_format_usps_intelligent_mail_configuration_t** result);
/**
 * @brief Casts the given instance of scanbotsdk_barcode_format_usps_intelligent_mail_configuration_t to its parent type scanbotsdk_barcode_format_four_state_configuration_base_t.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_four_state_configuration_base_t to be casted
 * @param result: Pointer to a variable that will store the casted instance of scanbotsdk_barcode_format_usps_intelligent_mail_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_usps_intelligent_mail_configuration_as_scanbotsdk_barcode_format_four_state_configuration_base(scanbotsdk_barcode_format_usps_intelligent_mail_configuration_t* object, scanbotsdk_barcode_format_four_state_configuration_base_t** result);


/**
 * @brief scanbotsdk_barcode_format_pharma_code_two_track_configuration_t class
 * @details PHARMA_CODE_TWO_TRACK barcode configuration. Add to scanner configuration to scan Laetus two-track PharmaCode barcodes. Linear (i.e. one-track) PharmaCode scanning is configured separately through the PharmaCodeConfig class.
 * @ingroup c_barcode
*/
typedef struct scanbotsdk_barcode_format_pharma_code_two_track_configuration_t scanbotsdk_barcode_format_pharma_code_two_track_configuration_t;

/**
 * @brief Creates a new instance of scanbotsdk_barcode_format_pharma_code_two_track_configuration with given params and stores it in the location specified by the last argument.
 * @ingroup c_barcode
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param regex_filter: Regular expression filter for barcode text. If the barcode text does not match the regular expression, it will not be scanned. The default is an empty string (setting is turned off).
 * 
 * Default is ""
 * The value must not be null.
 * @param minimum_size_score: Minimum acceptable value of a result BarcodeItem's sizeScore (between 0 and 1). 
 * Barcodes with a sizeScore less than this value will not be scanned. 
 * When set to 0, barcodes are returned no matter what their size is.
 * 
 * Default is 0
 * @param add_additional_quiet_zone: If true, we process the barcode scanning with an artificial quiet zone that we add to the input image. 
 * This flag should be used to scan sharp crops of a barcode in single-shot mode.
 * 
 * Default is false
 * @param minimum_value: Minimum value for PHARMA_CODE_TWO_TRACK. Very low values are likely to produce more false positives.
 * 
 * Default is 364
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_barcode_format_pharma_code_two_track_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_pharma_code_two_track_configuration_create(
    const char* regex_filter,
    double minimum_size_score,
    bool add_additional_quiet_zone,
    int minimum_value,
    scanbotsdk_barcode_format_pharma_code_two_track_configuration_t** result);

/**
 * @brief Creates a new instance of scanbotsdk_barcode_format_pharma_code_two_track_configuration_t with given required params and stores it in the location specified by the last argument.
 * @ingroup c_barcode
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_barcode_format_pharma_code_two_track_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_pharma_code_two_track_configuration_create_with_defaults(
    scanbotsdk_barcode_format_pharma_code_two_track_configuration_t** result);


/**
 * @brief Frees the memory allocated for the instance of scanbotsdk_barcode_format_pharma_code_two_track_configuration_t. If null is passed, the function does nothing.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_pharma_code_two_track_configuration_t to be freed
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_pharma_code_two_track_configuration_free(scanbotsdk_barcode_format_pharma_code_two_track_configuration_t* object);

/**
 * @brief Checks if the given instance of scanbotsdk_barcode_format_configuration_base_t is an instance of its subtype scanbotsdk_barcode_format_pharma_code_two_track_configuration_t.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_configuration_base_t to be checked
 * @param result: Pointer to a variable that will store the result of the check
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
 */
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_configuration_base_is_scanbotsdk_barcode_format_pharma_code_two_track_configuration(scanbotsdk_barcode_format_configuration_base_t* object, bool* result);
/**
 * @brief Casts the given instance of scanbotsdk_barcode_format_configuration_base_t to its subtype scanbotsdk_barcode_format_pharma_code_two_track_configuration_t. If the given instance is not an instance of the subtype, result will be null.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_configuration_base_t to be casted
 * @param result: Pointer to a variable that will store the casted instance of scanbotsdk_barcode_format_pharma_code_two_track_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_configuration_base_as_scanbotsdk_barcode_format_pharma_code_two_track_configuration(scanbotsdk_barcode_format_configuration_base_t* object, scanbotsdk_barcode_format_pharma_code_two_track_configuration_t** result);
/**
 * @brief Casts the given instance of scanbotsdk_barcode_format_pharma_code_two_track_configuration_t to its parent type scanbotsdk_barcode_format_configuration_base_t.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_configuration_base_t to be casted
 * @param result: Pointer to a variable that will store the casted instance of scanbotsdk_barcode_format_pharma_code_two_track_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_pharma_code_two_track_configuration_as_scanbotsdk_barcode_format_configuration_base(scanbotsdk_barcode_format_pharma_code_two_track_configuration_t* object, scanbotsdk_barcode_format_configuration_base_t** result);

/**
 * @brief Checks if the given instance of scanbotsdk_barcode_format_four_state_configuration_base_t is an instance of its subtype scanbotsdk_barcode_format_pharma_code_two_track_configuration_t.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_four_state_configuration_base_t to be checked
 * @param result: Pointer to a variable that will store the result of the check
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
 */
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_four_state_configuration_base_is_scanbotsdk_barcode_format_pharma_code_two_track_configuration(scanbotsdk_barcode_format_four_state_configuration_base_t* object, bool* result);
/**
 * @brief Casts the given instance of scanbotsdk_barcode_format_four_state_configuration_base_t to its subtype scanbotsdk_barcode_format_pharma_code_two_track_configuration_t. If the given instance is not an instance of the subtype, result will be null.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_four_state_configuration_base_t to be casted
 * @param result: Pointer to a variable that will store the casted instance of scanbotsdk_barcode_format_pharma_code_two_track_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_four_state_configuration_base_as_scanbotsdk_barcode_format_pharma_code_two_track_configuration(scanbotsdk_barcode_format_four_state_configuration_base_t* object, scanbotsdk_barcode_format_pharma_code_two_track_configuration_t** result);
/**
 * @brief Casts the given instance of scanbotsdk_barcode_format_pharma_code_two_track_configuration_t to its parent type scanbotsdk_barcode_format_four_state_configuration_base_t.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_four_state_configuration_base_t to be casted
 * @param result: Pointer to a variable that will store the casted instance of scanbotsdk_barcode_format_pharma_code_two_track_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_pharma_code_two_track_configuration_as_scanbotsdk_barcode_format_four_state_configuration_base(scanbotsdk_barcode_format_pharma_code_two_track_configuration_t* object, scanbotsdk_barcode_format_four_state_configuration_base_t** result);

/**
 * @brief Returns value of minimum_value field of the given object.
 * @ingroup c_barcode
 * @details Minimum value for PHARMA_CODE_TWO_TRACK. Very low values are likely to produce more false positives.
 * 
 * Default is 364
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_pharma_code_two_track_configuration_t
 * @param minimum_value: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_pharma_code_two_track_configuration_get_minimum_value(scanbotsdk_barcode_format_pharma_code_two_track_configuration_t* self, int* minimum_value);
/**
 * @brief Sets value of minimum_value field of the given object.
 * @ingroup c_barcode
 * @details Minimum value for PHARMA_CODE_TWO_TRACK. Very low values are likely to produce more false positives.
 * 
 * Default is 364
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_pharma_code_two_track_configuration_t, the field of which will be set
 * @param minimum_value: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_pharma_code_two_track_configuration_set_minimum_value(scanbotsdk_barcode_format_pharma_code_two_track_configuration_t* self, int minimum_value);


/**
 * @brief scanbotsdk_barcode_format_gs_1_composite_configuration_t class
 * @details GS1 Composite configuration. Add to scanner configuration to scan GS1 Composite barcodes.
 * 
 * When not enabled, the individual parts of GS1 Composite barcodes will be returned as separate items,
 * if the respective formats are enabled (UPC-A, Code 128, MicroPDF417, PDF417). 
 * Those barcode items will have their isGS1CompositePart field set to true.
 * If GS1 Composite scanning is enabled, the individual parts are never returned, even if their respective formats
 * are enabled, except when the linear component is a UPC or EAN barcode. In that case the linear component might still
 * occasionally be returned as a separate result. If this situation needs to be avoided, remove the UPC and EAN formats from
 * the enabled formats.
 * 
 * If GS1 Composite scanning is disabled, but GS1 message validation is enabled, then the parts of the composite barcode may
 * fail validation and be rejected.
 * @ingroup c_barcode
*/
typedef struct scanbotsdk_barcode_format_gs_1_composite_configuration_t scanbotsdk_barcode_format_gs_1_composite_configuration_t;

/**
 * @brief Creates a new instance of scanbotsdk_barcode_format_gs_1_composite_configuration with given params and stores it in the location specified by the last argument.
 * @ingroup c_barcode
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param regex_filter: Regular expression filter for barcode text. If the barcode text does not match the regular expression, it will not be scanned. The default is an empty string (setting is turned off).
 * 
 * Default is ""
 * The value must not be null.
 * @param minimum_size_score: Minimum acceptable value of a result BarcodeItem's sizeScore (between 0 and 1). 
 * Barcodes with a sizeScore less than this value will not be scanned. 
 * When set to 0, barcodes are returned no matter what their size is.
 * 
 * Default is 0
 * @param add_additional_quiet_zone: If true, we process the barcode scanning with an artificial quiet zone that we add to the input image. 
 * This flag should be used to scan sharp crops of a barcode in single-shot mode.
 * 
 * Default is false
 * @param minimum_1_d_quiet_zone_size: Minimum quiet zone size on the left and right sides of a 1D barcode, measured in number of modules.
 * The quiet zone is only for 1D barcodes with weak start/stop patterns, i.e. Iata2Of5, Industrial2Of5, Code25, Itf, Codabar, MsiPlessey and Code11.
 * 
 * Default is 6
 * @param gs_1_handling: GS1 message handling options.
 * 
 * Default is PARSE
 * @param strict_mode: If true, the barcode scanner will only return barcodes that pass the strict validation checks according to standards to avoid false positives.
 * 
 * Default is true
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_barcode_format_gs_1_composite_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_gs_1_composite_configuration_create(
    const char* regex_filter,
    double minimum_size_score,
    bool add_additional_quiet_zone,
    int minimum_1_d_quiet_zone_size,
    scanbotsdk_gs_1_handling_t gs_1_handling,
    bool strict_mode,
    scanbotsdk_barcode_format_gs_1_composite_configuration_t** result);

/**
 * @brief Creates a new instance of scanbotsdk_barcode_format_gs_1_composite_configuration_t with given required params and stores it in the location specified by the last argument.
 * @ingroup c_barcode
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_barcode_format_gs_1_composite_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_gs_1_composite_configuration_create_with_defaults(
    scanbotsdk_barcode_format_gs_1_composite_configuration_t** result);


/**
 * @brief Frees the memory allocated for the instance of scanbotsdk_barcode_format_gs_1_composite_configuration_t. If null is passed, the function does nothing.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_gs_1_composite_configuration_t to be freed
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_gs_1_composite_configuration_free(scanbotsdk_barcode_format_gs_1_composite_configuration_t* object);

/**
 * @brief Checks if the given instance of scanbotsdk_barcode_format_configuration_base_t is an instance of its subtype scanbotsdk_barcode_format_gs_1_composite_configuration_t.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_configuration_base_t to be checked
 * @param result: Pointer to a variable that will store the result of the check
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
 */
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_configuration_base_is_scanbotsdk_barcode_format_gs_1_composite_configuration(scanbotsdk_barcode_format_configuration_base_t* object, bool* result);
/**
 * @brief Casts the given instance of scanbotsdk_barcode_format_configuration_base_t to its subtype scanbotsdk_barcode_format_gs_1_composite_configuration_t. If the given instance is not an instance of the subtype, result will be null.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_configuration_base_t to be casted
 * @param result: Pointer to a variable that will store the casted instance of scanbotsdk_barcode_format_gs_1_composite_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_configuration_base_as_scanbotsdk_barcode_format_gs_1_composite_configuration(scanbotsdk_barcode_format_configuration_base_t* object, scanbotsdk_barcode_format_gs_1_composite_configuration_t** result);
/**
 * @brief Casts the given instance of scanbotsdk_barcode_format_gs_1_composite_configuration_t to its parent type scanbotsdk_barcode_format_configuration_base_t.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_configuration_base_t to be casted
 * @param result: Pointer to a variable that will store the casted instance of scanbotsdk_barcode_format_gs_1_composite_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_gs_1_composite_configuration_as_scanbotsdk_barcode_format_configuration_base(scanbotsdk_barcode_format_gs_1_composite_configuration_t* object, scanbotsdk_barcode_format_configuration_base_t** result);

/**
 * @brief Returns value of minimum_1_d_quiet_zone_size field of the given object.
 * @ingroup c_barcode
 * @details Minimum quiet zone size on the left and right sides of a 1D barcode, measured in number of modules.
 * The quiet zone is only for 1D barcodes with weak start/stop patterns, i.e. Iata2Of5, Industrial2Of5, Code25, Itf, Codabar, MsiPlessey and Code11.
 * 
 * Default is 6
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_gs_1_composite_configuration_t
 * @param minimum_1_d_quiet_zone_size: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_gs_1_composite_configuration_get_minimum_1_d_quiet_zone_size(scanbotsdk_barcode_format_gs_1_composite_configuration_t* self, int* minimum_1_d_quiet_zone_size);
/**
 * @brief Sets value of minimum_1_d_quiet_zone_size field of the given object.
 * @ingroup c_barcode
 * @details Minimum quiet zone size on the left and right sides of a 1D barcode, measured in number of modules.
 * The quiet zone is only for 1D barcodes with weak start/stop patterns, i.e. Iata2Of5, Industrial2Of5, Code25, Itf, Codabar, MsiPlessey and Code11.
 * 
 * Default is 6
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_gs_1_composite_configuration_t, the field of which will be set
 * @param minimum_1_d_quiet_zone_size: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_gs_1_composite_configuration_set_minimum_1_d_quiet_zone_size(scanbotsdk_barcode_format_gs_1_composite_configuration_t* self, int minimum_1_d_quiet_zone_size);

/**
 * @brief Returns value of gs_1_handling field of the given object.
 * @ingroup c_barcode
 * @details GS1 message handling options.
 * 
 * Default is PARSE
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_gs_1_composite_configuration_t
 * @param gs_1_handling: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_gs_1_composite_configuration_get_gs_1_handling(scanbotsdk_barcode_format_gs_1_composite_configuration_t* self, scanbotsdk_gs_1_handling_t* gs_1_handling);
/**
 * @brief Sets value of gs_1_handling field of the given object.
 * @ingroup c_barcode
 * @details GS1 message handling options.
 * 
 * Default is PARSE
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_gs_1_composite_configuration_t, the field of which will be set
 * @param gs_1_handling: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_gs_1_composite_configuration_set_gs_1_handling(scanbotsdk_barcode_format_gs_1_composite_configuration_t* self, scanbotsdk_gs_1_handling_t gs_1_handling);

/**
 * @brief Returns value of strict_mode field of the given object.
 * @ingroup c_barcode
 * @details If true, the barcode scanner will only return barcodes that pass the strict validation checks according to standards to avoid false positives.
 * 
 * Default is true
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_gs_1_composite_configuration_t
 * @param strict_mode: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_gs_1_composite_configuration_get_strict_mode(scanbotsdk_barcode_format_gs_1_composite_configuration_t* self, bool* strict_mode);
/**
 * @brief Sets value of strict_mode field of the given object.
 * @ingroup c_barcode
 * @details If true, the barcode scanner will only return barcodes that pass the strict validation checks according to standards to avoid false positives.
 * 
 * Default is true
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_gs_1_composite_configuration_t, the field of which will be set
 * @param strict_mode: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_gs_1_composite_configuration_set_strict_mode(scanbotsdk_barcode_format_gs_1_composite_configuration_t* self, bool strict_mode);


/**
 * @brief scanbotsdk_barcode_format_common_one_d_configuration_t class
 * @details Convenience configuration for enabling the scanning of multiple linear (1D) barcode formats with a common configuration.
 * Add to scanner configuration to enable and configure the scanning of multiple linear (1D) barcode formats.
 * 
 * The given configuration will be applied to all enabled barcode formats, if they support it.
 * You can override the common configuration for individual barcode formats by additionally adding
 * their specific configuration to the scanner's configuration.
 * @ingroup c_barcode
*/
typedef struct scanbotsdk_barcode_format_common_one_d_configuration_t scanbotsdk_barcode_format_common_one_d_configuration_t;

/**
 * @brief Creates a new instance of scanbotsdk_barcode_format_common_one_d_configuration with given params and stores it in the location specified by the last argument.
 * @ingroup c_barcode
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param regex_filter: Regular expression filter for barcode text. If the barcode text does not match the regular expression, it will not be scanned. The default is an empty string (setting is turned off).
 * 
 * Default is ""
 * The value must not be null.
 * @param minimum_size_score: Minimum acceptable value of a result BarcodeItem's sizeScore (between 0 and 1). 
 * Barcodes with a sizeScore less than this value will not be scanned. 
 * When set to 0, barcodes are returned no matter what their size is.
 * 
 * Default is 0
 * @param add_additional_quiet_zone: If true, we process the barcode scanning with an artificial quiet zone that we add to the input image. 
 * This flag should be used to scan sharp crops of a barcode in single-shot mode.
 * 
 * Default is false
 * @param minimum_1_d_quiet_zone_size: Minimum quiet zone size on the left and right sides of a 1D barcode, measured in number of modules.
 * The quiet zone is only for 1D barcodes with weak start/stop patterns, i.e. Iata2Of5, Industrial2Of5, Code25, Itf, Codabar, MsiPlessey and Code11.
 * 
 * Default is 6
 * @param minimum_1_d_confirmation_count: In case of live scanning, we require confirmations across frames to consider the one-d barcode as valid.
 * 
 * Default is 1
 * @param strip_check_digits: If true, the check digits are stripped from the result.
 * 
 * Default is false
 * @param minimum_text_length: Minimum text length. Applied only to linear barcode formats that allow variable length.
 * 
 * Default is 1
 * @param maximum_text_length: Maximum text length. 0 implies no maximum. Applied only to linear barcode formats that allow variable length.
 * 
 * Default is 0
 * @param gs_1_handling: GS1 message handling options.
 * 
 * Default is PARSE
 * @param enable_one_d_blur_scanner: If true, barcodes with heavy blur or from far distance are tried to scan.
 * 
 * Default is true
 * @param formats: List of linear (1D) barcode formats to scan.
 * @param formats_size: Size of the array formats
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_barcode_format_common_one_d_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_common_one_d_configuration_create(
    const char* regex_filter,
    double minimum_size_score,
    bool add_additional_quiet_zone,
    int minimum_1_d_quiet_zone_size,
    int minimum_1_d_confirmation_count,
    bool strip_check_digits,
    int minimum_text_length,
    int maximum_text_length,
    scanbotsdk_gs_1_handling_t gs_1_handling,
    bool enable_one_d_blur_scanner,
    scanbotsdk_barcode_format_t* formats,
    size_t formats_size,
    scanbotsdk_barcode_format_common_one_d_configuration_t** result);

/**
 * @brief Creates a new instance of scanbotsdk_barcode_format_common_one_d_configuration_t with given required params and stores it in the location specified by the last argument.
 * @ingroup c_barcode
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_barcode_format_common_one_d_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_common_one_d_configuration_create_with_defaults(
    scanbotsdk_barcode_format_common_one_d_configuration_t** result);


/**
 * @brief Frees the memory allocated for the instance of scanbotsdk_barcode_format_common_one_d_configuration_t. If null is passed, the function does nothing.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_common_one_d_configuration_t to be freed
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_common_one_d_configuration_free(scanbotsdk_barcode_format_common_one_d_configuration_t* object);

/**
 * @brief Checks if the given instance of scanbotsdk_barcode_format_configuration_base_t is an instance of its subtype scanbotsdk_barcode_format_common_one_d_configuration_t.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_configuration_base_t to be checked
 * @param result: Pointer to a variable that will store the result of the check
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
 */
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_configuration_base_is_scanbotsdk_barcode_format_common_one_d_configuration(scanbotsdk_barcode_format_configuration_base_t* object, bool* result);
/**
 * @brief Casts the given instance of scanbotsdk_barcode_format_configuration_base_t to its subtype scanbotsdk_barcode_format_common_one_d_configuration_t. If the given instance is not an instance of the subtype, result will be null.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_configuration_base_t to be casted
 * @param result: Pointer to a variable that will store the casted instance of scanbotsdk_barcode_format_common_one_d_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_configuration_base_as_scanbotsdk_barcode_format_common_one_d_configuration(scanbotsdk_barcode_format_configuration_base_t* object, scanbotsdk_barcode_format_common_one_d_configuration_t** result);
/**
 * @brief Casts the given instance of scanbotsdk_barcode_format_common_one_d_configuration_t to its parent type scanbotsdk_barcode_format_configuration_base_t.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_configuration_base_t to be casted
 * @param result: Pointer to a variable that will store the casted instance of scanbotsdk_barcode_format_common_one_d_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_common_one_d_configuration_as_scanbotsdk_barcode_format_configuration_base(scanbotsdk_barcode_format_common_one_d_configuration_t* object, scanbotsdk_barcode_format_configuration_base_t** result);

/**
 * @brief Returns value of minimum_1_d_quiet_zone_size field of the given object.
 * @ingroup c_barcode
 * @details Minimum quiet zone size on the left and right sides of a 1D barcode, measured in number of modules.
 * The quiet zone is only for 1D barcodes with weak start/stop patterns, i.e. Iata2Of5, Industrial2Of5, Code25, Itf, Codabar, MsiPlessey and Code11.
 * 
 * Default is 6
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_common_one_d_configuration_t
 * @param minimum_1_d_quiet_zone_size: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_common_one_d_configuration_get_minimum_1_d_quiet_zone_size(scanbotsdk_barcode_format_common_one_d_configuration_t* self, int* minimum_1_d_quiet_zone_size);
/**
 * @brief Sets value of minimum_1_d_quiet_zone_size field of the given object.
 * @ingroup c_barcode
 * @details Minimum quiet zone size on the left and right sides of a 1D barcode, measured in number of modules.
 * The quiet zone is only for 1D barcodes with weak start/stop patterns, i.e. Iata2Of5, Industrial2Of5, Code25, Itf, Codabar, MsiPlessey and Code11.
 * 
 * Default is 6
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_common_one_d_configuration_t, the field of which will be set
 * @param minimum_1_d_quiet_zone_size: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_common_one_d_configuration_set_minimum_1_d_quiet_zone_size(scanbotsdk_barcode_format_common_one_d_configuration_t* self, int minimum_1_d_quiet_zone_size);

/**
 * @brief Returns value of minimum_1_d_confirmation_count field of the given object.
 * @ingroup c_barcode
 * @details In case of live scanning, we require confirmations across frames to consider the one-d barcode as valid.
 * 
 * Default is 1
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_common_one_d_configuration_t
 * @param minimum_1_d_confirmation_count: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_common_one_d_configuration_get_minimum_1_d_confirmation_count(scanbotsdk_barcode_format_common_one_d_configuration_t* self, int* minimum_1_d_confirmation_count);
/**
 * @brief Sets value of minimum_1_d_confirmation_count field of the given object.
 * @ingroup c_barcode
 * @details In case of live scanning, we require confirmations across frames to consider the one-d barcode as valid.
 * 
 * Default is 1
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_common_one_d_configuration_t, the field of which will be set
 * @param minimum_1_d_confirmation_count: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_common_one_d_configuration_set_minimum_1_d_confirmation_count(scanbotsdk_barcode_format_common_one_d_configuration_t* self, int minimum_1_d_confirmation_count);

/**
 * @brief Returns value of strip_check_digits field of the given object.
 * @ingroup c_barcode
 * @details If true, the check digits are stripped from the result.
 * 
 * Default is false
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_common_one_d_configuration_t
 * @param strip_check_digits: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_common_one_d_configuration_get_strip_check_digits(scanbotsdk_barcode_format_common_one_d_configuration_t* self, bool* strip_check_digits);
/**
 * @brief Sets value of strip_check_digits field of the given object.
 * @ingroup c_barcode
 * @details If true, the check digits are stripped from the result.
 * 
 * Default is false
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_common_one_d_configuration_t, the field of which will be set
 * @param strip_check_digits: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_common_one_d_configuration_set_strip_check_digits(scanbotsdk_barcode_format_common_one_d_configuration_t* self, bool strip_check_digits);

/**
 * @brief Returns value of minimum_text_length field of the given object.
 * @ingroup c_barcode
 * @details Minimum text length. Applied only to linear barcode formats that allow variable length.
 * 
 * Default is 1
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_common_one_d_configuration_t
 * @param minimum_text_length: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_common_one_d_configuration_get_minimum_text_length(scanbotsdk_barcode_format_common_one_d_configuration_t* self, int* minimum_text_length);
/**
 * @brief Sets value of minimum_text_length field of the given object.
 * @ingroup c_barcode
 * @details Minimum text length. Applied only to linear barcode formats that allow variable length.
 * 
 * Default is 1
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_common_one_d_configuration_t, the field of which will be set
 * @param minimum_text_length: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_common_one_d_configuration_set_minimum_text_length(scanbotsdk_barcode_format_common_one_d_configuration_t* self, int minimum_text_length);

/**
 * @brief Returns value of maximum_text_length field of the given object.
 * @ingroup c_barcode
 * @details Maximum text length. 0 implies no maximum. Applied only to linear barcode formats that allow variable length.
 * 
 * Default is 0
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_common_one_d_configuration_t
 * @param maximum_text_length: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_common_one_d_configuration_get_maximum_text_length(scanbotsdk_barcode_format_common_one_d_configuration_t* self, int* maximum_text_length);
/**
 * @brief Sets value of maximum_text_length field of the given object.
 * @ingroup c_barcode
 * @details Maximum text length. 0 implies no maximum. Applied only to linear barcode formats that allow variable length.
 * 
 * Default is 0
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_common_one_d_configuration_t, the field of which will be set
 * @param maximum_text_length: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_common_one_d_configuration_set_maximum_text_length(scanbotsdk_barcode_format_common_one_d_configuration_t* self, int maximum_text_length);

/**
 * @brief Returns value of gs_1_handling field of the given object.
 * @ingroup c_barcode
 * @details GS1 message handling options.
 * 
 * Default is PARSE
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_common_one_d_configuration_t
 * @param gs_1_handling: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_common_one_d_configuration_get_gs_1_handling(scanbotsdk_barcode_format_common_one_d_configuration_t* self, scanbotsdk_gs_1_handling_t* gs_1_handling);
/**
 * @brief Sets value of gs_1_handling field of the given object.
 * @ingroup c_barcode
 * @details GS1 message handling options.
 * 
 * Default is PARSE
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_common_one_d_configuration_t, the field of which will be set
 * @param gs_1_handling: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_common_one_d_configuration_set_gs_1_handling(scanbotsdk_barcode_format_common_one_d_configuration_t* self, scanbotsdk_gs_1_handling_t gs_1_handling);

/**
 * @brief Returns value of enable_one_d_blur_scanner field of the given object.
 * @ingroup c_barcode
 * @details If true, barcodes with heavy blur or from far distance are tried to scan.
 * 
 * Default is true
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_common_one_d_configuration_t
 * @param enable_one_d_blur_scanner: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_common_one_d_configuration_get_enable_one_d_blur_scanner(scanbotsdk_barcode_format_common_one_d_configuration_t* self, bool* enable_one_d_blur_scanner);
/**
 * @brief Sets value of enable_one_d_blur_scanner field of the given object.
 * @ingroup c_barcode
 * @details If true, barcodes with heavy blur or from far distance are tried to scan.
 * 
 * Default is true
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_common_one_d_configuration_t, the field of which will be set
 * @param enable_one_d_blur_scanner: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_common_one_d_configuration_set_enable_one_d_blur_scanner(scanbotsdk_barcode_format_common_one_d_configuration_t* self, bool enable_one_d_blur_scanner);

/**
 * @brief Returns value of formats field of the given object. The returned value is direct view into memory, no pre-allocations needed.
 * @ingroup c_barcode
 * @details List of linear (1D) barcode formats to scan.
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_common_one_d_configuration_t
 * @param formats: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_common_one_d_configuration_get_formats(scanbotsdk_barcode_format_common_one_d_configuration_t* self, scanbotsdk_barcode_format_t** formats);
/**
 * @brief Returns size of formats array.
 * @ingroup c_barcode
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_common_one_d_configuration_t
 * @param size: Pointer to a variable that will store the size.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_common_one_d_configuration_get_formats_size(scanbotsdk_barcode_format_common_one_d_configuration_t* self, size_t* size);
/**
 * @brief Sets value of formats field of the given object.
 * @ingroup c_barcode
 * @details List of linear (1D) barcode formats to scan.
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_common_one_d_configuration_t, the field of which will be set
 * @param formats: The value to be set.
 * @param formats_size: Size of the array.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_common_one_d_configuration_set_formats(scanbotsdk_barcode_format_common_one_d_configuration_t* self, scanbotsdk_barcode_format_t* formats, size_t formats_size);


/**
 * @brief scanbotsdk_barcode_format_common_two_d_configuration_t class
 * @details Convenience configuration for enabling the scanning of multiple 2D codes with a common configuration.
 * Add to scanner configuration to enable and configure the scanning of multiple 2D codes.
 * 
 * The given configuration will be applied to all enabled barcode formats, if they support it.
 * You can override the common configuration for individual barcode formats by additionally adding
 * their specific configuration to the scanner's configuration.
 * @ingroup c_barcode
*/
typedef struct scanbotsdk_barcode_format_common_two_d_configuration_t scanbotsdk_barcode_format_common_two_d_configuration_t;

/**
 * @brief Creates a new instance of scanbotsdk_barcode_format_common_two_d_configuration with given params and stores it in the location specified by the last argument.
 * @ingroup c_barcode
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param regex_filter: Regular expression filter for barcode text. If the barcode text does not match the regular expression, it will not be scanned. The default is an empty string (setting is turned off).
 * 
 * Default is ""
 * The value must not be null.
 * @param minimum_size_score: Minimum acceptable value of a result BarcodeItem's sizeScore (between 0 and 1). 
 * Barcodes with a sizeScore less than this value will not be scanned. 
 * When set to 0, barcodes are returned no matter what their size is.
 * 
 * Default is 0
 * @param add_additional_quiet_zone: If true, we process the barcode scanning with an artificial quiet zone that we add to the input image. 
 * This flag should be used to scan sharp crops of a barcode in single-shot mode.
 * 
 * Default is false
 * @param gs_1_handling: GS1 message handling options.
 * 
 * Default is PARSE
 * @param strict_mode: If true, the barcode scanner will only return barcodes that pass the strict validation checks according to standards to avoid false positives.
 * 
 * Default is true
 * @param formats: List of 2D codes to scan.
 * @param formats_size: Size of the array formats
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_barcode_format_common_two_d_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_common_two_d_configuration_create(
    const char* regex_filter,
    double minimum_size_score,
    bool add_additional_quiet_zone,
    scanbotsdk_gs_1_handling_t gs_1_handling,
    bool strict_mode,
    scanbotsdk_barcode_format_t* formats,
    size_t formats_size,
    scanbotsdk_barcode_format_common_two_d_configuration_t** result);

/**
 * @brief Creates a new instance of scanbotsdk_barcode_format_common_two_d_configuration_t with given required params and stores it in the location specified by the last argument.
 * @ingroup c_barcode
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_barcode_format_common_two_d_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_common_two_d_configuration_create_with_defaults(
    scanbotsdk_barcode_format_common_two_d_configuration_t** result);


/**
 * @brief Frees the memory allocated for the instance of scanbotsdk_barcode_format_common_two_d_configuration_t. If null is passed, the function does nothing.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_common_two_d_configuration_t to be freed
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_common_two_d_configuration_free(scanbotsdk_barcode_format_common_two_d_configuration_t* object);

/**
 * @brief Checks if the given instance of scanbotsdk_barcode_format_configuration_base_t is an instance of its subtype scanbotsdk_barcode_format_common_two_d_configuration_t.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_configuration_base_t to be checked
 * @param result: Pointer to a variable that will store the result of the check
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
 */
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_configuration_base_is_scanbotsdk_barcode_format_common_two_d_configuration(scanbotsdk_barcode_format_configuration_base_t* object, bool* result);
/**
 * @brief Casts the given instance of scanbotsdk_barcode_format_configuration_base_t to its subtype scanbotsdk_barcode_format_common_two_d_configuration_t. If the given instance is not an instance of the subtype, result will be null.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_configuration_base_t to be casted
 * @param result: Pointer to a variable that will store the casted instance of scanbotsdk_barcode_format_common_two_d_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_configuration_base_as_scanbotsdk_barcode_format_common_two_d_configuration(scanbotsdk_barcode_format_configuration_base_t* object, scanbotsdk_barcode_format_common_two_d_configuration_t** result);
/**
 * @brief Casts the given instance of scanbotsdk_barcode_format_common_two_d_configuration_t to its parent type scanbotsdk_barcode_format_configuration_base_t.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_configuration_base_t to be casted
 * @param result: Pointer to a variable that will store the casted instance of scanbotsdk_barcode_format_common_two_d_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_common_two_d_configuration_as_scanbotsdk_barcode_format_configuration_base(scanbotsdk_barcode_format_common_two_d_configuration_t* object, scanbotsdk_barcode_format_configuration_base_t** result);

/**
 * @brief Returns value of gs_1_handling field of the given object.
 * @ingroup c_barcode
 * @details GS1 message handling options.
 * 
 * Default is PARSE
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_common_two_d_configuration_t
 * @param gs_1_handling: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_common_two_d_configuration_get_gs_1_handling(scanbotsdk_barcode_format_common_two_d_configuration_t* self, scanbotsdk_gs_1_handling_t* gs_1_handling);
/**
 * @brief Sets value of gs_1_handling field of the given object.
 * @ingroup c_barcode
 * @details GS1 message handling options.
 * 
 * Default is PARSE
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_common_two_d_configuration_t, the field of which will be set
 * @param gs_1_handling: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_common_two_d_configuration_set_gs_1_handling(scanbotsdk_barcode_format_common_two_d_configuration_t* self, scanbotsdk_gs_1_handling_t gs_1_handling);

/**
 * @brief Returns value of strict_mode field of the given object.
 * @ingroup c_barcode
 * @details If true, the barcode scanner will only return barcodes that pass the strict validation checks according to standards to avoid false positives.
 * 
 * Default is true
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_common_two_d_configuration_t
 * @param strict_mode: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_common_two_d_configuration_get_strict_mode(scanbotsdk_barcode_format_common_two_d_configuration_t* self, bool* strict_mode);
/**
 * @brief Sets value of strict_mode field of the given object.
 * @ingroup c_barcode
 * @details If true, the barcode scanner will only return barcodes that pass the strict validation checks according to standards to avoid false positives.
 * 
 * Default is true
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_common_two_d_configuration_t, the field of which will be set
 * @param strict_mode: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_common_two_d_configuration_set_strict_mode(scanbotsdk_barcode_format_common_two_d_configuration_t* self, bool strict_mode);

/**
 * @brief Returns value of formats field of the given object. The returned value is direct view into memory, no pre-allocations needed.
 * @ingroup c_barcode
 * @details List of 2D codes to scan.
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_common_two_d_configuration_t
 * @param formats: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_common_two_d_configuration_get_formats(scanbotsdk_barcode_format_common_two_d_configuration_t* self, scanbotsdk_barcode_format_t** formats);
/**
 * @brief Returns size of formats array.
 * @ingroup c_barcode
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_common_two_d_configuration_t
 * @param size: Pointer to a variable that will store the size.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_common_two_d_configuration_get_formats_size(scanbotsdk_barcode_format_common_two_d_configuration_t* self, size_t* size);
/**
 * @brief Sets value of formats field of the given object.
 * @ingroup c_barcode
 * @details List of 2D codes to scan.
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_common_two_d_configuration_t, the field of which will be set
 * @param formats: The value to be set.
 * @param formats_size: Size of the array.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_common_two_d_configuration_set_formats(scanbotsdk_barcode_format_common_two_d_configuration_t* self, scanbotsdk_barcode_format_t* formats, size_t formats_size);


/**
 * @brief scanbotsdk_barcode_format_common_four_state_configuration_t class
 * @details Convenience configuration for enabling the scanning of multiple four-state barcode formats with a common configuration.
 * Add to scanner configuration to enable and configure the scanning of multiple four-state codes.
 * 
 * The given configuration will be applied to all enabled barcode formats, if they support it.
 * You can override the common configuration for individual barcode formats by additionally adding
 * their specific configuration to the scanner's configuration.
 * @ingroup c_barcode
*/
typedef struct scanbotsdk_barcode_format_common_four_state_configuration_t scanbotsdk_barcode_format_common_four_state_configuration_t;

/**
 * @brief Creates a new instance of scanbotsdk_barcode_format_common_four_state_configuration with given params and stores it in the location specified by the last argument.
 * @ingroup c_barcode
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param regex_filter: Regular expression filter for barcode text. If the barcode text does not match the regular expression, it will not be scanned. The default is an empty string (setting is turned off).
 * 
 * Default is ""
 * The value must not be null.
 * @param minimum_size_score: Minimum acceptable value of a result BarcodeItem's sizeScore (between 0 and 1). 
 * Barcodes with a sizeScore less than this value will not be scanned. 
 * When set to 0, barcodes are returned no matter what their size is.
 * 
 * Default is 0
 * @param add_additional_quiet_zone: If true, we process the barcode scanning with an artificial quiet zone that we add to the input image. 
 * This flag should be used to scan sharp crops of a barcode in single-shot mode.
 * 
 * Default is false
 * @param formats: List of four-state barcode formats to scan.
 * @param formats_size: Size of the array formats
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_barcode_format_common_four_state_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_common_four_state_configuration_create(
    const char* regex_filter,
    double minimum_size_score,
    bool add_additional_quiet_zone,
    scanbotsdk_barcode_format_t* formats,
    size_t formats_size,
    scanbotsdk_barcode_format_common_four_state_configuration_t** result);

/**
 * @brief Creates a new instance of scanbotsdk_barcode_format_common_four_state_configuration_t with given required params and stores it in the location specified by the last argument.
 * @ingroup c_barcode
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_barcode_format_common_four_state_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_common_four_state_configuration_create_with_defaults(
    scanbotsdk_barcode_format_common_four_state_configuration_t** result);


/**
 * @brief Frees the memory allocated for the instance of scanbotsdk_barcode_format_common_four_state_configuration_t. If null is passed, the function does nothing.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_common_four_state_configuration_t to be freed
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_common_four_state_configuration_free(scanbotsdk_barcode_format_common_four_state_configuration_t* object);

/**
 * @brief Checks if the given instance of scanbotsdk_barcode_format_configuration_base_t is an instance of its subtype scanbotsdk_barcode_format_common_four_state_configuration_t.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_configuration_base_t to be checked
 * @param result: Pointer to a variable that will store the result of the check
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
 */
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_configuration_base_is_scanbotsdk_barcode_format_common_four_state_configuration(scanbotsdk_barcode_format_configuration_base_t* object, bool* result);
/**
 * @brief Casts the given instance of scanbotsdk_barcode_format_configuration_base_t to its subtype scanbotsdk_barcode_format_common_four_state_configuration_t. If the given instance is not an instance of the subtype, result will be null.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_configuration_base_t to be casted
 * @param result: Pointer to a variable that will store the casted instance of scanbotsdk_barcode_format_common_four_state_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_configuration_base_as_scanbotsdk_barcode_format_common_four_state_configuration(scanbotsdk_barcode_format_configuration_base_t* object, scanbotsdk_barcode_format_common_four_state_configuration_t** result);
/**
 * @brief Casts the given instance of scanbotsdk_barcode_format_common_four_state_configuration_t to its parent type scanbotsdk_barcode_format_configuration_base_t.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_configuration_base_t to be casted
 * @param result: Pointer to a variable that will store the casted instance of scanbotsdk_barcode_format_common_four_state_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_common_four_state_configuration_as_scanbotsdk_barcode_format_configuration_base(scanbotsdk_barcode_format_common_four_state_configuration_t* object, scanbotsdk_barcode_format_configuration_base_t** result);

/**
 * @brief Returns value of formats field of the given object. The returned value is direct view into memory, no pre-allocations needed.
 * @ingroup c_barcode
 * @details List of four-state barcode formats to scan.
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_common_four_state_configuration_t
 * @param formats: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_common_four_state_configuration_get_formats(scanbotsdk_barcode_format_common_four_state_configuration_t* self, scanbotsdk_barcode_format_t** formats);
/**
 * @brief Returns size of formats array.
 * @ingroup c_barcode
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_common_four_state_configuration_t
 * @param size: Pointer to a variable that will store the size.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_common_four_state_configuration_get_formats_size(scanbotsdk_barcode_format_common_four_state_configuration_t* self, size_t* size);
/**
 * @brief Sets value of formats field of the given object.
 * @ingroup c_barcode
 * @details List of four-state barcode formats to scan.
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_common_four_state_configuration_t, the field of which will be set
 * @param formats: The value to be set.
 * @param formats_size: Size of the array.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_common_four_state_configuration_set_formats(scanbotsdk_barcode_format_common_four_state_configuration_t* self, scanbotsdk_barcode_format_t* formats, size_t formats_size);


/**
 * @brief scanbotsdk_barcode_format_common_configuration_t class
 * @details Convenience configuration for enabling the scanning of multiple barcode formats with a common configuration.
 * Add to scanner configuration to enable and configure the scanning of multiple barcodes.
 * 
 * The given configuration will be applied to all enabled barcode formats, if they support it.
 * You can override the common configuration for individual barcode formats by additionally adding
 * their specific configuration to the scanner's configuration.
 * @ingroup c_barcode
*/
typedef struct scanbotsdk_barcode_format_common_configuration_t scanbotsdk_barcode_format_common_configuration_t;

/**
 * @brief Creates a new instance of scanbotsdk_barcode_format_common_configuration with given params and stores it in the location specified by the last argument.
 * @ingroup c_barcode
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param regex_filter: Regular expression filter for barcode text. If the barcode text does not match the regular expression, it will not be scanned. The default is an empty string (setting is turned off).
 * 
 * Default is ""
 * The value must not be null.
 * @param minimum_size_score: Minimum acceptable value of a result BarcodeItem's sizeScore (between 0 and 1). 
 * Barcodes with a sizeScore less than this value will not be scanned. 
 * When set to 0, barcodes are returned no matter what their size is.
 * 
 * Default is 0
 * @param add_additional_quiet_zone: If true, we process the barcode scanning with an artificial quiet zone that we add to the input image. 
 * This flag should be used to scan sharp crops of a barcode in single-shot mode.
 * 
 * Default is false
 * @param minimum_1_d_quiet_zone_size: Minimum quiet zone size on the left and right sides of a 1D barcode, measured in number of modules.
 * The quiet zone is only for 1D barcodes with weak start/stop patterns, i.e. Iata2Of5, Industrial2Of5, Code25, Itf, Codabar, MsiPlessey and Code11.
 * 
 * Default is 6
 * @param minimum_1_d_confirmation_count: In case of live scanning, we require confirmations across frames to consider the one-d barcode as valid.
 * 
 * Default is 1
 * @param strip_check_digits: If true, the check digits are stripped from the result.
 * 
 * Default is false
 * @param minimum_text_length: Minimum text length. Applied only to linear barcode formats that allow variable length.
 * 
 * Default is 1
 * @param maximum_text_length: Maximum text length. 0 implies no maximum. Applied only to linear barcode formats that allow variable length.
 * 
 * Default is 0
 * @param gs_1_handling: GS1 message handling options.
 * 
 * Default is PARSE
 * @param strict_mode: If true, the barcode scanner will only return barcodes that pass the strict validation checks according to standards to avoid false positives.
 * 
 * Default is true
 * @param enable_one_d_blur_scanner: If true, barcodes with heavy blur or from far distance are tried to scan.
 * 
 * Default is true
 * @param formats: List of barcode formats to scan. By default, the most commonly used formats are enabled.
 * @param formats_size: Size of the array formats
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_barcode_format_common_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_common_configuration_create(
    const char* regex_filter,
    double minimum_size_score,
    bool add_additional_quiet_zone,
    int minimum_1_d_quiet_zone_size,
    int minimum_1_d_confirmation_count,
    bool strip_check_digits,
    int minimum_text_length,
    int maximum_text_length,
    scanbotsdk_gs_1_handling_t gs_1_handling,
    bool strict_mode,
    bool enable_one_d_blur_scanner,
    scanbotsdk_barcode_format_t* formats,
    size_t formats_size,
    scanbotsdk_barcode_format_common_configuration_t** result);

/**
 * @brief Creates a new instance of scanbotsdk_barcode_format_common_configuration_t with given required params and stores it in the location specified by the last argument.
 * @ingroup c_barcode
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_barcode_format_common_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_common_configuration_create_with_defaults(
    scanbotsdk_barcode_format_common_configuration_t** result);


/**
 * @brief Frees the memory allocated for the instance of scanbotsdk_barcode_format_common_configuration_t. If null is passed, the function does nothing.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_common_configuration_t to be freed
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_common_configuration_free(scanbotsdk_barcode_format_common_configuration_t* object);

/**
 * @brief Checks if the given instance of scanbotsdk_barcode_format_configuration_base_t is an instance of its subtype scanbotsdk_barcode_format_common_configuration_t.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_configuration_base_t to be checked
 * @param result: Pointer to a variable that will store the result of the check
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
 */
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_configuration_base_is_scanbotsdk_barcode_format_common_configuration(scanbotsdk_barcode_format_configuration_base_t* object, bool* result);
/**
 * @brief Casts the given instance of scanbotsdk_barcode_format_configuration_base_t to its subtype scanbotsdk_barcode_format_common_configuration_t. If the given instance is not an instance of the subtype, result will be null.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_configuration_base_t to be casted
 * @param result: Pointer to a variable that will store the casted instance of scanbotsdk_barcode_format_common_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_configuration_base_as_scanbotsdk_barcode_format_common_configuration(scanbotsdk_barcode_format_configuration_base_t* object, scanbotsdk_barcode_format_common_configuration_t** result);
/**
 * @brief Casts the given instance of scanbotsdk_barcode_format_common_configuration_t to its parent type scanbotsdk_barcode_format_configuration_base_t.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_format_configuration_base_t to be casted
 * @param result: Pointer to a variable that will store the casted instance of scanbotsdk_barcode_format_common_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_common_configuration_as_scanbotsdk_barcode_format_configuration_base(scanbotsdk_barcode_format_common_configuration_t* object, scanbotsdk_barcode_format_configuration_base_t** result);

/**
 * @brief Returns value of minimum_1_d_quiet_zone_size field of the given object.
 * @ingroup c_barcode
 * @details Minimum quiet zone size on the left and right sides of a 1D barcode, measured in number of modules.
 * The quiet zone is only for 1D barcodes with weak start/stop patterns, i.e. Iata2Of5, Industrial2Of5, Code25, Itf, Codabar, MsiPlessey and Code11.
 * 
 * Default is 6
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_common_configuration_t
 * @param minimum_1_d_quiet_zone_size: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_common_configuration_get_minimum_1_d_quiet_zone_size(scanbotsdk_barcode_format_common_configuration_t* self, int* minimum_1_d_quiet_zone_size);
/**
 * @brief Sets value of minimum_1_d_quiet_zone_size field of the given object.
 * @ingroup c_barcode
 * @details Minimum quiet zone size on the left and right sides of a 1D barcode, measured in number of modules.
 * The quiet zone is only for 1D barcodes with weak start/stop patterns, i.e. Iata2Of5, Industrial2Of5, Code25, Itf, Codabar, MsiPlessey and Code11.
 * 
 * Default is 6
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_common_configuration_t, the field of which will be set
 * @param minimum_1_d_quiet_zone_size: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_common_configuration_set_minimum_1_d_quiet_zone_size(scanbotsdk_barcode_format_common_configuration_t* self, int minimum_1_d_quiet_zone_size);

/**
 * @brief Returns value of minimum_1_d_confirmation_count field of the given object.
 * @ingroup c_barcode
 * @details In case of live scanning, we require confirmations across frames to consider the one-d barcode as valid.
 * 
 * Default is 1
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_common_configuration_t
 * @param minimum_1_d_confirmation_count: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_common_configuration_get_minimum_1_d_confirmation_count(scanbotsdk_barcode_format_common_configuration_t* self, int* minimum_1_d_confirmation_count);
/**
 * @brief Sets value of minimum_1_d_confirmation_count field of the given object.
 * @ingroup c_barcode
 * @details In case of live scanning, we require confirmations across frames to consider the one-d barcode as valid.
 * 
 * Default is 1
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_common_configuration_t, the field of which will be set
 * @param minimum_1_d_confirmation_count: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_common_configuration_set_minimum_1_d_confirmation_count(scanbotsdk_barcode_format_common_configuration_t* self, int minimum_1_d_confirmation_count);

/**
 * @brief Returns value of strip_check_digits field of the given object.
 * @ingroup c_barcode
 * @details If true, the check digits are stripped from the result.
 * 
 * Default is false
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_common_configuration_t
 * @param strip_check_digits: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_common_configuration_get_strip_check_digits(scanbotsdk_barcode_format_common_configuration_t* self, bool* strip_check_digits);
/**
 * @brief Sets value of strip_check_digits field of the given object.
 * @ingroup c_barcode
 * @details If true, the check digits are stripped from the result.
 * 
 * Default is false
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_common_configuration_t, the field of which will be set
 * @param strip_check_digits: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_common_configuration_set_strip_check_digits(scanbotsdk_barcode_format_common_configuration_t* self, bool strip_check_digits);

/**
 * @brief Returns value of minimum_text_length field of the given object.
 * @ingroup c_barcode
 * @details Minimum text length. Applied only to linear barcode formats that allow variable length.
 * 
 * Default is 1
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_common_configuration_t
 * @param minimum_text_length: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_common_configuration_get_minimum_text_length(scanbotsdk_barcode_format_common_configuration_t* self, int* minimum_text_length);
/**
 * @brief Sets value of minimum_text_length field of the given object.
 * @ingroup c_barcode
 * @details Minimum text length. Applied only to linear barcode formats that allow variable length.
 * 
 * Default is 1
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_common_configuration_t, the field of which will be set
 * @param minimum_text_length: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_common_configuration_set_minimum_text_length(scanbotsdk_barcode_format_common_configuration_t* self, int minimum_text_length);

/**
 * @brief Returns value of maximum_text_length field of the given object.
 * @ingroup c_barcode
 * @details Maximum text length. 0 implies no maximum. Applied only to linear barcode formats that allow variable length.
 * 
 * Default is 0
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_common_configuration_t
 * @param maximum_text_length: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_common_configuration_get_maximum_text_length(scanbotsdk_barcode_format_common_configuration_t* self, int* maximum_text_length);
/**
 * @brief Sets value of maximum_text_length field of the given object.
 * @ingroup c_barcode
 * @details Maximum text length. 0 implies no maximum. Applied only to linear barcode formats that allow variable length.
 * 
 * Default is 0
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_common_configuration_t, the field of which will be set
 * @param maximum_text_length: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_common_configuration_set_maximum_text_length(scanbotsdk_barcode_format_common_configuration_t* self, int maximum_text_length);

/**
 * @brief Returns value of gs_1_handling field of the given object.
 * @ingroup c_barcode
 * @details GS1 message handling options.
 * 
 * Default is PARSE
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_common_configuration_t
 * @param gs_1_handling: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_common_configuration_get_gs_1_handling(scanbotsdk_barcode_format_common_configuration_t* self, scanbotsdk_gs_1_handling_t* gs_1_handling);
/**
 * @brief Sets value of gs_1_handling field of the given object.
 * @ingroup c_barcode
 * @details GS1 message handling options.
 * 
 * Default is PARSE
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_common_configuration_t, the field of which will be set
 * @param gs_1_handling: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_common_configuration_set_gs_1_handling(scanbotsdk_barcode_format_common_configuration_t* self, scanbotsdk_gs_1_handling_t gs_1_handling);

/**
 * @brief Returns value of strict_mode field of the given object.
 * @ingroup c_barcode
 * @details If true, the barcode scanner will only return barcodes that pass the strict validation checks according to standards to avoid false positives.
 * 
 * Default is true
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_common_configuration_t
 * @param strict_mode: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_common_configuration_get_strict_mode(scanbotsdk_barcode_format_common_configuration_t* self, bool* strict_mode);
/**
 * @brief Sets value of strict_mode field of the given object.
 * @ingroup c_barcode
 * @details If true, the barcode scanner will only return barcodes that pass the strict validation checks according to standards to avoid false positives.
 * 
 * Default is true
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_common_configuration_t, the field of which will be set
 * @param strict_mode: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_common_configuration_set_strict_mode(scanbotsdk_barcode_format_common_configuration_t* self, bool strict_mode);

/**
 * @brief Returns value of enable_one_d_blur_scanner field of the given object.
 * @ingroup c_barcode
 * @details If true, barcodes with heavy blur or from far distance are tried to scan.
 * 
 * Default is true
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_common_configuration_t
 * @param enable_one_d_blur_scanner: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_common_configuration_get_enable_one_d_blur_scanner(scanbotsdk_barcode_format_common_configuration_t* self, bool* enable_one_d_blur_scanner);
/**
 * @brief Sets value of enable_one_d_blur_scanner field of the given object.
 * @ingroup c_barcode
 * @details If true, barcodes with heavy blur or from far distance are tried to scan.
 * 
 * Default is true
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_common_configuration_t, the field of which will be set
 * @param enable_one_d_blur_scanner: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_common_configuration_set_enable_one_d_blur_scanner(scanbotsdk_barcode_format_common_configuration_t* self, bool enable_one_d_blur_scanner);

/**
 * @brief Returns value of formats field of the given object. The returned value is direct view into memory, no pre-allocations needed.
 * @ingroup c_barcode
 * @details List of barcode formats to scan. By default, the most commonly used formats are enabled.
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_common_configuration_t
 * @param formats: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_common_configuration_get_formats(scanbotsdk_barcode_format_common_configuration_t* self, scanbotsdk_barcode_format_t** formats);
/**
 * @brief Returns size of formats array.
 * @ingroup c_barcode
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_common_configuration_t
 * @param size: Pointer to a variable that will store the size.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_common_configuration_get_formats_size(scanbotsdk_barcode_format_common_configuration_t* self, size_t* size);
/**
 * @brief Sets value of formats field of the given object.
 * @ingroup c_barcode
 * @details List of barcode formats to scan. By default, the most commonly used formats are enabled.
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_barcode_format_common_configuration_t, the field of which will be set
 * @param formats: The value to be set.
 * @param formats_size: Size of the array.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_common_configuration_set_formats(scanbotsdk_barcode_format_common_configuration_t* self, scanbotsdk_barcode_format_t* formats, size_t formats_size);


#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* SCANBOTSDK_BARCODECONFIGURATIONTYPES_H */