// Auto-generated with ScanbotSDKCodegenV3. Modifications will be overwritten.
// Generated from SchemasV3/CoreSchemas/schemas/TextPatternScannerTypes.yaml
/**
 * @file ScanbotSDKTextPatternScannerTypes.h
 */

#pragma once
#ifndef SCANBOTSDK_TEXTPATTERNSCANNERTYPES_H
#define SCANBOTSDK_TEXTPATTERNSCANNERTYPES_H


#include <ScanbotSDKTypes.h>
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
 * @brief scanbotsdk_word_box_t class
 * @details Structure containing recognized word text and bounds.
 * @ingroup c_text_pattern
*/
typedef struct scanbotsdk_word_box_t scanbotsdk_word_box_t;

/**
 * @brief Frees the memory allocated for the instance of scanbotsdk_word_box_t. If null is passed, the function does nothing.
 * @ingroup c_text_pattern
 * @param object: Pointer to the instance of scanbotsdk_word_box_t to be freed
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_word_box_free(scanbotsdk_word_box_t* object);

/**
 * @brief Returns value of text field of the given object. The returned pointers do NOT own the underlying object, caller must not free them.
 * @ingroup c_text_pattern
 * @details Recognized word text.
 * @param self: Pointer to the instance of scanbotsdk_word_box_t
 * @param text: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_word_box_get_text(scanbotsdk_word_box_t* self, const char** text);

/**
 * @brief Returns value of bounding_rect field of the given object.
 * @ingroup c_text_pattern
 * @details Bounding rectangle of the recognized word.
 * @param self: Pointer to the instance of scanbotsdk_word_box_t
 * @param bounding_rect: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_word_box_get_bounding_rect(scanbotsdk_word_box_t* self, scanbotsdk_rect_t* bounding_rect);

/**
 * @brief Returns value of recognition_confidence field of the given object.
 * @ingroup c_text_pattern
 * @details Confidence of the recognition.
 * 
 * Default is 0.0
 * @param self: Pointer to the instance of scanbotsdk_word_box_t
 * @param recognition_confidence: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_word_box_get_recognition_confidence(scanbotsdk_word_box_t* self, double* recognition_confidence);


/**
 * @brief scanbotsdk_symbol_box_t class
 * @details Structure containing recognized symbol text and bounds.
 * @ingroup c_text_pattern
*/
typedef struct scanbotsdk_symbol_box_t scanbotsdk_symbol_box_t;

/**
 * @brief Frees the memory allocated for the instance of scanbotsdk_symbol_box_t. If null is passed, the function does nothing.
 * @ingroup c_text_pattern
 * @param object: Pointer to the instance of scanbotsdk_symbol_box_t to be freed
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_symbol_box_free(scanbotsdk_symbol_box_t* object);

/**
 * @brief Returns value of symbol field of the given object. The returned pointers do NOT own the underlying object, caller must not free them.
 * @ingroup c_text_pattern
 * @details Recognized symbol text.
 * @param self: Pointer to the instance of scanbotsdk_symbol_box_t
 * @param symbol: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_symbol_box_get_symbol(scanbotsdk_symbol_box_t* self, const char** symbol);

/**
 * @brief Returns value of bounding_rect field of the given object.
 * @ingroup c_text_pattern
 * @details Bounding rectangle of the recognized symbol.
 * @param self: Pointer to the instance of scanbotsdk_symbol_box_t
 * @param bounding_rect: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_symbol_box_get_bounding_rect(scanbotsdk_symbol_box_t* self, scanbotsdk_rect_t* bounding_rect);

/**
 * @brief Returns value of recognition_confidence field of the given object.
 * @ingroup c_text_pattern
 * @details Confidence of the recognition.
 * @param self: Pointer to the instance of scanbotsdk_symbol_box_t
 * @param recognition_confidence: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_symbol_box_get_recognition_confidence(scanbotsdk_symbol_box_t* self, double* recognition_confidence);


/**
 * @brief scanbotsdk_text_pattern_scanner_result_t class
 * @details The result of the text line recognition.
 * @ingroup c_text_pattern
*/
typedef struct scanbotsdk_text_pattern_scanner_result_t scanbotsdk_text_pattern_scanner_result_t;

