// Auto-generated with ScanbotSDKCodegenV3. Modifications will be overwritten.
// Generated from SchemasV3/CoreSchemas/schemas/GenericDocument.yaml
/**
 * @file ScanbotSDKGenericDocument.h
 */

#pragma once
#ifndef SCANBOTSDK_GENERICDOCUMENT_H
#define SCANBOTSDK_GENERICDOCUMENT_H


#include <ScanbotSDKImage.h>
#include <ScanbotSDKTypes.h>
#include <generic_document/ScanbotSDKCommonFieldType.h>
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
 * @brief scanbotsdk_ocr_result_t class
 * @details Result of OCR text recognition.
 * @ingroup c_generic_document
*/
typedef struct scanbotsdk_ocr_result_t scanbotsdk_ocr_result_t;

/**
 * @brief Creates a new instance of scanbotsdk_ocr_result with given params and stores it in the location specified by the last argument.
 * @ingroup c_generic_document
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param text: Maximum number of accumulated frames to inspect before actual result is returned.
 * The value must not be null.
 * @param confidence: Minimum number of accumulated frames that have equal result.
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_ocr_result_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_ocr_result_create(
    const char* text,
    double confidence,
    scanbotsdk_ocr_result_t** result);


/**
 * @brief Frees the memory allocated for the instance of scanbotsdk_ocr_result_t. If null is passed, the function does nothing.
 * @ingroup c_generic_document
 * @param object: Pointer to the instance of scanbotsdk_ocr_result_t to be freed
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_ocr_result_free(scanbotsdk_ocr_result_t* object);

/**
 * @brief Returns value of text field of the given object. The returned pointers do NOT own the underlying object, caller must not free them.
 * @ingroup c_generic_document
 * @details Maximum number of accumulated frames to inspect before actual result is returned.
 * @param self: Pointer to the instance of scanbotsdk_ocr_result_t
 * @param text: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_ocr_result_get_text(scanbotsdk_ocr_result_t* self, const char** text);

/**
 * @brief Returns value of confidence field of the given object.
 * @ingroup c_generic_document
 * @details Minimum number of accumulated frames that have equal result.
 * @param self: Pointer to the instance of scanbotsdk_ocr_result_t
 * @param confidence: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_ocr_result_get_confidence(scanbotsdk_ocr_result_t* self, double* confidence);


/**
 * @brief scanbotsdk_field_validation_status_t enum
 * @details Field validation status.
 * 
 * Optical character recognition (OCR) invariably introduces errors in the recognized text.
 * There are numerous ways to verify that what has been recognized is, in fact, what was
 * written in the document.
 * 
 * The best way to validate the value of a field is for it to have a known format or validation
 * logic. For example, an IBAN number has a known format and two check digits that make it
 * very unlikely that a value with OCR errors will pass validation. Fields with known
 * validation rules will have a validation status of either VALID or INVALID.
 * 
 * Fields whose value can be inferred from other fields, or from domain knowledge (for example,
 * the field may have the same value in every instance of this type of document), will have the
 * status INFERRED. Inferring the value of a field is a strong validation method, provided that
 * there are no unexpected changes to the document format.
 * 
 * Fields that do not have validation rules and cannot be inferred can still be validated by checking whether the same
 * value is recognized from multiple attempts, e.g. across multiple frames of a camera stream.
 * If the same value is recognized in multiple frames, the value is considered CONFIRMED, otherwise
 * it will have the status NONE. This is the least strict validation method, as it does not protect
 * from systemic OCR errors, but in practice it still provides good results for most fields.
 * @ingroup c_generic_document
*/
typedef enum scanbotsdk_field_validation_status_t {

    /**Field value failed validation. This status is used for fields that have validation rules, like
    IBAN, date fields, etc. that have check digits or a known format that can be validated.*/
    SCANBOTSDK_FIELD_VALIDATION_STATUS_INVALID = 0,

    /**Field value was not recognized because it was obstructed by e.g. a light reflection or a shadow.*/
    SCANBOTSDK_FIELD_VALIDATION_STATUS_OBSTRUCTED = 1,

    /**Field value was not validated, typically because the field does not support validation and the value
    has not been seen enough times to confirm it.
    If the same value is seen in multiple frames, the validation status will transition to CONFIRMED,
    but only if that particular recognizer supports multiple frame accumulation.*/
    SCANBOTSDK_FIELD_VALIDATION_STATUS_NONE = 2,

    /**The same field value was recognized in multiple frames, thereby confirming the value.
    Occurs only for fields that have no validation rules otherwise.
    A CONFIRMED value gives a strong guarantee that the field value has been read out without errors,
    but not as strong as VALID. The value may still be incorrect, due to systemic OCR errors.
    In case of OCR errors, increase the number of frames needed to confirm the value in the
    recognizer configuration.*/
    SCANBOTSDK_FIELD_VALIDATION_STATUS_CONFIRMED = 3,

    /**Field value was inferred from other fields or from domain knowledge.
    The field value may differ from what is actually written in the document in unexpected situations.*/
    SCANBOTSDK_FIELD_VALIDATION_STATUS_INFERRED = 4,

    /**Field value passed validation. This status is used for fields that have validation rules, like
    IBAN, date fields, etc. that have check digits or a known format that can be validated.
    The VALID status gives the strongest guarantee that the field value has been read out without errors.*/
    SCANBOTSDK_FIELD_VALIDATION_STATUS_VALID = 5,

    /**The document contains a field of this type, but recognition for this field is disabled.
    The value of this field is always empty, although the field may be non-empty in the document.*/
    SCANBOTSDK_FIELD_VALIDATION_STATUS_IGNORED = 6,

} scanbotsdk_field_validation_status_t;

