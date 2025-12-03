// Auto-generated with ScanbotSDKCodegenV3. Modifications will be overwritten.
// Generated from SchemasV3/CoreSchemas/schemas/CommonFieldType.yaml
/**
 * @file ScanbotSDKCommonFieldType.h
 */

#pragma once
#ifndef SCANBOTSDK_COMMONFIELDTYPE_H
#define SCANBOTSDK_COMMONFIELDTYPE_H


#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <ScanbotSDKErrorCode.h>
#include <ScanbotSDKDefs.h>

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief scanbotsdk_common_field_type_t enum
 * @details Common field types.
 * @ingroup c_generic_document
*/
typedef enum scanbotsdk_common_field_type_t {

    /**Document ID.*/
    SCANBOTSDK_COMMON_FIELD_TYPE_ID = 0,

    /**Person surname field.*/
    SCANBOTSDK_COMMON_FIELD_TYPE_SURNAME = 1,

    /**Person maiden name field.*/
    SCANBOTSDK_COMMON_FIELD_TYPE_MAIDEN_NAME = 2,

    /**Person given names field.*/
    SCANBOTSDK_COMMON_FIELD_TYPE_GIVEN_NAMES = 3,

    /**Person birth date field.*/
    SCANBOTSDK_COMMON_FIELD_TYPE_BIRTH_DATE = 4,

    /**Person nationality field.*/
    SCANBOTSDK_COMMON_FIELD_TYPE_NATIONALITY = 5,

    /**Person birthplace field.*/
    SCANBOTSDK_COMMON_FIELD_TYPE_BIRTHPLACE = 6,

    /**Document expiry date field.*/
    SCANBOTSDK_COMMON_FIELD_TYPE_EXPIRY_DATE = 7,

    /**Person eye color field.*/
    SCANBOTSDK_COMMON_FIELD_TYPE_EYE_COLOR = 8,

    /**Person height field.*/
    SCANBOTSDK_COMMON_FIELD_TYPE_HEIGHT = 9,

    /**Document issue date field.*/
    SCANBOTSDK_COMMON_FIELD_TYPE_ISSUE_DATE = 10,

    /**Document issuing authority field.*/
    SCANBOTSDK_COMMON_FIELD_TYPE_ISSUING_AUTHORITY = 11,

    /**Address field.*/
    SCANBOTSDK_COMMON_FIELD_TYPE_ADDRESS = 12,

    /**Pseudonym field.*/
    SCANBOTSDK_COMMON_FIELD_TYPE_PSEUDONYM = 13,

    /**MRZ field.*/
    SCANBOTSDK_COMMON_FIELD_TYPE_MRZ = 14,

    /**Issuing country field.*/
    SCANBOTSDK_COMMON_FIELD_TYPE_ISSUING_COUNTRY = 15,

    /**Gender field.*/
    SCANBOTSDK_COMMON_FIELD_TYPE_GENDER = 16,

    /**Signature field.*/
    SCANBOTSDK_COMMON_FIELD_TYPE_SIGNATURE = 17,

    /**Photo field.*/
    SCANBOTSDK_COMMON_FIELD_TYPE_PHOTO = 18,

    /**Date of start of validity field.*/
    SCANBOTSDK_COMMON_FIELD_TYPE_VALID_FROM_DATE = 19,

    /**Check routing number.*/
    SCANBOTSDK_COMMON_FIELD_TYPE_ROUTING_NUMBER = 20,

    /**Check account number.*/
    SCANBOTSDK_COMMON_FIELD_TYPE_ACCOUNT_NUMBER = 21,

    /**Place of issue for the identity card.*/
    SCANBOTSDK_COMMON_FIELD_TYPE_PLACE_OF_ISSUE = 22,

    /**Type of the title field in the identity document.*/
    SCANBOTSDK_COMMON_FIELD_TYPE_TITLE_TYPE = 23,

    /**Remarks field in the identity document.*/
    SCANBOTSDK_COMMON_FIELD_TYPE_REMARKS = 24,

    /**Full name field.*/
    SCANBOTSDK_COMMON_FIELD_TYPE_NAME = 25,

    /**Card access number field.*/
    SCANBOTSDK_COMMON_FIELD_TYPE_CARD_ACCESS_NUMBER = 26,

} scanbotsdk_common_field_type_t;

/**
 * @brief Returns the string representation of the given scanbotsdk_common_field_type_t value.
 * @ingroup c_generic_document
 * @details The returned string doesn't need to be freed.
 * @param value: The value to be converted to string.
 * @param result: Pointer to a variable that will store the string representation of the value.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_common_field_type_t_to_string(scanbotsdk_common_field_type_t value, const char** result);

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* SCANBOTSDK_COMMONFIELDTYPE_H */