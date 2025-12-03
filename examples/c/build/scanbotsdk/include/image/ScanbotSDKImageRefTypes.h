// Auto-generated with ScanbotSDKCodegenV3. Modifications will be overwritten.
// Generated from SchemasV3/CoreSchemas/schemas/ImageRefTypes.yaml
/**
 * @file ScanbotSDKImageRefTypes.h
 */

#pragma once
#ifndef SCANBOTSDK_IMAGEREFTYPES_H
#define SCANBOTSDK_IMAGEREFTYPES_H


#include <ScanbotSDKTypes.h>
#include <image/ScanbotSDKImageTypes.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <string.h>
#include <utils/ScanbotSDKObjectPoolTypes.h>
#include <ScanbotSDKErrorCode.h>
#include <ScanbotSDKDefs.h>

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief scanbotsdk_color_conversion_t enum
 * @details Color conversion to apply during image loading.
 * @ingroup c_image
*/
typedef enum scanbotsdk_color_conversion_t {

    /**Load image as grayscale.*/
    SCANBOTSDK_COLOR_CONVERSION_GRAY = 0,

    /**Load image as 3-channel BGR.*/
    SCANBOTSDK_COLOR_CONVERSION_COLOR = 1,

    /**Load image as 3-channel BGR if the source color space is color, otherwise as single-channel grayscale. Alpha channel is discarded.*/
    SCANBOTSDK_COLOR_CONVERSION_ANY_COLOR = 2,

    /**Load image as-is, preserving the alpha channel if it exists.*/
    SCANBOTSDK_COLOR_CONVERSION_UNCHANGED = 3,

} scanbotsdk_color_conversion_t;

/**
 * @brief Returns the string representation of the given scanbotsdk_color_conversion_t value.
 * @ingroup c_image
 * @details The returned string doesn't need to be freed.
 * @param value: The value to be converted to string.
 * @param result: Pointer to a variable that will store the string representation of the value.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_color_conversion_t_to_string(scanbotsdk_color_conversion_t value, const char** result);

/**
 * @brief scanbotsdk_image_info_t class
 * @details Image Info.
 * @ingroup c_image
*/
typedef struct scanbotsdk_image_info_t scanbotsdk_image_info_t;

/**
 * @brief Frees the memory allocated for the instance of scanbotsdk_image_info_t. If null is passed, the function does nothing.
 * @ingroup c_image
 * @param object: Pointer to the instance of scanbotsdk_image_info_t to be freed
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_image_info_free(scanbotsdk_image_info_t* object);

/**
 * @brief Returns value of height field of the given object.
 * @ingroup c_image
 * @details Image height in pixels.
 * @param self: Pointer to the instance of scanbotsdk_image_info_t
 * @param height: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_image_info_get_height(scanbotsdk_image_info_t* self, int* height);
/**
 * @brief Sets value of height field of the given object.
 * @ingroup c_image
 * @details Image height in pixels.
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_image_info_t, the field of which will be set
 * @param height: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_image_info_set_height(scanbotsdk_image_info_t* self, int height);

/**
 * @brief Returns value of width field of the given object.
 * @ingroup c_image
 * @details Image width in pixels.
 * @param self: Pointer to the instance of scanbotsdk_image_info_t
 * @param width: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_image_info_get_width(scanbotsdk_image_info_t* self, int* width);
/**
 * @brief Sets value of width field of the given object.
 * @ingroup c_image
 * @details Image width in pixels.
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_image_info_t, the field of which will be set
 * @param width: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_image_info_set_width(scanbotsdk_image_info_t* self, int width);

/**
 * @brief Returns value of max_byte_size field of the given object.
 * @ingroup c_image
 * @details Byte size of the non-hibernating image.
 * @param self: Pointer to the instance of scanbotsdk_image_info_t
 * @param max_byte_size: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_image_info_get_max_byte_size(scanbotsdk_image_info_t* self, int* max_byte_size);
/**
 * @brief Sets value of max_byte_size field of the given object.
 * @ingroup c_image
 * @details Byte size of the non-hibernating image.
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_image_info_t, the field of which will be set
 * @param max_byte_size: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_image_info_set_max_byte_size(scanbotsdk_image_info_t* self, int max_byte_size);


/**
 * @brief scanbotsdk_path_load_mode_t enum
 * @details Image Ref Path Load Mode.
 * @ingroup c_image
*/
typedef enum scanbotsdk_path_load_mode_t {

    /**Image is immediately loaded into memory.*/
    SCANBOTSDK_PATH_LOAD_MODE_EAGER = 0,

    /**Image is loaded into memory the first time it's requested. Specified path must exist at the time of loading.*/
    SCANBOTSDK_PATH_LOAD_MODE_LAZY = 1,

    /**Image is loaded into memory the first time it's requested. Specified path is copied into internal directory and so isn't required to exist at the time of loading.*/
    SCANBOTSDK_PATH_LOAD_MODE_LAZY_WITH_COPY = 2,

} scanbotsdk_path_load_mode_t;

/**
 * @brief Returns the string representation of the given scanbotsdk_path_load_mode_t value.
 * @ingroup c_image
 * @details The returned string doesn't need to be freed.
 * @param value: The value to be converted to string.
 * @param result: Pointer to a variable that will store the string representation of the value.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_path_load_mode_t_to_string(scanbotsdk_path_load_mode_t value, const char** result);

/**
 * @brief scanbotsdk_buffer_load_mode_t enum
 * @details Image Ref Buffer Load Mode.
 * @ingroup c_image
*/
typedef enum scanbotsdk_buffer_load_mode_t {

    /**Image is immediately decoded.*/
    SCANBOTSDK_BUFFER_LOAD_MODE_EAGER = 0,

    /**Image is decoded the first time it's requested.*/
    SCANBOTSDK_BUFFER_LOAD_MODE_LAZY = 1,

} scanbotsdk_buffer_load_mode_t;

/**
 * @brief Returns the string representation of the given scanbotsdk_buffer_load_mode_t value.
 * @ingroup c_image
 * @details The returned string doesn't need to be freed.
 * @param value: The value to be converted to string.
 * @param result: Pointer to a variable that will store the string representation of the value.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_buffer_load_mode_t_to_string(scanbotsdk_buffer_load_mode_t value, const char** result);

/**
 * @brief scanbotsdk_encoding_format_t enum
 * @details Image Encoding Format.
 * @ingroup c_image
*/
typedef enum scanbotsdk_encoding_format_t {

    /**JPEG encoding.*/
    SCANBOTSDK_ENCODING_FORMAT_JPEG = 0,

    /**PNG encoding.*/
    SCANBOTSDK_ENCODING_FORMAT_PNG = 1,

} scanbotsdk_encoding_format_t;

