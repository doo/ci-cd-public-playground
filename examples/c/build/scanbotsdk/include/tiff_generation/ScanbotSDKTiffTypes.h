// Auto-generated with ScanbotSDKCodegenV3. Modifications will be overwritten.
// Generated from SchemasV3/CoreSchemas/schemas/TIFFTypes.yaml
/**
 * @file ScanbotSDKTiffTypes.h
 */

#pragma once
#ifndef SCANBOTSDK_TIFFTYPES_H
#define SCANBOTSDK_TIFFTYPES_H


#include <image_processing/ScanbotSDKParametricFilters.h>
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
 * @brief scanbotsdk_compression_mode_t enum
 * @details TIFF compression type.
 * @ingroup c_tiff_generation
*/
typedef enum scanbotsdk_compression_mode_t {

    /**Dump mode.*/
    SCANBOTSDK_COMPRESSION_MODE_NONE = 1,

    /**CCITT modified Huffman RLE. For binarized images only.*/
    SCANBOTSDK_COMPRESSION_MODE_CCITTRLE = 2,

    /**CCITT T.4 (CCITTFAX3, CCITT Group 3 fax encoding, TIFF 6 name). For binarized images only.*/
    SCANBOTSDK_COMPRESSION_MODE_CCITT_T4 = 3,

    /**CCITT T.6 (CCITTFAX4, CCITT Group 4 fax encoding, TIFF 6 name). For binarized images only.*/
    SCANBOTSDK_COMPRESSION_MODE_CCITT_T6 = 4,

    /**Lempel-Ziv and Welch.*/
    SCANBOTSDK_COMPRESSION_MODE_LZW = 5,

    /**%JPEG DCT compression.*/
    SCANBOTSDK_COMPRESSION_MODE_JPEG = 7,

    /**#1 w/ word alignment. For binarized images only.*/
    SCANBOTSDK_COMPRESSION_MODE_CCITTRLEW = 32771,

    /**Macintosh RLE.*/
    SCANBOTSDK_COMPRESSION_MODE_PACKBITS = 32773,

    /**Deflate compression. Legacy Deflate codec identifier.*/
    SCANBOTSDK_COMPRESSION_MODE_DEFLATE = 32946,

    /**Deflate compression, as recognized by Adobe. More widely supported.*/
    SCANBOTSDK_COMPRESSION_MODE_ADOBE_DEFLATE = 8,

} scanbotsdk_compression_mode_t;

/**
 * @brief Returns the string representation of the given scanbotsdk_compression_mode_t value.
 * @ingroup c_tiff_generation
 * @details The returned string doesn't need to be freed.
 * @param value: The value to be converted to string.
 * @param result: Pointer to a variable that will store the string representation of the value.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_compression_mode_t_to_string(scanbotsdk_compression_mode_t value, const char** result);

/**
 * @brief scanbotsdk_user_field_value_t class
 * @details User-defined TIFF field value.
 * @ingroup c_tiff_generation
*/
typedef struct scanbotsdk_user_field_value_t scanbotsdk_user_field_value_t;

/**
 * @brief Frees the memory allocated for the instance of scanbotsdk_user_field_value_t. If null is passed, the function does nothing.
 * @ingroup c_tiff_generation
 * @param object: Pointer to the instance of scanbotsdk_user_field_value_t to be freed
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_user_field_value_free(scanbotsdk_user_field_value_t* object);


/**
 * @brief scanbotsdk_user_field_double_value_t class
 * @details Double value (TIFF_DOUBLE).
 * @ingroup c_tiff_generation
*/
typedef struct scanbotsdk_user_field_double_value_t scanbotsdk_user_field_double_value_t;

/**
 * @brief Creates a new instance of scanbotsdk_user_field_double_value with given params and stores it in the location specified by the last argument.
 * @ingroup c_tiff_generation
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param value: Value.
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_user_field_double_value_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_user_field_double_value_create(
    double value,
    scanbotsdk_user_field_double_value_t** result);


/**
 * @brief Frees the memory allocated for the instance of scanbotsdk_user_field_double_value_t. If null is passed, the function does nothing.
 * @ingroup c_tiff_generation
 * @param object: Pointer to the instance of scanbotsdk_user_field_double_value_t to be freed
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_user_field_double_value_free(scanbotsdk_user_field_double_value_t* object);

/**
 * @brief Checks if the given instance of scanbotsdk_user_field_value_t is an instance of its subtype scanbotsdk_user_field_double_value_t.
 * @ingroup c_tiff_generation
 * @param object: Pointer to the instance of scanbotsdk_user_field_value_t to be checked
 * @param result: Pointer to a variable that will store the result of the check
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
 */
