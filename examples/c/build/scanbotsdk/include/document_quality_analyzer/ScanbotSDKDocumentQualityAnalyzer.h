// Auto-generated with ScanbotSDKCodegenV3. Modifications will be overwritten.
// Generated from SchemasV3/CoreSchemas/schemas/DocumentQualityAnalyzer.yaml
/**
 * @file ScanbotSDKDocumentQualityAnalyzer.h
 */

#pragma once
#ifndef SCANBOTSDK_DOCUMENTQUALITYANALYZER_H
#define SCANBOTSDK_DOCUMENTQUALITYANALYZER_H


#include <ScanbotSDKImage.h>
#include <document_quality_analyzer/ScanbotSDKDocumentQualityAnalyzerTypes.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <ScanbotSDKErrorCode.h>
#include <ScanbotSDKDefs.h>

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief scanbotsdk_document_quality_analyzer_t class
 * @details API for analyzing document quality.
 * 
 * Required licence feature(s): ImageProcessing.
 * @ingroup c_document_quality_analyzer
*/
typedef struct scanbotsdk_document_quality_analyzer_t scanbotsdk_document_quality_analyzer_t;

/**
 * @brief Creates a new instance of scanbotsdk_document_quality_analyzer with given params and stores it in the location specified by the last argument.
 * @ingroup c_document_quality_analyzer
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param configuration: The configuration to use for the document quality analyzer.
 * The value must not be null.
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_document_quality_analyzer_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_quality_analyzer_create(
        scanbotsdk_document_quality_analyzer_configuration_t* configuration,
        scanbotsdk_document_quality_analyzer_t** result
);

/**
 * @brief Frees the memory allocated for the instance of scanbotsdk_document_quality_analyzer_t. If null is passed, the function does nothing.
 * @ingroup c_document_quality_analyzer
 * @param self: Pointer to the instance of scanbotsdk_document_quality_analyzer_t to be freed
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_quality_analyzer_free(
        scanbotsdk_document_quality_analyzer_t* self
);

/**
 * @brief analyze document quality of the given image.
 * @ingroup c_document_quality_analyzer
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_document_quality_analyzer_t method to be called on
 * @param image: The image to analyze.
 * The value must not be null.
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_document_quality_analyzer_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_quality_analyzer_run(
    scanbotsdk_document_quality_analyzer_t* self, 
    scanbotsdk_image_t* image,
    scanbotsdk_document_quality_analyzer_result_t** result
);


#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* SCANBOTSDK_DOCUMENTQUALITYANALYZER_H */