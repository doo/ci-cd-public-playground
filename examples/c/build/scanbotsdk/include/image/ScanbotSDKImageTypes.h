// Auto-generated with ScanbotSDKCodegenV3. Modifications will be overwritten.
// Generated from SchemasV3/CoreSchemas/schemas/ImageTypes.yaml
/**
 * @file ScanbotSDKImageTypes.h
 */

#pragma once
#ifndef SCANBOTSDK_IMAGETYPES_H
#define SCANBOTSDK_IMAGETYPES_H


#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <ScanbotSDKErrorCode.h>
#include <ScanbotSDKDefs.h>

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief scanbotsdk_image_rotation_t enum
 * @details Image rotation.
 * @ingroup c_image
*/
typedef enum scanbotsdk_image_rotation_t {

    /**No rotation.*/
    SCANBOTSDK_IMAGE_ROTATION_NONE = 0,

    /**90 degrees clockwise rotation.*/
    SCANBOTSDK_IMAGE_ROTATION_CLOCKWISE_90 = 1,

    /**180 degrees rotation.*/
    SCANBOTSDK_IMAGE_ROTATION_CLOCKWISE_180 = 2,

    /**90 degrees counterclockwise rotation.*/
    SCANBOTSDK_IMAGE_ROTATION_COUNTERCLOCKWISE_90 = 3,

} scanbotsdk_image_rotation_t;

/**
 * @brief Returns the string representation of the given scanbotsdk_image_rotation_t value.
 * @ingroup c_image
 * @details The returned string doesn't need to be freed.
 * @param value: The value to be converted to string.
 * @param result: Pointer to a variable that will store the string representation of the value.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_image_rotation_t_to_string(scanbotsdk_image_rotation_t value, const char** result);

/**
 * @brief scanbotsdk_image_origin_t enum
 * @details Location of the image origin in the image coordinate system.
 * @ingroup c_image
*/
typedef enum scanbotsdk_image_origin_t {

    /**Origin is at the top left corner of the image.*/
    SCANBOTSDK_IMAGE_ORIGIN_TOP_LEFT = 0,

    /**Origin is at the top right corner of the image.*/
    SCANBOTSDK_IMAGE_ORIGIN_TOP_RIGHT = 1,

    /**Origin is at the bottom left corner of the image.*/
    SCANBOTSDK_IMAGE_ORIGIN_BOTTOM_LEFT = 2,

    /**Origin is at the bottom right corner of the image.*/
    SCANBOTSDK_IMAGE_ORIGIN_BOTTOM_RIGHT = 3,

} scanbotsdk_image_origin_t;

/**
 * @brief Returns the string representation of the given scanbotsdk_image_origin_t value.
 * @ingroup c_image
 * @details The returned string doesn't need to be freed.
 * @param value: The value to be converted to string.
 * @param result: Pointer to a variable that will store the string representation of the value.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_image_origin_t_to_string(scanbotsdk_image_origin_t value, const char** result);

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* SCANBOTSDK_IMAGETYPES_H */