/**
 * @brief Returns the string representation of the given scanbotsdk_field_validation_status_t value.
 * @ingroup c_generic_document
 * @details The returned string doesn't need to be freed.
 * @param value: The value to be converted to string.
 * @param result: Pointer to a variable that will store the string representation of the value.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_field_validation_status_t_to_string(scanbotsdk_field_validation_status_t value, const char** result);

/**
 * @brief scanbotsdk_field_data_format_t enum
 * @details Type of parsing applied to field.
 * @ingroup c_generic_document
*/
typedef enum scanbotsdk_field_data_format_t {

    /**Field value is parsed as ISO 8601 date in format YYYY-MM-DD.*/
    SCANBOTSDK_FIELD_DATA_FORMAT_ISO_DATE = 0,

    /**Field value is parsed as ISO 3166-1 alpha-2 country code. E.g. "DE" for Germany.*/
    SCANBOTSDK_FIELD_DATA_FORMAT_ISO_COUNTRY_ALPHA_2 = 1,

    /**Field value is parsed as ISO 3166-1 alpha-3 country code. E.g. "DEU" for Germany.*/
    SCANBOTSDK_FIELD_DATA_FORMAT_ISO_COUNTRY_ALPHA_3 = 2,

    /**Field value is parsed as ISO 3166-1 numeric country code. E.g. "276" for Germany.*/
    SCANBOTSDK_FIELD_DATA_FORMAT_ISO_COUNTRY_NUMERIC = 3,

    /**Field value is parsed as ISO 3166-1 country name. E.g. "Germany".*/
    SCANBOTSDK_FIELD_DATA_FORMAT_ISO_COUNTRY_NAME = 4,

    /**Field value is parsed as "Male", "Female".*/
    SCANBOTSDK_FIELD_DATA_FORMAT_GENDER = 5,

} scanbotsdk_field_data_format_t;

/**
 * @brief Returns the string representation of the given scanbotsdk_field_data_format_t value.
 * @ingroup c_generic_document
 * @details The returned string doesn't need to be freed.
 * @param value: The value to be converted to string.
 * @param result: Pointer to a variable that will store the string representation of the value.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_field_data_format_t_to_string(scanbotsdk_field_data_format_t value, const char** result);

/**
 * @brief scanbotsdk_field_parsed_data_t class
 * @details Parsed data.
 * @ingroup c_generic_document
*/
typedef struct scanbotsdk_field_parsed_data_t scanbotsdk_field_parsed_data_t;

