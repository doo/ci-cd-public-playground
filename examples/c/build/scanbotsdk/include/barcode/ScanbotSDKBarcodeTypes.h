// Auto-generated with ScanbotSDKCodegenV3. Modifications will be overwritten.
// Generated from SchemasV3/CoreSchemas/schemas/BarcodeTypes.yaml
/**
 * @file ScanbotSDKBarcodeTypes.h
 */

#pragma once
#ifndef SCANBOTSDK_BARCODETYPES_H
#define SCANBOTSDK_BARCODETYPES_H


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
 * @brief scanbotsdk_character_encoding_t enum
 * @details Enumerates character encodings.
 * @ingroup c_barcode
*/
typedef enum scanbotsdk_character_encoding_t {

    /**Unknown encoding.*/
    SCANBOTSDK_CHARACTER_ENCODING_UNKNOWN = 0,

    /**ASCII (ISO 646).*/
    SCANBOTSDK_CHARACTER_ENCODING_ASCII = 1,

    /**ISO/IEC 8859 Part 1, a.k.a. Latin-1 Western European.*/
    SCANBOTSDK_CHARACTER_ENCODING_ISO_8859_PART1 = 2,

    /**ISO/IEC 8859 Part 2, a.k.a. Latin-2 Central European.*/
    SCANBOTSDK_CHARACTER_ENCODING_ISO_8859_PART2 = 3,

    /**ISO/IEC 8859 Part 3, a.k.a. Latin-3 South European.*/
    SCANBOTSDK_CHARACTER_ENCODING_ISO_8859_PART3 = 4,

    /**ISO/IEC 8859 Part 4, a.k.a. Latin-4 North European.*/
    SCANBOTSDK_CHARACTER_ENCODING_ISO_8859_PART4 = 5,

    /**ISO/IEC 8859 Part 5, a.k.a. Latin/Cyrillic.*/
    SCANBOTSDK_CHARACTER_ENCODING_ISO_8859_PART5 = 6,

    /**ISO/IEC 8859 Part 6, a.k.a. Latin/Arabic.*/
    SCANBOTSDK_CHARACTER_ENCODING_ISO_8859_PART6 = 7,

    /**ISO/IEC 8859 Part 7, a.k.a. Latin/Greek.*/
    SCANBOTSDK_CHARACTER_ENCODING_ISO_8859_PART7 = 8,

    /**ISO/IEC 8859 Part 8, a.k.a. Latin/Hebrew.*/
    SCANBOTSDK_CHARACTER_ENCODING_ISO_8859_PART8 = 9,

    /**ISO/IEC 8859 Part 9, a.k.a. Latin-5 Turkish.*/
    SCANBOTSDK_CHARACTER_ENCODING_ISO_8859_PART9 = 10,

    /**ISO/IEC 8859 Part 10, a.k.a. Latin-6 Nordic.*/
    SCANBOTSDK_CHARACTER_ENCODING_ISO_8859_PART10 = 11,

    /**ISO/IEC 8859 Part 11, a.k.a. Latin/Thai.*/
    SCANBOTSDK_CHARACTER_ENCODING_ISO_8859_PART11 = 12,

    /**ISO/IEC 8859 Part 13, a.k.a. Latin-7 Baltic Rim.*/
    SCANBOTSDK_CHARACTER_ENCODING_ISO_8859_PART13 = 13,

    /**ISO/IEC 8859 Part 14, a.k.a. Latin-8 Celtic.*/
    SCANBOTSDK_CHARACTER_ENCODING_ISO_8859_PART14 = 14,

    /**ISO/IEC 8859 Part 15, a.k.a. Latin-9.*/
    SCANBOTSDK_CHARACTER_ENCODING_ISO_8859_PART15 = 15,

    /**ISO/IEC 8859 Part 16, a.k.a. Latin-10 South-Eastern European.*/
    SCANBOTSDK_CHARACTER_ENCODING_ISO_8859_PART16 = 16,

    /**CP437 (DOS Latin US).*/
    SCANBOTSDK_CHARACTER_ENCODING_CP_437 = 17,

    /**Windows-1250 (Eastern European).*/
    SCANBOTSDK_CHARACTER_ENCODING_CP_1250 = 18,

    /**Windows-1251 (Cyrillic).*/
    SCANBOTSDK_CHARACTER_ENCODING_CP_1251 = 19,

    /**Windows-1252 (Western European).*/
    SCANBOTSDK_CHARACTER_ENCODING_CP_1252 = 20,

    /**Windows-1256 (Arabic).*/
    SCANBOTSDK_CHARACTER_ENCODING_CP_1256 = 21,

    /**Shift JIS (Japanese).*/
    SCANBOTSDK_CHARACTER_ENCODING_SHIFT_JIS = 22,

    /**Big5 (Traditional Chinese).*/
    SCANBOTSDK_CHARACTER_ENCODING_BIG_5 = 23,

    /**GB2312 (Simplified Chinese).*/
    SCANBOTSDK_CHARACTER_ENCODING_GB_2312 = 24,

    /**GB18030 (Simplified Chinese).*/
    SCANBOTSDK_CHARACTER_ENCODING_GB_18030 = 25,

    /**EUC-JP (Japanese).*/
    SCANBOTSDK_CHARACTER_ENCODING_EUC_JP = 26,

    /**EUC-KR (Korean).*/
    SCANBOTSDK_CHARACTER_ENCODING_EUC_KR = 27,

    /**UTF16BE (UTF-16 Big Endian), a.k.a. UnicodeBig.*/
    SCANBOTSDK_CHARACTER_ENCODING_UTF_16_BE = 28,

    /**UTF8 (UTF-8).*/
    SCANBOTSDK_CHARACTER_ENCODING_UTF_8 = 29,

    /**UTF16LE (UTF-16 Little Endian).*/
    SCANBOTSDK_CHARACTER_ENCODING_UTF_16_LE = 30,

    /**UTF32BE (UTF-32 Big Endian).*/
    SCANBOTSDK_CHARACTER_ENCODING_UTF_32_BE = 31,

    /**UTF32LE (UTF-32 Little Endian).*/
    SCANBOTSDK_CHARACTER_ENCODING_UTF_32_LE = 32,

    /**Binary data.*/
    SCANBOTSDK_CHARACTER_ENCODING_BINARY = 33,

} scanbotsdk_character_encoding_t;