/**
 * @brief Returns the string representation of the given scanbotsdk_encoding_format_t value.
 * @ingroup c_image
 * @details The returned string doesn't need to be freed.
 * @param value: The value to be converted to string.
 * @param result: Pointer to a variable that will store the string representation of the value.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_encoding_format_t_to_string(scanbotsdk_encoding_format_t value, const char** result);

/**
 * @brief scanbotsdk_basic_image_load_options_t class
 * @details Basic options for loading image.
 * @ingroup c_image
*/
typedef struct scanbotsdk_basic_image_load_options_t scanbotsdk_basic_image_load_options_t;

/**
 * @brief Creates a new instance of scanbotsdk_basic_image_load_options with given params and stores it in the location specified by the last argument.
 * @ingroup c_image
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param crop_rect: If the rect is not empty, the image will be cropped to this rect before processing.
 * @param live_source: True if the image should be processed in live mode by scanners configured with ProcessingMode.AUTO. Should be set to true for images that come from some video stream, e.g. from the camera or a video file.
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_basic_image_load_options_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_basic_image_load_options_create(
    scanbotsdk_rect_t crop_rect,
    bool live_source,
    scanbotsdk_basic_image_load_options_t** result);

/**
 * @brief Creates a new instance of scanbotsdk_basic_image_load_options_t with given required params and stores it in the location specified by the last argument.
 * @ingroup c_image
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param live_source: True if the image should be processed in live mode by scanners configured with ProcessingMode.AUTO. Should be set to true for images that come from some video stream, e.g. from the camera or a video file.
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_basic_image_load_options_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_basic_image_load_options_create_with_defaults(
    bool live_source,
    scanbotsdk_basic_image_load_options_t** result);


/**
 * @brief Frees the memory allocated for the instance of scanbotsdk_basic_image_load_options_t. If null is passed, the function does nothing.
 * @ingroup c_image
 * @param object: Pointer to the instance of scanbotsdk_basic_image_load_options_t to be freed
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_basic_image_load_options_free(scanbotsdk_basic_image_load_options_t* object);

/**
 * @brief Returns value of crop_rect field of the given object.
 * @ingroup c_image
 * @details If the rect is not empty, the image will be cropped to this rect before processing.
 * @param self: Pointer to the instance of scanbotsdk_basic_image_load_options_t
 * @param crop_rect: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_basic_image_load_options_get_crop_rect(scanbotsdk_basic_image_load_options_t* self, scanbotsdk_rect_t* crop_rect);
/**
 * @brief Sets value of crop_rect field of the given object.
 * @ingroup c_image
 * @details If the rect is not empty, the image will be cropped to this rect before processing.
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_basic_image_load_options_t, the field of which will be set
 * @param crop_rect: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_basic_image_load_options_set_crop_rect(scanbotsdk_basic_image_load_options_t* self, scanbotsdk_rect_t crop_rect);

/**
 * @brief Returns value of live_source field of the given object.
 * @ingroup c_image
 * @details True if the image should be processed in live mode by scanners configured with ProcessingMode.AUTO. Should be set to true for images that come from some video stream, e.g. from the camera or a video file.
 * @param self: Pointer to the instance of scanbotsdk_basic_image_load_options_t
 * @param live_source: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_basic_image_load_options_get_live_source(scanbotsdk_basic_image_load_options_t* self, bool* live_source);
/**
 * @brief Sets value of live_source field of the given object.
 * @ingroup c_image
 * @details True if the image should be processed in live mode by scanners configured with ProcessingMode.AUTO. Should be set to true for images that come from some video stream, e.g. from the camera or a video file.
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_basic_image_load_options_t, the field of which will be set
 * @param live_source: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_basic_image_load_options_set_live_source(scanbotsdk_basic_image_load_options_t* self, bool live_source);


/**
 * @brief scanbotsdk_raw_image_load_options_t class
 * @details Options for loading images that come from sensor.
 * @ingroup c_image
*/
typedef struct scanbotsdk_raw_image_load_options_t scanbotsdk_raw_image_load_options_t;

