// Auto-generated with ScanbotSDKCodegenV3. Modifications will be overwritten.
// Generated from SchemasV3/CoreSchemas/schemas/BarcodeScanner.yaml
/**
 * @file ScanbotSDKBarcodeScanner.h
 */

#pragma once
#ifndef SCANBOTSDK_BARCODESCANNER_H
#define SCANBOTSDK_BARCODESCANNER_H


#include <ScanbotSDKImage.h>
#include <barcode/ScanbotSDKBarcodeScannerTypes.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <ScanbotSDKErrorCode.h>
#include <ScanbotSDKDefs.h>

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief scanbotsdk_barcode_scanner_t class
 * @details API for barcode scanning.
 * 
 * Required licence feature(s): BarcodeScanner.
 * @ingroup c_barcode
*/
typedef struct scanbotsdk_barcode_scanner_t scanbotsdk_barcode_scanner_t;

/**
 * @brief Creates a new instance of scanbotsdk_barcode_scanner with given params and stores it in the location specified by the last argument.
 * @ingroup c_barcode
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param configuration: The configuration to use for the barcode scanner.
 * The value must not be null.
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_barcode_scanner_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_scanner_create(
        scanbotsdk_barcode_scanner_configuration_t* configuration,
        scanbotsdk_barcode_scanner_t** result
);

/**
 * @brief Frees the memory allocated for the instance of scanbotsdk_barcode_scanner_t. If null is passed, the function does nothing.
 * @ingroup c_barcode
 * @param self: Pointer to the instance of scanbotsdk_barcode_scanner_t to be freed
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_scanner_free(
        scanbotsdk_barcode_scanner_t* self
);

/**
 * @brief Recognize barcodes in the given image.
 * @ingroup c_barcode
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_barcode_scanner_t method to be called on
 * @param image: The image to recognize barcodes in.
 * The value must not be null.
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_barcode_scanner_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_scanner_run(
    scanbotsdk_barcode_scanner_t* self, 
    scanbotsdk_image_t* image,
    scanbotsdk_barcode_scanner_result_t** result
);

/**
 * @brief Clear the cache of the barcode frame accumulator.
 * @ingroup c_barcode
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_barcode_scanner_t method to be called on
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_scanner_clear_frame_accumulation_cache(
    scanbotsdk_barcode_scanner_t* self
);


#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* SCANBOTSDK_BARCODESCANNER_H */