// Auto-generated with ScanbotSDKCodegenV3. Modifications will be overwritten.
// Generated from SchemasV3/CoreSchemas/schemas/OCRTypes.yaml
/**
 * @file ScanbotSDKOcrTypes.h
 */

#pragma once
#ifndef SCANBOTSDK_OCRTYPES_H
#define SCANBOTSDK_OCRTYPES_H


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
 * @brief scanbotsdk_ocr_element_t class
 * @details Base class for units of text, e.g. glyphs, words, lines, blocks, pages.
 * @ingroup c_ocr
*/
typedef struct scanbotsdk_ocr_element_t scanbotsdk_ocr_element_t;

/**
 * @brief Frees the memory allocated for the instance of scanbotsdk_ocr_element_t. If null is passed, the function does nothing.
 * @ingroup c_ocr
 * @param object: Pointer to the instance of scanbotsdk_ocr_element_t to be freed
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_ocr_element_free(scanbotsdk_ocr_element_t* object);

/**
 * @brief Returns value of text field of the given object. The returned pointers do NOT own the underlying object, caller must not free them.
 * @ingroup c_ocr
 * @details The recognized text.
 * @param self: Pointer to the instance of scanbotsdk_ocr_element_t
 * @param text: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_ocr_element_get_text(scanbotsdk_ocr_element_t* self, const char** text);

/**
 * @brief Returns value of confidence field of the given object.
 * @ingroup c_ocr
 * @details Text confidence. Range is [0-1].
 * @param self: Pointer to the instance of scanbotsdk_ocr_element_t
 * @param confidence: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_ocr_element_get_confidence(scanbotsdk_ocr_element_t* self, double* confidence);

/**
 * @brief Returns value of roi field of the given object. The returned value is direct view into memory, no pre-allocations needed.
 * @ingroup c_ocr
 * @details Quad where the text was found in image coordinates. The order of the points is clockwise starting from the top left.
 * @param self: Pointer to the instance of scanbotsdk_ocr_element_t
 * @param roi: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_ocr_element_get_roi(scanbotsdk_ocr_element_t* self, scanbotsdk_pointf_t** roi);
/**
 * @brief Returns size of roi array.
 * @ingroup c_ocr
 * @param self: Pointer to the instance of scanbotsdk_ocr_element_t
 * @param size: Pointer to a variable that will store the size.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_ocr_element_get_roi_size(scanbotsdk_ocr_element_t* self, size_t* size);


/**
 * @brief scanbotsdk_glyph_t class
 * @details Represents a single glyph, i.e. a character.
 * @ingroup c_ocr
*/
typedef struct scanbotsdk_glyph_t scanbotsdk_glyph_t;

/**
 * @brief Creates a new instance of scanbotsdk_glyph with given params and stores it in the location specified by the last argument.
 * @ingroup c_ocr
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param text: The recognized text.
 * The value must not be null.
 * @param confidence: Text confidence. Range is [0-1].
 * @param roi: Quad where the text was found in image coordinates. The order of the points is clockwise starting from the top left.
 * @param roi_size: Size of the array roi
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_glyph_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_glyph_create(
    const char* text,
    double confidence,
    scanbotsdk_pointf_t* roi,
    size_t roi_size,
    scanbotsdk_glyph_t** result);


/**
 * @brief Frees the memory allocated for the instance of scanbotsdk_glyph_t. If null is passed, the function does nothing.
 * @ingroup c_ocr
 * @param object: Pointer to the instance of scanbotsdk_glyph_t to be freed
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_glyph_free(scanbotsdk_glyph_t* object);

/**
 * @brief Checks if the given instance of scanbotsdk_ocr_element_t is an instance of its subtype scanbotsdk_glyph_t.
 * @ingroup c_ocr
 * @param object: Pointer to the instance of scanbotsdk_ocr_element_t to be checked
 * @param result: Pointer to a variable that will store the result of the check
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
 */
SBSDK_API scanbotsdk_error_code_t scanbotsdk_ocr_element_is_scanbotsdk_glyph(scanbotsdk_ocr_element_t* object, bool* result);
/**
 * @brief Casts the given instance of scanbotsdk_ocr_element_t to its subtype scanbotsdk_glyph_t. If the given instance is not an instance of the subtype, result will be null.
 * @ingroup c_ocr
 * @param object: Pointer to the instance of scanbotsdk_ocr_element_t to be casted
 * @param result: Pointer to a variable that will store the casted instance of scanbotsdk_glyph_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_ocr_element_as_scanbotsdk_glyph(scanbotsdk_ocr_element_t* object, scanbotsdk_glyph_t** result);
/**
 * @brief Casts the given instance of scanbotsdk_glyph_t to its parent type scanbotsdk_ocr_element_t.
 * @ingroup c_ocr
 * @param object: Pointer to the instance of scanbotsdk_ocr_element_t to be casted
 * @param result: Pointer to a variable that will store the casted instance of scanbotsdk_glyph_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_glyph_as_scanbotsdk_ocr_element(scanbotsdk_glyph_t* object, scanbotsdk_ocr_element_t** result);


/**
 * @brief scanbotsdk_word_t class
 * @details Represents a single word. A word is made up of glyphs.
 * @ingroup c_ocr
*/
typedef struct scanbotsdk_word_t scanbotsdk_word_t;

