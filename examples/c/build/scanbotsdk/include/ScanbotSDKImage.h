/**
 * @file ScanbotSDKImage.h
 * @brief ScanbotSDK Image Ref C API
 */

#pragma once

#ifndef SCANBOTSDK_IMAGE_H
#define SCANBOTSDK_IMAGE_H

#include <ScanbotSDKDefs.h>
#include <ScanbotSDKErrorCode.h>
#include <image/ScanbotSDKImageRefTypes.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @brief Represents an instance of the opaque byte buffer
 * @ingroup c_image
 * @details Must be destroyed with <see cref="scanbotsdk_buffer_free"/> after use.
 */
typedef struct scanbotsdk_buffer_t scanbotsdk_buffer_t;

/**
 * @brief Represents an instance of the opaque image
 * @ingroup c_image
 * @details Must be destroyed with <see cref="scanbotsdk_image_free"/> after use.
 */
typedef struct scanbotsdk_image_t scanbotsdk_image_t;

/**
 * @brief Represents an instance of a raw image buffer
 * @ingroup c_image
 * @details Must be destroyed with <see cref="scanbotsdk_raw_image_free"/> after use.
 */
typedef struct scanbotsdk_raw_image_t scanbotsdk_raw_image_t;

/**
 * @brief Creates a new instance of the image from raw data.
 * @ingroup c_image
 * @param buffer: Pointer to raw image data
 * @param width: Image width
 * @param height: Image height
 * @param channels: Number of color channels
 * @param stride: Number of bytes per row
 * @param options: The image load options.
 * @param image: Pointer to a variable that will be set to the new image instance.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if creation was successful
 */
SBSDK_API scanbotsdk_error_code_t scanbotsdk_image_create_from_raw_image(
    void* buffer,
    int width,
    int height,
    int channels,
    int stride,
    scanbotsdk_raw_image_load_options_t* options,
    scanbotsdk_image_t** image);

/**
 * @brief Creates a new instance of the image from given path.
 * @ingroup c_image
 * @param path: Path to the image file
 * @param options: The image load options.
 * @param image: Pointer to a variable that will be set to the new image instance.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if creation was successful
 */
SBSDK_API scanbotsdk_error_code_t scanbotsdk_image_create_from_path(
    const char* path,
    scanbotsdk_path_image_load_options_t* options,
    scanbotsdk_image_t** image);

/**
 * @brief Creates a new instance of the image from given encoded buffer, e.g. from jpeg.
 * @ingroup c_image
 * @param buffer: Pointer to encoded image data
 * @param size: Size of the encoded image data
 * @param options: The image load options.
 * @param image: Pointer to a variable that will be set to the new image instance.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if creation was successful
 */
SBSDK_API scanbotsdk_error_code_t scanbotsdk_image_create_from_encoded_buffer(
    void* buffer,
    size_t size,
    scanbotsdk_buffer_image_load_options_t* options,
    scanbotsdk_image_t** image);

/**
 * @brief Saves image at the given path.
 * @ingroup c_image
 * @param image: Pointer to the image instance
 * @param path: Path to save the image
 * @param options: The image encode options
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if creation was successful
 */
SBSDK_API scanbotsdk_error_code_t scanbotsdk_image_save(
    scanbotsdk_image_t* image,
    const char* path,
    scanbotsdk_save_image_options_t* options);

/**
 * @brief Encodes image to buffer. The allocated buffer is owned by the caller and must be freed
 * with scanbotsdk_buffer_free when no longer needed.
 * @ingroup c_image
 * @param image: Pointer to the image instance
 * @param options: The image encode options
 * @param buffer: Pointer to a variable that will be set to the buffer instance
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if creation was successful
 */
SBSDK_API scanbotsdk_error_code_t scanbotsdk_image_encode(
    scanbotsdk_image_t* image,
    scanbotsdk_encode_image_options_t* options,
    scanbotsdk_buffer_t** buffer);

/**
 * @brief Returns view of the buffer data.
 * @ingroup c_image
 * @param buffer: Pointer to the buffer instance
 * @param data: Pointer to a variable that will be set to the buffer data.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if creation was successful
 */
SBSDK_API scanbotsdk_error_code_t
scanbotsdk_buffer_data(scanbotsdk_buffer_t* buffer, uint8_t** data);

/**
 * @brief Returns view of the buffer data.
 * @ingroup c_image
 * @param buffer: Pointer to the buffer instance
 * @param size: Pointer to a variable that will be set to the buffer size.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if creation was successful
 */
SBSDK_API scanbotsdk_error_code_t scanbotsdk_buffer_size(scanbotsdk_buffer_t* buffer, size_t* size);

/**
 * @brief Frees the buffer instance.
 * @ingroup c_image
 * @param buffer: Pointer to the buffer instance to be freed
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if the free was successful
 */
SBSDK_API scanbotsdk_error_code_t scanbotsdk_buffer_free(scanbotsdk_buffer_t* buffer);