/**
 * @brief Creates a new instance of scanbotsdk_raw_image_load_options with given params and stores it in the location specified by the last argument.
 * @ingroup c_image
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param crop_rect: If the rect is not empty, the image will be cropped to this rect before processing.
 * @param live_source: True if the image should be processed in live mode by scanners configured with ProcessingMode.AUTO. Should be set to true for images that come from some video stream, e.g. from the camera or a video file.
 * @param origin: Location of the image origin in the image coordinate system. 
 * During loading images are flipped such that after the flip their new origin is in their top-left corner. 
 * For example, an image coming from the front camera might have its origin set to the top-right, which will flip it along its vertical axis to create a mirror effect.
 * 
 * The origin is interpreted net of the image orientation. The origin rotates together with the image. The origin value is interpreted and the resulting flip executed AFTER the image matrix has been reoriented to have a neutral orientation.
 * 
 * Default is TOP_LEFT
 * @param orientation: Rotation that should be applied to the image to recover correct orientation. Is applied before cropping.
 * 
 * Default is NONE
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_raw_image_load_options_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_raw_image_load_options_create(
    scanbotsdk_rect_t crop_rect,
    bool live_source,
    scanbotsdk_image_origin_t origin,
    scanbotsdk_image_rotation_t orientation,
    scanbotsdk_raw_image_load_options_t** result);

/**
 * @brief Creates a new instance of scanbotsdk_raw_image_load_options_t with given required params and stores it in the location specified by the last argument.
 * @ingroup c_image
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param live_source: True if the image should be processed in live mode by scanners configured with ProcessingMode.AUTO. Should be set to true for images that come from some video stream, e.g. from the camera or a video file.
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_raw_image_load_options_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_raw_image_load_options_create_with_defaults(
    bool live_source,
    scanbotsdk_raw_image_load_options_t** result);


/**
 * @brief Frees the memory allocated for the instance of scanbotsdk_raw_image_load_options_t. If null is passed, the function does nothing.
 * @ingroup c_image
 * @param object: Pointer to the instance of scanbotsdk_raw_image_load_options_t to be freed
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_raw_image_load_options_free(scanbotsdk_raw_image_load_options_t* object);

/**
 * @brief Returns value of crop_rect field of the given object.
 * @ingroup c_image
 * @details If the rect is not empty, the image will be cropped to this rect before processing.
 * @param self: Pointer to the instance of scanbotsdk_raw_image_load_options_t
 * @param crop_rect: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_raw_image_load_options_get_crop_rect(scanbotsdk_raw_image_load_options_t* self, scanbotsdk_rect_t* crop_rect);
/**
 * @brief Sets value of crop_rect field of the given object.
 * @ingroup c_image
 * @details If the rect is not empty, the image will be cropped to this rect before processing.
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_raw_image_load_options_t, the field of which will be set
 * @param crop_rect: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_raw_image_load_options_set_crop_rect(scanbotsdk_raw_image_load_options_t* self, scanbotsdk_rect_t crop_rect);

/**
 * @brief Returns value of live_source field of the given object.
 * @ingroup c_image
 * @details True if the image should be processed in live mode by scanners configured with ProcessingMode.AUTO. Should be set to true for images that come from some video stream, e.g. from the camera or a video file.
 * @param self: Pointer to the instance of scanbotsdk_raw_image_load_options_t
 * @param live_source: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_raw_image_load_options_get_live_source(scanbotsdk_raw_image_load_options_t* self, bool* live_source);
/**
 * @brief Sets value of live_source field of the given object.
 * @ingroup c_image
 * @details True if the image should be processed in live mode by scanners configured with ProcessingMode.AUTO. Should be set to true for images that come from some video stream, e.g. from the camera or a video file.
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_raw_image_load_options_t, the field of which will be set
 * @param live_source: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_raw_image_load_options_set_live_source(scanbotsdk_raw_image_load_options_t* self, bool live_source);

/**
 * @brief Returns value of origin field of the given object.
 * @ingroup c_image
 * @details Location of the image origin in the image coordinate system. 
 * During loading images are flipped such that after the flip their new origin is in their top-left corner. 
 * For example, an image coming from the front camera might have its origin set to the top-right, which will flip it along its vertical axis to create a mirror effect.
 * 
 * The origin is interpreted net of the image orientation. The origin rotates together with the image. The origin value is interpreted and the resulting flip executed AFTER the image matrix has been reoriented to have a neutral orientation.
 * 
 * Default is TOP_LEFT
 * @param self: Pointer to the instance of scanbotsdk_raw_image_load_options_t
 * @param origin: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_raw_image_load_options_get_origin(scanbotsdk_raw_image_load_options_t* self, scanbotsdk_image_origin_t* origin);
/**
 * @brief Sets value of origin field of the given object.
 * @ingroup c_image
 * @details Location of the image origin in the image coordinate system. 
 * During loading images are flipped such that after the flip their new origin is in their top-left corner. 
 * For example, an image coming from the front camera might have its origin set to the top-right, which will flip it along its vertical axis to create a mirror effect.
 * 
 * The origin is interpreted net of the image orientation. The origin rotates together with the image. The origin value is interpreted and the resulting flip executed AFTER the image matrix has been reoriented to have a neutral orientation.
 * 
 * Default is TOP_LEFT
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_raw_image_load_options_t, the field of which will be set
 * @param origin: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_raw_image_load_options_set_origin(scanbotsdk_raw_image_load_options_t* self, scanbotsdk_image_origin_t origin);

/**
 * @brief Returns value of orientation field of the given object.
 * @ingroup c_image
 * @details Rotation that should be applied to the image to recover correct orientation. Is applied before cropping.
 * 
 * Default is NONE
 * @param self: Pointer to the instance of scanbotsdk_raw_image_load_options_t
 * @param orientation: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_raw_image_load_options_get_orientation(scanbotsdk_raw_image_load_options_t* self, scanbotsdk_image_rotation_t* orientation);
/**
 * @brief Sets value of orientation field of the given object.
 * @ingroup c_image
 * @details Rotation that should be applied to the image to recover correct orientation. Is applied before cropping.
 * 
 * Default is NONE
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_raw_image_load_options_t, the field of which will be set
 * @param orientation: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_raw_image_load_options_set_orientation(scanbotsdk_raw_image_load_options_t* self, scanbotsdk_image_rotation_t orientation);


/**
 * @brief scanbotsdk_path_image_load_options_t class
 * @details Options for loading image from path.
 * @ingroup c_image
*/
typedef struct scanbotsdk_path_image_load_options_t scanbotsdk_path_image_load_options_t;

/**
 * @brief Creates a new instance of scanbotsdk_path_image_load_options with given params and stores it in the location specified by the last argument.
 * @ingroup c_image
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param crop_rect: If the rect is not empty, the image will be cropped to this rect before processing.
 * @param color_conversion: Color conversion to apply during image loading.
 * 
 * Default is ANY_COLOR
 * @param load_mode: Load mode.
 * 
 * Default is EAGER
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_path_image_load_options_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_path_image_load_options_create(
    scanbotsdk_rect_t crop_rect,
    scanbotsdk_color_conversion_t color_conversion,
    scanbotsdk_path_load_mode_t load_mode,
    scanbotsdk_path_image_load_options_t** result);

/**
 * @brief Creates a new instance of scanbotsdk_path_image_load_options_t with given required params and stores it in the location specified by the last argument.
 * @ingroup c_image
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_path_image_load_options_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_path_image_load_options_create_with_defaults(
    scanbotsdk_path_image_load_options_t** result);


/**
 * @brief Frees the memory allocated for the instance of scanbotsdk_path_image_load_options_t. If null is passed, the function does nothing.
 * @ingroup c_image
 * @param object: Pointer to the instance of scanbotsdk_path_image_load_options_t to be freed
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_path_image_load_options_free(scanbotsdk_path_image_load_options_t* object);

/**
 * @brief Returns value of crop_rect field of the given object.
 * @ingroup c_image
 * @details If the rect is not empty, the image will be cropped to this rect before processing.
 * @param self: Pointer to the instance of scanbotsdk_path_image_load_options_t
 * @param crop_rect: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_path_image_load_options_get_crop_rect(scanbotsdk_path_image_load_options_t* self, scanbotsdk_rect_t* crop_rect);
/**
 * @brief Sets value of crop_rect field of the given object.
 * @ingroup c_image
 * @details If the rect is not empty, the image will be cropped to this rect before processing.
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_path_image_load_options_t, the field of which will be set
 * @param crop_rect: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_path_image_load_options_set_crop_rect(scanbotsdk_path_image_load_options_t* self, scanbotsdk_rect_t crop_rect);

/**
 * @brief Returns value of color_conversion field of the given object.
 * @ingroup c_image
 * @details Color conversion to apply during image loading.
 * 
 * Default is ANY_COLOR
 * @param self: Pointer to the instance of scanbotsdk_path_image_load_options_t
 * @param color_conversion: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_path_image_load_options_get_color_conversion(scanbotsdk_path_image_load_options_t* self, scanbotsdk_color_conversion_t* color_conversion);
/**
 * @brief Sets value of color_conversion field of the given object.
 * @ingroup c_image
 * @details Color conversion to apply during image loading.
 * 
 * Default is ANY_COLOR
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_path_image_load_options_t, the field of which will be set
 * @param color_conversion: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_path_image_load_options_set_color_conversion(scanbotsdk_path_image_load_options_t* self, scanbotsdk_color_conversion_t color_conversion);

/**
 * @brief Returns value of load_mode field of the given object.
 * @ingroup c_image
 * @details Load mode.
 * 
 * Default is EAGER
 * @param self: Pointer to the instance of scanbotsdk_path_image_load_options_t
 * @param load_mode: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_path_image_load_options_get_load_mode(scanbotsdk_path_image_load_options_t* self, scanbotsdk_path_load_mode_t* load_mode);
/**
 * @brief Sets value of load_mode field of the given object.
 * @ingroup c_image
 * @details Load mode.
 * 
 * Default is EAGER
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_path_image_load_options_t, the field of which will be set
 * @param load_mode: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_path_image_load_options_set_load_mode(scanbotsdk_path_image_load_options_t* self, scanbotsdk_path_load_mode_t load_mode);


/**
 * @brief scanbotsdk_buffer_image_load_options_t class
 * @details Options for loading image from buffer.
 * @ingroup c_image
*/
typedef struct scanbotsdk_buffer_image_load_options_t scanbotsdk_buffer_image_load_options_t;

