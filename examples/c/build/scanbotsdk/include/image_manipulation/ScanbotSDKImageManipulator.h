// Auto-generated with ScanbotSDKCodegenV3. Modifications will be overwritten.
// Generated from SchemasV3/CoreSchemas/schemas/ImageManipulator.yaml
/**
 * @file ScanbotSDKImageManipulator.h
 */

#pragma once
#ifndef SCANBOTSDK_IMAGEMANIPULATOR_H
#define SCANBOTSDK_IMAGEMANIPULATOR_H


#include <ScanbotSDKImage.h>
#include <ScanbotSDKTypes.h>
#include <image/ScanbotSDKImageTypes.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <ScanbotSDKErrorCode.h>
#include <ScanbotSDKDefs.h>

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief scanbotsdk_image_manipulator_t class
 * @details API for image processing. If applicable on the platform, all the methods return images with the same liveness flag as the input image.
 * @ingroup c_image_manipulation
*/
typedef struct scanbotsdk_image_manipulator_t scanbotsdk_image_manipulator_t;

/**
 * @brief Creates a new instance of scanbotsdk_image_manipulator with given params and stores it in the location specified by the last argument.
 * @ingroup c_image_manipulation
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_image_manipulator_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_image_manipulator_create(
        scanbotsdk_image_manipulator_t** result
);

/**
 * @brief Frees the memory allocated for the instance of scanbotsdk_image_manipulator_t. If null is passed, the function does nothing.
 * @ingroup c_image_manipulation
 * @param self: Pointer to the instance of scanbotsdk_image_manipulator_t to be freed
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_image_manipulator_free(
        scanbotsdk_image_manipulator_t* self
);

/**
 * @brief Crops out the given rectangle from the image.
 * @ingroup c_image_manipulation
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_image_manipulator_t method to be called on
 * @param image: The image to crop.
 * The value must not be null.
 * @param rect: The rectangle in normalized coordinates to crop.
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_image_manipulator_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_image_manipulator_crop_rect(
    scanbotsdk_image_manipulator_t* self, 
    scanbotsdk_image_t* image,
    scanbotsdk_rectf_t rect,
    scanbotsdk_image_t** result
);

/**
 * @brief Rotates the given image by the given angle.
 * @ingroup c_image_manipulation
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_image_manipulator_t method to be called on
 * @param image: The image to rotate
 * The value must not be null.
 * @param rotation: Rotation to be applied
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_image_manipulator_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_image_manipulator_rotate(
    scanbotsdk_image_manipulator_t* self, 
    scanbotsdk_image_t* image,
    scanbotsdk_image_rotation_t rotation,
    scanbotsdk_image_t** result
);

/**
 * @brief Flips the given image horizontally or vertically.
 * @ingroup c_image_manipulation
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_image_manipulator_t method to be called on
 * @param image: The image to flip
 * The value must not be null.
 * @param origin: Location of the image origin in the image coordinate system.
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_image_manipulator_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_image_manipulator_flip(
    scanbotsdk_image_manipulator_t* self, 
    scanbotsdk_image_t* image,
    scanbotsdk_image_origin_t origin,
    scanbotsdk_image_t** result
);

/**
 * @brief Resizes the given image to the given size.
 * @ingroup c_image_manipulation
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_image_manipulator_t method to be called on
 * @param image: The image to resize
 * The value must not be null.
 * @param size: Size of the longer side of the image.
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_image_manipulator_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_image_manipulator_resize(
    scanbotsdk_image_manipulator_t* self, 
    scanbotsdk_image_t* image,
    int size,
    scanbotsdk_image_t** result
);


#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* SCANBOTSDK_IMAGEMANIPULATOR_H */