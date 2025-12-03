// Auto-generated with ScanbotSDKCodegenV3. Modifications will be overwritten.
// Generated from SchemasV3/CoreSchemas/schemas/CreditCardTypes.yaml
/**
 * @file ScanbotSDKCreditCardTypes.h
 */

#pragma once
#ifndef SCANBOTSDK_CREDITCARDTYPES_H
#define SCANBOTSDK_CREDITCARDTYPES_H


#include <ScanbotSDKTypes.h>
#include <common/ScanbotSDKCommonTypes.h>
#include <document_scanner/ScanbotSDKDocumentScannerTypes.h>
#include <frame_accumulation/ScanbotSDKFrameAccumulationTypes.h>
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
 * @brief scanbotsdk_credit_card_scanning_status_t enum
 * @details The status of the scanning process.
 * @ingroup c_credit_card
*/
typedef enum scanbotsdk_credit_card_scanning_status_t {

    /**The credit card was scanned successfully.*/
    SCANBOTSDK_CREDIT_CARD_SCANNING_STATUS_SUCCESS = 0,

    /**No credit card was detected.*/
    SCANBOTSDK_CREDIT_CARD_SCANNING_STATUS_ERROR_NOTHING_FOUND = 1,

    /**Not all required fields were found or confirmed.*/
    SCANBOTSDK_CREDIT_CARD_SCANNING_STATUS_INCOMPLETE = 2,

} scanbotsdk_credit_card_scanning_status_t;

/**
 * @brief Returns the string representation of the given scanbotsdk_credit_card_scanning_status_t value.
 * @ingroup c_credit_card
 * @details The returned string doesn't need to be freed.
 * @param value: The value to be converted to string.
 * @param result: Pointer to a variable that will store the string representation of the value.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_credit_card_scanning_status_t_to_string(scanbotsdk_credit_card_scanning_status_t value, const char** result);

/**
 * @brief scanbotsdk_credit_card_scanning_result_t class
 * @details Contains the result of running the credit card scanner.
 * @ingroup c_credit_card
*/
typedef struct scanbotsdk_credit_card_scanning_result_t scanbotsdk_credit_card_scanning_result_t;

/**
 * @brief Frees the memory allocated for the instance of scanbotsdk_credit_card_scanning_result_t. If null is passed, the function does nothing.
 * @ingroup c_credit_card
 * @param object: Pointer to the instance of scanbotsdk_credit_card_scanning_result_t to be freed
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_credit_card_scanning_result_free(scanbotsdk_credit_card_scanning_result_t* object);

/**
 * @brief Returns value of detection_status field of the given object.
 * @ingroup c_credit_card
 * @details The status of the credit card detection step.
 * @param self: Pointer to the instance of scanbotsdk_credit_card_scanning_result_t
 * @param detection_status: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_credit_card_scanning_result_get_detection_status(scanbotsdk_credit_card_scanning_result_t* self, scanbotsdk_document_detection_status_t* detection_status);

/**
 * @brief Returns value of scanning_status field of the given object.
 * @ingroup c_credit_card
 * @details The status of the credit card scanning step.
 * @param self: Pointer to the instance of scanbotsdk_credit_card_scanning_result_t
 * @param scanning_status: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_credit_card_scanning_result_get_scanning_status(scanbotsdk_credit_card_scanning_result_t* self, scanbotsdk_credit_card_scanning_status_t* scanning_status);

/**
 * @brief Returns value of credit_card field of the given object. The returned pointers do NOT own the underlying object, caller must not free them.
 * @ingroup c_credit_card
 * @details Generic document containing credit card data. Not present, if status is FAIL.
 * @param self: Pointer to the instance of scanbotsdk_credit_card_scanning_result_t
 * @param credit_card: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_credit_card_scanning_result_get_credit_card(scanbotsdk_credit_card_scanning_result_t* self, scanbotsdk_generic_document_t** credit_card);

/**
 * @brief Returns value of quad field of the given object. The returned value is direct view into memory, no pre-allocations needed.
 * @ingroup c_credit_card
 * @details Coordinates of the detected credit card in the input image (clockwise from top-left).
 * @param self: Pointer to the instance of scanbotsdk_credit_card_scanning_result_t
 * @param quad: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_credit_card_scanning_result_get_quad(scanbotsdk_credit_card_scanning_result_t* self, scanbotsdk_point_t** quad);
/**
 * @brief Returns size of quad array.
 * @ingroup c_credit_card
 * @param self: Pointer to the instance of scanbotsdk_credit_card_scanning_result_t
 * @param size: Pointer to a variable that will store the size.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_credit_card_scanning_result_get_quad_size(scanbotsdk_credit_card_scanning_result_t* self, size_t* size);

/**
 * @brief Returns value of quad_normalized field of the given object. The returned value is direct view into memory, no pre-allocations needed.
 * @ingroup c_credit_card
 * @details Coordinates of the detected credit card in the input image (clockwise from top-left), normalized to the range [0, 1].
 * @param self: Pointer to the instance of scanbotsdk_credit_card_scanning_result_t
 * @param quad_normalized: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_credit_card_scanning_result_get_quad_normalized(scanbotsdk_credit_card_scanning_result_t* self, scanbotsdk_pointf_t** quad_normalized);
/**
 * @brief Returns size of quad_normalized array.
 * @ingroup c_credit_card
 * @param self: Pointer to the instance of scanbotsdk_credit_card_scanning_result_t
 * @param size: Pointer to a variable that will store the size.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_credit_card_scanning_result_get_quad_normalized_size(scanbotsdk_credit_card_scanning_result_t* self, size_t* size);


/**
 * @brief scanbotsdk_credit_card_scanner_configuration_t class
 * @details Configuration for the credit card scanner.
 * @ingroup c_credit_card
*/
typedef struct scanbotsdk_credit_card_scanner_configuration_t scanbotsdk_credit_card_scanner_configuration_t;