/**
 * @brief Creates a new instance of scanbotsdk_buffer_image_load_options with given params and stores it in the location specified by the last argument.
 * @ingroup c_image
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param crop_rect: If the rect is not empty, the image will be cropped to this rect before processing.
 * @param color_conversion: Color conversion to apply during image loading.
 * 
 * Default is ANY_COLOR
 * @param load_mode: Load mode.
 * 
 * Default is EAGER
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_buffer_image_load_options_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_buffer_image_load_options_create(
    scanbotsdk_rect_t crop_rect,
    scanbotsdk_color_conversion_t color_conversion,
    scanbotsdk_buffer_load_mode_t load_mode,
    scanbotsdk_buffer_image_load_options_t** result);

/**
 * @brief Creates a new instance of scanbotsdk_buffer_image_load_options_t with given required params and stores it in the location specified by the last argument.
 * @ingroup c_image
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_buffer_image_load_options_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_buffer_image_load_options_create_with_defaults(
    scanbotsdk_buffer_image_load_options_t** result);


/**
 * @brief Frees the memory allocated for the instance of scanbotsdk_buffer_image_load_options_t. If null is passed, the function does nothing.
 * @ingroup c_image
 * @param object: Pointer to the instance of scanbotsdk_buffer_image_load_options_t to be freed
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_buffer_image_load_options_free(scanbotsdk_buffer_image_load_options_t* object);

/**
 * @brief Returns value of crop_rect field of the given object.
 * @ingroup c_image
 * @details If the rect is not empty, the image will be cropped to this rect before processing.
 * @param self: Pointer to the instance of scanbotsdk_buffer_image_load_options_t
 * @param crop_rect: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_buffer_image_load_options_get_crop_rect(scanbotsdk_buffer_image_load_options_t* self, scanbotsdk_rect_t* crop_rect);
/**
 * @brief Sets value of crop_rect field of the given object.
 * @ingroup c_image
 * @details If the rect is not empty, the image will be cropped to this rect before processing.
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_buffer_image_load_options_t, the field of which will be set
 * @param crop_rect: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_buffer_image_load_options_set_crop_rect(scanbotsdk_buffer_image_load_options_t* self, scanbotsdk_rect_t crop_rect);

/**
 * @brief Returns value of color_conversion field of the given object.
 * @ingroup c_image
 * @details Color conversion to apply during image loading.
 * 
 * Default is ANY_COLOR
 * @param self: Pointer to the instance of scanbotsdk_buffer_image_load_options_t
 * @param color_conversion: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_buffer_image_load_options_get_color_conversion(scanbotsdk_buffer_image_load_options_t* self, scanbotsdk_color_conversion_t* color_conversion);
/**
 * @brief Sets value of color_conversion field of the given object.
 * @ingroup c_image
 * @details Color conversion to apply during image loading.
 * 
 * Default is ANY_COLOR
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_buffer_image_load_options_t, the field of which will be set
 * @param color_conversion: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_buffer_image_load_options_set_color_conversion(scanbotsdk_buffer_image_load_options_t* self, scanbotsdk_color_conversion_t color_conversion);

/**
 * @brief Returns value of load_mode field of the given object.
 * @ingroup c_image
 * @details Load mode.
 * 
 * Default is EAGER
 * @param self: Pointer to the instance of scanbotsdk_buffer_image_load_options_t
 * @param load_mode: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_buffer_image_load_options_get_load_mode(scanbotsdk_buffer_image_load_options_t* self, scanbotsdk_buffer_load_mode_t* load_mode);
/**
 * @brief Sets value of load_mode field of the given object.
 * @ingroup c_image
 * @details Load mode.
 * 
 * Default is EAGER
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_buffer_image_load_options_t, the field of which will be set
 * @param load_mode: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_buffer_image_load_options_set_load_mode(scanbotsdk_buffer_image_load_options_t* self, scanbotsdk_buffer_load_mode_t load_mode);


/**
 * @brief scanbotsdk_save_image_options_t class
 * @details Options for saving image to a path.
 * @ingroup c_image
*/
typedef struct scanbotsdk_save_image_options_t scanbotsdk_save_image_options_t;

/**
 * @brief Creates a new instance of scanbotsdk_save_image_options with given params and stores it in the location specified by the last argument.
 * @ingroup c_image
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param quality: Quality parameter is for jpeg only and is in range 0 to 100. If -1, then settings from hibernation are used.
 * In case when the Image Ref was created with a lazy load mode and originally has the same format as the requested to save,
 * then setting quality to -1 leads to simply copying from source to destination,
 * which is time efficient and prevents quality loss caused by jpeg encoding/decoding.
 * 
 * Default is -1
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_save_image_options_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_save_image_options_create(
    int quality,
    scanbotsdk_save_image_options_t** result);

/**
 * @brief Creates a new instance of scanbotsdk_save_image_options_t with given required params and stores it in the location specified by the last argument.
 * @ingroup c_image
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_save_image_options_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_save_image_options_create_with_defaults(
    scanbotsdk_save_image_options_t** result);


/**
 * @brief Frees the memory allocated for the instance of scanbotsdk_save_image_options_t. If null is passed, the function does nothing.
 * @ingroup c_image
 * @param object: Pointer to the instance of scanbotsdk_save_image_options_t to be freed
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_save_image_options_free(scanbotsdk_save_image_options_t* object);

/**
 * @brief Returns value of quality field of the given object.
 * @ingroup c_image
 * @details Quality parameter is for jpeg only and is in range 0 to 100. If -1, then settings from hibernation are used.
 * In case when the Image Ref was created with a lazy load mode and originally has the same format as the requested to save,
 * then setting quality to -1 leads to simply copying from source to destination,
 * which is time efficient and prevents quality loss caused by jpeg encoding/decoding.
 * 
 * Default is -1
 * @param self: Pointer to the instance of scanbotsdk_save_image_options_t
 * @param quality: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_save_image_options_get_quality(scanbotsdk_save_image_options_t* self, int* quality);
/**
 * @brief Sets value of quality field of the given object.
 * @ingroup c_image
 * @details Quality parameter is for jpeg only and is in range 0 to 100. If -1, then settings from hibernation are used.
 * In case when the Image Ref was created with a lazy load mode and originally has the same format as the requested to save,
 * then setting quality to -1 leads to simply copying from source to destination,
 * which is time efficient and prevents quality loss caused by jpeg encoding/decoding.
 * 
 * Default is -1
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_save_image_options_t, the field of which will be set
 * @param quality: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_save_image_options_set_quality(scanbotsdk_save_image_options_t* self, int quality);


/**
 * @brief scanbotsdk_encode_image_options_t class
 * @details Options for encoding image.
 * @ingroup c_image
*/
typedef struct scanbotsdk_encode_image_options_t scanbotsdk_encode_image_options_t;

