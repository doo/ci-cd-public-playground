// Auto-generated with ScanbotSDKCodegenV3. Modifications will be overwritten.
// Generated from SchemasV3/CoreSchemas/schemas/OCREngine.yaml
/**
 * @file ScanbotSDKOcrEngine.h
 */

#pragma once
#ifndef SCANBOTSDK_OCRENGINE_H
#define SCANBOTSDK_OCRENGINE_H


#include <ScanbotSDKImage.h>
#include <ocr/ScanbotSDKOcrTypes.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <ScanbotSDKErrorCode.h>
#include <ScanbotSDKDefs.h>

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief scanbotsdk_ocr_engine_t class
 * @details API for optical character recognition.
 * 
 * Required licence feature(s): Ocr.
 * @ingroup c_ocr
*/
typedef struct scanbotsdk_ocr_engine_t scanbotsdk_ocr_engine_t;

/**
 * @brief Creates a new instance of scanbotsdk_ocr_engine with given params and stores it in the location specified by the last argument.
 * @ingroup c_ocr
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_ocr_engine_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_ocr_engine_create(
        scanbotsdk_ocr_engine_t** result
);

/**
 * @brief Frees the memory allocated for the instance of scanbotsdk_ocr_engine_t. If null is passed, the function does nothing.
 * @ingroup c_ocr
 * @param self: Pointer to the instance of scanbotsdk_ocr_engine_t to be freed
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_ocr_engine_free(
        scanbotsdk_ocr_engine_t* self
);

/**
 * @brief Recognize text in the given image.
 * @ingroup c_ocr
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_ocr_engine_t method to be called on
 * @param image: The image to recognize text in.
 * The value must not be null.
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_ocr_engine_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_ocr_engine_run(
    scanbotsdk_ocr_engine_t* self, 
    scanbotsdk_image_t* image,
    scanbotsdk_page_t** result
);


#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* SCANBOTSDK_OCRENGINE_H */