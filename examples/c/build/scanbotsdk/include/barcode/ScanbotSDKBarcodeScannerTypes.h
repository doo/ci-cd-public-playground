// Auto-generated with ScanbotSDKCodegenV3. Modifications will be overwritten.
// Generated from SchemasV3/CoreSchemas/schemas/BarcodeScannerTypes.yaml
/**
 * @file ScanbotSDKBarcodeScannerTypes.h
 */

#pragma once
#ifndef SCANBOTSDK_BARCODESCANNERTYPES_H
#define SCANBOTSDK_BARCODESCANNERTYPES_H


#include <ScanbotSDKImage.h>
#include <ScanbotSDKTypes.h>
#include <barcode/ScanbotSDKBarcodeConfigurationTypes.h>
#include <barcode/ScanbotSDKBarcodeDocumentTypes.h>
#include <barcode/ScanbotSDKBarcodeTypes.h>
#include <common/ScanbotSDKCommonTypes.h>
#include <generic_document/ScanbotSDKGenericDocument.h>
#include <ml/ScanbotSDKAcceleratorTypes.h>
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
 * @brief scanbotsdk_barcode_item_t class
 * @details A single barcode found in the input image. Barcodes with the same content but different locations in the image are considered separate barcodes.
 * @ingroup c_barcode
*/
typedef struct scanbotsdk_barcode_item_t scanbotsdk_barcode_item_t;