/**
 * @brief Creates a new instance of scanbotsdk_encode_image_options with given params and stores it in the location specified by the last argument.
 * @ingroup c_image
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param quality: Quality parameter is for jpeg only and is in range 0 to 100. If -1, then settings from hibernation are used.
 * In case when the Image Ref was created with a lazy load mode and originally has the same format as the requested to save,
 * then setting quality to -1 leads to simply copying from source to destination,
 * which is time efficient and prevents quality loss caused by jpeg encoding/decoding.
 * 
 * Default is -1
 * @param format: Image format.
 * 
 * Default is JPEG
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_encode_image_options_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_encode_image_options_create(
    int quality,
    scanbotsdk_encoding_format_t format,
    scanbotsdk_encode_image_options_t** result);

/**
 * @brief Creates a new instance of scanbotsdk_encode_image_options_t with given required params and stores it in the location specified by the last argument.
 * @ingroup c_image
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_encode_image_options_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_encode_image_options_create_with_defaults(
    scanbotsdk_encode_image_options_t** result);


/**
 * @brief Frees the memory allocated for the instance of scanbotsdk_encode_image_options_t. If null is passed, the function does nothing.
 * @ingroup c_image
 * @param object: Pointer to the instance of scanbotsdk_encode_image_options_t to be freed
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_encode_image_options_free(scanbotsdk_encode_image_options_t* object);

/**
 * @brief Returns value of quality field of the given object.
 * @ingroup c_image
 * @details Quality parameter is for jpeg only and is in range 0 to 100. If -1, then settings from hibernation are used.
 * In case when the Image Ref was created with a lazy load mode and originally has the same format as the requested to save,
 * then setting quality to -1 leads to simply copying from source to destination,
 * which is time efficient and prevents quality loss caused by jpeg encoding/decoding.
 * 
 * Default is -1
 * @param self: Pointer to the instance of scanbotsdk_encode_image_options_t
 * @param quality: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_encode_image_options_get_quality(scanbotsdk_encode_image_options_t* self, int* quality);
/**
 * @brief Sets value of quality field of the given object.
 * @ingroup c_image
 * @details Quality parameter is for jpeg only and is in range 0 to 100. If -1, then settings from hibernation are used.
 * In case when the Image Ref was created with a lazy load mode and originally has the same format as the requested to save,
 * then setting quality to -1 leads to simply copying from source to destination,
 * which is time efficient and prevents quality loss caused by jpeg encoding/decoding.
 * 
 * Default is -1
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_encode_image_options_t, the field of which will be set
 * @param quality: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_encode_image_options_set_quality(scanbotsdk_encode_image_options_t* self, int quality);

/**
 * @brief Returns value of format field of the given object.
 * @ingroup c_image
 * @details Image format.
 * 
 * Default is JPEG
 * @param self: Pointer to the instance of scanbotsdk_encode_image_options_t
 * @param format: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_encode_image_options_get_format(scanbotsdk_encode_image_options_t* self, scanbotsdk_encoding_format_t* format);
/**
 * @brief Sets value of format field of the given object.
 * @ingroup c_image
 * @details Image format.
 * 
 * Default is JPEG
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_encode_image_options_t, the field of which will be set
 * @param format: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_encode_image_options_set_format(scanbotsdk_encode_image_options_t* self, scanbotsdk_encoding_format_t format);


/**
 * @brief scanbotsdk_image_source_type_t enum
 * @details The type of source which originated the underlying image.
 * @ingroup c_image
*/
typedef enum scanbotsdk_image_source_type_t {

    /**ImageRef was created by a call to an SDK feature, such as a scanner, image processor, etc.*/
    SCANBOTSDK_IMAGE_SOURCE_TYPE_API = 0,

    /**ImageRef was created from a platform image, e.g. Bitmap on Android, UIImage on iOS.*/
    SCANBOTSDK_IMAGE_SOURCE_TYPE_PLATFORM_IMAGE = 1,

    /**ImageRef was created from data from the camera.*/
    SCANBOTSDK_IMAGE_SOURCE_TYPE_CAMERA = 2,

    /**ImageRef was created from a file.*/
    SCANBOTSDK_IMAGE_SOURCE_TYPE_FILE = 3,

    /**ImageRef was created from an encoded buffer.*/
    SCANBOTSDK_IMAGE_SOURCE_TYPE_BUFFER = 4,

    /**ImageRef was created from another type, e.g. from custom loader.*/
    SCANBOTSDK_IMAGE_SOURCE_TYPE_OTHER = 5,

} scanbotsdk_image_source_type_t;

/**
 * @brief Returns the string representation of the given scanbotsdk_image_source_type_t value.
 * @ingroup c_image
 * @details The returned string doesn't need to be freed.
 * @param value: The value to be converted to string.
 * @param result: Pointer to a variable that will store the string representation of the value.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_image_source_type_t_to_string(scanbotsdk_image_source_type_t value, const char** result);

/**
 * @brief scanbotsdk_image_source_t class
 * @details Description of source from which the ImageRef was created.
 * @ingroup c_image
*/
typedef struct scanbotsdk_image_source_t scanbotsdk_image_source_t;

/**
 * @brief Creates a new instance of scanbotsdk_image_source with given params and stores it in the location specified by the last argument.
 * @ingroup c_image
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param type: Source type from which the ImageRef was created.
 * @param file_path: File from which the ImageRef was created. Non-null only if the image ref was created from file.
 * The value can be null.
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_image_source_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_image_source_create(
    scanbotsdk_image_source_type_t type,
    const char* file_path,
    scanbotsdk_image_source_t** result);


/**
 * @brief Frees the memory allocated for the instance of scanbotsdk_image_source_t. If null is passed, the function does nothing.
 * @ingroup c_image
 * @param object: Pointer to the instance of scanbotsdk_image_source_t to be freed
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_image_source_free(scanbotsdk_image_source_t* object);

/**
 * @brief Returns value of type field of the given object.
 * @ingroup c_image
 * @details Source type from which the ImageRef was created.
 * @param self: Pointer to the instance of scanbotsdk_image_source_t
 * @param type: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_image_source_get_type(scanbotsdk_image_source_t* self, scanbotsdk_image_source_type_t* type);
/**
 * @brief Sets value of type field of the given object.
 * @ingroup c_image
 * @details Source type from which the ImageRef was created.
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_image_source_t, the field of which will be set
 * @param type: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_image_source_set_type(scanbotsdk_image_source_t* self, scanbotsdk_image_source_type_t type);

/**
 * @brief Returns value of file_path field of the given object. The returned pointers do NOT own the underlying object, caller must not free them.
 * @ingroup c_image
 * @details File from which the ImageRef was created. Non-null only if the image ref was created from file.
 * @param self: Pointer to the instance of scanbotsdk_image_source_t
 * @param file_path: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_image_source_get_file_path(scanbotsdk_image_source_t* self, const char** file_path);
/**
 * @brief Sets value of file_path field of the given object.
 * @ingroup c_image
 * @details File from which the ImageRef was created. Non-null only if the image ref was created from file.
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_image_source_t, the field of which will be set
 * @param file_path: The value to be set. Can be null.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_image_source_set_file_path(scanbotsdk_image_source_t* self, const char* file_path);


/**
 * @brief scanbotsdk_image_profile_t class
 * @details ImageRef profile part specific to image information.
 * @ingroup c_image
*/
typedef struct scanbotsdk_image_profile_t scanbotsdk_image_profile_t;