/**
 * @brief Creates a new instance of scanbotsdk_field_parsed_data with given params and stores it in the location specified by the last argument.
 * @ingroup c_generic_document
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param type: Parsing type.
 * @param value: Parsed value.
 * The value must not be null.
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_field_parsed_data_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_field_parsed_data_create(
    scanbotsdk_field_data_format_t type,
    const char* value,
    scanbotsdk_field_parsed_data_t** result);


/**
 * @brief Frees the memory allocated for the instance of scanbotsdk_field_parsed_data_t. If null is passed, the function does nothing.
 * @ingroup c_generic_document
 * @param object: Pointer to the instance of scanbotsdk_field_parsed_data_t to be freed
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_field_parsed_data_free(scanbotsdk_field_parsed_data_t* object);

/**
 * @brief Returns value of type field of the given object.
 * @ingroup c_generic_document
 * @details Parsing type.
 * @param self: Pointer to the instance of scanbotsdk_field_parsed_data_t
 * @param type: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_field_parsed_data_get_type(scanbotsdk_field_parsed_data_t* self, scanbotsdk_field_data_format_t* type);

/**
 * @brief Returns value of value field of the given object. The returned pointers do NOT own the underlying object, caller must not free them.
 * @ingroup c_generic_document
 * @details Parsed value.
 * @param self: Pointer to the instance of scanbotsdk_field_parsed_data_t
 * @param value: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_field_parsed_data_get_value(scanbotsdk_field_parsed_data_t* self, const char** value);


/**
 * @brief scanbotsdk_field_type_t class
 * @details Generic Document Type.
 * @ingroup c_generic_document
*/
typedef struct scanbotsdk_field_type_t scanbotsdk_field_type_t;

