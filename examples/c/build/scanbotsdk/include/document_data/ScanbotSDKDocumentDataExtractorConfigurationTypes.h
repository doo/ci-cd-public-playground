// Auto-generated with ScanbotSDKCodegenV3. Modifications will be overwritten.
// Generated from SchemasV3/CoreSchemas/schemas/DocumentDataExtractorConfigurationTypes.yaml
/**
 * @file ScanbotSDKDocumentDataExtractorConfigurationTypes.h
 */

#pragma once
#ifndef SCANBOTSDK_DOCUMENTDATAEXTRACTORCONFIGURATIONTYPES_H
#define SCANBOTSDK_DOCUMENTDATAEXTRACTORCONFIGURATIONTYPES_H


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
 * @brief scanbotsdk_document_data_extractor_configuration_element_t class
 * @details Base class for all document data extraction configuration elements.
 * @ingroup c_document_data
*/
typedef struct scanbotsdk_document_data_extractor_configuration_element_t scanbotsdk_document_data_extractor_configuration_element_t;

/**
 * @brief Frees the memory allocated for the instance of scanbotsdk_document_data_extractor_configuration_element_t. If null is passed, the function does nothing.
 * @ingroup c_document_data
 * @param object: Pointer to the instance of scanbotsdk_document_data_extractor_configuration_element_t to be freed
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_data_extractor_configuration_element_free(scanbotsdk_document_data_extractor_configuration_element_t* object);


/**
 * @brief scanbotsdk_date_validation_configuration_t class
 * @details Date validation configuration.
 * This configuration element does not enable the scanning of any document types by itself.
 * Add to recognizer configuration to require date validation checks for specific document types.
 * @ingroup c_document_data
*/
typedef struct scanbotsdk_date_validation_configuration_t scanbotsdk_date_validation_configuration_t;

/**
 * @brief Creates a new instance of scanbotsdk_date_validation_configuration with given params and stores it in the location specified by the last argument.
 * @ingroup c_document_data
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param min_year: Minimum year that is considered valid.
 * 
 * Default is 0
 * @param max_year: Maximum year that is considered valid.
 * 
 * Default is 2999
 * @param field_type_name: Name, FullName, or NormalizedName of field type for which the year bounds should be applied.
 * The value must not be null.
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_date_validation_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_date_validation_configuration_create(
    int min_year,
    int max_year,
    const char* field_type_name,
    scanbotsdk_date_validation_configuration_t** result);

/**
 * @brief Creates a new instance of scanbotsdk_date_validation_configuration_t with given required params and stores it in the location specified by the last argument.
 * @ingroup c_document_data
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param field_type_name: Name, FullName, or NormalizedName of field type for which the year bounds should be applied.
 * The value must not be null.
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_date_validation_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_date_validation_configuration_create_with_defaults(
    const char* field_type_name,
    scanbotsdk_date_validation_configuration_t** result);


/**
 * @brief Frees the memory allocated for the instance of scanbotsdk_date_validation_configuration_t. If null is passed, the function does nothing.
 * @ingroup c_document_data
 * @param object: Pointer to the instance of scanbotsdk_date_validation_configuration_t to be freed
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_date_validation_configuration_free(scanbotsdk_date_validation_configuration_t* object);

/**
 * @brief Checks if the given instance of scanbotsdk_document_data_extractor_configuration_element_t is an instance of its subtype scanbotsdk_date_validation_configuration_t.
 * @ingroup c_document_data
 * @param object: Pointer to the instance of scanbotsdk_document_data_extractor_configuration_element_t to be checked
 * @param result: Pointer to a variable that will store the result of the check
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
 */
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_data_extractor_configuration_element_is_scanbotsdk_date_validation_configuration(scanbotsdk_document_data_extractor_configuration_element_t* object, bool* result);
/**
 * @brief Casts the given instance of scanbotsdk_document_data_extractor_configuration_element_t to its subtype scanbotsdk_date_validation_configuration_t. If the given instance is not an instance of the subtype, result will be null.
 * @ingroup c_document_data
 * @param object: Pointer to the instance of scanbotsdk_document_data_extractor_configuration_element_t to be casted
 * @param result: Pointer to a variable that will store the casted instance of scanbotsdk_date_validation_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_data_extractor_configuration_element_as_scanbotsdk_date_validation_configuration(scanbotsdk_document_data_extractor_configuration_element_t* object, scanbotsdk_date_validation_configuration_t** result);
/**
 * @brief Casts the given instance of scanbotsdk_date_validation_configuration_t to its parent type scanbotsdk_document_data_extractor_configuration_element_t.
 * @ingroup c_document_data
 * @param object: Pointer to the instance of scanbotsdk_document_data_extractor_configuration_element_t to be casted
 * @param result: Pointer to a variable that will store the casted instance of scanbotsdk_date_validation_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_date_validation_configuration_as_scanbotsdk_document_data_extractor_configuration_element(scanbotsdk_date_validation_configuration_t* object, scanbotsdk_document_data_extractor_configuration_element_t** result);

/**
 * @brief Returns value of min_year field of the given object.
 * @ingroup c_document_data
 * @details Minimum year that is considered valid.
 * 
 * Default is 0
 * @param self: Pointer to the instance of scanbotsdk_date_validation_configuration_t
 * @param min_year: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_date_validation_configuration_get_min_year(scanbotsdk_date_validation_configuration_t* self, int* min_year);
/**
 * @brief Sets value of min_year field of the given object.
 * @ingroup c_document_data
 * @details Minimum year that is considered valid.
 * 
 * Default is 0
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_date_validation_configuration_t, the field of which will be set
 * @param min_year: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_date_validation_configuration_set_min_year(scanbotsdk_date_validation_configuration_t* self, int min_year);

/**
 * @brief Returns value of max_year field of the given object.
 * @ingroup c_document_data
 * @details Maximum year that is considered valid.
 * 
 * Default is 2999
 * @param self: Pointer to the instance of scanbotsdk_date_validation_configuration_t
 * @param max_year: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_date_validation_configuration_get_max_year(scanbotsdk_date_validation_configuration_t* self, int* max_year);
/**
 * @brief Sets value of max_year field of the given object.
 * @ingroup c_document_data
 * @details Maximum year that is considered valid.
 * 
 * Default is 2999
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_date_validation_configuration_t, the field of which will be set
 * @param max_year: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_date_validation_configuration_set_max_year(scanbotsdk_date_validation_configuration_t* self, int max_year);

/**
 * @brief Returns value of field_type_name field of the given object. The returned pointers do NOT own the underlying object, caller must not free them.
 * @ingroup c_document_data
 * @details Name, FullName, or NormalizedName of field type for which the year bounds should be applied.
 * @param self: Pointer to the instance of scanbotsdk_date_validation_configuration_t
 * @param field_type_name: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_date_validation_configuration_get_field_type_name(scanbotsdk_date_validation_configuration_t* self, const char** field_type_name);
/**
 * @brief Sets value of field_type_name field of the given object.
 * @ingroup c_document_data
 * @details Name, FullName, or NormalizedName of field type for which the year bounds should be applied.
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_date_validation_configuration_t, the field of which will be set
 * @param field_type_name: The value to be set. Must not be null.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_date_validation_configuration_set_field_type_name(scanbotsdk_date_validation_configuration_t* self, const char* field_type_name);


/**
 * @brief scanbotsdk_de_address_parser_configuration_t class
 * @details German Address Field validation configuration.
 * This configuration does not enable the scanning of any document types by itself.
 * Add to recognizer configuration to require German Address validation checks for specific document types.
 * @ingroup c_document_data
*/
typedef struct scanbotsdk_de_address_parser_configuration_t scanbotsdk_de_address_parser_configuration_t;