/**
 * @brief Creates a new instance of scanbotsdk_image_profile with given params and stores it in the location specified by the last argument.
 * @ingroup c_image
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param bitmap_memory_consumption: Memory consumption of a memory-backed bitmap. Zero, if the image is hibernating.
 * 
 * Default is 0
 * @param hibernation_memory_consumption: Memory consumption of the hibernation buffer. Zero, if the image is not hibernating, or is hibernated to a file.
 * 
 * Default is 0
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_image_profile_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_image_profile_create(
    int bitmap_memory_consumption,
    int hibernation_memory_consumption,
    scanbotsdk_image_profile_t** result);

/**
 * @brief Creates a new instance of scanbotsdk_image_profile_t with given required params and stores it in the location specified by the last argument.
 * @ingroup c_image
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_image_profile_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_image_profile_create_with_defaults(
    scanbotsdk_image_profile_t** result);


/**
 * @brief Frees the memory allocated for the instance of scanbotsdk_image_profile_t. If null is passed, the function does nothing.
 * @ingroup c_image
 * @param object: Pointer to the instance of scanbotsdk_image_profile_t to be freed
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_image_profile_free(scanbotsdk_image_profile_t* object);

/**
 * @brief Returns value of bitmap_memory_consumption field of the given object.
 * @ingroup c_image
 * @details Memory consumption of a memory-backed bitmap. Zero, if the image is hibernating.
 * 
 * Default is 0
 * @param self: Pointer to the instance of scanbotsdk_image_profile_t
 * @param bitmap_memory_consumption: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_image_profile_get_bitmap_memory_consumption(scanbotsdk_image_profile_t* self, int* bitmap_memory_consumption);
/**
 * @brief Sets value of bitmap_memory_consumption field of the given object.
 * @ingroup c_image
 * @details Memory consumption of a memory-backed bitmap. Zero, if the image is hibernating.
 * 
 * Default is 0
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_image_profile_t, the field of which will be set
 * @param bitmap_memory_consumption: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_image_profile_set_bitmap_memory_consumption(scanbotsdk_image_profile_t* self, int bitmap_memory_consumption);

/**
 * @brief Returns value of hibernation_memory_consumption field of the given object.
 * @ingroup c_image
 * @details Memory consumption of the hibernation buffer. Zero, if the image is not hibernating, or is hibernated to a file.
 * 
 * Default is 0
 * @param self: Pointer to the instance of scanbotsdk_image_profile_t
 * @param hibernation_memory_consumption: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_image_profile_get_hibernation_memory_consumption(scanbotsdk_image_profile_t* self, int* hibernation_memory_consumption);
/**
 * @brief Sets value of hibernation_memory_consumption field of the given object.
 * @ingroup c_image
 * @details Memory consumption of the hibernation buffer. Zero, if the image is not hibernating, or is hibernated to a file.
 * 
 * Default is 0
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_image_profile_t, the field of which will be set
 * @param hibernation_memory_consumption: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_image_profile_set_hibernation_memory_consumption(scanbotsdk_image_profile_t* self, int hibernation_memory_consumption);


/**
 * @brief scanbotsdk_image_ref_profile_t class
 * @details ImageRef profile which provides detailed information about stored object.
 * @ingroup c_image
*/
typedef struct scanbotsdk_image_ref_profile_t scanbotsdk_image_ref_profile_t;

/**
 * @brief Creates a new instance of scanbotsdk_image_ref_profile with given params and stores it in the location specified by the last argument.
 * @ingroup c_image
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param ref_info: Information about the strong and serialized references to the image.
 * The value must not be null.
 * @param image_info: Image-specific information, e.g. memory consumption.
 * The value must not be null.
 * @param image_source: Description of source from which the ImageRef was created. Non-null only if detailed profiling has been previously enabled by a call to enableDetailedProfiling.
 * The value can be null.
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_image_ref_profile_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_image_ref_profile_create(
    scanbotsdk_ref_counted_object_profile_t* ref_info,
    scanbotsdk_image_profile_t* image_info,
    scanbotsdk_image_source_t* image_source,
    scanbotsdk_image_ref_profile_t** result);


/**
 * @brief Frees the memory allocated for the instance of scanbotsdk_image_ref_profile_t. If null is passed, the function does nothing.
 * @ingroup c_image
 * @param object: Pointer to the instance of scanbotsdk_image_ref_profile_t to be freed
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_image_ref_profile_free(scanbotsdk_image_ref_profile_t* object);

/**
 * @brief Returns value of ref_info field of the given object. The returned pointers do NOT own the underlying object, caller must not free them.
 * @ingroup c_image
 * @details Information about the strong and serialized references to the image.
 * @param self: Pointer to the instance of scanbotsdk_image_ref_profile_t
 * @param ref_info: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_image_ref_profile_get_ref_info(scanbotsdk_image_ref_profile_t* self, scanbotsdk_ref_counted_object_profile_t** ref_info);
/**
 * @brief Sets value of ref_info field of the given object.
 * @ingroup c_image
 * @details Information about the strong and serialized references to the image.
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_image_ref_profile_t, the field of which will be set
 * @param ref_info: The value to be set. Must not be null.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_image_ref_profile_set_ref_info(scanbotsdk_image_ref_profile_t* self, scanbotsdk_ref_counted_object_profile_t* ref_info);

/**
 * @brief Returns value of image_info field of the given object. The returned pointers do NOT own the underlying object, caller must not free them.
 * @ingroup c_image
 * @details Image-specific information, e.g. memory consumption.
 * @param self: Pointer to the instance of scanbotsdk_image_ref_profile_t
 * @param image_info: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_image_ref_profile_get_image_info(scanbotsdk_image_ref_profile_t* self, scanbotsdk_image_profile_t** image_info);
/**
 * @brief Sets value of image_info field of the given object.
 * @ingroup c_image
 * @details Image-specific information, e.g. memory consumption.
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_image_ref_profile_t, the field of which will be set
 * @param image_info: The value to be set. Must not be null.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_image_ref_profile_set_image_info(scanbotsdk_image_ref_profile_t* self, scanbotsdk_image_profile_t* image_info);

/**
 * @brief Returns value of image_source field of the given object. The returned pointers do NOT own the underlying object, caller must not free them.
 * @ingroup c_image
 * @details Description of source from which the ImageRef was created. Non-null only if detailed profiling has been previously enabled by a call to enableDetailedProfiling.
 * @param self: Pointer to the instance of scanbotsdk_image_ref_profile_t
 * @param image_source: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_image_ref_profile_get_image_source(scanbotsdk_image_ref_profile_t* self, scanbotsdk_image_source_t** image_source);
/**
 * @brief Sets value of image_source field of the given object.
 * @ingroup c_image
 * @details Description of source from which the ImageRef was created. Non-null only if detailed profiling has been previously enabled by a call to enableDetailedProfiling.
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_image_ref_profile_t, the field of which will be set
 * @param image_source: The value to be set. Can be null.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_image_ref_profile_set_image_source(scanbotsdk_image_ref_profile_t* self, scanbotsdk_image_source_t* image_source);


/**
 * @brief scanbotsdk_image_ref_pool_snapshot_t class
 * @details Snapshot of all alive ImageRefs.
 * @ingroup c_image
*/
typedef struct scanbotsdk_image_ref_pool_snapshot_t scanbotsdk_image_ref_pool_snapshot_t;