/**
 * @brief Creates a new instance of scanbotsdk_field_type with given params and stores it in the location specified by the last argument.
 * @ingroup c_generic_document
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param name: Local field type name scoped to the containing document type.
 * The value must not be null.
 * @param full_name: Unique global field type name prefixed with the document types of all containing documents.
 * The value must not be null.
 * @param normalized_name: Normalized global field type name. Fields in document types derived from the same base document type in the schema will have the same normalized name.
 * The value must not be null.
 * @param common_type: Commonly occurring fields that have the same semantic meaning in different document types will often have a set common type.
 * The value can be null.
 * @param list_index: A document can contain multiple fields of the same name, the property serves for storing natural order of such fields, null if multiple entries aren't allowed for this field.
 * The value can be null.
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_field_type_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_field_type_create(
    const char* name,
    const char* full_name,
    const char* normalized_name,
    scanbotsdk_common_field_type_t* common_type,
    int* list_index,
    scanbotsdk_field_type_t** result);

/**
 * @brief Creates a new instance of scanbotsdk_field_type_t with given required params and stores it in the location specified by the last argument.
 * @ingroup c_generic_document
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param name: Local field type name scoped to the containing document type.
 * The value must not be null.
 * @param full_name: Unique global field type name prefixed with the document types of all containing documents.
 * The value must not be null.
 * @param normalized_name: Normalized global field type name. Fields in document types derived from the same base document type in the schema will have the same normalized name.
 * The value must not be null.
 * @param common_type: Commonly occurring fields that have the same semantic meaning in different document types will often have a set common type.
 * The value can be null.
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_field_type_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_field_type_create_with_defaults(
    const char* name,
    const char* full_name,
    const char* normalized_name,
    scanbotsdk_common_field_type_t* common_type,
    scanbotsdk_field_type_t** result);


/**
 * @brief Frees the memory allocated for the instance of scanbotsdk_field_type_t. If null is passed, the function does nothing.
 * @ingroup c_generic_document
 * @param object: Pointer to the instance of scanbotsdk_field_type_t to be freed
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_field_type_free(scanbotsdk_field_type_t* object);

/**
 * @brief Returns value of name field of the given object. The returned pointers do NOT own the underlying object, caller must not free them.
 * @ingroup c_generic_document
 * @details Local field type name scoped to the containing document type.
 * @param self: Pointer to the instance of scanbotsdk_field_type_t
 * @param name: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_field_type_get_name(scanbotsdk_field_type_t* self, const char** name);

/**
 * @brief Returns value of full_name field of the given object. The returned pointers do NOT own the underlying object, caller must not free them.
 * @ingroup c_generic_document
 * @details Unique global field type name prefixed with the document types of all containing documents.
 * @param self: Pointer to the instance of scanbotsdk_field_type_t
 * @param full_name: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_field_type_get_full_name(scanbotsdk_field_type_t* self, const char** full_name);

/**
 * @brief Returns value of normalized_name field of the given object. The returned pointers do NOT own the underlying object, caller must not free them.
 * @ingroup c_generic_document
 * @details Normalized global field type name. Fields in document types derived from the same base document type in the schema will have the same normalized name.
 * @param self: Pointer to the instance of scanbotsdk_field_type_t
 * @param normalized_name: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_field_type_get_normalized_name(scanbotsdk_field_type_t* self, const char** normalized_name);

/**
 * @brief Returns value of common_type field of the given object. The returned pointers do NOT own the underlying object, caller must not free them.
 * @ingroup c_generic_document
 * @details Commonly occurring fields that have the same semantic meaning in different document types will often have a set common type.
 * @param self: Pointer to the instance of scanbotsdk_field_type_t
 * @param common_type: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_field_type_get_common_type(scanbotsdk_field_type_t* self, scanbotsdk_common_field_type_t** common_type);

/**
 * @brief Returns value of list_index field of the given object. The returned pointers do NOT own the underlying object, caller must not free them.
 * @ingroup c_generic_document
 * @details A document can contain multiple fields of the same name, the property serves for storing natural order of such fields, null if multiple entries aren't allowed for this field.
 * @param self: Pointer to the instance of scanbotsdk_field_type_t
 * @param list_index: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_field_type_get_list_index(scanbotsdk_field_type_t* self, int** list_index);


/**
 * @brief scanbotsdk_field_t class
 * @details Generic document field.
 * @ingroup c_generic_document
*/
typedef struct scanbotsdk_field_t scanbotsdk_field_t;