/**
 * @brief Creates a new instance of scanbotsdk_de_address_parser_configuration with given params and stores it in the location specified by the last argument.
 * @ingroup c_document_data
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param document_types: List of generic document formats for which German Address validation has to be applied.
 * Entries of the array must not be null.
 * @param document_types_size: Size of the array document_types
 * @param binary_file_address_database: binary file with address database.
 * 
 * Default is ""
 * The value must not be null.
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_de_address_parser_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_de_address_parser_configuration_create(
    const char** document_types,
    size_t document_types_size,
    const char* binary_file_address_database,
    scanbotsdk_de_address_parser_configuration_t** result);

/**
 * @brief Creates a new instance of scanbotsdk_de_address_parser_configuration_t with given required params and stores it in the location specified by the last argument.
 * @ingroup c_document_data
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param document_types: List of generic document formats for which German Address validation has to be applied.
 * Entries of the array must not be null.
 * @param document_types_size: Size of the array document_types
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_de_address_parser_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_de_address_parser_configuration_create_with_defaults(
    const char** document_types,
    size_t document_types_size,
    scanbotsdk_de_address_parser_configuration_t** result);


/**
 * @brief Frees the memory allocated for the instance of scanbotsdk_de_address_parser_configuration_t. If null is passed, the function does nothing.
 * @ingroup c_document_data
 * @param object: Pointer to the instance of scanbotsdk_de_address_parser_configuration_t to be freed
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_de_address_parser_configuration_free(scanbotsdk_de_address_parser_configuration_t* object);

/**
 * @brief Checks if the given instance of scanbotsdk_document_data_extractor_configuration_element_t is an instance of its subtype scanbotsdk_de_address_parser_configuration_t.
 * @ingroup c_document_data
 * @param object: Pointer to the instance of scanbotsdk_document_data_extractor_configuration_element_t to be checked
 * @param result: Pointer to a variable that will store the result of the check
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
 */
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_data_extractor_configuration_element_is_scanbotsdk_de_address_parser_configuration(scanbotsdk_document_data_extractor_configuration_element_t* object, bool* result);
/**
 * @brief Casts the given instance of scanbotsdk_document_data_extractor_configuration_element_t to its subtype scanbotsdk_de_address_parser_configuration_t. If the given instance is not an instance of the subtype, result will be null.
 * @ingroup c_document_data
 * @param object: Pointer to the instance of scanbotsdk_document_data_extractor_configuration_element_t to be casted
 * @param result: Pointer to a variable that will store the casted instance of scanbotsdk_de_address_parser_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_data_extractor_configuration_element_as_scanbotsdk_de_address_parser_configuration(scanbotsdk_document_data_extractor_configuration_element_t* object, scanbotsdk_de_address_parser_configuration_t** result);
/**
 * @brief Casts the given instance of scanbotsdk_de_address_parser_configuration_t to its parent type scanbotsdk_document_data_extractor_configuration_element_t.
 * @ingroup c_document_data
 * @param object: Pointer to the instance of scanbotsdk_document_data_extractor_configuration_element_t to be casted
 * @param result: Pointer to a variable that will store the casted instance of scanbotsdk_de_address_parser_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_de_address_parser_configuration_as_scanbotsdk_document_data_extractor_configuration_element(scanbotsdk_de_address_parser_configuration_t* object, scanbotsdk_document_data_extractor_configuration_element_t** result);

/**
 * @brief Returns value of document_types field of the given object. The returned pointers do NOT own the underlying object, caller must not free them.
 * @ingroup c_document_data
 * @details List of generic document formats for which German Address validation has to be applied.
 * @param self: Pointer to the instance of scanbotsdk_de_address_parser_configuration_t
 @param size: Size of the pre-allocated array. Must be equal to the size obtained by calling the corresponding _size function.
 * @param document_types: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_de_address_parser_configuration_get_document_types(scanbotsdk_de_address_parser_configuration_t* self, const char** document_types, size_t size);
/**
 * @brief Returns size of document_types array.
 * @ingroup c_document_data
 * @param self: Pointer to the instance of scanbotsdk_de_address_parser_configuration_t
 * @param size: Pointer to a variable that will store the size.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_de_address_parser_configuration_get_document_types_size(scanbotsdk_de_address_parser_configuration_t* self, size_t* size);
/**
 * @brief Sets value of document_types field of the given object.
 * @ingroup c_document_data
 * @details List of generic document formats for which German Address validation has to be applied.
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_de_address_parser_configuration_t, the field of which will be set
 * @param document_types: The value to be set.
 * @param document_types_size: Size of the array.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_de_address_parser_configuration_set_document_types(scanbotsdk_de_address_parser_configuration_t* self, const char** document_types, size_t document_types_size);

/**
 * @brief Returns value of binary_file_address_database field of the given object. The returned pointers do NOT own the underlying object, caller must not free them.
 * @ingroup c_document_data
 * @details binary file with address database.
 * 
 * Default is ""
 * @param self: Pointer to the instance of scanbotsdk_de_address_parser_configuration_t
 * @param binary_file_address_database: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_de_address_parser_configuration_get_binary_file_address_database(scanbotsdk_de_address_parser_configuration_t* self, const char** binary_file_address_database);
/**
 * @brief Sets value of binary_file_address_database field of the given object.
 * @ingroup c_document_data
 * @details binary file with address database.
 * 
 * Default is ""
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_de_address_parser_configuration_t, the field of which will be set
 * @param binary_file_address_database: The value to be set. Must not be null.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_de_address_parser_configuration_set_binary_file_address_database(scanbotsdk_de_address_parser_configuration_t* self, const char* binary_file_address_database);


/**
 * @brief scanbotsdk_european_health_insurance_card_issuing_country_t enum
 * @details European Health Insurance Card (EHIC) issuing country.
 * @ingroup c_document_data
*/
typedef enum scanbotsdk_european_health_insurance_card_issuing_country_t {

    /**Austria (Validation on the personal identification number is performed as described in "site:www.sozialversicherung.at Was ist die Versicherungsnummer?").*/
    SCANBOTSDK_EUROPEAN_HEALTH_INSURANCE_CARD_ISSUING_COUNTRY_AUSTRIA = 0,

    /**Belgium.*/
    SCANBOTSDK_EUROPEAN_HEALTH_INSURANCE_CARD_ISSUING_COUNTRY_BELGIUM = 1,

    /**Bulgaria.*/
    SCANBOTSDK_EUROPEAN_HEALTH_INSURANCE_CARD_ISSUING_COUNTRY_BULGARIA = 2,

    /**Croatia.*/
    SCANBOTSDK_EUROPEAN_HEALTH_INSURANCE_CARD_ISSUING_COUNTRY_CROATIA = 3,

    /**Cyprus.*/
    SCANBOTSDK_EUROPEAN_HEALTH_INSURANCE_CARD_ISSUING_COUNTRY_CYPRUS = 4,

    /**Czech Republic.*/
    SCANBOTSDK_EUROPEAN_HEALTH_INSURANCE_CARD_ISSUING_COUNTRY_CZECH_REPUBLIC = 5,

    /**Denmark.*/
    SCANBOTSDK_EUROPEAN_HEALTH_INSURANCE_CARD_ISSUING_COUNTRY_DENMARK = 6,

    /**Estonia.*/
    SCANBOTSDK_EUROPEAN_HEALTH_INSURANCE_CARD_ISSUING_COUNTRY_ESTONIA = 7,

    /**Finland.*/
    SCANBOTSDK_EUROPEAN_HEALTH_INSURANCE_CARD_ISSUING_COUNTRY_FINLAND = 8,

    /**France.*/
    SCANBOTSDK_EUROPEAN_HEALTH_INSURANCE_CARD_ISSUING_COUNTRY_FRANCE = 9,

    /**Germany (Validation performed according to "Spezifikation für Musterkarten und Testkarten (eGK, HBA, SMC), Anhang A" and "GS1 Struktur der Kenn-Nummer (ICCSN) der elektronischen Gesundheitskarte").*/
    SCANBOTSDK_EUROPEAN_HEALTH_INSURANCE_CARD_ISSUING_COUNTRY_GERMANY = 10,

    /**Greece.*/
    SCANBOTSDK_EUROPEAN_HEALTH_INSURANCE_CARD_ISSUING_COUNTRY_GREECE = 11,

    /**Hungary.*/
    SCANBOTSDK_EUROPEAN_HEALTH_INSURANCE_CARD_ISSUING_COUNTRY_HUNGARY = 12,

    /**Ireland.*/
    SCANBOTSDK_EUROPEAN_HEALTH_INSURANCE_CARD_ISSUING_COUNTRY_IRELAND = 13,

    /**Italy.*/
    SCANBOTSDK_EUROPEAN_HEALTH_INSURANCE_CARD_ISSUING_COUNTRY_ITALY = 14,

    /**Latvia.*/
    SCANBOTSDK_EUROPEAN_HEALTH_INSURANCE_CARD_ISSUING_COUNTRY_LATVIA = 15,

    /**Lithuania.*/
    SCANBOTSDK_EUROPEAN_HEALTH_INSURANCE_CARD_ISSUING_COUNTRY_LITHUANIA = 16,

    /**Luxembourg.*/
    SCANBOTSDK_EUROPEAN_HEALTH_INSURANCE_CARD_ISSUING_COUNTRY_LUXEMBOURG = 17,

    /**Malta.*/
    SCANBOTSDK_EUROPEAN_HEALTH_INSURANCE_CARD_ISSUING_COUNTRY_MALTA = 18,

    /**Netherlands.*/
    SCANBOTSDK_EUROPEAN_HEALTH_INSURANCE_CARD_ISSUING_COUNTRY_NETHERLANDS = 19,

    /**Poland.*/
    SCANBOTSDK_EUROPEAN_HEALTH_INSURANCE_CARD_ISSUING_COUNTRY_POLAND = 20,

    /**Portugal.*/
    SCANBOTSDK_EUROPEAN_HEALTH_INSURANCE_CARD_ISSUING_COUNTRY_PORTUGAL = 21,

    /**Romania.*/
    SCANBOTSDK_EUROPEAN_HEALTH_INSURANCE_CARD_ISSUING_COUNTRY_ROMANIA = 22,

    /**Slovakia.*/
    SCANBOTSDK_EUROPEAN_HEALTH_INSURANCE_CARD_ISSUING_COUNTRY_SLOVAKIA = 23,

    /**Slovenia.*/
    SCANBOTSDK_EUROPEAN_HEALTH_INSURANCE_CARD_ISSUING_COUNTRY_SLOVENIA = 24,

    /**Spain.*/
    SCANBOTSDK_EUROPEAN_HEALTH_INSURANCE_CARD_ISSUING_COUNTRY_SPAIN = 25,

    /**Sweden.*/
    SCANBOTSDK_EUROPEAN_HEALTH_INSURANCE_CARD_ISSUING_COUNTRY_SWEDEN = 26,

    /**Switzerland.*/
    SCANBOTSDK_EUROPEAN_HEALTH_INSURANCE_CARD_ISSUING_COUNTRY_SWITZERLAND = 27,

} scanbotsdk_european_health_insurance_card_issuing_country_t;

