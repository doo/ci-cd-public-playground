// Auto-generated with ScanbotSDKCodegenV3. Modifications will be overwritten.
// Generated from SchemasV3/CoreSchemas/schemas/ImageProcessor.yaml
/**
 * @file ScanbotSDKImageProcessor.h
 */

#pragma once
#ifndef SCANBOTSDK_IMAGEPROCESSOR_H
#define SCANBOTSDK_IMAGEPROCESSOR_H


#include <ScanbotSDKImage.h>
#include <ScanbotSDKTypes.h>
#include <image/ScanbotSDKImageTypes.h>
#include <image_processing/ScanbotSDKParametricFilters.h>
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
 * @brief scanbotsdk_image_processor_t class
 * @details API for image processing.
 * 
 * Required licence feature(s): ImageProcessing.
 * @ingroup c_image_processing
*/
typedef struct scanbotsdk_image_processor_t scanbotsdk_image_processor_t;

/**
 * @brief Creates a new instance of scanbotsdk_image_processor with given params and stores it in the location specified by the last argument.
 * @ingroup c_image_processing
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_image_processor_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_image_processor_create(
        scanbotsdk_image_processor_t** result
);

/**
 * @brief Frees the memory allocated for the instance of scanbotsdk_image_processor_t. If null is passed, the function does nothing.
 * @ingroup c_image_processing
 * @param self: Pointer to the instance of scanbotsdk_image_processor_t to be freed
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_image_processor_free(
        scanbotsdk_image_processor_t* self
);

/**
 * @brief Crops the given image to the given quadrilateral.
 * @ingroup c_image_processing
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_image_processor_t method to be called on
 * @param image: The image to crop.
 * The value must not be null.
 * @param quad: The quadrilateral of normalized points to crop.
 * @param quad_size: Size of the array quad
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_image_processor_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_image_processor_crop(
    scanbotsdk_image_processor_t* self, 
    scanbotsdk_image_t* image,
    scanbotsdk_pointf_t* quad,
    size_t quad_size,
    scanbotsdk_image_t** result
);

/**
 * @brief Resizes the given image to the given size.
 * @ingroup c_image_processing
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_image_processor_t method to be called on
 * @param image: The image to resize
 * The value must not be null.
 * @param size: Size of the longer side of the image.
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_image_processor_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_image_processor_resize(
    scanbotsdk_image_processor_t* self, 
    scanbotsdk_image_t* image,
    int size,
    scanbotsdk_image_t** result
);

/**
 * @brief Rotates the given image by the given angle.
 * @ingroup c_image_processing
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_image_processor_t method to be called on
 * @param image: The image to rotate
 * The value must not be null.
 * @param rotation: Rotation to be applied
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_image_processor_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_image_processor_rotate(
    scanbotsdk_image_processor_t* self, 
    scanbotsdk_image_t* image,
    scanbotsdk_image_rotation_t rotation,
    scanbotsdk_image_t** result
);

/**
 * @brief Applies given filter to the given image.
 * @ingroup c_image_processing
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_image_processor_t method to be called on
 * @param image: The image to apply filter on
 * The value must not be null.
 * @param filter: Filter to be applied
 * The value must not be null.
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_image_processor_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_image_processor_apply_filter(
    scanbotsdk_image_processor_t* self, 
    scanbotsdk_image_t* image,
    scanbotsdk_parametric_filter_t* filter,
    scanbotsdk_image_t** result
);


#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* SCANBOTSDK_IMAGEPROCESSOR_H */