/**
 * @brief Creates a new instance of scanbotsdk_field with given params and stores it in the location specified by the last argument.
 * @ingroup c_generic_document
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param type: The type of the field.
 * The value must not be null.
 * @param value: Value of the field. Applicable only to text fields.
 * The value can be null.
 * @param confidence_weight: Confidence weight.
 * 
 * Default is 1.0
 * @param image: Crop of the field.
 * The value can be null.
 * @param polygon_in_root: Coordinates of the field in the root document coordinate system.
 * @param polygon_in_root_size: Size of the array polygon_in_root
 * @param validation_status: Field validation status. Applicable only to fields that support some kind of validation.
 * 
 * Default is NONE
 * @param parsed_data: Parsed data.
 * Entries of the array must not be null.
 * @param parsed_data_size: Size of the array parsed_data
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_field_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_field_create(
    scanbotsdk_field_type_t* type,
    scanbotsdk_ocr_result_t* value,
    double confidence_weight,
    scanbotsdk_image_t* image,
    scanbotsdk_pointf_t* polygon_in_root,
    size_t polygon_in_root_size,
    scanbotsdk_field_validation_status_t validation_status,
    scanbotsdk_field_parsed_data_t** parsed_data,
    size_t parsed_data_size,
    scanbotsdk_field_t** result);

/**
 * @brief Creates a new instance of scanbotsdk_field_t with given required params and stores it in the location specified by the last argument.
 * @ingroup c_generic_document
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param type: The type of the field.
 * The value must not be null.
 * @param value: Value of the field. Applicable only to text fields.
 * The value can be null.
 * @param polygon_in_root: Coordinates of the field in the root document coordinate system.
 * @param polygon_in_root_size: Size of the array polygon_in_root
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_field_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_field_create_with_defaults(
    scanbotsdk_field_type_t* type,
    scanbotsdk_ocr_result_t* value,
    scanbotsdk_pointf_t* polygon_in_root,
    size_t polygon_in_root_size,
    scanbotsdk_field_t** result);


/**
 * @brief Frees the memory allocated for the instance of scanbotsdk_field_t. If null is passed, the function does nothing.
 * @ingroup c_generic_document
 * @param object: Pointer to the instance of scanbotsdk_field_t to be freed
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_field_free(scanbotsdk_field_t* object);

/**
 * @brief Returns value of type field of the given object. The returned pointers do NOT own the underlying object, caller must not free them.
 * @ingroup c_generic_document
 * @details The type of the field.
 * @param self: Pointer to the instance of scanbotsdk_field_t
 * @param type: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_field_get_type(scanbotsdk_field_t* self, scanbotsdk_field_type_t** type);

/**
 * @brief Returns value of value field of the given object. The returned pointers do NOT own the underlying object, caller must not free them.
 * @ingroup c_generic_document
 * @details Value of the field. Applicable only to text fields.
 * @param self: Pointer to the instance of scanbotsdk_field_t
 * @param value: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_field_get_value(scanbotsdk_field_t* self, scanbotsdk_ocr_result_t** value);

/**
 * @brief Returns value of confidence_weight field of the given object.
 * @ingroup c_generic_document
 * @details Confidence weight.
 * 
 * Default is 1.0
 * @param self: Pointer to the instance of scanbotsdk_field_t
 * @param confidence_weight: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_field_get_confidence_weight(scanbotsdk_field_t* self, double* confidence_weight);

/**
 * @brief Returns value of image field of the given object. The returned pointers do NOT own the underlying object, caller must not free them.
 * @ingroup c_generic_document
 * @details Crop of the field.
 * @param self: Pointer to the instance of scanbotsdk_field_t
 * @param image: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_field_get_image(scanbotsdk_field_t* self, scanbotsdk_image_t** image);

/**
 * @brief Returns value of polygon_in_root field of the given object. The returned value is direct view into memory, no pre-allocations needed.
 * @ingroup c_generic_document
 * @details Coordinates of the field in the root document coordinate system.
 * @param self: Pointer to the instance of scanbotsdk_field_t
 * @param polygon_in_root: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_field_get_polygon_in_root(scanbotsdk_field_t* self, scanbotsdk_pointf_t** polygon_in_root);
/**
 * @brief Returns size of polygon_in_root array.
 * @ingroup c_generic_document
 * @param self: Pointer to the instance of scanbotsdk_field_t
 * @param size: Pointer to a variable that will store the size.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_field_get_polygon_in_root_size(scanbotsdk_field_t* self, size_t* size);

/**
 * @brief Returns value of validation_status field of the given object.
 * @ingroup c_generic_document
 * @details Field validation status. Applicable only to fields that support some kind of validation.
 * 
 * Default is NONE
 * @param self: Pointer to the instance of scanbotsdk_field_t
 * @param validation_status: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_field_get_validation_status(scanbotsdk_field_t* self, scanbotsdk_field_validation_status_t* validation_status);

/**
 * @brief Returns value of parsed_data field of the given object. The returned pointers do NOT own the underlying object, caller must not free them.
 * @ingroup c_generic_document
 * @details Parsed data.
 * @param self: Pointer to the instance of scanbotsdk_field_t
 @param size: Size of the pre-allocated array. Must be equal to the size obtained by calling the corresponding _size function.
 * @param parsed_data: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_field_get_parsed_data(scanbotsdk_field_t* self, scanbotsdk_field_parsed_data_t** parsed_data, size_t size);
/**
 * @brief Returns size of parsed_data array.
 * @ingroup c_generic_document
 * @param self: Pointer to the instance of scanbotsdk_field_t
 * @param size: Pointer to a variable that will store the size.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_field_get_parsed_data_size(scanbotsdk_field_t* self, size_t* size);


/**
 * @brief scanbotsdk_generic_document_type_t class
 * @details Generic Document Type.
 * @ingroup c_generic_document
*/
typedef struct scanbotsdk_generic_document_type_t scanbotsdk_generic_document_type_t;