/**
 * @brief Returns the string representation of the given scanbotsdk_european_health_insurance_card_issuing_country_t value.
 * @ingroup c_document_data
 * @details The returned string doesn't need to be freed.
 * @param value: The value to be converted to string.
 * @param result: Pointer to a variable that will store the string representation of the value.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_european_health_insurance_card_issuing_country_t_to_string(scanbotsdk_european_health_insurance_card_issuing_country_t value, const char** result);

/**
 * @brief scanbotsdk_european_health_insurance_card_configuration_t class
 * @details European Health Insurance Card (EHIC) configuration element. Add to extractor configuration to scan EHICs.
 * @ingroup c_document_data
*/
typedef struct scanbotsdk_european_health_insurance_card_configuration_t scanbotsdk_european_health_insurance_card_configuration_t;

/**
 * @brief Creates a new instance of scanbotsdk_european_health_insurance_card_configuration with given params and stores it in the location specified by the last argument.
 * @ingroup c_document_data
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param expected_country: If an expected country is selected, validation rules for the given country are used,
 * and if the expected country cannot be inferred or the inferred country doesn't  match the given country,
 * the result of extract() will be IncompleteValidation.
 * The value can be null.
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_european_health_insurance_card_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_european_health_insurance_card_configuration_create(
    scanbotsdk_european_health_insurance_card_issuing_country_t* expected_country,
    scanbotsdk_european_health_insurance_card_configuration_t** result);

/**
 * @brief Creates a new instance of scanbotsdk_european_health_insurance_card_configuration_t with given required params and stores it in the location specified by the last argument.
 * @ingroup c_document_data
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_european_health_insurance_card_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_european_health_insurance_card_configuration_create_with_defaults(
    scanbotsdk_european_health_insurance_card_configuration_t** result);


/**
 * @brief Frees the memory allocated for the instance of scanbotsdk_european_health_insurance_card_configuration_t. If null is passed, the function does nothing.
 * @ingroup c_document_data
 * @param object: Pointer to the instance of scanbotsdk_european_health_insurance_card_configuration_t to be freed
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_european_health_insurance_card_configuration_free(scanbotsdk_european_health_insurance_card_configuration_t* object);

/**
 * @brief Checks if the given instance of scanbotsdk_document_data_extractor_configuration_element_t is an instance of its subtype scanbotsdk_european_health_insurance_card_configuration_t.
 * @ingroup c_document_data
 * @param object: Pointer to the instance of scanbotsdk_document_data_extractor_configuration_element_t to be checked
 * @param result: Pointer to a variable that will store the result of the check
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
 */
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_data_extractor_configuration_element_is_scanbotsdk_european_health_insurance_card_configuration(scanbotsdk_document_data_extractor_configuration_element_t* object, bool* result);
/**
 * @brief Casts the given instance of scanbotsdk_document_data_extractor_configuration_element_t to its subtype scanbotsdk_european_health_insurance_card_configuration_t. If the given instance is not an instance of the subtype, result will be null.
 * @ingroup c_document_data
 * @param object: Pointer to the instance of scanbotsdk_document_data_extractor_configuration_element_t to be casted
 * @param result: Pointer to a variable that will store the casted instance of scanbotsdk_european_health_insurance_card_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_data_extractor_configuration_element_as_scanbotsdk_european_health_insurance_card_configuration(scanbotsdk_document_data_extractor_configuration_element_t* object, scanbotsdk_european_health_insurance_card_configuration_t** result);
/**
 * @brief Casts the given instance of scanbotsdk_european_health_insurance_card_configuration_t to its parent type scanbotsdk_document_data_extractor_configuration_element_t.
 * @ingroup c_document_data
 * @param object: Pointer to the instance of scanbotsdk_document_data_extractor_configuration_element_t to be casted
 * @param result: Pointer to a variable that will store the casted instance of scanbotsdk_european_health_insurance_card_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_european_health_insurance_card_configuration_as_scanbotsdk_document_data_extractor_configuration_element(scanbotsdk_european_health_insurance_card_configuration_t* object, scanbotsdk_document_data_extractor_configuration_element_t** result);

/**
 * @brief Returns value of expected_country field of the given object. The returned pointers do NOT own the underlying object, caller must not free them.
 * @ingroup c_document_data
 * @details If an expected country is selected, validation rules for the given country are used,
 * and if the expected country cannot be inferred or the inferred country doesn't  match the given country,
 * the result of extract() will be IncompleteValidation.
 * @param self: Pointer to the instance of scanbotsdk_european_health_insurance_card_configuration_t
 * @param expected_country: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_european_health_insurance_card_configuration_get_expected_country(scanbotsdk_european_health_insurance_card_configuration_t* self, scanbotsdk_european_health_insurance_card_issuing_country_t** expected_country);
/**
 * @brief Sets value of expected_country field of the given object.
 * @ingroup c_document_data
 * @details If an expected country is selected, validation rules for the given country are used,
 * and if the expected country cannot be inferred or the inferred country doesn't  match the given country,
 * the result of extract() will be IncompleteValidation.
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_european_health_insurance_card_configuration_t, the field of which will be set
 * @param expected_country: The value to be set. Can be null.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_european_health_insurance_card_configuration_set_expected_country(scanbotsdk_european_health_insurance_card_configuration_t* self, scanbotsdk_european_health_insurance_card_issuing_country_t* expected_country);


/**
 * @brief scanbotsdk_mrz_fallback_configuration_t class
 * @details MRZ fallback configuration element.
 * This configuration element does not enable the scanning of any document types by itself.
 * Add to extractor configuration to enable recognizing the MRZ only, specifically for documents that are otherwise not supported.
 * Note that this may enable scanning of documents that were not enabled through the accepted document types.
 * @ingroup c_document_data
*/
typedef struct scanbotsdk_mrz_fallback_configuration_t scanbotsdk_mrz_fallback_configuration_t;

