// Auto-generated with ScanbotSDKCodegenV3. Modifications will be overwritten.
// Generated from SchemasV3/CoreSchemas/schemas/CreditCardScanner.yaml
/**
 * @file ScanbotSDKCreditCardScanner.h
 */

#pragma once
#ifndef SCANBOTSDK_CREDITCARDSCANNER_H
#define SCANBOTSDK_CREDITCARDSCANNER_H


#include <ScanbotSDKImage.h>
#include <credit_card/ScanbotSDKCreditCardTypes.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <ScanbotSDKErrorCode.h>
#include <ScanbotSDKDefs.h>

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief scanbotsdk_credit_card_scanner_t class
 * @details API for credit card scanning.
 * 
 * Required licence feature(s): CreditCardScanner.
 * @ingroup c_credit_card
*/
typedef struct scanbotsdk_credit_card_scanner_t scanbotsdk_credit_card_scanner_t;

/**
 * @brief Creates a new instance of scanbotsdk_credit_card_scanner with given params and stores it in the location specified by the last argument.
 * @ingroup c_credit_card
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param configuration: The configuration to use for the scanner.
 * The value must not be null.
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_credit_card_scanner_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_credit_card_scanner_create(
        scanbotsdk_credit_card_scanner_configuration_t* configuration,
        scanbotsdk_credit_card_scanner_t** result
);

/**
 * @brief Frees the memory allocated for the instance of scanbotsdk_credit_card_scanner_t. If null is passed, the function does nothing.
 * @ingroup c_credit_card
 * @param self: Pointer to the instance of scanbotsdk_credit_card_scanner_t to be freed
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_credit_card_scanner_free(
        scanbotsdk_credit_card_scanner_t* self
);

/**
 * @brief Scan the credit card in the given image.
 * @ingroup c_credit_card
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_credit_card_scanner_t method to be called on
 * @param image: The image to scan.
 * The value must not be null.
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_credit_card_scanner_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_credit_card_scanner_run(
    scanbotsdk_credit_card_scanner_t* self, 
    scanbotsdk_image_t* image,
    scanbotsdk_credit_card_scanning_result_t** result
);

/**
 * @brief Clears the accumulated results. Should be called after a document has been scanned to the customers 
 * satisfaction to prevent a poisoned cache.
 * 
 * @ingroup c_credit_card
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_credit_card_scanner_t method to be called on
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_credit_card_scanner_clear_result(
    scanbotsdk_credit_card_scanner_t* self
);


#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* SCANBOTSDK_CREDITCARDSCANNER_H */