SBSDK_API scanbotsdk_error_code_t scanbotsdk_user_field_value_is_scanbotsdk_user_field_double_value(scanbotsdk_user_field_value_t* object, bool* result);
/**
 * @brief Casts the given instance of scanbotsdk_user_field_value_t to its subtype scanbotsdk_user_field_double_value_t. If the given instance is not an instance of the subtype, result will be null.
 * @ingroup c_tiff_generation
 * @param object: Pointer to the instance of scanbotsdk_user_field_value_t to be casted
 * @param result: Pointer to a variable that will store the casted instance of scanbotsdk_user_field_double_value_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_user_field_value_as_scanbotsdk_user_field_double_value(scanbotsdk_user_field_value_t* object, scanbotsdk_user_field_double_value_t** result);
/**
 * @brief Casts the given instance of scanbotsdk_user_field_double_value_t to its parent type scanbotsdk_user_field_value_t.
 * @ingroup c_tiff_generation
 * @param object: Pointer to the instance of scanbotsdk_user_field_value_t to be casted
 * @param result: Pointer to a variable that will store the casted instance of scanbotsdk_user_field_double_value_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_user_field_double_value_as_scanbotsdk_user_field_value(scanbotsdk_user_field_double_value_t* object, scanbotsdk_user_field_value_t** result);

/**
 * @brief Returns value of value field of the given object.
 * @ingroup c_tiff_generation
 * @details Value.
 * @param self: Pointer to the instance of scanbotsdk_user_field_double_value_t
 * @param value: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_user_field_double_value_get_value(scanbotsdk_user_field_double_value_t* self, double* value);
/**
 * @brief Sets value of value field of the given object.
 * @ingroup c_tiff_generation
 * @details Value.
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_user_field_double_value_t, the field of which will be set
 * @param value: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_user_field_double_value_set_value(scanbotsdk_user_field_double_value_t* self, double value);


/**
 * @brief scanbotsdk_user_field_string_value_t class
 * @details ASCII string value (TIFF_ASCII).
 * @ingroup c_tiff_generation
*/
typedef struct scanbotsdk_user_field_string_value_t scanbotsdk_user_field_string_value_t;

/**
 * @brief Creates a new instance of scanbotsdk_user_field_string_value with given params and stores it in the location specified by the last argument.
 * @ingroup c_tiff_generation
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param value: Value.
 * The value must not be null.
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_user_field_string_value_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_user_field_string_value_create(
    const char* value,
    scanbotsdk_user_field_string_value_t** result);


/**
 * @brief Frees the memory allocated for the instance of scanbotsdk_user_field_string_value_t. If null is passed, the function does nothing.
 * @ingroup c_tiff_generation
 * @param object: Pointer to the instance of scanbotsdk_user_field_string_value_t to be freed
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_user_field_string_value_free(scanbotsdk_user_field_string_value_t* object);

/**
 * @brief Checks if the given instance of scanbotsdk_user_field_value_t is an instance of its subtype scanbotsdk_user_field_string_value_t.
 * @ingroup c_tiff_generation
 * @param object: Pointer to the instance of scanbotsdk_user_field_value_t to be checked
 * @param result: Pointer to a variable that will store the result of the check
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
 */