/**
 * @brief Creates a new instance of scanbotsdk_mrz_fallback_configuration with given params and stores it in the location specified by the last argument.
 * @ingroup c_document_data
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param accepted_countries: List of ISO 3166-1 alpha-3 country codes for which the MRZ fallback is enabled. (e.g. "DEU" for Germany).
 * Entries of the array must not be null.
 * @param accepted_countries_size: Size of the array accepted_countries
 * @param accepted_mrz_types: List of MRZ document types for which MRZ fallback is enabled.
 * @param accepted_mrz_types_size: Size of the array accepted_mrz_types
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_mrz_fallback_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_mrz_fallback_configuration_create(
    const char** accepted_countries,
    size_t accepted_countries_size,
    scanbotsdk_mrz_document_type_t* accepted_mrz_types,
    size_t accepted_mrz_types_size,
    scanbotsdk_mrz_fallback_configuration_t** result);

/**
 * @brief Creates a new instance of scanbotsdk_mrz_fallback_configuration_t with given required params and stores it in the location specified by the last argument.
 * @ingroup c_document_data
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_mrz_fallback_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_mrz_fallback_configuration_create_with_defaults(
    scanbotsdk_mrz_fallback_configuration_t** result);


/**
 * @brief Frees the memory allocated for the instance of scanbotsdk_mrz_fallback_configuration_t. If null is passed, the function does nothing.
 * @ingroup c_document_data
 * @param object: Pointer to the instance of scanbotsdk_mrz_fallback_configuration_t to be freed
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_mrz_fallback_configuration_free(scanbotsdk_mrz_fallback_configuration_t* object);

/**
 * @brief Checks if the given instance of scanbotsdk_document_data_extractor_configuration_element_t is an instance of its subtype scanbotsdk_mrz_fallback_configuration_t.
 * @ingroup c_document_data
 * @param object: Pointer to the instance of scanbotsdk_document_data_extractor_configuration_element_t to be checked
 * @param result: Pointer to a variable that will store the result of the check
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
 */
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_data_extractor_configuration_element_is_scanbotsdk_mrz_fallback_configuration(scanbotsdk_document_data_extractor_configuration_element_t* object, bool* result);
/**
 * @brief Casts the given instance of scanbotsdk_document_data_extractor_configuration_element_t to its subtype scanbotsdk_mrz_fallback_configuration_t. If the given instance is not an instance of the subtype, result will be null.
 * @ingroup c_document_data
 * @param object: Pointer to the instance of scanbotsdk_document_data_extractor_configuration_element_t to be casted
 * @param result: Pointer to a variable that will store the casted instance of scanbotsdk_mrz_fallback_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_data_extractor_configuration_element_as_scanbotsdk_mrz_fallback_configuration(scanbotsdk_document_data_extractor_configuration_element_t* object, scanbotsdk_mrz_fallback_configuration_t** result);
/**
 * @brief Casts the given instance of scanbotsdk_mrz_fallback_configuration_t to its parent type scanbotsdk_document_data_extractor_configuration_element_t.
 * @ingroup c_document_data
 * @param object: Pointer to the instance of scanbotsdk_document_data_extractor_configuration_element_t to be casted
 * @param result: Pointer to a variable that will store the casted instance of scanbotsdk_mrz_fallback_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_mrz_fallback_configuration_as_scanbotsdk_document_data_extractor_configuration_element(scanbotsdk_mrz_fallback_configuration_t* object, scanbotsdk_document_data_extractor_configuration_element_t** result);

/**
 * @brief Returns value of accepted_countries field of the given object. The returned pointers do NOT own the underlying object, caller must not free them.
 * @ingroup c_document_data
 * @details List of ISO 3166-1 alpha-3 country codes for which the MRZ fallback is enabled. (e.g. "DEU" for Germany).
 * @param self: Pointer to the instance of scanbotsdk_mrz_fallback_configuration_t
 @param size: Size of the pre-allocated array. Must be equal to the size obtained by calling the corresponding _size function.
 * @param accepted_countries: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_mrz_fallback_configuration_get_accepted_countries(scanbotsdk_mrz_fallback_configuration_t* self, const char** accepted_countries, size_t size);
/**
 * @brief Returns size of accepted_countries array.
 * @ingroup c_document_data
 * @param self: Pointer to the instance of scanbotsdk_mrz_fallback_configuration_t
 * @param size: Pointer to a variable that will store the size.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_mrz_fallback_configuration_get_accepted_countries_size(scanbotsdk_mrz_fallback_configuration_t* self, size_t* size);
/**
 * @brief Sets value of accepted_countries field of the given object.
 * @ingroup c_document_data
 * @details List of ISO 3166-1 alpha-3 country codes for which the MRZ fallback is enabled. (e.g. "DEU" for Germany).
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_mrz_fallback_configuration_t, the field of which will be set
 * @param accepted_countries: The value to be set.
 * @param accepted_countries_size: Size of the array.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_mrz_fallback_configuration_set_accepted_countries(scanbotsdk_mrz_fallback_configuration_t* self, const char** accepted_countries, size_t accepted_countries_size);

/**
 * @brief Returns value of accepted_mrz_types field of the given object. The returned value is direct view into memory, no pre-allocations needed.
 * @ingroup c_document_data
 * @details List of MRZ document types for which MRZ fallback is enabled.
 * @param self: Pointer to the instance of scanbotsdk_mrz_fallback_configuration_t
 * @param accepted_mrz_types: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_mrz_fallback_configuration_get_accepted_mrz_types(scanbotsdk_mrz_fallback_configuration_t* self, scanbotsdk_mrz_document_type_t** accepted_mrz_types);
/**
 * @brief Returns size of accepted_mrz_types array.
 * @ingroup c_document_data
 * @param self: Pointer to the instance of scanbotsdk_mrz_fallback_configuration_t
 * @param size: Pointer to a variable that will store the size.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_mrz_fallback_configuration_get_accepted_mrz_types_size(scanbotsdk_mrz_fallback_configuration_t* self, size_t* size);
/**
 * @brief Sets value of accepted_mrz_types field of the given object.
 * @ingroup c_document_data
 * @details List of MRZ document types for which MRZ fallback is enabled.
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_mrz_fallback_configuration_t, the field of which will be set
 * @param accepted_mrz_types: The value to be set.
 * @param accepted_mrz_types_size: Size of the array.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_mrz_fallback_configuration_set_accepted_mrz_types(scanbotsdk_mrz_fallback_configuration_t* self, scanbotsdk_mrz_document_type_t* accepted_mrz_types, size_t accepted_mrz_types_size);


/**
 * @brief scanbotsdk_auto_focus_configuration_t class
 * @details Auto-focus configuration.
 * The recognizer will ignore frames that are not focused. This option is enabled by default.
 * This configuration has no effect in SINGLE_SHOT mode.
 * @ingroup c_document_data
*/
typedef struct scanbotsdk_auto_focus_configuration_t scanbotsdk_auto_focus_configuration_t;