/**
 * @brief Creates a new instance of scanbotsdk_image_ref_pool_snapshot with given params and stores it in the location specified by the last argument.
 * @ingroup c_image
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param image_ref_profiles: Detailed profiles of all alive ImageRefs.
 * Entries of the array must not be null.
 * @param image_ref_profiles_size: Size of the array image_ref_profiles
 * @param total_memory_consumption: Estimation of total memory consumption of ImageRefs.
 * 
 * Default is 0
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_image_ref_pool_snapshot_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_image_ref_pool_snapshot_create(
    scanbotsdk_image_ref_profile_t** image_ref_profiles,
    size_t image_ref_profiles_size,
    int64_t total_memory_consumption,
    scanbotsdk_image_ref_pool_snapshot_t** result);

/**
 * @brief Creates a new instance of scanbotsdk_image_ref_pool_snapshot_t with given required params and stores it in the location specified by the last argument.
 * @ingroup c_image
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param image_ref_profiles: Detailed profiles of all alive ImageRefs.
 * Entries of the array must not be null.
 * @param image_ref_profiles_size: Size of the array image_ref_profiles
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_image_ref_pool_snapshot_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_image_ref_pool_snapshot_create_with_defaults(
    scanbotsdk_image_ref_profile_t** image_ref_profiles,
    size_t image_ref_profiles_size,
    scanbotsdk_image_ref_pool_snapshot_t** result);


/**
 * @brief Frees the memory allocated for the instance of scanbotsdk_image_ref_pool_snapshot_t. If null is passed, the function does nothing.
 * @ingroup c_image
 * @param object: Pointer to the instance of scanbotsdk_image_ref_pool_snapshot_t to be freed
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_image_ref_pool_snapshot_free(scanbotsdk_image_ref_pool_snapshot_t* object);

/**
 * @brief Returns value of image_ref_profiles field of the given object. The returned pointers do NOT own the underlying object, caller must not free them.
 * @ingroup c_image
 * @details Detailed profiles of all alive ImageRefs.
 * @param self: Pointer to the instance of scanbotsdk_image_ref_pool_snapshot_t
 @param size: Size of the pre-allocated array. Must be equal to the size obtained by calling the corresponding _size function.
 * @param image_ref_profiles: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_image_ref_pool_snapshot_get_image_ref_profiles(scanbotsdk_image_ref_pool_snapshot_t* self, scanbotsdk_image_ref_profile_t** image_ref_profiles, size_t size);
/**
 * @brief Returns size of image_ref_profiles array.
 * @ingroup c_image
 * @param self: Pointer to the instance of scanbotsdk_image_ref_pool_snapshot_t
 * @param size: Pointer to a variable that will store the size.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_image_ref_pool_snapshot_get_image_ref_profiles_size(scanbotsdk_image_ref_pool_snapshot_t* self, size_t* size);
/**
 * @brief Sets value of image_ref_profiles field of the given object.
 * @ingroup c_image
 * @details Detailed profiles of all alive ImageRefs.
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_image_ref_pool_snapshot_t, the field of which will be set
 * @param image_ref_profiles: The value to be set.
 * @param image_ref_profiles_size: Size of the array.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_image_ref_pool_snapshot_set_image_ref_profiles(scanbotsdk_image_ref_pool_snapshot_t* self, scanbotsdk_image_ref_profile_t** image_ref_profiles, size_t image_ref_profiles_size);

/**
 * @brief Returns value of total_memory_consumption field of the given object.
 * @ingroup c_image
 * @details Estimation of total memory consumption of ImageRefs.
 * 
 * Default is 0
 * @param self: Pointer to the instance of scanbotsdk_image_ref_pool_snapshot_t
 * @param total_memory_consumption: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_image_ref_pool_snapshot_get_total_memory_consumption(scanbotsdk_image_ref_pool_snapshot_t* self, int64_t* total_memory_consumption);
/**
 * @brief Sets value of total_memory_consumption field of the given object.
 * @ingroup c_image
 * @details Estimation of total memory consumption of ImageRefs.
 * 
 * Default is 0
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_image_ref_pool_snapshot_t, the field of which will be set
 * @param total_memory_consumption: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_image_ref_pool_snapshot_set_total_memory_consumption(scanbotsdk_image_ref_pool_snapshot_t* self, int64_t total_memory_consumption);


/**
 * @brief scanbotsdk_image_ref_pool_snapshots_diff_t class
 * @details difference between two snapshots.
 * @ingroup c_image
*/
typedef struct scanbotsdk_image_ref_pool_snapshots_diff_t scanbotsdk_image_ref_pool_snapshots_diff_t;