/**
 * @brief Frees the memory allocated for the instance of scanbotsdk_barcode_item_t. If null is passed, the function does nothing.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_item_t to be freed
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_item_free(scanbotsdk_barcode_item_t* object);

/**
 * @brief Returns value of format field of the given object.
 * @ingroup c_barcode
 * @details Barcode format.
 * 
 * Default is NONE
 * @param self: Pointer to the instance of scanbotsdk_barcode_item_t
 * @param format: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_item_get_format(scanbotsdk_barcode_item_t* self, scanbotsdk_barcode_format_t* format);

/**
 * @brief Returns value of text field of the given object. The returned pointers do NOT own the underlying object, caller must not free them.
 * @ingroup c_barcode
 * @details Text contained in the barcode. Binary data is returned in the rawBytes field only.
 * @param self: Pointer to the instance of scanbotsdk_barcode_item_t
 * @param text: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_item_get_text(scanbotsdk_barcode_item_t* self, const char** text);

/**
 * @brief Returns value of raw_bytes field of the given object. The returned value is direct view into memory, no pre-allocations needed.
 * @ingroup c_barcode
 * @details Raw bytes of barcode contents. 
 * Some barcode formats are able to encode binary data. If a barcode contains binary data, it's provided as a list of bytes in the rawBytes field.
 * Some barcode formats additionally allow pieces of the data within to have different encodings - UTF-8, ASCII, binary, etc. 
 * The rawBytesEncodings field lists the encoding of each range in the rawBytes array. 
 * For barcode formats that contain a GS1 message (e.g. GS1 Composite), we recommend to use a GS1Handling and extract the GS1 message from the text.
 * @param self: Pointer to the instance of scanbotsdk_barcode_item_t
 * @param raw_bytes: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_item_get_raw_bytes(scanbotsdk_barcode_item_t* self, uint8_t** raw_bytes);
/**
 * @brief Returns size of raw_bytes array.
 * @ingroup c_barcode
 * @param self: Pointer to the instance of scanbotsdk_barcode_item_t
 * @param size: Pointer to a variable that will store the size.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_item_get_raw_bytes_size(scanbotsdk_barcode_item_t* self, size_t* size);

/**
 * @brief Returns value of raw_bytes_encodings field of the given object. The returned pointers do NOT own the underlying object, caller must not free them.
 * @ingroup c_barcode
 * @details Encoding information for the rawBytes field. Each element of this list covers some portion of the rawBytes array. 
 * Taken together, the elements of the list cover the entirety of the rawBytes array without overlap and without holes. 
 * The elements are ordered in increasing order of the start and end indices.
 * @param self: Pointer to the instance of scanbotsdk_barcode_item_t
 @param size: Size of the pre-allocated array. Must be equal to the size obtained by calling the corresponding _size function.
 * @param raw_bytes_encodings: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_item_get_raw_bytes_encodings(scanbotsdk_barcode_item_t* self, scanbotsdk_range_encoding_t** raw_bytes_encodings, size_t size);
/**
 * @brief Returns size of raw_bytes_encodings array.
 * @ingroup c_barcode
 * @param self: Pointer to the instance of scanbotsdk_barcode_item_t
 * @param size: Pointer to a variable that will store the size.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_item_get_raw_bytes_encodings_size(scanbotsdk_barcode_item_t* self, size_t* size);

/**
 * @brief Returns value of structured_append_info field of the given object. The returned pointers do NOT own the underlying object, caller must not free them.
 * @ingroup c_barcode
 * @details If this barcode is part of a structured append sequence, this field contains information about the sequence.
 * @param self: Pointer to the instance of scanbotsdk_barcode_item_t
 * @param structured_append_info: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_item_get_structured_append_info(scanbotsdk_barcode_item_t* self, scanbotsdk_structured_append_info_t** structured_append_info);

/**
 * @brief Returns value of quad field of the given object. The returned value is direct view into memory, no pre-allocations needed.
 * @ingroup c_barcode
 * @details The four corners of the barcode in the input image, in clockwise order starting from the top left, in image coordinates.
 * @param self: Pointer to the instance of scanbotsdk_barcode_item_t
 * @param quad: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_item_get_quad(scanbotsdk_barcode_item_t* self, scanbotsdk_point_t** quad);
/**
 * @brief Returns size of quad array.
 * @ingroup c_barcode
 * @param self: Pointer to the instance of scanbotsdk_barcode_item_t
 * @param size: Pointer to a variable that will store the size.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_item_get_quad_size(scanbotsdk_barcode_item_t* self, size_t* size);

/**
 * @brief Returns value of quad_normalized field of the given object. The returned value is direct view into memory, no pre-allocations needed.
 * @ingroup c_barcode
 * @details The four corners of the barcode in the input image, in clockwise order starting from the top left, normalized to the range [0, 1].
 * @param self: Pointer to the instance of scanbotsdk_barcode_item_t
 * @param quad_normalized: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_item_get_quad_normalized(scanbotsdk_barcode_item_t* self, scanbotsdk_pointf_t** quad_normalized);
/**
 * @brief Returns size of quad_normalized array.
 * @ingroup c_barcode
 * @param self: Pointer to the instance of scanbotsdk_barcode_item_t
 * @param size: Pointer to a variable that will store the size.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_item_get_quad_normalized_size(scanbotsdk_barcode_item_t* self, size_t* size);

/**
 * @brief Returns value of extended_quad field of the given object. The returned value is direct view into memory, no pre-allocations needed.
 * @ingroup c_barcode
 * @details As quad, but extended to appropriate height for oned barcodes.
 * @param self: Pointer to the instance of scanbotsdk_barcode_item_t
 * @param extended_quad: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_item_get_extended_quad(scanbotsdk_barcode_item_t* self, scanbotsdk_point_t** extended_quad);
/**
 * @brief Returns size of extended_quad array.
 * @ingroup c_barcode
 * @param self: Pointer to the instance of scanbotsdk_barcode_item_t
 * @param size: Pointer to a variable that will store the size.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_item_get_extended_quad_size(scanbotsdk_barcode_item_t* self, size_t* size);

/**
 * @brief Returns value of extended_quad_normalized field of the given object. The returned value is direct view into memory, no pre-allocations needed.
 * @ingroup c_barcode
 * @details As quadNormalized, but extended to appropriate height for oned barcodes.
 * @param self: Pointer to the instance of scanbotsdk_barcode_item_t
 * @param extended_quad_normalized: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_item_get_extended_quad_normalized(scanbotsdk_barcode_item_t* self, scanbotsdk_pointf_t** extended_quad_normalized);
/**
 * @brief Returns size of extended_quad_normalized array.
 * @ingroup c_barcode
 * @param self: Pointer to the instance of scanbotsdk_barcode_item_t
 * @param size: Pointer to a variable that will store the size.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_item_get_extended_quad_normalized_size(scanbotsdk_barcode_item_t* self, size_t* size);

/**
 * @brief Returns value of is_upside_down field of the given object.
 * @ingroup c_barcode
 * @details True if this is a 1D barcode that is printed upside-down, that is, the barcode was scanned right-to-left.
 * 
 * Default is false
 * @param self: Pointer to the instance of scanbotsdk_barcode_item_t
 * @param is_upside_down: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_item_get_is_upside_down(scanbotsdk_barcode_item_t* self, bool* is_upside_down);

/**
 * @brief Returns value of source_image field of the given object. The returned pointers do NOT own the underlying object, caller must not free them.
 * @ingroup c_barcode
 * @details A crop from the input image containing the barcode.
 * @param self: Pointer to the instance of scanbotsdk_barcode_item_t
 * @param source_image: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_item_get_source_image(scanbotsdk_barcode_item_t* self, scanbotsdk_image_t** source_image);

/**
 * @brief Returns value of upc_ean_extension field of the given object. The returned pointers do NOT own the underlying object, caller must not free them.
 * @ingroup c_barcode
 * @details If this is a UPC/EAN barcode that has an EAN-2 or EAN-5 extension, this field contains the extension value. Requires the UPC_EAN_EXTENSION format to be enabled in the decoding options.
 * @param self: Pointer to the instance of scanbotsdk_barcode_item_t
 * @param upc_ean_extension: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_item_get_upc_ean_extension(scanbotsdk_barcode_item_t* self, const char** upc_ean_extension);

/**
 * @brief Returns value of is_gs_1_message field of the given object.
 * @ingroup c_barcode
 * @details True if the barcode contains a GS1 message. Requires GS1 handling to be enabled in the decoding option.
 * 
 * Default is false
 * @param self: Pointer to the instance of scanbotsdk_barcode_item_t
 * @param is_gs_1_message: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_item_get_is_gs_1_message(scanbotsdk_barcode_item_t* self, bool* is_gs_1_message);

/**
 * @brief Returns value of is_gs_1_composite_part field of the given object.
 * @ingroup c_barcode
 * @details True if this result is the 2D part of a GS1 Composite barcode.
 * Can only happen if GS1_COMPOSITE scanning is disabled and a part of the composite (1D) or (2D) is scanned separately.
 * When GS1_COMPOSITE scanning is enabled, parts of the composite barcode are never returned separately, even if their respective
 * format is enabled in the decoding options.
 * 
 * Default is false
 * @param self: Pointer to the instance of scanbotsdk_barcode_item_t
 * @param is_gs_1_composite_part: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_item_get_is_gs_1_composite_part(scanbotsdk_barcode_item_t* self, bool* is_gs_1_composite_part);

/**
 * @brief Returns value of data_bar_stack_size field of the given object.
 * @ingroup c_barcode
 * @details The number of 1D stacks in the barcode. Applies only to DATABAR and DATABAR_EXPANDED barcodes.
 * 
 * Default is 1
 * @param self: Pointer to the instance of scanbotsdk_barcode_item_t
 * @param data_bar_stack_size: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_item_get_data_bar_stack_size(scanbotsdk_barcode_item_t* self, int* data_bar_stack_size);

/**
 * @brief Returns value of size_score field of the given object.
 * @ingroup c_barcode
 * @details The size score is a floating point value between 0 and 1 that represents the relative size of the barcode in the input image.
 * Barcodes taking up a small portion of the input image will have a score close to 0, while barcodes that take a large portion will have a score close to 1.
 * 
 * Default is 0
 * @param self: Pointer to the instance of scanbotsdk_barcode_item_t
 * @param size_score: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_item_get_size_score(scanbotsdk_barcode_item_t* self, double* size_score);

/**
 * @brief Returns value of extracted_document field of the given object. The returned pointers do NOT own the underlying object, caller must not free them.
 * @ingroup c_barcode
 * @details The parsed known document format (if parsed successfully).
 * @param self: Pointer to the instance of scanbotsdk_barcode_item_t
 * @param extracted_document: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_item_get_extracted_document(scanbotsdk_barcode_item_t* self, scanbotsdk_generic_document_t** extracted_document);

/**
 * @brief Returns value of global_index field of the given object.
 * @ingroup c_barcode
 * @details The index of the barcode to uniquely identify it. 
 * In case of frame accumulation, the index remains the same across frames.
 * 
 * Default is -1
 * @param self: Pointer to the instance of scanbotsdk_barcode_item_t
 * @param global_index: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_item_get_global_index(scanbotsdk_barcode_item_t* self, int* global_index);


/**
 * @brief scanbotsdk_barcode_scanner_engine_mode_t enum
 * @details The engine mode for barcode scanning.
 * @ingroup c_barcode
*/
typedef enum scanbotsdk_barcode_scanner_engine_mode_t {

    /**Legacy mode. Very fast, significantly less accurate. Doesn't support all barcode types.*/
    SCANBOTSDK_BARCODE_SCANNER_ENGINE_MODE_LEGACY = 0,

    /**A faster version of the main engine mode, for use with low-power devices.*/
    SCANBOTSDK_BARCODE_SCANNER_ENGINE_MODE_NEXT_GEN_LOW_POWER = 1,

    /**Main engine mode for high-power devices. Supports all barcodes types.*/
    SCANBOTSDK_BARCODE_SCANNER_ENGINE_MODE_NEXT_GEN = 2,

    /**Similar to NEXT_GEN_LOW_POWER, but optimized for scanning from far distances.*/
    SCANBOTSDK_BARCODE_SCANNER_ENGINE_MODE_NEXT_GEN_LOW_POWER_FAR_DISTANCE = 3,

    /**Similar to NEXT_GEN, but optimized for scanning from far distances.*/
    SCANBOTSDK_BARCODE_SCANNER_ENGINE_MODE_NEXT_GEN_FAR_DISTANCE = 4,

    /**Similar to NEXT_GEN_FAR_DISTANCE, but optimized for scanning from far distances on very high power devices.*/
    SCANBOTSDK_BARCODE_SCANNER_ENGINE_MODE_NEXT_GEN_MAX_DISTANCE = 5,

} scanbotsdk_barcode_scanner_engine_mode_t;

