// Auto-generated with ScanbotSDKCodegenV3. Modifications will be overwritten.
// Generated from SchemasV3/CoreSchemas/schemas/DocumentClassifierTypes.yaml
/**
 * @file ScanbotSDKDocumentClassifierTypes.h
 */

#pragma once
#ifndef SCANBOTSDK_DOCUMENTCLASSIFIERTYPES_H
#define SCANBOTSDK_DOCUMENTCLASSIFIERTYPES_H


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
 * @brief scanbotsdk_document_classifier_configuration_t class
 * @details Configuration for the document classifier.
 * @ingroup c_document_classifier
*/
typedef struct scanbotsdk_document_classifier_configuration_t scanbotsdk_document_classifier_configuration_t;

/**
 * @brief Creates a new instance of scanbotsdk_document_classifier_configuration with given params and stores it in the location specified by the last argument.
 * @ingroup c_document_classifier
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param crop: If true, image will be scanned for a valid document first.
 * 
 * Default is true
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_document_classifier_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_classifier_configuration_create(
    bool crop,
    scanbotsdk_document_classifier_configuration_t** result);

/**
 * @brief Creates a new instance of scanbotsdk_document_classifier_configuration_t with given required params and stores it in the location specified by the last argument.
 * @ingroup c_document_classifier
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_document_classifier_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_classifier_configuration_create_with_defaults(
    scanbotsdk_document_classifier_configuration_t** result);


/**
 * @brief Frees the memory allocated for the instance of scanbotsdk_document_classifier_configuration_t. If null is passed, the function does nothing.
 * @ingroup c_document_classifier
 * @param object: Pointer to the instance of scanbotsdk_document_classifier_configuration_t to be freed
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_classifier_configuration_free(scanbotsdk_document_classifier_configuration_t* object);

/**
 * @brief Returns value of crop field of the given object.
 * @ingroup c_document_classifier
 * @details If true, image will be scanned for a valid document first.
 * 
 * Default is true
 * @param self: Pointer to the instance of scanbotsdk_document_classifier_configuration_t
 * @param crop: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_classifier_configuration_get_crop(scanbotsdk_document_classifier_configuration_t* self, bool* crop);


/**
 * @brief scanbotsdk_document_classifier_status_t enum
 * @details The status of the classification result.
 * @ingroup c_document_classifier
*/
typedef enum scanbotsdk_document_classifier_status_t {

    /**The document was classified successfully.*/
    SCANBOTSDK_DOCUMENT_CLASSIFIER_STATUS_SUCCESS = 0,

    /**No document was detected.*/
    SCANBOTSDK_DOCUMENT_CLASSIFIER_STATUS_FAILURE_SCANNING = 1,

} scanbotsdk_document_classifier_status_t;

/**
 * @brief Returns the string representation of the given scanbotsdk_document_classifier_status_t value.
 * @ingroup c_document_classifier
 * @details The returned string doesn't need to be freed.
 * @param value: The value to be converted to string.
 * @param result: Pointer to a variable that will store the string representation of the value.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_classifier_status_t_to_string(scanbotsdk_document_classifier_status_t value, const char** result);

/**
 * @brief scanbotsdk_document_type_t enum
 * @details The type of the document.
 * @ingroup c_document_classifier
*/
typedef enum scanbotsdk_document_type_t {

    /**The document type is unknown.*/
    SCANBOTSDK_DOCUMENT_TYPE_UNKNOWN = 0,

    /**Bill of lading.*/
    SCANBOTSDK_DOCUMENT_TYPE_BILL_OF_LADING = 1,

    /**Pay sheet.*/
    SCANBOTSDK_DOCUMENT_TYPE_PAY_SHEET = 2,

    /**Scale ticket.*/
    SCANBOTSDK_DOCUMENT_TYPE_SCALE_TICKET = 3,

    /**Toll receipt.*/
    SCANBOTSDK_DOCUMENT_TYPE_TOLL_RECEIPT = 4,

    /**Wash receipt.*/
    SCANBOTSDK_DOCUMENT_TYPE_WASH_RECEIPT = 5,

} scanbotsdk_document_type_t;

/**
 * @brief Returns the string representation of the given scanbotsdk_document_type_t value.
 * @ingroup c_document_classifier
 * @details The returned string doesn't need to be freed.
 * @param value: The value to be converted to string.
 * @param result: Pointer to a variable that will store the string representation of the value.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_type_t_to_string(scanbotsdk_document_type_t value, const char** result);

/**
 * @brief scanbotsdk_document_classifier_result_t class
 * @details Contains the result of running the document classifier.
 * @ingroup c_document_classifier
*/
typedef struct scanbotsdk_document_classifier_result_t scanbotsdk_document_classifier_result_t;

/**
 * @brief Frees the memory allocated for the instance of scanbotsdk_document_classifier_result_t. If null is passed, the function does nothing.
 * @ingroup c_document_classifier
 * @param object: Pointer to the instance of scanbotsdk_document_classifier_result_t to be freed
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_classifier_result_free(scanbotsdk_document_classifier_result_t* object);

/**
 * @brief Returns value of document_type field of the given object.
 * @ingroup c_document_classifier
 * @details The classification result.
 * @param self: Pointer to the instance of scanbotsdk_document_classifier_result_t
 * @param document_type: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_classifier_result_get_document_type(scanbotsdk_document_classifier_result_t* self, scanbotsdk_document_type_t* document_type);

/**
 * @brief Returns value of confidence field of the given object.
 * @ingroup c_document_classifier
 * @details The confidence of the classification result.
 * @param self: Pointer to the instance of scanbotsdk_document_classifier_result_t
 * @param confidence: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_classifier_result_get_confidence(scanbotsdk_document_classifier_result_t* self, double* confidence);

/**
 * @brief Returns value of status field of the given object.
 * @ingroup c_document_classifier
 * @details The status of the classification result.
 * @param self: Pointer to the instance of scanbotsdk_document_classifier_result_t
 * @param status: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_classifier_result_get_status(scanbotsdk_document_classifier_result_t* self, scanbotsdk_document_classifier_status_t* status);

/**
 * @brief Returns value of document_scanning_result field of the given object. The returned pointers do NOT own the underlying object, caller must not free them.
 * @ingroup c_document_classifier
 * @details The result of the document scanning.
 * @param self: Pointer to the instance of scanbotsdk_document_classifier_result_t
 * @param document_scanning_result: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_classifier_result_get_document_scanning_result(scanbotsdk_document_classifier_result_t* self, scanbotsdk_document_scanning_result_t** document_scanning_result);


#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* SCANBOTSDK_DOCUMENTCLASSIFIERTYPES_H */