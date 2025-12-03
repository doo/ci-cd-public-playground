// Auto-generated with ScanbotSDKCodegenV3. Modifications will be overwritten.
// Generated from SchemasV3/CoreSchemas/schemas/TextPatternScanner.yaml
/**
 * @file ScanbotSDKTextPatternScanner.h
 */

#pragma once
#ifndef SCANBOTSDK_TEXTPATTERNSCANNER_H
#define SCANBOTSDK_TEXTPATTERNSCANNER_H


#include <ScanbotSDKImage.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <text_pattern/ScanbotSDKTextPatternScannerTypes.h>
#include <ScanbotSDKErrorCode.h>
#include <ScanbotSDKDefs.h>

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief scanbotsdk_text_pattern_scanner_t class
 * @details API for text pattern scanning.
 * 
 * Required licence feature(s): TextPatternScanner.
 * @ingroup c_text_pattern
*/
typedef struct scanbotsdk_text_pattern_scanner_t scanbotsdk_text_pattern_scanner_t;

/**
 * @brief Creates a new instance of scanbotsdk_text_pattern_scanner with given params and stores it in the location specified by the last argument.
 * @ingroup c_text_pattern
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param configuration: The configuration to use for the generic text line scanner.
 * The value must not be null.
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_text_pattern_scanner_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_text_pattern_scanner_create(
        scanbotsdk_text_pattern_scanner_configuration_t* configuration,
        scanbotsdk_text_pattern_scanner_t** result
);

/**
 * @brief Frees the memory allocated for the instance of scanbotsdk_text_pattern_scanner_t. If null is passed, the function does nothing.
 * @ingroup c_text_pattern
 * @param self: Pointer to the instance of scanbotsdk_text_pattern_scanner_t to be freed
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_text_pattern_scanner_free(
        scanbotsdk_text_pattern_scanner_t* self
);

/**
 * @brief Recognize text line in the given image.
 * @ingroup c_text_pattern
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_text_pattern_scanner_t method to be called on
 * @param image: The image to recognize text line in.
 * The value must not be null.
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_text_pattern_scanner_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_text_pattern_scanner_run(
    scanbotsdk_text_pattern_scanner_t* self, 
    scanbotsdk_image_t* image,
    scanbotsdk_text_pattern_scanner_result_t** result
);

/**
 * @brief Clean the queue of recognize text lines.
 * @ingroup c_text_pattern
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_text_pattern_scanner_t method to be called on
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_text_pattern_scanner_clean_recognition_queue(
    scanbotsdk_text_pattern_scanner_t* self
);


#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* SCANBOTSDK_TEXTPATTERNSCANNER_H */