/**
 * @brief Returns the string representation of the given scanbotsdk_barcode_scanner_engine_mode_t value.
 * @ingroup c_barcode
 * @details The returned string doesn't need to be freed.
 * @param value: The value to be converted to string.
 * @param result: Pointer to a variable that will store the string representation of the value.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_scanner_engine_mode_t_to_string(scanbotsdk_barcode_scanner_engine_mode_t value, const char** result);

/**
 * @brief scanbotsdk_barcode_accumulation_method_t enum
 * @details The method how to display barcodes from previous frames.
 * @ingroup c_barcode
*/
typedef enum scanbotsdk_barcode_accumulation_method_t {

    /**The quad of a barcode is simply given as the last quad when it was detected.*/
    SCANBOTSDK_BARCODE_ACCUMULATION_METHOD_LAST_VISIBLE = 0,

    /**The quad of barcode is interpolated by the camera movement. This option is recommended when the camera is moving, but the scanned object is not.*/
    SCANBOTSDK_BARCODE_ACCUMULATION_METHOD_INTERPOLATE_BY_CAMERA = 1,

} scanbotsdk_barcode_accumulation_method_t;

/**
 * @brief Returns the string representation of the given scanbotsdk_barcode_accumulation_method_t value.
 * @ingroup c_barcode
 * @details The returned string doesn't need to be freed.
 * @param value: The value to be converted to string.
 * @param result: Pointer to a variable that will store the string representation of the value.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_accumulation_method_t_to_string(scanbotsdk_barcode_accumulation_method_t value, const char** result);

/**
 * @brief scanbotsdk_barcode_accumulation_configuration_t class
 * @details Configuration for how to accumulate results.
 * @ingroup c_barcode
*/
typedef struct scanbotsdk_barcode_accumulation_configuration_t scanbotsdk_barcode_accumulation_configuration_t;

