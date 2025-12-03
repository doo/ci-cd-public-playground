// Auto-generated with ScanbotSDKCodegenV3. Modifications will be overwritten.
// Generated from SchemasV3/CoreSchemas/schemas/CheckScanner.yaml
/**
 * @file ScanbotSDKCheckScanner.h
 */

#pragma once
#ifndef SCANBOTSDK_CHECKSCANNER_H
#define SCANBOTSDK_CHECKSCANNER_H


#include <ScanbotSDKImage.h>
#include <check/ScanbotSDKCheckScannerTypes.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <ScanbotSDKErrorCode.h>
#include <ScanbotSDKDefs.h>

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief scanbotsdk_check_scanner_t class
 * @details API for check scanning.
 * 
 * Required licence feature(s): CheckScanner.
 * @ingroup c_check
*/
typedef struct scanbotsdk_check_scanner_t scanbotsdk_check_scanner_t;

/**
 * @brief Creates a new instance of scanbotsdk_check_scanner with given params and stores it in the location specified by the last argument.
 * @ingroup c_check
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param configuration: The configuration to use for the check scanner.
 * The value must not be null.
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_check_scanner_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_check_scanner_create(
        scanbotsdk_check_scanner_configuration_t* configuration,
        scanbotsdk_check_scanner_t** result
);

/**
 * @brief Frees the memory allocated for the instance of scanbotsdk_check_scanner_t. If null is passed, the function does nothing.
 * @ingroup c_check
 * @param self: Pointer to the instance of scanbotsdk_check_scanner_t to be freed
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_check_scanner_free(
        scanbotsdk_check_scanner_t* self
);

/**
 * @brief Scan check in the given image.
 * @ingroup c_check
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_check_scanner_t method to be called on
 * @param image: The image to scan check in.
 * The value must not be null.
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_check_scanner_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_check_scanner_run(
    scanbotsdk_check_scanner_t* self, 
    scanbotsdk_image_t* image,
    scanbotsdk_check_scanning_result_t** result
);


#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* SCANBOTSDK_CHECKSCANNER_H */