SBSDK_API scanbotsdk_error_code_t scanbotsdk_user_field_value_is_scanbotsdk_user_field_string_value(scanbotsdk_user_field_value_t* object, bool* result);
/**
 * @brief Casts the given instance of scanbotsdk_user_field_value_t to its subtype scanbotsdk_user_field_string_value_t. If the given instance is not an instance of the subtype, result will be null.
 * @ingroup c_tiff_generation
 * @param object: Pointer to the instance of scanbotsdk_user_field_value_t to be casted
 * @param result: Pointer to a variable that will store the casted instance of scanbotsdk_user_field_string_value_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_user_field_value_as_scanbotsdk_user_field_string_value(scanbotsdk_user_field_value_t* object, scanbotsdk_user_field_string_value_t** result);
/**
 * @brief Casts the given instance of scanbotsdk_user_field_string_value_t to its parent type scanbotsdk_user_field_value_t.
 * @ingroup c_tiff_generation
 * @param object: Pointer to the instance of scanbotsdk_user_field_value_t to be casted
 * @param result: Pointer to a variable that will store the casted instance of scanbotsdk_user_field_string_value_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_user_field_string_value_as_scanbotsdk_user_field_value(scanbotsdk_user_field_string_value_t* object, scanbotsdk_user_field_value_t** result);

/**
 * @brief Returns value of value field of the given object. The returned pointers do NOT own the underlying object, caller must not free them.
 * @ingroup c_tiff_generation
 * @details Value.
 * @param self: Pointer to the instance of scanbotsdk_user_field_string_value_t
 * @param value: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_user_field_string_value_get_value(scanbotsdk_user_field_string_value_t* self, const char** value);
/**
 * @brief Sets value of value field of the given object.
 * @ingroup c_tiff_generation
 * @details Value.
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_user_field_string_value_t, the field of which will be set
 * @param value: The value to be set. Must not be null.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_user_field_string_value_set_value(scanbotsdk_user_field_string_value_t* self, const char* value);


/**
 * @brief scanbotsdk_user_field_int_value_t class
 * @details 32-bit int value (TIFF_LONG).
 * @ingroup c_tiff_generation
*/
typedef struct scanbotsdk_user_field_int_value_t scanbotsdk_user_field_int_value_t;

/**
 * @brief Creates a new instance of scanbotsdk_user_field_int_value with given params and stores it in the location specified by the last argument.
 * @ingroup c_tiff_generation
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param value: Value.
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_user_field_int_value_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_user_field_int_value_create(
    int value,
    scanbotsdk_user_field_int_value_t** result);


/**
 * @brief Frees the memory allocated for the instance of scanbotsdk_user_field_int_value_t. If null is passed, the function does nothing.
 * @ingroup c_tiff_generation
 * @param object: Pointer to the instance of scanbotsdk_user_field_int_value_t to be freed
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_user_field_int_value_free(scanbotsdk_user_field_int_value_t* object);

/**
 * @brief Checks if the given instance of scanbotsdk_user_field_value_t is an instance of its subtype scanbotsdk_user_field_int_value_t.
 * @ingroup c_tiff_generation
 * @param object: Pointer to the instance of scanbotsdk_user_field_value_t to be checked
 * @param result: Pointer to a variable that will store the result of the check
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
 */
SBSDK_API scanbotsdk_error_code_t scanbotsdk_user_field_value_is_scanbotsdk_user_field_int_value(scanbotsdk_user_field_value_t* object, bool* result);
/**
 * @brief Casts the given instance of scanbotsdk_user_field_value_t to its subtype scanbotsdk_user_field_int_value_t. If the given instance is not an instance of the subtype, result will be null.
 * @ingroup c_tiff_generation
 * @param object: Pointer to the instance of scanbotsdk_user_field_value_t to be casted
 * @param result: Pointer to a variable that will store the casted instance of scanbotsdk_user_field_int_value_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_user_field_value_as_scanbotsdk_user_field_int_value(scanbotsdk_user_field_value_t* object, scanbotsdk_user_field_int_value_t** result);
/**
 * @brief Casts the given instance of scanbotsdk_user_field_int_value_t to its parent type scanbotsdk_user_field_value_t.
 * @ingroup c_tiff_generation
 * @param object: Pointer to the instance of scanbotsdk_user_field_value_t to be casted
 * @param result: Pointer to a variable that will store the casted instance of scanbotsdk_user_field_int_value_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_user_field_int_value_as_scanbotsdk_user_field_value(scanbotsdk_user_field_int_value_t* object, scanbotsdk_user_field_value_t** result);

/**
 * @brief Returns value of value field of the given object.
 * @ingroup c_tiff_generation
 * @details Value.
 * @param self: Pointer to the instance of scanbotsdk_user_field_int_value_t
 * @param value: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_user_field_int_value_get_value(scanbotsdk_user_field_int_value_t* self, int* value);
/**
 * @brief Sets value of value field of the given object.
 * @ingroup c_tiff_generation
 * @details Value.
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_user_field_int_value_t, the field of which will be set
 * @param value: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_user_field_int_value_set_value(scanbotsdk_user_field_int_value_t* self, int value);


/**
 * @brief scanbotsdk_user_field_t class
 * @details User-defined TIFF field.
 * @ingroup c_tiff_generation
*/
typedef struct scanbotsdk_user_field_t scanbotsdk_user_field_t;