/**
 * @brief Creates a new instance of scanbotsdk_word with given params and stores it in the location specified by the last argument.
 * @ingroup c_ocr
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param text: The recognized text.
 * The value must not be null.
 * @param confidence: Text confidence. Range is [0-1].
 * @param roi: Quad where the text was found in image coordinates. The order of the points is clockwise starting from the top left.
 * @param roi_size: Size of the array roi
 * @param glyphs: List of glyphs.
 * Entries of the array must not be null.
 * @param glyphs_size: Size of the array glyphs
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_word_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_word_create(
    const char* text,
    double confidence,
    scanbotsdk_pointf_t* roi,
    size_t roi_size,
    scanbotsdk_glyph_t** glyphs,
    size_t glyphs_size,
    scanbotsdk_word_t** result);


/**
 * @brief Frees the memory allocated for the instance of scanbotsdk_word_t. If null is passed, the function does nothing.
 * @ingroup c_ocr
 * @param object: Pointer to the instance of scanbotsdk_word_t to be freed
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_word_free(scanbotsdk_word_t* object);

/**
 * @brief Checks if the given instance of scanbotsdk_ocr_element_t is an instance of its subtype scanbotsdk_word_t.
 * @ingroup c_ocr
 * @param object: Pointer to the instance of scanbotsdk_ocr_element_t to be checked
 * @param result: Pointer to a variable that will store the result of the check
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
 */
SBSDK_API scanbotsdk_error_code_t scanbotsdk_ocr_element_is_scanbotsdk_word(scanbotsdk_ocr_element_t* object, bool* result);
/**
 * @brief Casts the given instance of scanbotsdk_ocr_element_t to its subtype scanbotsdk_word_t. If the given instance is not an instance of the subtype, result will be null.
 * @ingroup c_ocr
 * @param object: Pointer to the instance of scanbotsdk_ocr_element_t to be casted
 * @param result: Pointer to a variable that will store the casted instance of scanbotsdk_word_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_ocr_element_as_scanbotsdk_word(scanbotsdk_ocr_element_t* object, scanbotsdk_word_t** result);
/**
 * @brief Casts the given instance of scanbotsdk_word_t to its parent type scanbotsdk_ocr_element_t.
 * @ingroup c_ocr
 * @param object: Pointer to the instance of scanbotsdk_ocr_element_t to be casted
 * @param result: Pointer to a variable that will store the casted instance of scanbotsdk_word_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_word_as_scanbotsdk_ocr_element(scanbotsdk_word_t* object, scanbotsdk_ocr_element_t** result);

/**
 * @brief Returns value of glyphs field of the given object. The returned pointers do NOT own the underlying object, caller must not free them.
 * @ingroup c_ocr
 * @details List of glyphs.
 * @param self: Pointer to the instance of scanbotsdk_word_t
 @param size: Size of the pre-allocated array. Must be equal to the size obtained by calling the corresponding _size function.
 * @param glyphs: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_word_get_glyphs(scanbotsdk_word_t* self, scanbotsdk_glyph_t** glyphs, size_t size);
/**
 * @brief Returns size of glyphs array.
 * @ingroup c_ocr
 * @param self: Pointer to the instance of scanbotsdk_word_t
 * @param size: Pointer to a variable that will store the size.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_word_get_glyphs_size(scanbotsdk_word_t* self, size_t* size);


/**
 * @brief scanbotsdk_line_t class
 * @details Represents a single line. A line is made up of words.
 * @ingroup c_ocr
*/
typedef struct scanbotsdk_line_t scanbotsdk_line_t;

/**
 * @brief Creates a new instance of scanbotsdk_line with given params and stores it in the location specified by the last argument.
 * @ingroup c_ocr
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param text: The recognized text.
 * The value must not be null.
 * @param confidence: Text confidence. Range is [0-1].
 * @param roi: Quad where the text was found in image coordinates. The order of the points is clockwise starting from the top left.
 * @param roi_size: Size of the array roi
 * @param words: List of words.
 * Entries of the array must not be null.
 * @param words_size: Size of the array words
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_line_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_line_create(
    const char* text,
    double confidence,
    scanbotsdk_pointf_t* roi,
    size_t roi_size,
    scanbotsdk_word_t** words,
    size_t words_size,
    scanbotsdk_line_t** result);


/**
 * @brief Frees the memory allocated for the instance of scanbotsdk_line_t. If null is passed, the function does nothing.
 * @ingroup c_ocr
 * @param object: Pointer to the instance of scanbotsdk_line_t to be freed
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_line_free(scanbotsdk_line_t* object);

/**
 * @brief Checks if the given instance of scanbotsdk_ocr_element_t is an instance of its subtype scanbotsdk_line_t.
 * @ingroup c_ocr
 * @param object: Pointer to the instance of scanbotsdk_ocr_element_t to be checked
 * @param result: Pointer to a variable that will store the result of the check
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
 */