/**
 * @brief Creates a new instance of scanbotsdk_credit_card_scanner_configuration with given params and stores it in the location specified by the last argument.
 * @ingroup c_credit_card
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param use_document_detector: If true, the document detector will be used to find where the credit card is in the input image.
 * If false, the scanner will assume that the credit card has been pre-cropped and takes the entirety of the input image.
 * 
 * Default is true
 * @param require_expiry_date: Whether the expiry date is required for a successful scan.
 * 
 * Default is true
 * @param require_cardholder_name: Whether the cardholder name is required for a successful scan.
 * 
 * Default is true
 * @param result_accumulation_config: Configuration for how to accumulate results.
 * The value must not be null.
 * @param return_credit_card_image: If true, the credit card image will be returned in creditCard field of CreditCardScanningResult.
 * 
 * Default is false
 * @param processing_mode: Scanners typically can produce better results from a single image if they are allowed to spend a longer time analyzing it. 
 * 
 * On the other hand, scanners can produce even better results if they can analyze multiple images of the same subject and cross-check and combine the results. 
 * The processing mode tells the scanner whether to optimize for single or multiple images of a subject.
 * 
 * Default is AUTO
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_credit_card_scanner_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_credit_card_scanner_configuration_create(
    bool use_document_detector,
    bool require_expiry_date,
    bool require_cardholder_name,
    scanbotsdk_result_accumulation_configuration_t* result_accumulation_config,
    bool return_credit_card_image,
    scanbotsdk_processing_mode_t processing_mode,
    scanbotsdk_credit_card_scanner_configuration_t** result);

/**
 * @brief Creates a new instance of scanbotsdk_credit_card_scanner_configuration_t with given required params and stores it in the location specified by the last argument.
 * @ingroup c_credit_card
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_credit_card_scanner_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_credit_card_scanner_configuration_create_with_defaults(
    scanbotsdk_credit_card_scanner_configuration_t** result);


/**
 * @brief Frees the memory allocated for the instance of scanbotsdk_credit_card_scanner_configuration_t. If null is passed, the function does nothing.
 * @ingroup c_credit_card
 * @param object: Pointer to the instance of scanbotsdk_credit_card_scanner_configuration_t to be freed
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_credit_card_scanner_configuration_free(scanbotsdk_credit_card_scanner_configuration_t* object);

/**
 * @brief Returns value of use_document_detector field of the given object.
 * @ingroup c_credit_card
 * @details If true, the document detector will be used to find where the credit card is in the input image.
 * If false, the scanner will assume that the credit card has been pre-cropped and takes the entirety of the input image.
 * 
 * Default is true
 * @param self: Pointer to the instance of scanbotsdk_credit_card_scanner_configuration_t
 * @param use_document_detector: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_credit_card_scanner_configuration_get_use_document_detector(scanbotsdk_credit_card_scanner_configuration_t* self, bool* use_document_detector);
/**
 * @brief Sets value of use_document_detector field of the given object.
 * @ingroup c_credit_card
 * @details If true, the document detector will be used to find where the credit card is in the input image.
 * If false, the scanner will assume that the credit card has been pre-cropped and takes the entirety of the input image.
 * 
 * Default is true
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_credit_card_scanner_configuration_t, the field of which will be set
 * @param use_document_detector: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_credit_card_scanner_configuration_set_use_document_detector(scanbotsdk_credit_card_scanner_configuration_t* self, bool use_document_detector);

/**
 * @brief Returns value of require_expiry_date field of the given object.
 * @ingroup c_credit_card
 * @details Whether the expiry date is required for a successful scan.
 * 
 * Default is true
 * @param self: Pointer to the instance of scanbotsdk_credit_card_scanner_configuration_t
 * @param require_expiry_date: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_credit_card_scanner_configuration_get_require_expiry_date(scanbotsdk_credit_card_scanner_configuration_t* self, bool* require_expiry_date);
/**
 * @brief Sets value of require_expiry_date field of the given object.
 * @ingroup c_credit_card
 * @details Whether the expiry date is required for a successful scan.
 * 
 * Default is true
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_credit_card_scanner_configuration_t, the field of which will be set
 * @param require_expiry_date: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_credit_card_scanner_configuration_set_require_expiry_date(scanbotsdk_credit_card_scanner_configuration_t* self, bool require_expiry_date);

/**
 * @brief Returns value of require_cardholder_name field of the given object.
 * @ingroup c_credit_card
 * @details Whether the cardholder name is required for a successful scan.
 * 
 * Default is true
 * @param self: Pointer to the instance of scanbotsdk_credit_card_scanner_configuration_t
 * @param require_cardholder_name: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_credit_card_scanner_configuration_get_require_cardholder_name(scanbotsdk_credit_card_scanner_configuration_t* self, bool* require_cardholder_name);
/**
 * @brief Sets value of require_cardholder_name field of the given object.
 * @ingroup c_credit_card
 * @details Whether the cardholder name is required for a successful scan.
 * 
 * Default is true
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_credit_card_scanner_configuration_t, the field of which will be set
 * @param require_cardholder_name: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_credit_card_scanner_configuration_set_require_cardholder_name(scanbotsdk_credit_card_scanner_configuration_t* self, bool require_cardholder_name);

/**
 * @brief Returns value of result_accumulation_config field of the given object. The returned pointers do NOT own the underlying object, caller must not free them.
 * @ingroup c_credit_card
 * @details Configuration for how to accumulate results.
 * @param self: Pointer to the instance of scanbotsdk_credit_card_scanner_configuration_t
 * @param result_accumulation_config: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_credit_card_scanner_configuration_get_result_accumulation_config(scanbotsdk_credit_card_scanner_configuration_t* self, scanbotsdk_result_accumulation_configuration_t** result_accumulation_config);
/**
 * @brief Sets value of result_accumulation_config field of the given object.
 * @ingroup c_credit_card
 * @details Configuration for how to accumulate results.
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_credit_card_scanner_configuration_t, the field of which will be set
 * @param result_accumulation_config: The value to be set. Must not be null.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_credit_card_scanner_configuration_set_result_accumulation_config(scanbotsdk_credit_card_scanner_configuration_t* self, scanbotsdk_result_accumulation_configuration_t* result_accumulation_config);

/**
 * @brief Returns value of return_credit_card_image field of the given object.
 * @ingroup c_credit_card
 * @details If true, the credit card image will be returned in creditCard field of CreditCardScanningResult.
 * 
 * Default is false
 * @param self: Pointer to the instance of scanbotsdk_credit_card_scanner_configuration_t
 * @param return_credit_card_image: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_credit_card_scanner_configuration_get_return_credit_card_image(scanbotsdk_credit_card_scanner_configuration_t* self, bool* return_credit_card_image);
/**
 * @brief Sets value of return_credit_card_image field of the given object.
 * @ingroup c_credit_card
 * @details If true, the credit card image will be returned in creditCard field of CreditCardScanningResult.
 * 
 * Default is false
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_credit_card_scanner_configuration_t, the field of which will be set
 * @param return_credit_card_image: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_credit_card_scanner_configuration_set_return_credit_card_image(scanbotsdk_credit_card_scanner_configuration_t* self, bool return_credit_card_image);

/**
 * @brief Returns value of processing_mode field of the given object.
 * @ingroup c_credit_card
 * @details Scanners typically can produce better results from a single image if they are allowed to spend a longer time analyzing it. 
 * 
 * On the other hand, scanners can produce even better results if they can analyze multiple images of the same subject and cross-check and combine the results. 
 * The processing mode tells the scanner whether to optimize for single or multiple images of a subject.
 * 
 * Default is AUTO
 * @param self: Pointer to the instance of scanbotsdk_credit_card_scanner_configuration_t
 * @param processing_mode: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_credit_card_scanner_configuration_get_processing_mode(scanbotsdk_credit_card_scanner_configuration_t* self, scanbotsdk_processing_mode_t* processing_mode);
/**
 * @brief Sets value of processing_mode field of the given object.
 * @ingroup c_credit_card
 * @details Scanners typically can produce better results from a single image if they are allowed to spend a longer time analyzing it. 
 * 
 * On the other hand, scanners can produce even better results if they can analyze multiple images of the same subject and cross-check and combine the results. 
 * The processing mode tells the scanner whether to optimize for single or multiple images of a subject.
 * 
 * Default is AUTO
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_credit_card_scanner_configuration_t, the field of which will be set
 * @param processing_mode: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_credit_card_scanner_configuration_set_processing_mode(scanbotsdk_credit_card_scanner_configuration_t* self, scanbotsdk_processing_mode_t processing_mode);


#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* SCANBOTSDK_CREDITCARDTYPES_H */