/**
 * @brief Creates a new instance of scanbotsdk_auto_focus_configuration with given params and stores it in the location specified by the last argument.
 * @ingroup c_document_data
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param sensitivity_threshold: Sensitivity threshold for detecting that autofocus is in progress.
 * The value should be in the range [0.0, 1.0].
 * The lower the value, the more frames might be discarded as not focused. 
 * The higher the value, the earlier the focus might be considered as focused.
 * If set to 0.0, the feature is disabled.
 * 
 * Default is 0.02
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_auto_focus_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_auto_focus_configuration_create(
    double sensitivity_threshold,
    scanbotsdk_auto_focus_configuration_t** result);

/**
 * @brief Creates a new instance of scanbotsdk_auto_focus_configuration_t with given required params and stores it in the location specified by the last argument.
 * @ingroup c_document_data
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_auto_focus_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_auto_focus_configuration_create_with_defaults(
    scanbotsdk_auto_focus_configuration_t** result);


/**
 * @brief Frees the memory allocated for the instance of scanbotsdk_auto_focus_configuration_t. If null is passed, the function does nothing.
 * @ingroup c_document_data
 * @param object: Pointer to the instance of scanbotsdk_auto_focus_configuration_t to be freed
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_auto_focus_configuration_free(scanbotsdk_auto_focus_configuration_t* object);

/**
 * @brief Checks if the given instance of scanbotsdk_document_data_extractor_configuration_element_t is an instance of its subtype scanbotsdk_auto_focus_configuration_t.
 * @ingroup c_document_data
 * @param object: Pointer to the instance of scanbotsdk_document_data_extractor_configuration_element_t to be checked
 * @param result: Pointer to a variable that will store the result of the check
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
 */
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_data_extractor_configuration_element_is_scanbotsdk_auto_focus_configuration(scanbotsdk_document_data_extractor_configuration_element_t* object, bool* result);
/**
 * @brief Casts the given instance of scanbotsdk_document_data_extractor_configuration_element_t to its subtype scanbotsdk_auto_focus_configuration_t. If the given instance is not an instance of the subtype, result will be null.
 * @ingroup c_document_data
 * @param object: Pointer to the instance of scanbotsdk_document_data_extractor_configuration_element_t to be casted
 * @param result: Pointer to a variable that will store the casted instance of scanbotsdk_auto_focus_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_data_extractor_configuration_element_as_scanbotsdk_auto_focus_configuration(scanbotsdk_document_data_extractor_configuration_element_t* object, scanbotsdk_auto_focus_configuration_t** result);
/**
 * @brief Casts the given instance of scanbotsdk_auto_focus_configuration_t to its parent type scanbotsdk_document_data_extractor_configuration_element_t.
 * @ingroup c_document_data
 * @param object: Pointer to the instance of scanbotsdk_document_data_extractor_configuration_element_t to be casted
 * @param result: Pointer to a variable that will store the casted instance of scanbotsdk_auto_focus_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_auto_focus_configuration_as_scanbotsdk_document_data_extractor_configuration_element(scanbotsdk_auto_focus_configuration_t* object, scanbotsdk_document_data_extractor_configuration_element_t** result);

/**
 * @brief Returns value of sensitivity_threshold field of the given object.
 * @ingroup c_document_data
 * @details Sensitivity threshold for detecting that autofocus is in progress.
 * The value should be in the range [0.0, 1.0].
 * The lower the value, the more frames might be discarded as not focused. 
 * The higher the value, the earlier the focus might be considered as focused.
 * If set to 0.0, the feature is disabled.
 * 
 * Default is 0.02
 * @param self: Pointer to the instance of scanbotsdk_auto_focus_configuration_t
 * @param sensitivity_threshold: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_auto_focus_configuration_get_sensitivity_threshold(scanbotsdk_auto_focus_configuration_t* self, double* sensitivity_threshold);
/**
 * @brief Sets value of sensitivity_threshold field of the given object.
 * @ingroup c_document_data
 * @details Sensitivity threshold for detecting that autofocus is in progress.
 * The value should be in the range [0.0, 1.0].
 * The lower the value, the more frames might be discarded as not focused. 
 * The higher the value, the earlier the focus might be considered as focused.
 * If set to 0.0, the feature is disabled.
 * 
 * Default is 0.02
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_auto_focus_configuration_t, the field of which will be set
 * @param sensitivity_threshold: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_auto_focus_configuration_set_sensitivity_threshold(scanbotsdk_auto_focus_configuration_t* self, double sensitivity_threshold);


/**
 * @brief scanbotsdk_glare_detection_configuration_t class
 * @details Glare detection configuration.
 * The recognizer will detect whether fields are obstructed by glare. This feature is enabled by default.
 * This configuration has no effect in SINGLE_SHOT mode.
 * @ingroup c_document_data
*/
typedef struct scanbotsdk_glare_detection_configuration_t scanbotsdk_glare_detection_configuration_t;