/**
 * @brief Returns the string representation of the given scanbotsdk_character_encoding_t value.
 * @ingroup c_barcode
 * @details The returned string doesn't need to be freed.
 * @param value: The value to be converted to string.
 * @param result: Pointer to a variable that will store the string representation of the value.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_character_encoding_t_to_string(scanbotsdk_character_encoding_t value, const char** result);

/**
 * @brief scanbotsdk_range_encoding_t class
 * @details A character encoding for a given range of bytes.
 * @ingroup c_barcode
*/
typedef struct scanbotsdk_range_encoding_t scanbotsdk_range_encoding_t;

/**
 * @brief Creates a new instance of scanbotsdk_range_encoding with given params and stores it in the location specified by the last argument.
 * @ingroup c_barcode
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param start: Start index of the range.
 * @param end: End index of the range (inclusive).
 * @param encoding: Character encoding for the given range.
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_range_encoding_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_range_encoding_create(
    int start,
    int end,
    scanbotsdk_character_encoding_t encoding,
    scanbotsdk_range_encoding_t** result);


/**
 * @brief Frees the memory allocated for the instance of scanbotsdk_range_encoding_t. If null is passed, the function does nothing.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_range_encoding_t to be freed
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_range_encoding_free(scanbotsdk_range_encoding_t* object);

/**
 * @brief Returns value of start field of the given object.
 * @ingroup c_barcode
 * @details Start index of the range.
 * @param self: Pointer to the instance of scanbotsdk_range_encoding_t
 * @param start: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_range_encoding_get_start(scanbotsdk_range_encoding_t* self, int* start);

/**
 * @brief Returns value of end field of the given object.
 * @ingroup c_barcode
 * @details End index of the range (inclusive).
 * @param self: Pointer to the instance of scanbotsdk_range_encoding_t
 * @param end: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_range_encoding_get_end(scanbotsdk_range_encoding_t* self, int* end);

/**
 * @brief Returns value of encoding field of the given object.
 * @ingroup c_barcode
 * @details Character encoding for the given range.
 * @param self: Pointer to the instance of scanbotsdk_range_encoding_t
 * @param encoding: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_range_encoding_get_encoding(scanbotsdk_range_encoding_t* self, scanbotsdk_character_encoding_t* encoding);


/**
 * @brief scanbotsdk_structured_append_info_t class
 * @details The structured append mode can be used to split a message across multiple barcodes.
 * @ingroup c_barcode
*/
typedef struct scanbotsdk_structured_append_info_t scanbotsdk_structured_append_info_t;