/**
 * @brief Creates a new instance of scanbotsdk_generic_document_type with given params and stores it in the location specified by the last argument.
 * @ingroup c_generic_document
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param name: Local document type name.
 * The value must not be null.
 * @param full_name: Unique global document type name prefixed with the document types of all containing documents.
 * The value must not be null.
 * @param normalized_name: Normalized global document type name. Common document types appearing as child documents in different places will often have the same normalized type name.
 * The value must not be null.
 * @param list_index: A document can contain multiple fields of the same name, the property serves for storing natural order of such fields, null if multiple entries aren't allowed for this field.
 * The value can be null.
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_generic_document_type_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_generic_document_type_create(
    const char* name,
    const char* full_name,
    const char* normalized_name,
    int* list_index,
    scanbotsdk_generic_document_type_t** result);

/**
 * @brief Creates a new instance of scanbotsdk_generic_document_type_t with given required params and stores it in the location specified by the last argument.
 * @ingroup c_generic_document
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param name: Local document type name.
 * The value must not be null.
 * @param full_name: Unique global document type name prefixed with the document types of all containing documents.
 * The value must not be null.
 * @param normalized_name: Normalized global document type name. Common document types appearing as child documents in different places will often have the same normalized type name.
 * The value must not be null.
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_generic_document_type_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_generic_document_type_create_with_defaults(
    const char* name,
    const char* full_name,
    const char* normalized_name,
    scanbotsdk_generic_document_type_t** result);


/**
 * @brief Frees the memory allocated for the instance of scanbotsdk_generic_document_type_t. If null is passed, the function does nothing.
 * @ingroup c_generic_document
 * @param object: Pointer to the instance of scanbotsdk_generic_document_type_t to be freed
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_generic_document_type_free(scanbotsdk_generic_document_type_t* object);

/**
 * @brief Returns value of name field of the given object. The returned pointers do NOT own the underlying object, caller must not free them.
 * @ingroup c_generic_document
 * @details Local document type name.
 * @param self: Pointer to the instance of scanbotsdk_generic_document_type_t
 * @param name: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_generic_document_type_get_name(scanbotsdk_generic_document_type_t* self, const char** name);

/**
 * @brief Returns value of full_name field of the given object. The returned pointers do NOT own the underlying object, caller must not free them.
 * @ingroup c_generic_document
 * @details Unique global document type name prefixed with the document types of all containing documents.
 * @param self: Pointer to the instance of scanbotsdk_generic_document_type_t
 * @param full_name: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_generic_document_type_get_full_name(scanbotsdk_generic_document_type_t* self, const char** full_name);

/**
 * @brief Returns value of normalized_name field of the given object. The returned pointers do NOT own the underlying object, caller must not free them.
 * @ingroup c_generic_document
 * @details Normalized global document type name. Common document types appearing as child documents in different places will often have the same normalized type name.
 * @param self: Pointer to the instance of scanbotsdk_generic_document_type_t
 * @param normalized_name: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_generic_document_type_get_normalized_name(scanbotsdk_generic_document_type_t* self, const char** normalized_name);

/**
 * @brief Returns value of list_index field of the given object. The returned pointers do NOT own the underlying object, caller must not free them.
 * @ingroup c_generic_document
 * @details A document can contain multiple fields of the same name, the property serves for storing natural order of such fields, null if multiple entries aren't allowed for this field.
 * @param self: Pointer to the instance of scanbotsdk_generic_document_type_t
 * @param list_index: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_generic_document_type_get_list_index(scanbotsdk_generic_document_type_t* self, int** list_index);


/**
 * @brief scanbotsdk_generic_document_t class
 * @details Generic document.
 * @ingroup c_generic_document
*/
typedef struct scanbotsdk_generic_document_t scanbotsdk_generic_document_t;