/**
 * @brief Frees the memory allocated for the instance of scanbotsdk_text_pattern_scanner_result_t. If null is passed, the function does nothing.
 * @ingroup c_text_pattern
 * @param object: Pointer to the instance of scanbotsdk_text_pattern_scanner_result_t to be freed
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_text_pattern_scanner_result_free(scanbotsdk_text_pattern_scanner_result_t* object);

/**
 * @brief Returns value of raw_text field of the given object. The returned pointers do NOT own the underlying object, caller must not free them.
 * @ingroup c_text_pattern
 * @details Raw recognized string.
 * @param self: Pointer to the instance of scanbotsdk_text_pattern_scanner_result_t
 * @param raw_text: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_text_pattern_scanner_result_get_raw_text(scanbotsdk_text_pattern_scanner_result_t* self, const char** raw_text);

/**
 * @brief Returns value of word_boxes field of the given object. The returned pointers do NOT own the underlying object, caller must not free them.
 * @ingroup c_text_pattern
 * @details Boxes for each recognized word.
 * @param self: Pointer to the instance of scanbotsdk_text_pattern_scanner_result_t
 @param size: Size of the pre-allocated array. Must be equal to the size obtained by calling the corresponding _size function.
 * @param word_boxes: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_text_pattern_scanner_result_get_word_boxes(scanbotsdk_text_pattern_scanner_result_t* self, scanbotsdk_word_box_t** word_boxes, size_t size);
/**
 * @brief Returns size of word_boxes array.
 * @ingroup c_text_pattern
 * @param self: Pointer to the instance of scanbotsdk_text_pattern_scanner_result_t
 * @param size: Pointer to a variable that will store the size.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_text_pattern_scanner_result_get_word_boxes_size(scanbotsdk_text_pattern_scanner_result_t* self, size_t* size);

/**
 * @brief Returns value of symbol_boxes field of the given object. The returned pointers do NOT own the underlying object, caller must not free them.
 * @ingroup c_text_pattern
 * @details Boxes for each recognized symbol.
 * @param self: Pointer to the instance of scanbotsdk_text_pattern_scanner_result_t
 @param size: Size of the pre-allocated array. Must be equal to the size obtained by calling the corresponding _size function.
 * @param symbol_boxes: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_text_pattern_scanner_result_get_symbol_boxes(scanbotsdk_text_pattern_scanner_result_t* self, scanbotsdk_symbol_box_t** symbol_boxes, size_t size);
/**
 * @brief Returns size of symbol_boxes array.
 * @ingroup c_text_pattern
 * @param self: Pointer to the instance of scanbotsdk_text_pattern_scanner_result_t
 * @param size: Pointer to a variable that will store the size.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_text_pattern_scanner_result_get_symbol_boxes_size(scanbotsdk_text_pattern_scanner_result_t* self, size_t* size);

/**
 * @brief Returns value of confidence field of the given object.
 * @ingroup c_text_pattern
 * @details Confidence of the recognition.
 * 
 * Default is 0.0
 * @param self: Pointer to the instance of scanbotsdk_text_pattern_scanner_result_t
 * @param confidence: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_text_pattern_scanner_result_get_confidence(scanbotsdk_text_pattern_scanner_result_t* self, double* confidence);

/**
 * @brief Returns value of validation_successful field of the given object.
 * @ingroup c_text_pattern
 * @details Whether the validation was successful.
 * 
 * Default is false
 * @param self: Pointer to the instance of scanbotsdk_text_pattern_scanner_result_t
 * @param validation_successful: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_text_pattern_scanner_result_get_validation_successful(scanbotsdk_text_pattern_scanner_result_t* self, bool* validation_successful);


/**
 * @brief scanbotsdk_content_validator_t class
 * @details Base class for content validators.
 * @ingroup c_text_pattern
*/
typedef struct scanbotsdk_content_validator_t scanbotsdk_content_validator_t;