/**
 * @brief Creates a new instance of scanbotsdk_structured_append_info with given params and stores it in the location specified by the last argument.
 * @ingroup c_barcode
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param count: The number of barcodes in the structured append set.
 * @param index: The index of the barcode in the structured append set.
 * @param id: The ID of the structured append set.
 * The value must not be null.
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_structured_append_info_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_structured_append_info_create(
    int count,
    int index,
    const char* id,
    scanbotsdk_structured_append_info_t** result);


/**
 * @brief Frees the memory allocated for the instance of scanbotsdk_structured_append_info_t. If null is passed, the function does nothing.
 * @ingroup c_barcode
 * @param object: Pointer to the instance of scanbotsdk_structured_append_info_t to be freed
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_structured_append_info_free(scanbotsdk_structured_append_info_t* object);

/**
 * @brief Returns value of count field of the given object.
 * @ingroup c_barcode
 * @details The number of barcodes in the structured append set.
 * @param self: Pointer to the instance of scanbotsdk_structured_append_info_t
 * @param count: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_structured_append_info_get_count(scanbotsdk_structured_append_info_t* self, int* count);

/**
 * @brief Returns value of index field of the given object.
 * @ingroup c_barcode
 * @details The index of the barcode in the structured append set.
 * @param self: Pointer to the instance of scanbotsdk_structured_append_info_t
 * @param index: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_structured_append_info_get_index(scanbotsdk_structured_append_info_t* self, int* index);

/**
 * @brief Returns value of id field of the given object. The returned pointers do NOT own the underlying object, caller must not free them.
 * @ingroup c_barcode
 * @details The ID of the structured append set.
 * @param self: Pointer to the instance of scanbotsdk_structured_append_info_t
 * @param id: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_structured_append_info_get_id(scanbotsdk_structured_append_info_t* self, const char** id);


/**
 * @brief scanbotsdk_barcode_format_t enum
 * @details Enumerates barcode formats.
 * @ingroup c_barcode
*/
typedef enum scanbotsdk_barcode_format_t {

    /**Used as a return value if no valid barcode has been detected.*/
    SCANBOTSDK_BARCODE_FORMAT_NONE = 0,

    /**Aztec (2D).*/
    SCANBOTSDK_BARCODE_FORMAT_AZTEC = 1,

    /**CODABAR (1D).*/
    SCANBOTSDK_BARCODE_FORMAT_CODABAR = 2,

    /**Code 39 (1D).*/
    SCANBOTSDK_BARCODE_FORMAT_CODE_39 = 3,

    /**Code 93 (1D).*/
    SCANBOTSDK_BARCODE_FORMAT_CODE_93 = 4,

    /**Code 128 (1D).*/
    SCANBOTSDK_BARCODE_FORMAT_CODE_128 = 5,

    /**Data Matrix (2D).*/
    SCANBOTSDK_BARCODE_FORMAT_DATA_MATRIX = 6,

    /**EAN-8 (1D).*/
    SCANBOTSDK_BARCODE_FORMAT_EAN_8 = 7,

    /**EAN-13 (1D).*/
    SCANBOTSDK_BARCODE_FORMAT_EAN_13 = 8,

    /**ITF (Interleaved Two of Five) (1D).*/
    SCANBOTSDK_BARCODE_FORMAT_ITF = 9,

    /**MaxiCode (2D).*/
    SCANBOTSDK_BARCODE_FORMAT_MAXI_CODE = 10,

    /**PDF417 (2D).*/
    SCANBOTSDK_BARCODE_FORMAT_PDF_417 = 11,

    /**QR Code (2D).*/
    SCANBOTSDK_BARCODE_FORMAT_QR_CODE = 12,

    /**GS1 DataBar-14 (formerly RSS-14) (1D).*/
    SCANBOTSDK_BARCODE_FORMAT_DATABAR = 13,

    /**GS1 DataBar Expanded (formerly RSS Expanded) (1D).*/
    SCANBOTSDK_BARCODE_FORMAT_DATABAR_EXPANDED = 14,

    /**UPC-A (1D).*/
    SCANBOTSDK_BARCODE_FORMAT_UPC_A = 15,

    /**UPC-E (1D).*/
    SCANBOTSDK_BARCODE_FORMAT_UPC_E = 16,

    /**MSI PLESSEY.*/
    SCANBOTSDK_BARCODE_FORMAT_MSI_PLESSEY = 17,

    /**IATA 2 of 5 (1D).*/
    SCANBOTSDK_BARCODE_FORMAT_IATA_2_OF_5 = 18,

    /**INDUSTRIAL 2 of 5 (1D).*/
    SCANBOTSDK_BARCODE_FORMAT_INDUSTRIAL_2_OF_5 = 19,

    /**CODE 25 (1D).*/
    SCANBOTSDK_BARCODE_FORMAT_CODE_25 = 20,

    /**Micro QR Code (2D).*/
    SCANBOTSDK_BARCODE_FORMAT_MICRO_QR_CODE = 21,

    /**USPS Intelligent Mail, a.k.a. USPS OneCode, USPS-STD-11.*/
    SCANBOTSDK_BARCODE_FORMAT_USPS_INTELLIGENT_MAIL = 22,

    /**Royal Mail Four-State Customer Code, a.k.a. RM4SCC, CBC, BPO 4 State Code.*/
    SCANBOTSDK_BARCODE_FORMAT_ROYAL_MAIL = 23,

    /**Japan Post Four-State Barcode.*/
    SCANBOTSDK_BARCODE_FORMAT_JAPAN_POST = 24,

    /**Royal TNT Post Four-State Barcode, a.k.a. KIX, Klant IndeX.*/
    SCANBOTSDK_BARCODE_FORMAT_ROYAL_TNT_POST = 25,

    /**Australia Post Four-State Customer Code.*/
    SCANBOTSDK_BARCODE_FORMAT_AUSTRALIA_POST = 26,

    /**GS1 DataBar Limited.*/
    SCANBOTSDK_BARCODE_FORMAT_DATABAR_LIMITED = 27,

    /**Micro PDF417 (2D).*/
    SCANBOTSDK_BARCODE_FORMAT_MICRO_PDF_417 = 28,

    /**GS1 COMPOSITE (combined linear and 2D).*/
    SCANBOTSDK_BARCODE_FORMAT_GS1_COMPOSITE = 29,

    /**Rectangular Micro QR Code (2D).*/
    SCANBOTSDK_BARCODE_FORMAT_RMQR_CODE = 30,

    /**Code 11 (1D).*/
    SCANBOTSDK_BARCODE_FORMAT_CODE_11 = 31,

    /**Code 32 (Italian Pharmacode) (1D).*/
    SCANBOTSDK_BARCODE_FORMAT_CODE_32 = 32,

    /**Pharmacode, a.k.a. One-Track Pharmacode, Pharmaceutical Binary Code (1D).*/
    SCANBOTSDK_BARCODE_FORMAT_PHARMA_CODE = 33,

    /**Two-Track Pharmacode, a.k.a. Pharmaceutical Binary Code.*/
    SCANBOTSDK_BARCODE_FORMAT_PHARMA_CODE_TWO_TRACK = 34,

    /**PZN7, legacy PZN (Pharmazentralnummer), invalid since 01.01.2020 (1D).*/
    SCANBOTSDK_BARCODE_FORMAT_PZN_7 = 35,

    /**PZN8, a.k.a. PZN, Pharmazentralnummer, German Pharmaceutical Central Number (1D).*/
    SCANBOTSDK_BARCODE_FORMAT_PZN_8 = 36,

} scanbotsdk_barcode_format_t;

