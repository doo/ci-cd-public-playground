// Auto-generated with ScanbotSDKCodegenV3. Modifications will be overwritten.
// Generated from SchemasV3/CoreSchemas/schemas/CommonTypes.yaml
/**
 * @file ScanbotSDKCommonTypes.h
 */

#pragma once
#ifndef SCANBOTSDK_COMMONTYPES_H
#define SCANBOTSDK_COMMONTYPES_H


#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <ScanbotSDKErrorCode.h>
#include <ScanbotSDKDefs.h>

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief scanbotsdk_processing_mode_t enum
 * @details Scanners typically can produce better results from a single image if they are allowed to spend a longer time analyzing it. 
 * On the other hand, scanners can produce even better results if they can analyze multiple images of the same subject and cross-check and combine the results. 
 * The processing mode tells the scanner whether to optimize for single or multiple images of a subject.
 * @ingroup c_common
*/
typedef enum scanbotsdk_processing_mode_t {

    /**In live mode input images are expected to come from a video source like a camera. 
    Scanners in live mode typically spend little time on each image and are able to quickly analyze multiple images and combine the individual image results into a final result. 
    Individual results from a particular image may be less accurate than running the scanner in single-shot mode on that frame, but after aggregating a few images of the same subject, the final result becomes much more accurate.*/
    SCANBOTSDK_PROCESSING_MODE_LIVE = 0,

    /**In single-shot the scanner tries to extract the maximum amount of information possible from each input image. The scanner typically spends much longer on analyzing the image to ensure that all available information has been extracted.*/
    SCANBOTSDK_PROCESSING_MODE_SINGLE_SHOT = 1,

    /**The scanner chooses live or single-shot mode based on the source of the image. An image constructed with RawImageLoadOptions.liveSource equal to true will be processed in live mode, otherwise it will be processed in single-shot mode.
    On Android liveSource is automatically set to true if the ImageRef is created from Nv21 image data.
    On iOS liveSource is automatically set to true if the ImageRef is created from a CMSampleBuffer.*/
    SCANBOTSDK_PROCESSING_MODE_AUTO = 2,

} scanbotsdk_processing_mode_t;

/**
 * @brief Returns the string representation of the given scanbotsdk_processing_mode_t value.
 * @ingroup c_common
 * @details The returned string doesn't need to be freed.
 * @param value: The value to be converted to string.
 * @param result: Pointer to a variable that will store the string representation of the value.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_processing_mode_t_to_string(scanbotsdk_processing_mode_t value, const char** result);

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* SCANBOTSDK_COMMONTYPES_H */