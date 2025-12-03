// Auto-generated with ScanbotSDKCodegenV3. Modifications will be overwritten.
// Generated from SchemasV3/CoreSchemas/schemas/BarcodeDocumentParser.yaml
/**
 * @file ScanbotSDKBarcodeDocumentParser.h
 */

#pragma once
#ifndef SCANBOTSDK_BARCODEDOCUMENTPARSER_H
#define SCANBOTSDK_BARCODEDOCUMENTPARSER_H


#include <barcode/ScanbotSDKBarcodeDocumentTypes.h>
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
 * @brief scanbotsdk_barcode_document_parser_t class
 * @details API for parsing barcode documents.
 * 
 * Required licence feature(s): BarcodeScanner.
 * @ingroup c_barcode
*/
typedef struct scanbotsdk_barcode_document_parser_t scanbotsdk_barcode_document_parser_t;

/**
 * @brief Creates a new instance of scanbotsdk_barcode_document_parser with given params and stores it in the location specified by the last argument.
 * @ingroup c_barcode
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param accepted_formats: The configuration to use for the barcode document parser.
 * @param accepted_formats_size: Size of the array accepted_formats
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_barcode_document_parser_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_document_parser_create(
        scanbotsdk_barcode_document_format_t* accepted_formats,
        size_t accepted_formats_size,
        scanbotsdk_barcode_document_parser_t** result
);

/**
 * @brief Frees the memory allocated for the instance of scanbotsdk_barcode_document_parser_t. If null is passed, the function does nothing.
 * @ingroup c_barcode
 * @param self: Pointer to the instance of scanbotsdk_barcode_document_parser_t to be freed
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_document_parser_free(
        scanbotsdk_barcode_document_parser_t* self
);

/**
 * @brief Parse the given string as a barcode document.
 * @ingroup c_barcode
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_barcode_document_parser_t method to be called on
 * @param raw_string: The string to parse as a barcode document.
 * The value must not be null.
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_barcode_document_parser_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_document_parser_parse(
    scanbotsdk_barcode_document_parser_t* self, 
    const char* raw_string,
    scanbotsdk_barcode_document_parser_result_t** result
);


#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* SCANBOTSDK_BARCODEDOCUMENTPARSER_H */