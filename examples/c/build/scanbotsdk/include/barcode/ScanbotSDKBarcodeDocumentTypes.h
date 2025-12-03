// Auto-generated with ScanbotSDKCodegenV3. Modifications will be overwritten.
// Generated from SchemasV3/CoreSchemas/schemas/BarcodeDocumentTypes.yaml
/**
 * @file ScanbotSDKBarcodeDocumentTypes.h
 */

#pragma once
#ifndef SCANBOTSDK_BARCODEDOCUMENTTYPES_H
#define SCANBOTSDK_BARCODEDOCUMENTTYPES_H


#include <barcode/ScanbotSDKBarcodeTypes.h>
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
 * @brief scanbotsdk_barcode_document_format_t enum
 * @details Type of barcode document format used.
 * @ingroup c_barcode
*/
typedef enum scanbotsdk_barcode_document_format_t {

    /**American Association of Motor Vehicle Administrators barcode document.*/
    SCANBOTSDK_BARCODE_DOCUMENT_FORMAT_AAMVA = 0,

    /**Boarding pass barcode document.*/
    SCANBOTSDK_BARCODE_DOCUMENT_FORMAT_BOARDING_PASS = 1,

    /**German medication plan barcode document.*/
    SCANBOTSDK_BARCODE_DOCUMENT_FORMAT_DE_MEDICAL_PLAN = 2,

    /**German medical certificate barcode document.*/
    SCANBOTSDK_BARCODE_DOCUMENT_FORMAT_MEDICAL_CERTIFICATE = 3,

    /**ID card barcode document.*/
    SCANBOTSDK_BARCODE_DOCUMENT_FORMAT_ID_CARD_PDF_417 = 4,

    /**SEPA barcode (aka GiroCode) document.*/
    SCANBOTSDK_BARCODE_DOCUMENT_FORMAT_SEPA = 5,

    /**Swiss QR barcode document.*/
    SCANBOTSDK_BARCODE_DOCUMENT_FORMAT_SWISS_QR = 6,

    /**VCard barcode document.*/
    SCANBOTSDK_BARCODE_DOCUMENT_FORMAT_VCARD = 7,

    /**GS1 barcode document.*/
    SCANBOTSDK_BARCODE_DOCUMENT_FORMAT_GS1 = 8,

    /**Health industry barcode document.*/
    SCANBOTSDK_BARCODE_DOCUMENT_FORMAT_HIBC = 9,

    /**British Columbia driver license barcode document.*/
    SCANBOTSDK_BARCODE_DOCUMENT_FORMAT_BRITISH_COLUMBIA_DRIVER_LICENSE = 10,

} scanbotsdk_barcode_document_format_t;

/**
 * @brief Returns the string representation of the given scanbotsdk_barcode_document_format_t value.
 * @ingroup c_barcode
 * @details The returned string doesn't need to be freed.
 * @param value: The value to be converted to string.
 * @param result: Pointer to a variable that will store the string representation of the value.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_document_format_t_to_string(scanbotsdk_barcode_document_format_t value, const char** result);


/**
 * @brief scanbotsdk_barcode_document_parser_result_t class
 * @details The result of barcode document parsing.
 * @ingroup c_barcode
*/
typedef struct scanbotsdk_barcode_document_parser_result_t scanbotsdk_barcode_document_parser_result_t;

/**
 * @brief Frees the memory allocated for the instance of scanbotsdk_barcode_document_parser_result_t. If null is passed, the function does nothing.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_barcode_document_parser_result_t to be freed
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_document_parser_result_free(scanbotsdk_barcode_document_parser_result_t* object);

/**
 * @brief Returns value of success field of the given object.
 * @ingroup c_barcode
 * @details True if any document was parsed.
 * @param self: Pointer to the instance of scanbotsdk_barcode_document_parser_result_t
 * @param success: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_document_parser_result_get_success(scanbotsdk_barcode_document_parser_result_t* self, bool* success);

/**
 * @brief Returns value of parsed_document field of the given object. The returned pointers do NOT own the underlying object, caller must not free them.
 * @ingroup c_barcode
 * @details In case of success, the parsed document.
 * @param self: Pointer to the instance of scanbotsdk_barcode_document_parser_result_t
 * @param parsed_document: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_document_parser_result_get_parsed_document(scanbotsdk_barcode_document_parser_result_t* self, scanbotsdk_generic_document_t** parsed_document);


#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* SCANBOTSDK_BARCODEDOCUMENTTYPES_H */