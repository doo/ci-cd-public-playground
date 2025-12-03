// Auto-generated with ScanbotSDKCodegenV3. Modifications will be overwritten.
// Generated from SchemasV3/CoreSchemas/schemas/DocumentDataExtractor.yaml
/**
 * @file ScanbotSDKDocumentDataExtractor.h
 */

#pragma once
#ifndef SCANBOTSDK_DOCUMENTDATAEXTRACTOR_H
#define SCANBOTSDK_DOCUMENTDATAEXTRACTOR_H


#include <ScanbotSDKImage.h>
#include <document_data/ScanbotSDKDocumentDataExtractorTypes.h>
#include <generic_document/ScanbotSDKGenericDocument.h>
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
 * @brief scanbotsdk_document_data_extractor_t class
 * @details API for extracting data from documents.
 * @ingroup c_document_data
*/
typedef struct scanbotsdk_document_data_extractor_t scanbotsdk_document_data_extractor_t;

/**
 * @brief Creates a new instance of scanbotsdk_document_data_extractor with given params and stores it in the location specified by the last argument.
 * @ingroup c_document_data
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param configuration: The configuration to use for the recognizer.
 * The value must not be null.
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_document_data_extractor_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_data_extractor_create(
        scanbotsdk_document_data_extractor_configuration_t* configuration,
        scanbotsdk_document_data_extractor_t** result
);

/**
 * @brief Frees the memory allocated for the instance of scanbotsdk_document_data_extractor_t. If null is passed, the function does nothing.
 * @ingroup c_document_data
 * @param self: Pointer to the instance of scanbotsdk_document_data_extractor_t to be freed
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_data_extractor_free(
        scanbotsdk_document_data_extractor_t* self
);

/**
 * @brief Recognize the document in the given image.
 * @ingroup c_document_data
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_document_data_extractor_t method to be called on
 * @param image: The image to recognize.
 * The value must not be null.
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_document_data_extractor_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_data_extractor_run(
    scanbotsdk_document_data_extractor_t* self, 
    scanbotsdk_image_t* image,
    scanbotsdk_document_data_extraction_result_t** result
);

/**
 * @brief Clears the accumulated results. Should be called after a document has been recognized to the customers 
 * satisfaction to prevent a poisoned cache.
 * 
 * @ingroup c_document_data
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_document_data_extractor_t method to be called on
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_data_extractor_clear_result(
    scanbotsdk_document_data_extractor_t* self
);

/**
 * @brief Verify whether the extracted document has signs of forgery or tampering.
 * @ingroup c_document_data
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_document_data_extractor_t method to be called on
 * @param document_parts: The document parts to verify. For example, the front and back of an ID card.
 * Entries of the array must not be null.
 * @param document_parts_size: Size of the array document_parts
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_document_data_extractor_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_data_extractor_verify_document(
    scanbotsdk_document_data_extractor_t* self, 
    scanbotsdk_generic_document_t** document_parts,
    size_t document_parts_size,
    scanbotsdk_document_verification_report_t** result
);


#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* SCANBOTSDK_DOCUMENTDATAEXTRACTOR_H */