/**
 * @brief Creates a new instance of scanbotsdk_generic_document with given params and stores it in the location specified by the last argument.
 * @ingroup c_generic_document
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param type: Document type.
 * The value must not be null.
 * @param fields: List of document fields.
 * Entries of the array must not be null.
 * @param fields_size: Size of the array fields
 * @param children: List of document sub-documents.
 * Entries of the array must not be null.
 * @param children_size: Size of the array children
 * @param quad: Coordinates of the document in the parent document coordinate system.
 * @param quad_size: Size of the array quad
 * @param quad_in_root: Coordinates of the document in the root document coordinate system.
 * @param quad_in_root_size: Size of the array quad_in_root
 * @param crop: Image crop of the document.
 * The value can be null.
 * @param confidence: The average confidence in the accuracy of the document recognition result.
 * 
 * Default is 0
 * @param confidence_weight: The weight of the confidence. Can be used to calculate the weighted average confidence of two documents.
 * 
 * Default is 0
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_generic_document_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_generic_document_create(
    scanbotsdk_generic_document_type_t* type,
    scanbotsdk_field_t** fields,
    size_t fields_size,
    scanbotsdk_generic_document_t** children,
    size_t children_size,
    scanbotsdk_pointf_t* quad,
    size_t quad_size,
    scanbotsdk_pointf_t* quad_in_root,
    size_t quad_in_root_size,
    scanbotsdk_image_t* crop,
    double confidence,
    double confidence_weight,
    scanbotsdk_generic_document_t** result);

/**
 * @brief Creates a new instance of scanbotsdk_generic_document_t with given required params and stores it in the location specified by the last argument.
 * @ingroup c_generic_document
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param type: Document type.
 * The value must not be null.
 * @param fields: List of document fields.
 * Entries of the array must not be null.
 * @param fields_size: Size of the array fields
 * @param children: List of document sub-documents.
 * Entries of the array must not be null.
 * @param children_size: Size of the array children
 * @param quad: Coordinates of the document in the parent document coordinate system.
 * @param quad_size: Size of the array quad
 * @param quad_in_root: Coordinates of the document in the root document coordinate system.
 * @param quad_in_root_size: Size of the array quad_in_root
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_generic_document_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_generic_document_create_with_defaults(
    scanbotsdk_generic_document_type_t* type,
    scanbotsdk_field_t** fields,
    size_t fields_size,
    scanbotsdk_generic_document_t** children,
    size_t children_size,
    scanbotsdk_pointf_t* quad,
    size_t quad_size,
    scanbotsdk_pointf_t* quad_in_root,
    size_t quad_in_root_size,
    scanbotsdk_generic_document_t** result);


/**
 * @brief Frees the memory allocated for the instance of scanbotsdk_generic_document_t. If null is passed, the function does nothing.
 * @ingroup c_generic_document
 * @param object: Pointer to the instance of scanbotsdk_generic_document_t to be freed
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_generic_document_free(scanbotsdk_generic_document_t* object);

/**
 * @brief Returns value of type field of the given object. The returned pointers do NOT own the underlying object, caller must not free them.
 * @ingroup c_generic_document
 * @details Document type.
 * @param self: Pointer to the instance of scanbotsdk_generic_document_t
 * @param type: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_generic_document_get_type(scanbotsdk_generic_document_t* self, scanbotsdk_generic_document_type_t** type);

/**
 * @brief Returns value of fields field of the given object. The returned pointers do NOT own the underlying object, caller must not free them.
 * @ingroup c_generic_document
 * @details List of document fields.
 * @param self: Pointer to the instance of scanbotsdk_generic_document_t
 @param size: Size of the pre-allocated array. Must be equal to the size obtained by calling the corresponding _size function.
 * @param fields: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_generic_document_get_fields(scanbotsdk_generic_document_t* self, scanbotsdk_field_t** fields, size_t size);
/**
 * @brief Returns size of fields array.
 * @ingroup c_generic_document
 * @param self: Pointer to the instance of scanbotsdk_generic_document_t
 * @param size: Pointer to a variable that will store the size.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_generic_document_get_fields_size(scanbotsdk_generic_document_t* self, size_t* size);

/**
 * @brief Returns value of children field of the given object. The returned pointers do NOT own the underlying object, caller must not free them.
 * @ingroup c_generic_document
 * @details List of document sub-documents.
 * @param self: Pointer to the instance of scanbotsdk_generic_document_t
 @param size: Size of the pre-allocated array. Must be equal to the size obtained by calling the corresponding _size function.
 * @param children: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_generic_document_get_children(scanbotsdk_generic_document_t* self, scanbotsdk_generic_document_t** children, size_t size);
/**
 * @brief Returns size of children array.
 * @ingroup c_generic_document
 * @param self: Pointer to the instance of scanbotsdk_generic_document_t
 * @param size: Pointer to a variable that will store the size.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_generic_document_get_children_size(scanbotsdk_generic_document_t* self, size_t* size);

/**
 * @brief Returns value of quad field of the given object. The returned value is direct view into memory, no pre-allocations needed.
 * @ingroup c_generic_document
 * @details Coordinates of the document in the parent document coordinate system.
 * @param self: Pointer to the instance of scanbotsdk_generic_document_t
 * @param quad: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_generic_document_get_quad(scanbotsdk_generic_document_t* self, scanbotsdk_pointf_t** quad);
/**
 * @brief Returns size of quad array.
 * @ingroup c_generic_document
 * @param self: Pointer to the instance of scanbotsdk_generic_document_t
 * @param size: Pointer to a variable that will store the size.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_generic_document_get_quad_size(scanbotsdk_generic_document_t* self, size_t* size);

/**
 * @brief Returns value of quad_in_root field of the given object. The returned value is direct view into memory, no pre-allocations needed.
 * @ingroup c_generic_document
 * @details Coordinates of the document in the root document coordinate system.
 * @param self: Pointer to the instance of scanbotsdk_generic_document_t
 * @param quad_in_root: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_generic_document_get_quad_in_root(scanbotsdk_generic_document_t* self, scanbotsdk_pointf_t** quad_in_root);
/**
 * @brief Returns size of quad_in_root array.
 * @ingroup c_generic_document
 * @param self: Pointer to the instance of scanbotsdk_generic_document_t
 * @param size: Pointer to a variable that will store the size.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_generic_document_get_quad_in_root_size(scanbotsdk_generic_document_t* self, size_t* size);

/**
 * @brief Returns value of crop field of the given object. The returned pointers do NOT own the underlying object, caller must not free them.
 * @ingroup c_generic_document
 * @details Image crop of the document.
 * @param self: Pointer to the instance of scanbotsdk_generic_document_t
 * @param crop: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_generic_document_get_crop(scanbotsdk_generic_document_t* self, scanbotsdk_image_t** crop);

/**
 * @brief Returns value of confidence field of the given object.
 * @ingroup c_generic_document
 * @details The average confidence in the accuracy of the document recognition result.
 * 
 * Default is 0
 * @param self: Pointer to the instance of scanbotsdk_generic_document_t
 * @param confidence: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_generic_document_get_confidence(scanbotsdk_generic_document_t* self, double* confidence);

/**
 * @brief Returns value of confidence_weight field of the given object.
 * @ingroup c_generic_document
 * @details The weight of the confidence. Can be used to calculate the weighted average confidence of two documents.
 * 
 * Default is 0
 * @param self: Pointer to the instance of scanbotsdk_generic_document_t
 * @param confidence_weight: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_generic_document_get_confidence_weight(scanbotsdk_generic_document_t* self, double* confidence_weight);


#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* SCANBOTSDK_GENERICDOCUMENT_H */