/**
 * @brief Returns the string representation of the given scanbotsdk_barcode_format_t value.
 * @ingroup c_barcode
 * @details The returned string doesn't need to be freed.
 * @param value: The value to be converted to string.
 * @param result: Pointer to a variable that will store the string representation of the value.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_barcode_format_t_to_string(scanbotsdk_barcode_format_t value, const char** result);


/**
 * @brief scanbotsdk_gs_1_handling_t enum
 * @details GS1 message handling options.
 * The GS1 standard defines a key-value format for business-centric data that can be encoded into many 1D and 2D barcode types.
 * https://ref.gs1.org/standards/genspecs/
 * 
 * GS1 messages have two representations or formats: a human-readable format and a
 * machine-readable format. The human-readable format uses parentheses to wrap the keys in each
 * pair. For example, the string "(01)012345678901(37)02(3922)00278" contains three AI keys:
 * 01, 37, and 3922. The corresponding values are 012345678901, 02, and 00278.
 * 
 * The machine-readable format uses the special ASCII \x1D character to terminate key-value
 * pairs in the string in cases where the given key implies that the value is variable-length.
 * The equivalent machine-readable string for the above example is
 * "010123456789013702\x1D392200278".
 * In the above example, the 01 AI key is fixed-length, so the \x1D character is not necessary.
 * The 37 AI keys is variable-length, so the \x1D character is necessary after the value in the
 * pair. The 3922 AI key is also variable-length, but it is the last pair in the message, so
 * the \x1D character is not necessary at the end.
 * 
 * The character \x1D is UNPRINTABLE - this means that if you try to print or otherwise
 * visualize a GS1 message containing the \x1D character, you may see a number of different
 * results, depending on how the system handles unprintable characters. You may see a question
 * mark, a box, an escape sequence, a space or nothing at all.
 * @ingroup c_barcode
*/
typedef enum scanbotsdk_gs_1_handling_t {

    /**This is the default. GS1 messages are converted to the machine-readable format per
    the GS1 spec (the special FNC1 character is converted to ASCII \x1D).
    The implied 01 AI key is prepended to DataBar results.
    No validation is performed.*/
    SCANBOTSDK_GS_1_HANDLING_PARSE = 0,

    /**Same as PARSE. Additionally, messages containing unknown AI keys, or containing values
    that don't fulfill the length, character set or regex requirements for known keys, are rejected.*/
    SCANBOTSDK_GS_1_HANDLING_VALIDATE_STRUCTURE = 1,

    /**Same as VALIDATE_STRUCTURE. Additionally, GS1 strings are converted to the human-readable format,
    instead (with parentheses used to wrap AI keys, e.g. "(01)123456789"). The \x1D character is
    never used in this representation.*/
    SCANBOTSDK_GS_1_HANDLING_DECODE_STRUCTURE = 2,

    /**Includes all validations from VALIDATE_STRUCTURE. Additionally, GS1 messages which have missing or incompatible combinations of AI keys are rejected. Additionally, values are checked against a list of known linting rules, e.g. checksums are calculated and verified, dates are checked for validity, etc. Results that fail any of the linter rules are rejected. The complete set of linter rules from the GS1 Syntax Dictionary are implemented.*/
    SCANBOTSDK_GS_1_HANDLING_VALIDATE_FULL = 3,

    /**Combines the validations of VALIDATE_FULL and the human-readable output format of DECODE_STRUCTURE.*/
    SCANBOTSDK_GS_1_HANDLING_DECODE_FULL = 4,

} scanbotsdk_gs_1_handling_t;