/**
 * @brief Creates a new instance of scanbotsdk_image_ref_pool_snapshots_diff with given params and stores it in the location specified by the last argument.
 * @ingroup c_image
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param total_memory_consumption_diff: Difference between total memory consumption in two snapshots.
 * 
 * Default is 0
 * @param removed: Unique ids of ImageRefs that are not present in the second snapshot and present in the first snapshot.
 * Entries of the array must not be null.
 * @param removed_size: Size of the array removed
 * @param added: Profiles of ImageRefs that are present in the second snapshot, but not in the first snapshot.
 * Entries of the array must not be null.
 * @param added_size: Size of the array added
 * @param modified: Profiles of ImageRefs that are present in both snapshots but are different. Profile is considered modified if number of references or memory consumption is different.
 * Entries of the array must not be null.
 * @param modified_size: Size of the array modified
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_image_ref_pool_snapshots_diff_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_image_ref_pool_snapshots_diff_create(
    int64_t total_memory_consumption_diff,
    const char** removed,
    size_t removed_size,
    const char** added,
    size_t added_size,
    const char** modified,
    size_t modified_size,
    scanbotsdk_image_ref_pool_snapshots_diff_t** result);

/**
 * @brief Creates a new instance of scanbotsdk_image_ref_pool_snapshots_diff_t with given required params and stores it in the location specified by the last argument.
 * @ingroup c_image
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param removed: Unique ids of ImageRefs that are not present in the second snapshot and present in the first snapshot.
 * Entries of the array must not be null.
 * @param removed_size: Size of the array removed
 * @param added: Profiles of ImageRefs that are present in the second snapshot, but not in the first snapshot.
 * Entries of the array must not be null.
 * @param added_size: Size of the array added
 * @param modified: Profiles of ImageRefs that are present in both snapshots but are different. Profile is considered modified if number of references or memory consumption is different.
 * Entries of the array must not be null.
 * @param modified_size: Size of the array modified
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_image_ref_pool_snapshots_diff_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_image_ref_pool_snapshots_diff_create_with_defaults(
    const char** removed,
    size_t removed_size,
    const char** added,
    size_t added_size,
    const char** modified,
    size_t modified_size,
    scanbotsdk_image_ref_pool_snapshots_diff_t** result);


/**
 * @brief Frees the memory allocated for the instance of scanbotsdk_image_ref_pool_snapshots_diff_t. If null is passed, the function does nothing.
 * @ingroup c_image
 * @param object: Pointer to the instance of scanbotsdk_image_ref_pool_snapshots_diff_t to be freed
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_image_ref_pool_snapshots_diff_free(scanbotsdk_image_ref_pool_snapshots_diff_t* object);

/**
 * @brief Returns value of total_memory_consumption_diff field of the given object.
 * @ingroup c_image
 * @details Difference between total memory consumption in two snapshots.
 * 
 * Default is 0
 * @param self: Pointer to the instance of scanbotsdk_image_ref_pool_snapshots_diff_t
 * @param total_memory_consumption_diff: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_image_ref_pool_snapshots_diff_get_total_memory_consumption_diff(scanbotsdk_image_ref_pool_snapshots_diff_t* self, int64_t* total_memory_consumption_diff);
/**
 * @brief Sets value of total_memory_consumption_diff field of the given object.
 * @ingroup c_image
 * @details Difference between total memory consumption in two snapshots.
 * 
 * Default is 0
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_image_ref_pool_snapshots_diff_t, the field of which will be set
 * @param total_memory_consumption_diff: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_image_ref_pool_snapshots_diff_set_total_memory_consumption_diff(scanbotsdk_image_ref_pool_snapshots_diff_t* self, int64_t total_memory_consumption_diff);

/**
 * @brief Returns value of removed field of the given object. The returned pointers do NOT own the underlying object, caller must not free them.
 * @ingroup c_image
 * @details Unique ids of ImageRefs that are not present in the second snapshot and present in the first snapshot.
 * @param self: Pointer to the instance of scanbotsdk_image_ref_pool_snapshots_diff_t
 @param size: Size of the pre-allocated array. Must be equal to the size obtained by calling the corresponding _size function.
 * @param removed: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_image_ref_pool_snapshots_diff_get_removed(scanbotsdk_image_ref_pool_snapshots_diff_t* self, const char** removed, size_t size);
/**
 * @brief Returns size of removed array.
 * @ingroup c_image
 * @param self: Pointer to the instance of scanbotsdk_image_ref_pool_snapshots_diff_t
 * @param size: Pointer to a variable that will store the size.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_image_ref_pool_snapshots_diff_get_removed_size(scanbotsdk_image_ref_pool_snapshots_diff_t* self, size_t* size);
/**
 * @brief Sets value of removed field of the given object.
 * @ingroup c_image
 * @details Unique ids of ImageRefs that are not present in the second snapshot and present in the first snapshot.
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_image_ref_pool_snapshots_diff_t, the field of which will be set
 * @param removed: The value to be set.
 * @param removed_size: Size of the array.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_image_ref_pool_snapshots_diff_set_removed(scanbotsdk_image_ref_pool_snapshots_diff_t* self, const char** removed, size_t removed_size);

/**
 * @brief Returns value of added field of the given object. The returned pointers do NOT own the underlying object, caller must not free them.
 * @ingroup c_image
 * @details Profiles of ImageRefs that are present in the second snapshot, but not in the first snapshot.
 * @param self: Pointer to the instance of scanbotsdk_image_ref_pool_snapshots_diff_t
 @param size: Size of the pre-allocated array. Must be equal to the size obtained by calling the corresponding _size function.
 * @param added: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_image_ref_pool_snapshots_diff_get_added(scanbotsdk_image_ref_pool_snapshots_diff_t* self, const char** added, size_t size);
/**
 * @brief Returns size of added array.
 * @ingroup c_image
 * @param self: Pointer to the instance of scanbotsdk_image_ref_pool_snapshots_diff_t
 * @param size: Pointer to a variable that will store the size.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_image_ref_pool_snapshots_diff_get_added_size(scanbotsdk_image_ref_pool_snapshots_diff_t* self, size_t* size);
/**
 * @brief Sets value of added field of the given object.
 * @ingroup c_image
 * @details Profiles of ImageRefs that are present in the second snapshot, but not in the first snapshot.
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_image_ref_pool_snapshots_diff_t, the field of which will be set
 * @param added: The value to be set.
 * @param added_size: Size of the array.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_image_ref_pool_snapshots_diff_set_added(scanbotsdk_image_ref_pool_snapshots_diff_t* self, const char** added, size_t added_size);

/**
 * @brief Returns value of modified field of the given object. The returned pointers do NOT own the underlying object, caller must not free them.
 * @ingroup c_image
 * @details Profiles of ImageRefs that are present in both snapshots but are different. Profile is considered modified if number of references or memory consumption is different.
 * @param self: Pointer to the instance of scanbotsdk_image_ref_pool_snapshots_diff_t
 @param size: Size of the pre-allocated array. Must be equal to the size obtained by calling the corresponding _size function.
 * @param modified: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_image_ref_pool_snapshots_diff_get_modified(scanbotsdk_image_ref_pool_snapshots_diff_t* self, const char** modified, size_t size);
/**
 * @brief Returns size of modified array.
 * @ingroup c_image
 * @param self: Pointer to the instance of scanbotsdk_image_ref_pool_snapshots_diff_t
 * @param size: Pointer to a variable that will store the size.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_image_ref_pool_snapshots_diff_get_modified_size(scanbotsdk_image_ref_pool_snapshots_diff_t* self, size_t* size);
/**
 * @brief Sets value of modified field of the given object.
 * @ingroup c_image
 * @details Profiles of ImageRefs that are present in both snapshots but are different. Profile is considered modified if number of references or memory consumption is different.
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_image_ref_pool_snapshots_diff_t, the field of which will be set
 * @param modified: The value to be set.
 * @param modified_size: Size of the array.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_image_ref_pool_snapshots_diff_set_modified(scanbotsdk_image_ref_pool_snapshots_diff_t* self, const char** modified, size_t modified_size);


#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* SCANBOTSDK_IMAGEREFTYPES_H */