/**
 * @brief Frees the memory allocated for the instance of scanbotsdk_content_validator_t. If null is passed, the function does nothing.
 * @ingroup c_text_pattern
 * @param object: Pointer to the instance of scanbotsdk_content_validator_t to be freed
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_content_validator_free(scanbotsdk_content_validator_t* object);


/**
 * @brief scanbotsdk_default_content_validator_t class
 * @details Default content validator. Accepts only non-empty strings.
 * @ingroup c_text_pattern
*/
typedef struct scanbotsdk_default_content_validator_t scanbotsdk_default_content_validator_t;

/**
 * @brief Creates a new instance of scanbotsdk_default_content_validator with given params and stores it in the location specified by the last argument.
 * @ingroup c_text_pattern
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param allowed_characters: OCR whitelist. Empty string means no restriction.
 * 
 * Default is ""
 * The value must not be null.
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_default_content_validator_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_default_content_validator_create(
    const char* allowed_characters,
    scanbotsdk_default_content_validator_t** result);

/**
 * @brief Creates a new instance of scanbotsdk_default_content_validator_t with given required params and stores it in the location specified by the last argument.
 * @ingroup c_text_pattern
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_default_content_validator_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_default_content_validator_create_with_defaults(
    scanbotsdk_default_content_validator_t** result);


/**
 * @brief Frees the memory allocated for the instance of scanbotsdk_default_content_validator_t. If null is passed, the function does nothing.
 * @ingroup c_text_pattern
 * @param object: Pointer to the instance of scanbotsdk_default_content_validator_t to be freed
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_default_content_validator_free(scanbotsdk_default_content_validator_t* object);

/**
 * @brief Checks if the given instance of scanbotsdk_content_validator_t is an instance of its subtype scanbotsdk_default_content_validator_t.
 * @ingroup c_text_pattern
 * @param object: Pointer to the instance of scanbotsdk_content_validator_t to be checked
 * @param result: Pointer to a variable that will store the result of the check
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
 */
SBSDK_API scanbotsdk_error_code_t scanbotsdk_content_validator_is_scanbotsdk_default_content_validator(scanbotsdk_content_validator_t* object, bool* result);
/**
 * @brief Casts the given instance of scanbotsdk_content_validator_t to its subtype scanbotsdk_default_content_validator_t. If the given instance is not an instance of the subtype, result will be null.
 * @ingroup c_text_pattern
 * @param object: Pointer to the instance of scanbotsdk_content_validator_t to be casted
 * @param result: Pointer to a variable that will store the casted instance of scanbotsdk_default_content_validator_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_content_validator_as_scanbotsdk_default_content_validator(scanbotsdk_content_validator_t* object, scanbotsdk_default_content_validator_t** result);
/**
 * @brief Casts the given instance of scanbotsdk_default_content_validator_t to its parent type scanbotsdk_content_validator_t.
 * @ingroup c_text_pattern
 * @param object: Pointer to the instance of scanbotsdk_content_validator_t to be casted
 * @param result: Pointer to a variable that will store the casted instance of scanbotsdk_default_content_validator_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_default_content_validator_as_scanbotsdk_content_validator(scanbotsdk_default_content_validator_t* object, scanbotsdk_content_validator_t** result);

/**
 * @brief Returns value of allowed_characters field of the given object. The returned pointers do NOT own the underlying object, caller must not free them.
 * @ingroup c_text_pattern
 * @details OCR whitelist. Empty string means no restriction.
 * 
 * Default is ""
 * @param self: Pointer to the instance of scanbotsdk_default_content_validator_t
 * @param allowed_characters: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_default_content_validator_get_allowed_characters(scanbotsdk_default_content_validator_t* self, const char** allowed_characters);
/**
 * @brief Sets value of allowed_characters field of the given object.
 * @ingroup c_text_pattern
 * @details OCR whitelist. Empty string means no restriction.
 * 
 * Default is ""
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_default_content_validator_t, the field of which will be set
 * @param allowed_characters: The value to be set. Must not be null.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_default_content_validator_set_allowed_characters(scanbotsdk_default_content_validator_t* self, const char* allowed_characters);


/**
 * @brief scanbotsdk_pattern_content_validator_t class
 * @details Pattern content validator.
 * @ingroup c_text_pattern
*/
typedef struct scanbotsdk_pattern_content_validator_t scanbotsdk_pattern_content_validator_t;