/**
 * @brief Creates a new instance of scanbotsdk_barcode_accumulation_configuration with given params and stores it in the location specified by the last argument.
 * @ingroup c_barcode
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param accumulation_time: The time in milliseconds to accumulate barcodes across multiple frames.
 * 
 * Default is 500
 * @param remove_unconnected_results: If true, the results from previous frames that are not connected to results on the current frame will be removed.
 * This is should be enabled when large camera movements are expected.
 * For small camera movements, the option can be disabled.
 * 
 * Default is true
 * @param method: The method how to display barcodes from previous frames.
 * 
 * Default is INTERPOLATE_BY_CAMERA
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_barcode_accumulation_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_accumulation_configuration_create(
    int accumulation_time,
    bool remove_unconnected_results,
    scanbotsdk_barcode_accumulation_method_t method,
    scanbotsdk_barcode_accumulation_configuration_t** result);

/**
 * @brief Creates a new instance of scanbotsdk_barcode_accumulation_configuration_t with given required params and stores it in the location specified by the last argument.
 * @ingroup c_barcode
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_barcode_accumulation_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_accumulation_configuration_create_with_defaults(
    scanbotsdk_barcode_accumulation_configuration_t** result);


/**
 * @brief Frees the memory allocated for the instance of scanbotsdk_barcode_accumulation_configuration_t. If null is passed, the function does nothing.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_accumulation_configuration_t to be freed
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_accumulation_configuration_free(scanbotsdk_barcode_accumulation_configuration_t* object);

/**
 * @brief Returns value of accumulation_time field of the given object.
 * @ingroup c_barcode
 * @details The time in milliseconds to accumulate barcodes across multiple frames.
 * 
 * Default is 500
 * @param self: Pointer to the instance of scanbotsdk_barcode_accumulation_configuration_t
 * @param accumulation_time: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_accumulation_configuration_get_accumulation_time(scanbotsdk_barcode_accumulation_configuration_t* self, int* accumulation_time);
/**
 * @brief Sets value of accumulation_time field of the given object.
 * @ingroup c_barcode
 * @details The time in milliseconds to accumulate barcodes across multiple frames.
 * 
 * Default is 500
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_barcode_accumulation_configuration_t, the field of which will be set
 * @param accumulation_time: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_accumulation_configuration_set_accumulation_time(scanbotsdk_barcode_accumulation_configuration_t* self, int accumulation_time);

/**
 * @brief Returns value of remove_unconnected_results field of the given object.
 * @ingroup c_barcode
 * @details If true, the results from previous frames that are not connected to results on the current frame will be removed.
 * This is should be enabled when large camera movements are expected.
 * For small camera movements, the option can be disabled.
 * 
 * Default is true
 * @param self: Pointer to the instance of scanbotsdk_barcode_accumulation_configuration_t
 * @param remove_unconnected_results: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_accumulation_configuration_get_remove_unconnected_results(scanbotsdk_barcode_accumulation_configuration_t* self, bool* remove_unconnected_results);
/**
 * @brief Sets value of remove_unconnected_results field of the given object.
 * @ingroup c_barcode
 * @details If true, the results from previous frames that are not connected to results on the current frame will be removed.
 * This is should be enabled when large camera movements are expected.
 * For small camera movements, the option can be disabled.
 * 
 * Default is true
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_barcode_accumulation_configuration_t, the field of which will be set
 * @param remove_unconnected_results: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_accumulation_configuration_set_remove_unconnected_results(scanbotsdk_barcode_accumulation_configuration_t* self, bool remove_unconnected_results);

/**
 * @brief Returns value of method field of the given object.
 * @ingroup c_barcode
 * @details The method how to display barcodes from previous frames.
 * 
 * Default is INTERPOLATE_BY_CAMERA
 * @param self: Pointer to the instance of scanbotsdk_barcode_accumulation_configuration_t
 * @param method: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_accumulation_configuration_get_method(scanbotsdk_barcode_accumulation_configuration_t* self, scanbotsdk_barcode_accumulation_method_t* method);
/**
 * @brief Sets value of method field of the given object.
 * @ingroup c_barcode
 * @details The method how to display barcodes from previous frames.
 * 
 * Default is INTERPOLATE_BY_CAMERA
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_barcode_accumulation_configuration_t, the field of which will be set
 * @param method: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_accumulation_configuration_set_method(scanbotsdk_barcode_accumulation_configuration_t* self, scanbotsdk_barcode_accumulation_method_t method);


/**
 * @brief scanbotsdk_barcode_scanner_configuration_t class
 * @details Configuration for the barcode scanner.
 * @ingroup c_barcode
*/
typedef struct scanbotsdk_barcode_scanner_configuration_t scanbotsdk_barcode_scanner_configuration_t;