SBSDK_API scanbotsdk_error_code_t scanbotsdk_ocr_element_is_scanbotsdk_line(scanbotsdk_ocr_element_t* object, bool* result);
/**
 * @brief Casts the given instance of scanbotsdk_ocr_element_t to its subtype scanbotsdk_line_t. If the given instance is not an instance of the subtype, result will be null.
 * @ingroup c_ocr
 * @param object: Pointer to the instance of scanbotsdk_ocr_element_t to be casted
 * @param result: Pointer to a variable that will store the casted instance of scanbotsdk_line_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_ocr_element_as_scanbotsdk_line(scanbotsdk_ocr_element_t* object, scanbotsdk_line_t** result);
/**
 * @brief Casts the given instance of scanbotsdk_line_t to its parent type scanbotsdk_ocr_element_t.
 * @ingroup c_ocr
 * @param object: Pointer to the instance of scanbotsdk_ocr_element_t to be casted
 * @param result: Pointer to a variable that will store the casted instance of scanbotsdk_line_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_line_as_scanbotsdk_ocr_element(scanbotsdk_line_t* object, scanbotsdk_ocr_element_t** result);

/**
 * @brief Returns value of words field of the given object. The returned pointers do NOT own the underlying object, caller must not free them.
 * @ingroup c_ocr
 * @details List of words.
 * @param self: Pointer to the instance of scanbotsdk_line_t
 @param size: Size of the pre-allocated array. Must be equal to the size obtained by calling the corresponding _size function.
 * @param words: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_line_get_words(scanbotsdk_line_t* self, scanbotsdk_word_t** words, size_t size);
/**
 * @brief Returns size of words array.
 * @ingroup c_ocr
 * @param self: Pointer to the instance of scanbotsdk_line_t
 * @param size: Pointer to a variable that will store the size.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_line_get_words_size(scanbotsdk_line_t* self, size_t* size);


/**
 * @brief scanbotsdk_block_t class
 * @details Represents a single block, e.g. a paragraph. A block is made up of lines.
 * @ingroup c_ocr
*/
typedef struct scanbotsdk_block_t scanbotsdk_block_t;

/**
 * @brief Creates a new instance of scanbotsdk_block with given params and stores it in the location specified by the last argument.
 * @ingroup c_ocr
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param text: The recognized text.
 * The value must not be null.
 * @param confidence: Text confidence. Range is [0-1].
 * @param roi: Quad where the text was found in image coordinates. The order of the points is clockwise starting from the top left.
 * @param roi_size: Size of the array roi
 * @param lines: List of lines.
 * Entries of the array must not be null.
 * @param lines_size: Size of the array lines
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_block_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_block_create(
    const char* text,
    double confidence,
    scanbotsdk_pointf_t* roi,
    size_t roi_size,
    scanbotsdk_line_t** lines,
    size_t lines_size,
    scanbotsdk_block_t** result);


/**
 * @brief Frees the memory allocated for the instance of scanbotsdk_block_t. If null is passed, the function does nothing.
 * @ingroup c_ocr
 * @param object: Pointer to the instance of scanbotsdk_block_t to be freed
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_block_free(scanbotsdk_block_t* object);

/**
 * @brief Checks if the given instance of scanbotsdk_ocr_element_t is an instance of its subtype scanbotsdk_block_t.
 * @ingroup c_ocr
 * @param object: Pointer to the instance of scanbotsdk_ocr_element_t to be checked
 * @param result: Pointer to a variable that will store the result of the check
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
 */
