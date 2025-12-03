// Auto-generated with ScanbotSDKCodegenV3. Modifications will be overwritten.
// Generated from SchemasV3/CoreSchemas/schemas/MultiPageImageExtractor.yaml
/**
 * @file ScanbotSDKMultiPageImageExtractor.h
 */

#pragma once
#ifndef SCANBOTSDK_MULTIPAGEIMAGEEXTRACTOR_H
#define SCANBOTSDK_MULTIPAGEIMAGEEXTRACTOR_H


#include <ScanbotSDKRandomAccessSource.h>
#include <multi_page_image_extractor/ScanbotSDKMultiPageImageExtractorTypes.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <ScanbotSDKErrorCode.h>
#include <ScanbotSDKDefs.h>

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief scanbotsdk_multi_page_image_extractor_t class
 * @details API for extracting images from multi-page images (PDF, TIFF) and single-page images (JPEG, PNG).
 * 
 * Required licence feature(s): ImageProcessing.
 * @ingroup c_multi_page_image_extractor
*/
typedef struct scanbotsdk_multi_page_image_extractor_t scanbotsdk_multi_page_image_extractor_t;

/**
 * @brief Creates a new instance of scanbotsdk_multi_page_image_extractor with given params and stores it in the location specified by the last argument.
 * @ingroup c_multi_page_image_extractor
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_multi_page_image_extractor_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_multi_page_image_extractor_create(
        scanbotsdk_multi_page_image_extractor_t** result
);

/**
 * @brief Frees the memory allocated for the instance of scanbotsdk_multi_page_image_extractor_t. If null is passed, the function does nothing.
 * @ingroup c_multi_page_image_extractor
 * @param self: Pointer to the instance of scanbotsdk_multi_page_image_extractor_t to be freed
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_multi_page_image_extractor_free(
        scanbotsdk_multi_page_image_extractor_t* self
);

/**
 * @brief Extracts images from the given source. If possible, images that are originally stored in a compressed way, are not decompressed automatically but are initialized in a lazy way. 
 * This means that the image data is only decompressed when it is accessed for the first time.
 * That's why when the images are used after extraction, it is recommended to close (dispose) (if platform uses Garbage Collector) images as soon as they are not needed anymore to prevent storing a lot of images in decompressed state in memory.
 * After the method is executed, the source doesn't have to exist anymore.
 * 
 * @ingroup c_multi_page_image_extractor
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_multi_page_image_extractor_t method to be called on
 * @param source: The source to extract images from. Supported multi-page image formats are TIFF and PDF. Supported single page image formats are JPEG and PNG.
 * The value must not be null.
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_multi_page_image_extractor_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_multi_page_image_extractor_run(
    scanbotsdk_multi_page_image_extractor_t* self, 
    scanbotsdk_random_access_source_t* source,
    scanbotsdk_page_extraction_result_t** result
);


#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* SCANBOTSDK_MULTIPAGEIMAGEEXTRACTOR_H */