// Auto-generated with ScanbotSDKCodegenV3. Modifications will be overwritten.
// Generated from SchemasV3/CoreSchemas/schemas/DocumentScanner.yaml
/**
 * @file ScanbotSDKDocumentScanner.h
 */

#pragma once
#ifndef SCANBOTSDK_DOCUMENTSCANNER_H
#define SCANBOTSDK_DOCUMENTSCANNER_H


#include <ScanbotSDKImage.h>
#include <document_scanner/ScanbotSDKDocumentScannerTypes.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <ScanbotSDKErrorCode.h>
#include <ScanbotSDKDefs.h>

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief scanbotsdk_document_scanner_t class
 * @details API for document detection and scanning.
 * 
 * Required licence feature(s): DocumentScanner.
 * @ingroup c_document_scanner
*/
typedef struct scanbotsdk_document_scanner_t scanbotsdk_document_scanner_t;

/**
 * @brief Creates a new instance of scanbotsdk_document_scanner with given params and stores it in the location specified by the last argument.
 * @ingroup c_document_scanner
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param configuration: The configuration for the document detector.
 * The value must not be null.
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_document_scanner_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_scanner_create(
        scanbotsdk_document_scanner_configuration_t* configuration,
        scanbotsdk_document_scanner_t** result
);

/**
 * @brief Frees the memory allocated for the instance of scanbotsdk_document_scanner_t. If null is passed, the function does nothing.
 * @ingroup c_document_scanner
 * @param self: Pointer to the instance of scanbotsdk_document_scanner_t to be freed
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_scanner_free(
        scanbotsdk_document_scanner_t* self
);

/**
 * @brief Detect the document contour in the given image.
 * @ingroup c_document_scanner
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_document_scanner_t method to be called on
 * @param image: The image to detect the document contour in.
 * The value must not be null.
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_document_scanner_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_scanner_run(
    scanbotsdk_document_scanner_t* self, 
    scanbotsdk_image_t* image,
    scanbotsdk_document_detection_result_t** result
);

/**
 * @brief Detect the document contour in the given image and crop it.
 * @ingroup c_document_scanner
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_document_scanner_t method to be called on
 * @param image: The image to detect the document contour in.
 * The value must not be null.
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_document_scanner_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_scanner_scan(
    scanbotsdk_document_scanner_t* self, 
    scanbotsdk_image_t* image,
    scanbotsdk_document_scanning_result_t** result
);

/**
 * @brief Clears the accumulated results. Should be called after a document has been detected to the customers 
 * satisfaction to prevent a poisoned cache.
 * 
 * @ingroup c_document_scanner
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_document_scanner_t method to be called on
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_scanner_clear_result(
    scanbotsdk_document_scanner_t* self
);


#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* SCANBOTSDK_DOCUMENTSCANNER_H */