/**
 * @brief Creates a new instance of scanbotsdk_pattern_content_validator with given params and stores it in the location specified by the last argument.
 * @ingroup c_text_pattern
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param allowed_characters: OCR whitelist. Empty string means no restriction.
 * 
 * Default is ""
 * The value must not be null.
 * @param pattern: Wildcard validation pattern.
 *   ? - any character
 *   # - any digit
 *   all other characters represent themselves.
 * The value must not be null.
 * @param match_substring: Whether the pattern should match the whole string or just a substring.
 * 
 * Default is false
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_pattern_content_validator_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_pattern_content_validator_create(
    const char* allowed_characters,
    const char* pattern,
    bool match_substring,
    scanbotsdk_pattern_content_validator_t** result);

/**
 * @brief Creates a new instance of scanbotsdk_pattern_content_validator_t with given required params and stores it in the location specified by the last argument.
 * @ingroup c_text_pattern
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param pattern: Wildcard validation pattern.
 *   ? - any character
 *   # - any digit
 *   all other characters represent themselves.
 * The value must not be null.
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_pattern_content_validator_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_pattern_content_validator_create_with_defaults(
    const char* pattern,
    scanbotsdk_pattern_content_validator_t** result);


/**
 * @brief Frees the memory allocated for the instance of scanbotsdk_pattern_content_validator_t. If null is passed, the function does nothing.
 * @ingroup c_text_pattern
 * @param object: Pointer to the instance of scanbotsdk_pattern_content_validator_t to be freed
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_pattern_content_validator_free(scanbotsdk_pattern_content_validator_t* object);

/**
 * @brief Checks if the given instance of scanbotsdk_content_validator_t is an instance of its subtype scanbotsdk_pattern_content_validator_t.
 * @ingroup c_text_pattern
 * @param object: Pointer to the instance of scanbotsdk_content_validator_t to be checked
 * @param result: Pointer to a variable that will store the result of the check
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
 */