/**
 * @brief Creates a new instance of scanbotsdk_glare_detection_configuration with given params and stores it in the location specified by the last argument.
 * @ingroup c_document_data
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param glare_detection_threshold: Glare detection threshold.
 * The value should be in the range [0.0, 1.0].
 * Determines how much glare is acceptable relative to the text size. So 0.5 means that the glare can be up to 50% of the text size.
 * If set to 0.0, the feature is disabled.
 * 
 * Default is 0.5
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_glare_detection_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_glare_detection_configuration_create(
    double glare_detection_threshold,
    scanbotsdk_glare_detection_configuration_t** result);

/**
 * @brief Creates a new instance of scanbotsdk_glare_detection_configuration_t with given required params and stores it in the location specified by the last argument.
 * @ingroup c_document_data
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_glare_detection_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_glare_detection_configuration_create_with_defaults(
    scanbotsdk_glare_detection_configuration_t** result);


/**
 * @brief Frees the memory allocated for the instance of scanbotsdk_glare_detection_configuration_t. If null is passed, the function does nothing.
 * @ingroup c_document_data
 * @param object: Pointer to the instance of scanbotsdk_glare_detection_configuration_t to be freed
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_glare_detection_configuration_free(scanbotsdk_glare_detection_configuration_t* object);

/**
 * @brief Checks if the given instance of scanbotsdk_document_data_extractor_configuration_element_t is an instance of its subtype scanbotsdk_glare_detection_configuration_t.
 * @ingroup c_document_data
 * @param object: Pointer to the instance of scanbotsdk_document_data_extractor_configuration_element_t to be checked
 * @param result: Pointer to a variable that will store the result of the check
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
 */
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_data_extractor_configuration_element_is_scanbotsdk_glare_detection_configuration(scanbotsdk_document_data_extractor_configuration_element_t* object, bool* result);
/**
 * @brief Casts the given instance of scanbotsdk_document_data_extractor_configuration_element_t to its subtype scanbotsdk_glare_detection_configuration_t. If the given instance is not an instance of the subtype, result will be null.
 * @ingroup c_document_data
 * @param object: Pointer to the instance of scanbotsdk_document_data_extractor_configuration_element_t to be casted
 * @param result: Pointer to a variable that will store the casted instance of scanbotsdk_glare_detection_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_data_extractor_configuration_element_as_scanbotsdk_glare_detection_configuration(scanbotsdk_document_data_extractor_configuration_element_t* object, scanbotsdk_glare_detection_configuration_t** result);
/**
 * @brief Casts the given instance of scanbotsdk_glare_detection_configuration_t to its parent type scanbotsdk_document_data_extractor_configuration_element_t.
 * @ingroup c_document_data
 * @param object: Pointer to the instance of scanbotsdk_document_data_extractor_configuration_element_t to be casted
 * @param result: Pointer to a variable that will store the casted instance of scanbotsdk_glare_detection_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_glare_detection_configuration_as_scanbotsdk_document_data_extractor_configuration_element(scanbotsdk_glare_detection_configuration_t* object, scanbotsdk_document_data_extractor_configuration_element_t** result);

/**
 * @brief Returns value of glare_detection_threshold field of the given object.
 * @ingroup c_document_data
 * @details Glare detection threshold.
 * The value should be in the range [0.0, 1.0].
 * Determines how much glare is acceptable relative to the text size. So 0.5 means that the glare can be up to 50% of the text size.
 * If set to 0.0, the feature is disabled.
 * 
 * Default is 0.5
 * @param self: Pointer to the instance of scanbotsdk_glare_detection_configuration_t
 * @param glare_detection_threshold: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_glare_detection_configuration_get_glare_detection_threshold(scanbotsdk_glare_detection_configuration_t* self, double* glare_detection_threshold);
/**
 * @brief Sets value of glare_detection_threshold field of the given object.
 * @ingroup c_document_data
 * @details Glare detection threshold.
 * The value should be in the range [0.0, 1.0].
 * Determines how much glare is acceptable relative to the text size. So 0.5 means that the glare can be up to 50% of the text size.
 * If set to 0.0, the feature is disabled.
 * 
 * Default is 0.5
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_glare_detection_configuration_t, the field of which will be set
 * @param glare_detection_threshold: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_glare_detection_configuration_set_glare_detection_threshold(scanbotsdk_glare_detection_configuration_t* self, double glare_detection_threshold);


/**
 * @brief scanbotsdk_document_data_extractor_common_configuration_t class
 * @details Convenience configuration element for enabling the scanning of multiple document types with a common configuration.
 * Add to extractor configuration to enable the scanning of multiple document types.
 * @ingroup c_document_data
*/
typedef struct scanbotsdk_document_data_extractor_common_configuration_t scanbotsdk_document_data_extractor_common_configuration_t;