/**
 * @brief Creates a new instance of scanbotsdk_user_field with given params and stores it in the location specified by the last argument.
 * @ingroup c_tiff_generation
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param tag: Numeric tag.
 * @param name: Field name.
 * The value must not be null.
 * @param value: Value.
 * The value must not be null.
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_user_field_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_user_field_create(
    int tag,
    const char* name,
    scanbotsdk_user_field_value_t* value,
    scanbotsdk_user_field_t** result);


/**
 * @brief Frees the memory allocated for the instance of scanbotsdk_user_field_t. If null is passed, the function does nothing.
 * @ingroup c_tiff_generation
 * @param object: Pointer to the instance of scanbotsdk_user_field_t to be freed
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_user_field_free(scanbotsdk_user_field_t* object);

/**
 * @brief Returns value of tag field of the given object.
 * @ingroup c_tiff_generation
 * @details Numeric tag.
 * @param self: Pointer to the instance of scanbotsdk_user_field_t
 * @param tag: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_user_field_get_tag(scanbotsdk_user_field_t* self, int* tag);
/**
 * @brief Sets value of tag field of the given object.
 * @ingroup c_tiff_generation
 * @details Numeric tag.
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_user_field_t, the field of which will be set
 * @param tag: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_user_field_set_tag(scanbotsdk_user_field_t* self, int tag);

/**
 * @brief Returns value of name field of the given object. The returned pointers do NOT own the underlying object, caller must not free them.
 * @ingroup c_tiff_generation
 * @details Field name.
 * @param self: Pointer to the instance of scanbotsdk_user_field_t
 * @param name: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_user_field_get_name(scanbotsdk_user_field_t* self, const char** name);
/**
 * @brief Sets value of name field of the given object.
 * @ingroup c_tiff_generation
 * @details Field name.
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_user_field_t, the field of which will be set
 * @param name: The value to be set. Must not be null.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_user_field_set_name(scanbotsdk_user_field_t* self, const char* name);

/**
 * @brief Returns value of value field of the given object. The returned pointers do NOT own the underlying object, caller must not free them.
 * @ingroup c_tiff_generation
 * @details Value.
 * @param self: Pointer to the instance of scanbotsdk_user_field_t
 * @param value: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_user_field_get_value(scanbotsdk_user_field_t* self, scanbotsdk_user_field_value_t** value);
/**
 * @brief Sets value of value field of the given object.
 * @ingroup c_tiff_generation
 * @details Value.
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_user_field_t, the field of which will be set
 * @param value: The value to be set. Must not be null.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_user_field_set_value(scanbotsdk_user_field_t* self, scanbotsdk_user_field_value_t* value);


/**
 * @brief scanbotsdk_tiff_generator_parameters_t class
 * @details TIFF generator parameters.
 * @ingroup c_tiff_generation
*/
typedef struct scanbotsdk_tiff_generator_parameters_t scanbotsdk_tiff_generator_parameters_t;