/**
 * @brief Creates a new instance of scanbotsdk_barcode_scanner_configuration with given params and stores it in the location specified by the last argument.
 * @ingroup c_barcode
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param barcode_format_configurations: Options for barcode decoding.
 * Entries of the array must not be null.
 * @param barcode_format_configurations_size: Size of the array barcode_format_configurations
 * @param extracted_document_formats: List of document formats to be extracted. 
 * Barcodes that decode to one of the extracted document formats will have extractedDocument field in BarcodeItem populated with the parsed document. 
 * By default all supported barcode document formats are accepted. 
 * If empty, no barcodes will be parsed into documents.
 * To only accept the document formats listed in extractedDocumentFormats, the property onlyAcceptDocuments must be true.
 * @param extracted_document_formats_size: Size of the array extracted_document_formats
 * @param only_accept_documents: If true and extractedDocumentFormats is not empty, then barcodes that don't decode to one of the extracted document formats will be ignored.
 * 
 * Default is false
 * @param return_barcode_image: If true, the barcode image will be returned in the BarcodeItem.
 * 
 * Default is false
 * @param accelerator: Accelerator to use for running machine learning models. Is applied only for live mode scanning.
 * The value can be null.
 * @param engine_mode: The engine mode for barcode scanning.
 * 
 * Default is NEXT_GEN
 * @param accumulation_config: Configuration to accumulate barcodes across multiple frames in live mode.
 * The value must not be null.
 * @param optimized_for_overlays: If true, the quads of linear (1D) barcodes will be further refined to more closely match the barcode's outline in the input image.
 * This will also produce stabler barcode outlines across frames for use cases such as AR.
 * 
 * Default is false
 * @param processing_mode: Scanners typically can produce better results from a single image if they are allowed to spend a longer time analyzing it. 
 * 
 * On the other hand, scanners can produce even better results if they can analyze multiple images of the same subject and cross-check and combine the results. 
 * The processing mode tells the scanner whether to optimize for single or multiple images of a subject.
 * 
 * Default is AUTO
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_barcode_scanner_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_scanner_configuration_create(
    scanbotsdk_barcode_format_configuration_base_t** barcode_format_configurations,
    size_t barcode_format_configurations_size,
    scanbotsdk_barcode_document_format_t* extracted_document_formats,
    size_t extracted_document_formats_size,
    bool only_accept_documents,
    bool return_barcode_image,
    scanbotsdk_accelerator_t* accelerator,
    scanbotsdk_barcode_scanner_engine_mode_t engine_mode,
    scanbotsdk_barcode_accumulation_configuration_t* accumulation_config,
    bool optimized_for_overlays,
    scanbotsdk_processing_mode_t processing_mode,
    scanbotsdk_barcode_scanner_configuration_t** result);

/**
 * @brief Creates a new instance of scanbotsdk_barcode_scanner_configuration_t with given required params and stores it in the location specified by the last argument.
 * @ingroup c_barcode
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_barcode_scanner_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_scanner_configuration_create_with_defaults(
    scanbotsdk_barcode_scanner_configuration_t** result);


/**
 * @brief Frees the memory allocated for the instance of scanbotsdk_barcode_scanner_configuration_t. If null is passed, the function does nothing.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_scanner_configuration_t to be freed
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_scanner_configuration_free(scanbotsdk_barcode_scanner_configuration_t* object);

/**
 * @brief Returns value of barcode_format_configurations field of the given object. The returned pointers do NOT own the underlying object, caller must not free them.
 * @ingroup c_barcode
 * @details Options for barcode decoding.
 * @param self: Pointer to the instance of scanbotsdk_barcode_scanner_configuration_t
 @param size: Size of the pre-allocated array. Must be equal to the size obtained by calling the corresponding _size function.
 * @param barcode_format_configurations: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_scanner_configuration_get_barcode_format_configurations(scanbotsdk_barcode_scanner_configuration_t* self, scanbotsdk_barcode_format_configuration_base_t** barcode_format_configurations, size_t size);
/**
 * @brief Returns size of barcode_format_configurations array.
 * @ingroup c_barcode
 * @param self: Pointer to the instance of scanbotsdk_barcode_scanner_configuration_t
 * @param size: Pointer to a variable that will store the size.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_scanner_configuration_get_barcode_format_configurations_size(scanbotsdk_barcode_scanner_configuration_t* self, size_t* size);
/**
 * @brief Sets value of barcode_format_configurations field of the given object.
 * @ingroup c_barcode
 * @details Options for barcode decoding.
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_barcode_scanner_configuration_t, the field of which will be set
 * @param barcode_format_configurations: The value to be set.
 * @param barcode_format_configurations_size: Size of the array.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_scanner_configuration_set_barcode_format_configurations(scanbotsdk_barcode_scanner_configuration_t* self, scanbotsdk_barcode_format_configuration_base_t** barcode_format_configurations, size_t barcode_format_configurations_size);

/**
 * @brief Returns value of extracted_document_formats field of the given object. The returned value is direct view into memory, no pre-allocations needed.
 * @ingroup c_barcode
 * @details List of document formats to be extracted. 
 * Barcodes that decode to one of the extracted document formats will have extractedDocument field in BarcodeItem populated with the parsed document. 
 * By default all supported barcode document formats are accepted. 
 * If empty, no barcodes will be parsed into documents.
 * To only accept the document formats listed in extractedDocumentFormats, the property onlyAcceptDocuments must be true.
 * @param self: Pointer to the instance of scanbotsdk_barcode_scanner_configuration_t
 * @param extracted_document_formats: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_scanner_configuration_get_extracted_document_formats(scanbotsdk_barcode_scanner_configuration_t* self, scanbotsdk_barcode_document_format_t** extracted_document_formats);
/**
 * @brief Returns size of extracted_document_formats array.
 * @ingroup c_barcode
 * @param self: Pointer to the instance of scanbotsdk_barcode_scanner_configuration_t
 * @param size: Pointer to a variable that will store the size.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_scanner_configuration_get_extracted_document_formats_size(scanbotsdk_barcode_scanner_configuration_t* self, size_t* size);
/**
 * @brief Sets value of extracted_document_formats field of the given object.
 * @ingroup c_barcode
 * @details List of document formats to be extracted. 
 * Barcodes that decode to one of the extracted document formats will have extractedDocument field in BarcodeItem populated with the parsed document. 
 * By default all supported barcode document formats are accepted. 
 * If empty, no barcodes will be parsed into documents.
 * To only accept the document formats listed in extractedDocumentFormats, the property onlyAcceptDocuments must be true.
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_barcode_scanner_configuration_t, the field of which will be set
 * @param extracted_document_formats: The value to be set.
 * @param extracted_document_formats_size: Size of the array.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_scanner_configuration_set_extracted_document_formats(scanbotsdk_barcode_scanner_configuration_t* self, scanbotsdk_barcode_document_format_t* extracted_document_formats, size_t extracted_document_formats_size);

/**
 * @brief Returns value of only_accept_documents field of the given object.
 * @ingroup c_barcode
 * @details If true and extractedDocumentFormats is not empty, then barcodes that don't decode to one of the extracted document formats will be ignored.
 * 
 * Default is false
 * @param self: Pointer to the instance of scanbotsdk_barcode_scanner_configuration_t
 * @param only_accept_documents: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_scanner_configuration_get_only_accept_documents(scanbotsdk_barcode_scanner_configuration_t* self, bool* only_accept_documents);
/**
 * @brief Sets value of only_accept_documents field of the given object.
 * @ingroup c_barcode
 * @details If true and extractedDocumentFormats is not empty, then barcodes that don't decode to one of the extracted document formats will be ignored.
 * 
 * Default is false
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_barcode_scanner_configuration_t, the field of which will be set
 * @param only_accept_documents: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_scanner_configuration_set_only_accept_documents(scanbotsdk_barcode_scanner_configuration_t* self, bool only_accept_documents);

/**
 * @brief Returns value of return_barcode_image field of the given object.
 * @ingroup c_barcode
 * @details If true, the barcode image will be returned in the BarcodeItem.
 * 
 * Default is false
 * @param self: Pointer to the instance of scanbotsdk_barcode_scanner_configuration_t
 * @param return_barcode_image: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_scanner_configuration_get_return_barcode_image(scanbotsdk_barcode_scanner_configuration_t* self, bool* return_barcode_image);
/**
 * @brief Sets value of return_barcode_image field of the given object.
 * @ingroup c_barcode
 * @details If true, the barcode image will be returned in the BarcodeItem.
 * 
 * Default is false
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_barcode_scanner_configuration_t, the field of which will be set
 * @param return_barcode_image: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_scanner_configuration_set_return_barcode_image(scanbotsdk_barcode_scanner_configuration_t* self, bool return_barcode_image);

/**
 * @brief Returns value of accelerator field of the given object. The returned pointers do NOT own the underlying object, caller must not free them.
 * @ingroup c_barcode
 * @details Accelerator to use for running machine learning models. Is applied only for live mode scanning.
 * @param self: Pointer to the instance of scanbotsdk_barcode_scanner_configuration_t
 * @param accelerator: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_scanner_configuration_get_accelerator(scanbotsdk_barcode_scanner_configuration_t* self, scanbotsdk_accelerator_t** accelerator);
/**
 * @brief Sets value of accelerator field of the given object.
 * @ingroup c_barcode
 * @details Accelerator to use for running machine learning models. Is applied only for live mode scanning.
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_barcode_scanner_configuration_t, the field of which will be set
 * @param accelerator: The value to be set. Can be null.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_scanner_configuration_set_accelerator(scanbotsdk_barcode_scanner_configuration_t* self, scanbotsdk_accelerator_t* accelerator);

/**
 * @brief Returns value of engine_mode field of the given object.
 * @ingroup c_barcode
 * @details The engine mode for barcode scanning.
 * 
 * Default is NEXT_GEN
 * @param self: Pointer to the instance of scanbotsdk_barcode_scanner_configuration_t
 * @param engine_mode: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_scanner_configuration_get_engine_mode(scanbotsdk_barcode_scanner_configuration_t* self, scanbotsdk_barcode_scanner_engine_mode_t* engine_mode);
/**
 * @brief Sets value of engine_mode field of the given object.
 * @ingroup c_barcode
 * @details The engine mode for barcode scanning.
 * 
 * Default is NEXT_GEN
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_barcode_scanner_configuration_t, the field of which will be set
 * @param engine_mode: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_scanner_configuration_set_engine_mode(scanbotsdk_barcode_scanner_configuration_t* self, scanbotsdk_barcode_scanner_engine_mode_t engine_mode);

/**
 * @brief Returns value of accumulation_config field of the given object. The returned pointers do NOT own the underlying object, caller must not free them.
 * @ingroup c_barcode
 * @details Configuration to accumulate barcodes across multiple frames in live mode.
 * @param self: Pointer to the instance of scanbotsdk_barcode_scanner_configuration_t
 * @param accumulation_config: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_scanner_configuration_get_accumulation_config(scanbotsdk_barcode_scanner_configuration_t* self, scanbotsdk_barcode_accumulation_configuration_t** accumulation_config);
/**
 * @brief Sets value of accumulation_config field of the given object.
 * @ingroup c_barcode
 * @details Configuration to accumulate barcodes across multiple frames in live mode.
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_barcode_scanner_configuration_t, the field of which will be set
 * @param accumulation_config: The value to be set. Must not be null.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_scanner_configuration_set_accumulation_config(scanbotsdk_barcode_scanner_configuration_t* self, scanbotsdk_barcode_accumulation_configuration_t* accumulation_config);

/**
 * @brief Returns value of optimized_for_overlays field of the given object.
 * @ingroup c_barcode
 * @details If true, the quads of linear (1D) barcodes will be further refined to more closely match the barcode's outline in the input image.
 * This will also produce stabler barcode outlines across frames for use cases such as AR.
 * 
 * Default is false
 * @param self: Pointer to the instance of scanbotsdk_barcode_scanner_configuration_t
 * @param optimized_for_overlays: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_scanner_configuration_get_optimized_for_overlays(scanbotsdk_barcode_scanner_configuration_t* self, bool* optimized_for_overlays);
/**
 * @brief Sets value of optimized_for_overlays field of the given object.
 * @ingroup c_barcode
 * @details If true, the quads of linear (1D) barcodes will be further refined to more closely match the barcode's outline in the input image.
 * This will also produce stabler barcode outlines across frames for use cases such as AR.
 * 
 * Default is false
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_barcode_scanner_configuration_t, the field of which will be set
 * @param optimized_for_overlays: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_scanner_configuration_set_optimized_for_overlays(scanbotsdk_barcode_scanner_configuration_t* self, bool optimized_for_overlays);

/**
 * @brief Returns value of processing_mode field of the given object.
 * @ingroup c_barcode
 * @details Scanners typically can produce better results from a single image if they are allowed to spend a longer time analyzing it. 
 * 
 * On the other hand, scanners can produce even better results if they can analyze multiple images of the same subject and cross-check and combine the results. 
 * The processing mode tells the scanner whether to optimize for single or multiple images of a subject.
 * 
 * Default is AUTO
 * @param self: Pointer to the instance of scanbotsdk_barcode_scanner_configuration_t
 * @param processing_mode: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_scanner_configuration_get_processing_mode(scanbotsdk_barcode_scanner_configuration_t* self, scanbotsdk_processing_mode_t* processing_mode);
/**
 * @brief Sets value of processing_mode field of the given object.
 * @ingroup c_barcode
 * @details Scanners typically can produce better results from a single image if they are allowed to spend a longer time analyzing it. 
 * 
 * On the other hand, scanners can produce even better results if they can analyze multiple images of the same subject and cross-check and combine the results. 
 * The processing mode tells the scanner whether to optimize for single or multiple images of a subject.
 * 
 * Default is AUTO
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_barcode_scanner_configuration_t, the field of which will be set
 * @param processing_mode: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_scanner_configuration_set_processing_mode(scanbotsdk_barcode_scanner_configuration_t* self, scanbotsdk_processing_mode_t processing_mode);


/**
 * @brief scanbotsdk_barcode_scanner_result_t class
 * @details The result of barcode scanning.
 * @ingroup c_barcode
*/
typedef struct scanbotsdk_barcode_scanner_result_t scanbotsdk_barcode_scanner_result_t;

