// Auto-generated with ScanbotSDKCodegenV3. Modifications will be overwritten.
// Generated from SchemasV3/CoreSchemas/schemas/DocumentClassifier.yaml
/**
 * @file ScanbotSDKDocumentClassifier.h
 */

#pragma once
#ifndef SCANBOTSDK_DOCUMENTCLASSIFIER_H
#define SCANBOTSDK_DOCUMENTCLASSIFIER_H


#include <ScanbotSDKImage.h>
#include <document_classifier/ScanbotSDKDocumentClassifierTypes.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <ScanbotSDKErrorCode.h>
#include <ScanbotSDKDefs.h>

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief scanbotsdk_document_classifier_t class
 * @details API for document classification.
 * 
 * Required licence feature(s): DocumentClassification.
 * @ingroup c_document_classifier
*/
typedef struct scanbotsdk_document_classifier_t scanbotsdk_document_classifier_t;

/**
 * @brief Creates a new instance of scanbotsdk_document_classifier with given params and stores it in the location specified by the last argument.
 * @ingroup c_document_classifier
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param configuration: The configuration to use for the classifier.
 * The value must not be null.
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_document_classifier_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_classifier_create(
        scanbotsdk_document_classifier_configuration_t* configuration,
        scanbotsdk_document_classifier_t** result
);

/**
 * @brief Frees the memory allocated for the instance of scanbotsdk_document_classifier_t. If null is passed, the function does nothing.
 * @ingroup c_document_classifier
 * @param self: Pointer to the instance of scanbotsdk_document_classifier_t to be freed
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_classifier_free(
        scanbotsdk_document_classifier_t* self
);

/**
 * @brief Classify the document in the given image.
 * @ingroup c_document_classifier
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_document_classifier_t method to be called on
 * @param image: The image to classify.
 * The value must not be null.
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_document_classifier_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_classifier_run(
    scanbotsdk_document_classifier_t* self, 
    scanbotsdk_image_t* image,
    scanbotsdk_document_classifier_result_t** result
);


#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* SCANBOTSDK_DOCUMENTCLASSIFIER_H */