/**
 * @brief Returns the string representation of the given scanbotsdk_gs_1_handling_t value.
 * @ingroup c_barcode
 * @details The returned string doesn't need to be freed.
 * @param value: The value to be converted to string.
 * @param result: Pointer to a variable that will store the string representation of the value.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_gs_1_handling_t_to_string(scanbotsdk_gs_1_handling_t value, const char** result);

/**
 * @brief scanbotsdk_upc_ean_extension_behavior_t enum
 * @details Behavior when scanning UPC/EAN barcodes with EAN-2 or EAN-5 extensions.
 * @ingroup c_barcode
*/
typedef enum scanbotsdk_upc_ean_extension_behavior_t {

    /**Only barcodes with a 2-digit extension are accepted.*/
    SCANBOTSDK_UPC_EAN_EXTENSION_BEHAVIOR_REQUIRE_2 = 0,

    /**Only barcodes with a 5-digit extension are accepted.*/
    SCANBOTSDK_UPC_EAN_EXTENSION_BEHAVIOR_REQUIRE_5 = 1,

    /**Only barcodes with either a 2-digit or a 5-digit extension are accepted.*/
    SCANBOTSDK_UPC_EAN_EXTENSION_BEHAVIOR_REQUIRE_ANY = 2,

    /**Always ignore the extension.*/
    SCANBOTSDK_UPC_EAN_EXTENSION_BEHAVIOR_IGNORE = 3,

    /**Return detected 2-digit extension if present, but do not require it. Ignore the 5-digit extension.*/
    SCANBOTSDK_UPC_EAN_EXTENSION_BEHAVIOR_ALLOW_2 = 4,

    /**Return detected 5-digit extension if present, but do not require it. Ignore the 2-digit extension.*/
    SCANBOTSDK_UPC_EAN_EXTENSION_BEHAVIOR_ALLOW_5 = 5,

    /**Return any detected extension if present, but do not require it.*/
    SCANBOTSDK_UPC_EAN_EXTENSION_BEHAVIOR_ALLOW_ANY = 6,

} scanbotsdk_upc_ean_extension_behavior_t;

/**
 * @brief Returns the string representation of the given scanbotsdk_upc_ean_extension_behavior_t value.
 * @ingroup c_barcode
 * @details The returned string doesn't need to be freed.
 * @param value: The value to be converted to string.
 * @param result: Pointer to a variable that will store the string representation of the value.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_upc_ean_extension_behavior_t_to_string(scanbotsdk_upc_ean_extension_behavior_t value, const char** result);

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* SCANBOTSDK_BARCODETYPES_H */