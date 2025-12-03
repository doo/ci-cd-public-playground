// Auto-generated with ScanbotSDKCodegenV3. Modifications will be overwritten.
// Generated from SchemasV3/CoreSchemas/schemas/VINScanner.yaml
/**
 * @file ScanbotSDKVinScanner.h
 */

#pragma once
#ifndef SCANBOTSDK_VINSCANNER_H
#define SCANBOTSDK_VINSCANNER_H


#include <ScanbotSDKImage.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <vin/ScanbotSDKVinScannerTypes.h>
#include <ScanbotSDKErrorCode.h>
#include <ScanbotSDKDefs.h>

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief scanbotsdk_vin_scanner_t class
 * @details API for VIN scanning.
 * @ingroup c_vin
*/
typedef struct scanbotsdk_vin_scanner_t scanbotsdk_vin_scanner_t;

/**
 * @brief Creates a new instance of scanbotsdk_vin_scanner with given params and stores it in the location specified by the last argument.
 * @ingroup c_vin
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param configuration: The configuration to use for the VIN scanner.
 * The value must not be null.
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_vin_scanner_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_vin_scanner_create(
        scanbotsdk_vin_scanner_configuration_t* configuration,
        scanbotsdk_vin_scanner_t** result
);

/**
 * @brief Frees the memory allocated for the instance of scanbotsdk_vin_scanner_t. If null is passed, the function does nothing.
 * @ingroup c_vin
 * @param self: Pointer to the instance of scanbotsdk_vin_scanner_t to be freed
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_vin_scanner_free(
        scanbotsdk_vin_scanner_t* self
);

/**
 * @brief Recognize VIN in the given image.
 * @ingroup c_vin
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_vin_scanner_t method to be called on
 * @param image: The image to recognize VIN in.
 * The value must not be null.
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_vin_scanner_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_vin_scanner_run(
    scanbotsdk_vin_scanner_t* self, 
    scanbotsdk_image_t* image,
    scanbotsdk_vin_scanner_result_t** result
);

/**
 * @brief Clean the queue of recognized VIN.
 * @ingroup c_vin
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_vin_scanner_t method to be called on
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_vin_scanner_clean_recognition_queue(
    scanbotsdk_vin_scanner_t* self
);


#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* SCANBOTSDK_VINSCANNER_H */