/**
 * @brief Creates a new instance of scanbotsdk_tiff_generator_parameters with given params and stores it in the location specified by the last argument.
 * @ingroup c_tiff_generation
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param compression: Compression.
 * 
 * Default is LZW
 * @param jpeg_quality: JPEG quality (TIFFTAG_JPEGQUALITY). Values range from 0 to 100.
 * 
 * Default is 80
 * @param zip_compression_level: ZIP/Deflate compression level (TIFFTAG_ZIPQUALITY). Values range from 1 to 9.
 * 
 * Default is 6
 * @param dpi: DPI value.
 * 
 * Default is 72
 * @param user_fields: User-defined fields.
 * Entries of the array must not be null.
 * @param user_fields_size: Size of the array user_fields
 * @param binarization_filter: Filter to apply to the input image when adding pages with binarization.
 * If set, the filter is applied to the input image and the resulting image is stored as a 1-bit TIFF.
 * When storing documents it's typically best to use the BINARY_DOCUMENT_OPTIMIZED_COMPRESSION compression mode (CCITT_T6)
 * instead of the default, as it tends to produce the smallest file sizes.
 * If not set, simple thresholding is applied to the image, instead.
 * The value can be null.
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_tiff_generator_parameters_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_tiff_generator_parameters_create(
    scanbotsdk_compression_mode_t compression,
    int jpeg_quality,
    int zip_compression_level,
    int dpi,
    scanbotsdk_user_field_t** user_fields,
    size_t user_fields_size,
    scanbotsdk_parametric_filter_t* binarization_filter,
    scanbotsdk_tiff_generator_parameters_t** result);

/**
 * @brief Creates a new instance of scanbotsdk_tiff_generator_parameters_t with given required params and stores it in the location specified by the last argument.
 * @ingroup c_tiff_generation
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_tiff_generator_parameters_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_tiff_generator_parameters_create_with_defaults(
    scanbotsdk_tiff_generator_parameters_t** result);


/**
 * @brief Frees the memory allocated for the instance of scanbotsdk_tiff_generator_parameters_t. If null is passed, the function does nothing.
 * @ingroup c_tiff_generation
 * @param object: Pointer to the instance of scanbotsdk_tiff_generator_parameters_t to be freed
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_tiff_generator_parameters_free(scanbotsdk_tiff_generator_parameters_t* object);

/**
 * @brief Returns value of compression field of the given object.
 * @ingroup c_tiff_generation
 * @details Compression.
 * 
 * Default is LZW
 * @param self: Pointer to the instance of scanbotsdk_tiff_generator_parameters_t
 * @param compression: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_tiff_generator_parameters_get_compression(scanbotsdk_tiff_generator_parameters_t* self, scanbotsdk_compression_mode_t* compression);
/**
 * @brief Sets value of compression field of the given object.
 * @ingroup c_tiff_generation
 * @details Compression.
 * 
 * Default is LZW
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_tiff_generator_parameters_t, the field of which will be set
 * @param compression: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_tiff_generator_parameters_set_compression(scanbotsdk_tiff_generator_parameters_t* self, scanbotsdk_compression_mode_t compression);

/**
 * @brief Returns value of jpeg_quality field of the given object.
 * @ingroup c_tiff_generation
 * @details JPEG quality (TIFFTAG_JPEGQUALITY). Values range from 0 to 100.
 * 
 * Default is 80
 * @param self: Pointer to the instance of scanbotsdk_tiff_generator_parameters_t
 * @param jpeg_quality: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_tiff_generator_parameters_get_jpeg_quality(scanbotsdk_tiff_generator_parameters_t* self, int* jpeg_quality);
/**
 * @brief Sets value of jpeg_quality field of the given object.
 * @ingroup c_tiff_generation
 * @details JPEG quality (TIFFTAG_JPEGQUALITY). Values range from 0 to 100.
 * 
 * Default is 80
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_tiff_generator_parameters_t, the field of which will be set
 * @param jpeg_quality: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_tiff_generator_parameters_set_jpeg_quality(scanbotsdk_tiff_generator_parameters_t* self, int jpeg_quality);

/**
 * @brief Returns value of zip_compression_level field of the given object.
 * @ingroup c_tiff_generation
 * @details ZIP/Deflate compression level (TIFFTAG_ZIPQUALITY). Values range from 1 to 9.
 * 
 * Default is 6
 * @param self: Pointer to the instance of scanbotsdk_tiff_generator_parameters_t
 * @param zip_compression_level: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_tiff_generator_parameters_get_zip_compression_level(scanbotsdk_tiff_generator_parameters_t* self, int* zip_compression_level);
/**
 * @brief Sets value of zip_compression_level field of the given object.
 * @ingroup c_tiff_generation
 * @details ZIP/Deflate compression level (TIFFTAG_ZIPQUALITY). Values range from 1 to 9.
 * 
 * Default is 6
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_tiff_generator_parameters_t, the field of which will be set
 * @param zip_compression_level: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_tiff_generator_parameters_set_zip_compression_level(scanbotsdk_tiff_generator_parameters_t* self, int zip_compression_level);

/**
 * @brief Returns value of dpi field of the given object.
 * @ingroup c_tiff_generation
 * @details DPI value.
 * 
 * Default is 72
 * @param self: Pointer to the instance of scanbotsdk_tiff_generator_parameters_t
 * @param dpi: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_tiff_generator_parameters_get_dpi(scanbotsdk_tiff_generator_parameters_t* self, int* dpi);
/**
 * @brief Sets value of dpi field of the given object.
 * @ingroup c_tiff_generation
 * @details DPI value.
 * 
 * Default is 72
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_tiff_generator_parameters_t, the field of which will be set
 * @param dpi: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_tiff_generator_parameters_set_dpi(scanbotsdk_tiff_generator_parameters_t* self, int dpi);

/**
 * @brief Returns value of user_fields field of the given object. The returned pointers do NOT own the underlying object, caller must not free them.
 * @ingroup c_tiff_generation
 * @details User-defined fields.
 * @param self: Pointer to the instance of scanbotsdk_tiff_generator_parameters_t
 @param size: Size of the pre-allocated array. Must be equal to the size obtained by calling the corresponding _size function.
 * @param user_fields: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_tiff_generator_parameters_get_user_fields(scanbotsdk_tiff_generator_parameters_t* self, scanbotsdk_user_field_t** user_fields, size_t size);
/**
 * @brief Returns size of user_fields array.
 * @ingroup c_tiff_generation
 * @param self: Pointer to the instance of scanbotsdk_tiff_generator_parameters_t
 * @param size: Pointer to a variable that will store the size.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_tiff_generator_parameters_get_user_fields_size(scanbotsdk_tiff_generator_parameters_t* self, size_t* size);
/**
 * @brief Sets value of user_fields field of the given object.
 * @ingroup c_tiff_generation
 * @details User-defined fields.
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_tiff_generator_parameters_t, the field of which will be set
 * @param user_fields: The value to be set.
 * @param user_fields_size: Size of the array.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_tiff_generator_parameters_set_user_fields(scanbotsdk_tiff_generator_parameters_t* self, scanbotsdk_user_field_t** user_fields, size_t user_fields_size);

/**
 * @brief Returns value of binarization_filter field of the given object. The returned pointers do NOT own the underlying object, caller must not free them.
 * @ingroup c_tiff_generation
 * @details Filter to apply to the input image when adding pages with binarization.
 * If set, the filter is applied to the input image and the resulting image is stored as a 1-bit TIFF.
 * When storing documents it's typically best to use the BINARY_DOCUMENT_OPTIMIZED_COMPRESSION compression mode (CCITT_T6)
 * instead of the default, as it tends to produce the smallest file sizes.
 * If not set, simple thresholding is applied to the image, instead.
 * @param self: Pointer to the instance of scanbotsdk_tiff_generator_parameters_t
 * @param binarization_filter: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_tiff_generator_parameters_get_binarization_filter(scanbotsdk_tiff_generator_parameters_t* self, scanbotsdk_parametric_filter_t** binarization_filter);
/**
 * @brief Sets value of binarization_filter field of the given object.
 * @ingroup c_tiff_generation
 * @details Filter to apply to the input image when adding pages with binarization.
 * If set, the filter is applied to the input image and the resulting image is stored as a 1-bit TIFF.
 * When storing documents it's typically best to use the BINARY_DOCUMENT_OPTIMIZED_COMPRESSION compression mode (CCITT_T6)
 * instead of the default, as it tends to produce the smallest file sizes.
 * If not set, simple thresholding is applied to the image, instead.
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_tiff_generator_parameters_t, the field of which will be set
 * @param binarization_filter: The value to be set. Can be null.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_tiff_generator_parameters_set_binarization_filter(scanbotsdk_tiff_generator_parameters_t* self, scanbotsdk_parametric_filter_t* binarization_filter);


#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* SCANBOTSDK_TIFFTYPES_H */