SBSDK_API scanbotsdk_error_code_t scanbotsdk_content_validator_is_scanbotsdk_pattern_content_validator(scanbotsdk_content_validator_t* object, bool* result);
/**
 * @brief Casts the given instance of scanbotsdk_content_validator_t to its subtype scanbotsdk_pattern_content_validator_t. If the given instance is not an instance of the subtype, result will be null.
 * @ingroup c_text_pattern
 * @param object: Pointer to the instance of scanbotsdk_content_validator_t to be casted
 * @param result: Pointer to a variable that will store the casted instance of scanbotsdk_pattern_content_validator_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_content_validator_as_scanbotsdk_pattern_content_validator(scanbotsdk_content_validator_t* object, scanbotsdk_pattern_content_validator_t** result);
/**
 * @brief Casts the given instance of scanbotsdk_pattern_content_validator_t to its parent type scanbotsdk_content_validator_t.
 * @ingroup c_text_pattern
 * @param object: Pointer to the instance of scanbotsdk_content_validator_t to be casted
 * @param result: Pointer to a variable that will store the casted instance of scanbotsdk_pattern_content_validator_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_pattern_content_validator_as_scanbotsdk_content_validator(scanbotsdk_pattern_content_validator_t* object, scanbotsdk_content_validator_t** result);

/**
 * @brief Returns value of allowed_characters field of the given object. The returned pointers do NOT own the underlying object, caller must not free them.
 * @ingroup c_text_pattern
 * @details OCR whitelist. Empty string means no restriction.
 * 
 * Default is ""
 * @param self: Pointer to the instance of scanbotsdk_pattern_content_validator_t
 * @param allowed_characters: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_pattern_content_validator_get_allowed_characters(scanbotsdk_pattern_content_validator_t* self, const char** allowed_characters);
/**
 * @brief Sets value of allowed_characters field of the given object.
 * @ingroup c_text_pattern
 * @details OCR whitelist. Empty string means no restriction.
 * 
 * Default is ""
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_pattern_content_validator_t, the field of which will be set
 * @param allowed_characters: The value to be set. Must not be null.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_pattern_content_validator_set_allowed_characters(scanbotsdk_pattern_content_validator_t* self, const char* allowed_characters);

/**
 * @brief Returns value of pattern field of the given object. The returned pointers do NOT own the underlying object, caller must not free them.
 * @ingroup c_text_pattern
 * @details Wildcard validation pattern.
 *   ? - any character
 *   # - any digit
 *   all other characters represent themselves.
 * @param self: Pointer to the instance of scanbotsdk_pattern_content_validator_t
 * @param pattern: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_pattern_content_validator_get_pattern(scanbotsdk_pattern_content_validator_t* self, const char** pattern);
/**
 * @brief Sets value of pattern field of the given object.
 * @ingroup c_text_pattern
 * @details Wildcard validation pattern.
 *   ? - any character
 *   # - any digit
 *   all other characters represent themselves.
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_pattern_content_validator_t, the field of which will be set
 * @param pattern: The value to be set. Must not be null.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_pattern_content_validator_set_pattern(scanbotsdk_pattern_content_validator_t* self, const char* pattern);

/**
 * @brief Returns value of match_substring field of the given object.
 * @ingroup c_text_pattern
 * @details Whether the pattern should match the whole string or just a substring.
 * 
 * Default is false
 * @param self: Pointer to the instance of scanbotsdk_pattern_content_validator_t
 * @param match_substring: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_pattern_content_validator_get_match_substring(scanbotsdk_pattern_content_validator_t* self, bool* match_substring);
/**
 * @brief Sets value of match_substring field of the given object.
 * @ingroup c_text_pattern
 * @details Whether the pattern should match the whole string or just a substring.
 * 
 * Default is false
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_pattern_content_validator_t, the field of which will be set
 * @param match_substring: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_pattern_content_validator_set_match_substring(scanbotsdk_pattern_content_validator_t* self, bool match_substring);


/**
 * @brief scanbotsdk_text_pattern_scanner_configuration_t class
 * @details Configuration for the text pattern scanner.
 * @ingroup c_text_pattern
*/
typedef struct scanbotsdk_text_pattern_scanner_configuration_t scanbotsdk_text_pattern_scanner_configuration_t;