/**
 * @brief Creates a new instance of scanbotsdk_document_data_extractor_common_configuration with given params and stores it in the location specified by the last argument.
 * @ingroup c_document_data
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param accepted_document_types: List of document types to scan. By default, the list is empty.
 * Entries of the array must not be null.
 * @param accepted_document_types_size: Size of the array accepted_document_types
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_document_data_extractor_common_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_data_extractor_common_configuration_create(
    const char** accepted_document_types,
    size_t accepted_document_types_size,
    scanbotsdk_document_data_extractor_common_configuration_t** result);

/**
 * @brief Creates a new instance of scanbotsdk_document_data_extractor_common_configuration_t with given required params and stores it in the location specified by the last argument.
 * @ingroup c_document_data
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_document_data_extractor_common_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_data_extractor_common_configuration_create_with_defaults(
    scanbotsdk_document_data_extractor_common_configuration_t** result);


/**
 * @brief Frees the memory allocated for the instance of scanbotsdk_document_data_extractor_common_configuration_t. If null is passed, the function does nothing.
 * @ingroup c_document_data
 * @param object: Pointer to the instance of scanbotsdk_document_data_extractor_common_configuration_t to be freed
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_data_extractor_common_configuration_free(scanbotsdk_document_data_extractor_common_configuration_t* object);

/**
 * @brief Checks if the given instance of scanbotsdk_document_data_extractor_configuration_element_t is an instance of its subtype scanbotsdk_document_data_extractor_common_configuration_t.
 * @ingroup c_document_data
 * @param object: Pointer to the instance of scanbotsdk_document_data_extractor_configuration_element_t to be checked
 * @param result: Pointer to a variable that will store the result of the check
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
 */
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_data_extractor_configuration_element_is_scanbotsdk_document_data_extractor_common_configuration(scanbotsdk_document_data_extractor_configuration_element_t* object, bool* result);
/**
 * @brief Casts the given instance of scanbotsdk_document_data_extractor_configuration_element_t to its subtype scanbotsdk_document_data_extractor_common_configuration_t. If the given instance is not an instance of the subtype, result will be null.
 * @ingroup c_document_data
 * @param object: Pointer to the instance of scanbotsdk_document_data_extractor_configuration_element_t to be casted
 * @param result: Pointer to a variable that will store the casted instance of scanbotsdk_document_data_extractor_common_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_data_extractor_configuration_element_as_scanbotsdk_document_data_extractor_common_configuration(scanbotsdk_document_data_extractor_configuration_element_t* object, scanbotsdk_document_data_extractor_common_configuration_t** result);
/**
 * @brief Casts the given instance of scanbotsdk_document_data_extractor_common_configuration_t to its parent type scanbotsdk_document_data_extractor_configuration_element_t.
 * @ingroup c_document_data
 * @param object: Pointer to the instance of scanbotsdk_document_data_extractor_configuration_element_t to be casted
 * @param result: Pointer to a variable that will store the casted instance of scanbotsdk_document_data_extractor_common_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_data_extractor_common_configuration_as_scanbotsdk_document_data_extractor_configuration_element(scanbotsdk_document_data_extractor_common_configuration_t* object, scanbotsdk_document_data_extractor_configuration_element_t** result);

/**
 * @brief Returns value of accepted_document_types field of the given object. The returned pointers do NOT own the underlying object, caller must not free them.
 * @ingroup c_document_data
 * @details List of document types to scan. By default, the list is empty.
 * @param self: Pointer to the instance of scanbotsdk_document_data_extractor_common_configuration_t
 @param size: Size of the pre-allocated array. Must be equal to the size obtained by calling the corresponding _size function.
 * @param accepted_document_types: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_data_extractor_common_configuration_get_accepted_document_types(scanbotsdk_document_data_extractor_common_configuration_t* self, const char** accepted_document_types, size_t size);
/**
 * @brief Returns size of accepted_document_types array.
 * @ingroup c_document_data
 * @param self: Pointer to the instance of scanbotsdk_document_data_extractor_common_configuration_t
 * @param size: Pointer to a variable that will store the size.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_data_extractor_common_configuration_get_accepted_document_types_size(scanbotsdk_document_data_extractor_common_configuration_t* self, size_t* size);
/**
 * @brief Sets value of accepted_document_types field of the given object.
 * @ingroup c_document_data
 * @details List of document types to scan. By default, the list is empty.
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_document_data_extractor_common_configuration_t, the field of which will be set
 * @param accepted_document_types: The value to be set.
 * @param accepted_document_types_size: Size of the array.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_data_extractor_common_configuration_set_accepted_document_types(scanbotsdk_document_data_extractor_common_configuration_t* self, const char** accepted_document_types, size_t accepted_document_types_size);


#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* SCANBOTSDK_DOCUMENTDATAEXTRACTORCONFIGURATIONTYPES_H */