/**
 * @brief Returns the image info.
 * @ingroup c_image
 * @details The returned info must be freed with scanbotsdk_image_info_free when no longer needed.
 * @param image: Pointer to the image instance
 * @param result: Pointer to a variable that will be set to the image info.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if creation was successful
 */
SBSDK_API scanbotsdk_error_code_t
scanbotsdk_image_info(scanbotsdk_image_t* image, scanbotsdk_image_info_t** result);

/**
 * @brief Destroys the image instance. If null is passed does nothing.
 * @ingroup c_image
 * @param object: Pointer to the image instance
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if the free was successful
 */
SBSDK_API scanbotsdk_error_code_t scanbotsdk_image_free(scanbotsdk_image_t* object);

/**
 * @brief Returns the unique id of the image.
 * @ingroup c_image
 * @details The returned id is owned by the image and must not be freed.
 * @param image: Pointer to the image instance
 * @param unique_id: Pointer to a variable that will be set to the unique id.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if creation was successful
 */
SBSDK_API scanbotsdk_error_code_t
scanbotsdk_image_get_unique_id(scanbotsdk_image_t* image, const char** unique_id);

/**
 * @brief Returns the image from the unique id with acquiring reference.
 * @ingroup c_image
 * @param unique_id: The unique id of the image to get.
 * @param image: Pointer to a variable that will be set to the new image instance.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if creation was successful
 */
SBSDK_API scanbotsdk_error_code_t
scanbotsdk_image_create_from_id(const char* unique_id, scanbotsdk_image_t** image);

/**
 * @brief Acquires reference for the image with the given unique id.
 * @ingroup c_image
 * @param unique_id: The unique id of the image to acquire reference.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if creation was successful
 */
SBSDK_API scanbotsdk_error_code_t scanbotsdk_image_acquire_reference(const char* unique_id);

/**
 * @brief Releases reference for the image with the given unique id.
 * @ingroup c_image
 * @param unique_id: The unique id of the image to release reference.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if creation was successful
 */
SBSDK_API scanbotsdk_error_code_t scanbotsdk_image_release_reference(const char* unique_id);

/**
 * @brief Releases all alive images despite any existing references.
 * @ingroup c_image
 */
SBSDK_API scanbotsdk_error_code_t scanbotsdk_image_release_all_images();

/**
 * @brief Provides the image data as raw image trying to avoid data copy.
 * @ingroup c_image
 * @details The returned raw image must be freed with scanbotsdk_raw_image_free when no longer
 * needed.
 * @param image: Pointer to the image instance
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if creation was successful
 */
SBSDK_API scanbotsdk_error_code_t
scanbotsdk_image_to_raw_image(scanbotsdk_image_t* image, scanbotsdk_raw_image_t** raw_image);

/**
 * @brief Frees the raw_image instance.
 * @ingroup c_image
 * @param raw_image: Pointer to the buffer instance to be freed
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if free was successful
 */
SBSDK_API scanbotsdk_error_code_t scanbotsdk_raw_image_free(scanbotsdk_raw_image_t* raw_image);

/**
 * @brief Provides pointer to the raw image data.
 * @ingroup c_image
 * @param raw_image: Pointer to the raw image instance
 * @param data: Pointer to a variable that will be set to the raw image data.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
 */
SBSDK_API scanbotsdk_error_code_t
scanbotsdk_raw_image_get_data(scanbotsdk_raw_image_t* raw_image, void** data);

/**
 * @brief Provides the raw image width.
 * @ingroup c_image
 * @param raw_image: Pointer to the raw image instance
 * @param width: Pointer to a variable that will be set to the raw image width.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
 */
SBSDK_API scanbotsdk_error_code_t
scanbotsdk_raw_image_get_width(scanbotsdk_raw_image_t* raw_image, int* width);

/**
 * @brief Provides the raw image height.
 * @ingroup c_image
 * @param raw_image: Pointer to the raw image instance
 * @param height: Pointer to a variable that will be set to the raw image height.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
 */
SBSDK_API scanbotsdk_error_code_t
scanbotsdk_raw_image_get_height(scanbotsdk_raw_image_t* raw_image, int* height);

/**
 * @brief Provides number of the raw image channels.
 * @ingroup c_image
 * @param raw_image: Pointer to the raw image instance
 * @param channels: Pointer to a variable that will be set to the number of the raw image channels.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
 */
SBSDK_API scanbotsdk_error_code_t
scanbotsdk_raw_image_get_channels(scanbotsdk_raw_image_t* raw_image, int* channels);

/**
 * @brief Provides the raw image stride.
 * @ingroup c_image
 * @param raw_image: Pointer to the raw image instance
 * @param stride: Pointer to a variable that will be set to the raw image row stride.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
 */
SBSDK_API scanbotsdk_error_code_t
scanbotsdk_raw_image_get_stride(scanbotsdk_raw_image_t* raw_image, int* stride);

#ifdef __cplusplus
}
#endif
#endif