/**
 * @brief Frees the memory allocated for the instance of scanbotsdk_barcode_scanner_result_t. If null is passed, the function does nothing.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_scanner_result_t to be freed
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_scanner_result_free(scanbotsdk_barcode_scanner_result_t* object);

/**
 * @brief Returns value of barcodes field of the given object. The returned pointers do NOT own the underlying object, caller must not free them.
 * @ingroup c_barcode
 * @details List of found barcodes.
 * @param self: Pointer to the instance of scanbotsdk_barcode_scanner_result_t
 @param size: Size of the pre-allocated array. Must be equal to the size obtained by calling the corresponding _size function.
 * @param barcodes: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_scanner_result_get_barcodes(scanbotsdk_barcode_scanner_result_t* self, scanbotsdk_barcode_item_t** barcodes, size_t size);
/**
 * @brief Returns size of barcodes array.
 * @ingroup c_barcode
 * @param self: Pointer to the instance of scanbotsdk_barcode_scanner_result_t
 * @param size: Pointer to a variable that will store the size.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_scanner_result_get_barcodes_size(scanbotsdk_barcode_scanner_result_t* self, size_t* size);

/**
 * @brief Returns value of success field of the given object.
 * @ingroup c_barcode
 * @details True if any barcodes were found.
 * @param self: Pointer to the instance of scanbotsdk_barcode_scanner_result_t
 * @param success: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_scanner_result_get_success(scanbotsdk_barcode_scanner_result_t* self, bool* success);


#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* SCANBOTSDK_BARCODESCANNERTYPES_H */