SBSDK_API scanbotsdk_error_code_t scanbotsdk_ocr_element_is_scanbotsdk_block(scanbotsdk_ocr_element_t* object, bool* result);
/**
 * @brief Casts the given instance of scanbotsdk_ocr_element_t to its subtype scanbotsdk_block_t. If the given instance is not an instance of the subtype, result will be null.
 * @ingroup c_ocr
 * @param object: Pointer to the instance of scanbotsdk_ocr_element_t to be casted
 * @param result: Pointer to a variable that will store the casted instance of scanbotsdk_block_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_ocr_element_as_scanbotsdk_block(scanbotsdk_ocr_element_t* object, scanbotsdk_block_t** result);
/**
 * @brief Casts the given instance of scanbotsdk_block_t to its parent type scanbotsdk_ocr_element_t.
 * @ingroup c_ocr
 * @param object: Pointer to the instance of scanbotsdk_ocr_element_t to be casted
 * @param result: Pointer to a variable that will store the casted instance of scanbotsdk_block_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_block_as_scanbotsdk_ocr_element(scanbotsdk_block_t* object, scanbotsdk_ocr_element_t** result);

/**
 * @brief Returns value of lines field of the given object. The returned pointers do NOT own the underlying object, caller must not free them.
 * @ingroup c_ocr
 * @details List of lines.
 * @param self: Pointer to the instance of scanbotsdk_block_t
 @param size: Size of the pre-allocated array. Must be equal to the size obtained by calling the corresponding _size function.
 * @param lines: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_block_get_lines(scanbotsdk_block_t* self, scanbotsdk_line_t** lines, size_t size);
/**
 * @brief Returns size of lines array.
 * @ingroup c_ocr
 * @param self: Pointer to the instance of scanbotsdk_block_t
 * @param size: Pointer to a variable that will store the size.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_block_get_lines_size(scanbotsdk_block_t* self, size_t* size);


/**
 * @brief scanbotsdk_page_t class
 * @details Represents result of performing OCR on an image. A page is made up of blocks.
 * @ingroup c_ocr
*/
typedef struct scanbotsdk_page_t scanbotsdk_page_t;

/**
 * @brief Creates a new instance of scanbotsdk_page with given params and stores it in the location specified by the last argument.
 * @ingroup c_ocr
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param text: The recognized text.
 * The value must not be null.
 * @param confidence: Text confidence. Range is [0-1].
 * @param roi: Quad where the text was found in image coordinates. The order of the points is clockwise starting from the top left.
 * @param roi_size: Size of the array roi
 * @param blocks: List of blocks.
 * Entries of the array must not be null.
 * @param blocks_size: Size of the array blocks
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_page_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_page_create(
    const char* text,
    double confidence,
    scanbotsdk_pointf_t* roi,
    size_t roi_size,
    scanbotsdk_block_t** blocks,
    size_t blocks_size,
    scanbotsdk_page_t** result);


/**
 * @brief Frees the memory allocated for the instance of scanbotsdk_page_t. If null is passed, the function does nothing.
 * @ingroup c_ocr
 * @param object: Pointer to the instance of scanbotsdk_page_t to be freed
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_page_free(scanbotsdk_page_t* object);

/**
 * @brief Checks if the given instance of scanbotsdk_ocr_element_t is an instance of its subtype scanbotsdk_page_t.
 * @ingroup c_ocr
 * @param object: Pointer to the instance of scanbotsdk_ocr_element_t to be checked
 * @param result: Pointer to a variable that will store the result of the check
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
 */
SBSDK_API scanbotsdk_error_code_t scanbotsdk_ocr_element_is_scanbotsdk_page(scanbotsdk_ocr_element_t* object, bool* result);
/**
 * @brief Casts the given instance of scanbotsdk_ocr_element_t to its subtype scanbotsdk_page_t. If the given instance is not an instance of the subtype, result will be null.
 * @ingroup c_ocr
 * @param object: Pointer to the instance of scanbotsdk_ocr_element_t to be casted
 * @param result: Pointer to a variable that will store the casted instance of scanbotsdk_page_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_ocr_element_as_scanbotsdk_page(scanbotsdk_ocr_element_t* object, scanbotsdk_page_t** result);
/**
 * @brief Casts the given instance of scanbotsdk_page_t to its parent type scanbotsdk_ocr_element_t.
 * @ingroup c_ocr
 * @param object: Pointer to the instance of scanbotsdk_ocr_element_t to be casted
 * @param result: Pointer to a variable that will store the casted instance of scanbotsdk_page_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_page_as_scanbotsdk_ocr_element(scanbotsdk_page_t* object, scanbotsdk_ocr_element_t** result);

/**
 * @brief Returns value of blocks field of the given object. The returned pointers do NOT own the underlying object, caller must not free them.
 * @ingroup c_ocr
 * @details List of blocks.
 * @param self: Pointer to the instance of scanbotsdk_page_t
 @param size: Size of the pre-allocated array. Must be equal to the size obtained by calling the corresponding _size function.
 * @param blocks: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_page_get_blocks(scanbotsdk_page_t* self, scanbotsdk_block_t** blocks, size_t size);
/**
 * @brief Returns size of blocks array.
 * @ingroup c_ocr
 * @param self: Pointer to the instance of scanbotsdk_page_t
 * @param size: Pointer to a variable that will store the size.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_page_get_blocks_size(scanbotsdk_page_t* self, size_t* size);


#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* SCANBOTSDK_OCRTYPES_H */