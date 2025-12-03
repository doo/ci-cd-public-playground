// Auto-generated with ScanbotSDKCodegenV3. Modifications will be overwritten.
// Generated from SchemasV3/CoreSchemas/schemas/MRZScanner.yaml
/**
 * @file ScanbotSDKMrzScanner.h
 */

#pragma once
#ifndef SCANBOTSDK_MRZSCANNER_H
#define SCANBOTSDK_MRZSCANNER_H


#include <ScanbotSDKImage.h>
#include <mrz/ScanbotSDKMrzTypes.h>
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
 * @brief scanbotsdk_mrz_scanner_t class
 * @details API for machine readable zone scanning.
 * 
 * Required licence feature(s): MrzScanner.
 * @ingroup c_mrz
*/
typedef struct scanbotsdk_mrz_scanner_t scanbotsdk_mrz_scanner_t;

/**
 * @brief Creates a new instance of scanbotsdk_mrz_scanner with given params and stores it in the location specified by the last argument.
 * @ingroup c_mrz
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param configuration: The configuration to use for the scanner.
 * The value must not be null.
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_mrz_scanner_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_mrz_scanner_create(
        scanbotsdk_mrz_scanner_configuration_t* configuration,
        scanbotsdk_mrz_scanner_t** result
);

/**
 * @brief Frees the memory allocated for the instance of scanbotsdk_mrz_scanner_t. If null is passed, the function does nothing.
 * @ingroup c_mrz
 * @param self: Pointer to the instance of scanbotsdk_mrz_scanner_t to be freed
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_mrz_scanner_free(
        scanbotsdk_mrz_scanner_t* self
);

/**
 * @brief Recognize the MRZ in the given image.
 * @ingroup c_mrz
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_mrz_scanner_t method to be called on
 * @param image: The image to recognize.
 * The value must not be null.
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_mrz_scanner_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_mrz_scanner_run(
    scanbotsdk_mrz_scanner_t* self, 
    scanbotsdk_image_t* image,
    scanbotsdk_mrz_scanner_result_t** result
);

/**
 * @brief Clears the accumulated results. Should be called after a document has been recognized to the customers 
 * satisfaction to prevent a poisoned cache.
 * 
 * @ingroup c_mrz
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_mrz_scanner_t method to be called on
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_mrz_scanner_clear_result(
    scanbotsdk_mrz_scanner_t* self
);


/**
 * @brief scanbotsdk_mrz_parser_t class
 * @details API for machine readable zone parsing.
 * 
 * Required licence feature(s): MrzScanner.
 * @ingroup c_mrz
*/
typedef struct scanbotsdk_mrz_parser_t scanbotsdk_mrz_parser_t;

/**
 * @brief Creates a new instance of scanbotsdk_mrz_parser with given params and stores it in the location specified by the last argument.
 * @ingroup c_mrz
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param configuration: The configuration to use for the parser.
 * The value must not be null.
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_mrz_parser_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_mrz_parser_create(
        scanbotsdk_mrz_parser_configuration_t* configuration,
        scanbotsdk_mrz_parser_t** result
);

/**
 * @brief Frees the memory allocated for the instance of scanbotsdk_mrz_parser_t. If null is passed, the function does nothing.
 * @ingroup c_mrz
 * @param self: Pointer to the instance of scanbotsdk_mrz_parser_t to be freed
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_mrz_parser_free(
        scanbotsdk_mrz_parser_t* self
);

/**
 * @brief Parse the MRZ string.
 * @ingroup c_mrz
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_mrz_parser_t method to be called on
 * @param text: The MRZ string to parse. Should be formatted with newlines.
 * The value must not be null.
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_mrz_parser_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_mrz_parser_parse(
    scanbotsdk_mrz_parser_t* self, 
    const char* text,
    scanbotsdk_mrz_scanner_result_t** result
);


#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* SCANBOTSDK_MRZSCANNER_H */