/**
 * @brief Creates a new instance of scanbotsdk_text_pattern_scanner_configuration with given params and stores it in the location specified by the last argument.
 * @ingroup c_text_pattern
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param ocr_resolution_limit: Maximum image size (height or width) for OCR process. 0 - do not rescale.
 * 
 * Default is 0
 * @param maximum_number_of_accumulated_frames: Maximum number of accumulated frames to inspect before actual result is returned.
 * 
 * Default is 3
 * @param minimum_number_of_required_frames_with_equal_scanning_result: Minimum number of accumulated frames that have equal result.
 * 
 * Default is 2
 * @param validator: Content validator.
 * The value must not be null.
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_text_pattern_scanner_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_text_pattern_scanner_configuration_create(
    int ocr_resolution_limit,
    int maximum_number_of_accumulated_frames,
    int minimum_number_of_required_frames_with_equal_scanning_result,
    scanbotsdk_content_validator_t* validator,
    scanbotsdk_text_pattern_scanner_configuration_t** result);

/**
 * @brief Creates a new instance of scanbotsdk_text_pattern_scanner_configuration_t with given required params and stores it in the location specified by the last argument.
 * @ingroup c_text_pattern
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_text_pattern_scanner_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_text_pattern_scanner_configuration_create_with_defaults(
    scanbotsdk_text_pattern_scanner_configuration_t** result);


/**
 * @brief Frees the memory allocated for the instance of scanbotsdk_text_pattern_scanner_configuration_t. If null is passed, the function does nothing.
 * @ingroup c_text_pattern
 * @param object: Pointer to the instance of scanbotsdk_text_pattern_scanner_configuration_t to be freed
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_text_pattern_scanner_configuration_free(scanbotsdk_text_pattern_scanner_configuration_t* object);

/**
 * @brief Returns value of ocr_resolution_limit field of the given object.
 * @ingroup c_text_pattern
 * @details Maximum image size (height or width) for OCR process. 0 - do not rescale.
 * 
 * Default is 0
 * @param self: Pointer to the instance of scanbotsdk_text_pattern_scanner_configuration_t
 * @param ocr_resolution_limit: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_text_pattern_scanner_configuration_get_ocr_resolution_limit(scanbotsdk_text_pattern_scanner_configuration_t* self, int* ocr_resolution_limit);
/**
 * @brief Sets value of ocr_resolution_limit field of the given object.
 * @ingroup c_text_pattern
 * @details Maximum image size (height or width) for OCR process. 0 - do not rescale.
 * 
 * Default is 0
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_text_pattern_scanner_configuration_t, the field of which will be set
 * @param ocr_resolution_limit: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_text_pattern_scanner_configuration_set_ocr_resolution_limit(scanbotsdk_text_pattern_scanner_configuration_t* self, int ocr_resolution_limit);

/**
 * @brief Returns value of maximum_number_of_accumulated_frames field of the given object.
 * @ingroup c_text_pattern
 * @details Maximum number of accumulated frames to inspect before actual result is returned.
 * 
 * Default is 3
 * @param self: Pointer to the instance of scanbotsdk_text_pattern_scanner_configuration_t
 * @param maximum_number_of_accumulated_frames: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_text_pattern_scanner_configuration_get_maximum_number_of_accumulated_frames(scanbotsdk_text_pattern_scanner_configuration_t* self, int* maximum_number_of_accumulated_frames);
/**
 * @brief Sets value of maximum_number_of_accumulated_frames field of the given object.
 * @ingroup c_text_pattern
 * @details Maximum number of accumulated frames to inspect before actual result is returned.
 * 
 * Default is 3
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_text_pattern_scanner_configuration_t, the field of which will be set
 * @param maximum_number_of_accumulated_frames: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_text_pattern_scanner_configuration_set_maximum_number_of_accumulated_frames(scanbotsdk_text_pattern_scanner_configuration_t* self, int maximum_number_of_accumulated_frames);

/**
 * @brief Returns value of minimum_number_of_required_frames_with_equal_scanning_result field of the given object.
 * @ingroup c_text_pattern
 * @details Minimum number of accumulated frames that have equal result.
 * 
 * Default is 2
 * @param self: Pointer to the instance of scanbotsdk_text_pattern_scanner_configuration_t
 * @param minimum_number_of_required_frames_with_equal_scanning_result: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_text_pattern_scanner_configuration_get_minimum_number_of_required_frames_with_equal_scanning_result(scanbotsdk_text_pattern_scanner_configuration_t* self, int* minimum_number_of_required_frames_with_equal_scanning_result);
/**
 * @brief Sets value of minimum_number_of_required_frames_with_equal_scanning_result field of the given object.
 * @ingroup c_text_pattern
 * @details Minimum number of accumulated frames that have equal result.
 * 
 * Default is 2
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_text_pattern_scanner_configuration_t, the field of which will be set
 * @param minimum_number_of_required_frames_with_equal_scanning_result: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_text_pattern_scanner_configuration_set_minimum_number_of_required_frames_with_equal_scanning_result(scanbotsdk_text_pattern_scanner_configuration_t* self, int minimum_number_of_required_frames_with_equal_scanning_result);

/**
 * @brief Returns value of validator field of the given object. The returned pointers do NOT own the underlying object, caller must not free them.
 * @ingroup c_text_pattern
 * @details Content validator.
 * @param self: Pointer to the instance of scanbotsdk_text_pattern_scanner_configuration_t
 * @param validator: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_text_pattern_scanner_configuration_get_validator(scanbotsdk_text_pattern_scanner_configuration_t* self, scanbotsdk_content_validator_t** validator);
/**
 * @brief Sets value of validator field of the given object.
 * @ingroup c_text_pattern
 * @details Content validator.
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_text_pattern_scanner_configuration_t, the field of which will be set
 * @param validator: The value to be set. Must not be null.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_text_pattern_scanner_configuration_set_validator(scanbotsdk_text_pattern_scanner_configuration_t* self, scanbotsdk_content_validator_t* validator);


#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* SCANBOTSDK_TEXTPATTERNSCANNERTYPES_H */