// Auto-generated with ScanbotSDKCodegenV3. Modifications will be overwritten.
// Generated from SchemasV3/CoreSchemas/schemas/DocumentQualityAnalyzerTypes.yaml
/**
 * @file ScanbotSDKDocumentQualityAnalyzerTypes.h
 */

#pragma once
#ifndef SCANBOTSDK_DOCUMENTQUALITYANALYZERTYPES_H
#define SCANBOTSDK_DOCUMENTQUALITYANALYZERTYPES_H


#include <ScanbotSDKImage.h>
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
 * @brief scanbotsdk_document_quality_t enum
 * @details Result of document quality analysis.
 * @ingroup c_document_quality_analyzer
*/
typedef enum scanbotsdk_document_quality_t {

    /**Very poor quality.*/
    SCANBOTSDK_DOCUMENT_QUALITY_VERY_POOR = 0,

    /**Poor quality.*/
    SCANBOTSDK_DOCUMENT_QUALITY_POOR = 1,

    /**Reasonable quality.*/
    SCANBOTSDK_DOCUMENT_QUALITY_REASONABLE = 2,

    /**Good quality.*/
    SCANBOTSDK_DOCUMENT_QUALITY_GOOD = 3,

    /**Excellent quality.*/
    SCANBOTSDK_DOCUMENT_QUALITY_EXCELLENT = 4,

} scanbotsdk_document_quality_t;

/**
 * @brief Returns the string representation of the given scanbotsdk_document_quality_t value.
 * @ingroup c_document_quality_analyzer
 * @details The returned string doesn't need to be freed.
 * @param value: The value to be converted to string.
 * @param result: Pointer to a variable that will store the string representation of the value.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_quality_t_to_string(scanbotsdk_document_quality_t value, const char** result);

/**
 * @brief scanbotsdk_document_quality_threshold_t class
 * @details Point in the quality-number of symbols space to separate quality levels.
 * @ingroup c_document_quality_analyzer
*/
typedef struct scanbotsdk_document_quality_threshold_t scanbotsdk_document_quality_threshold_t;

/**
 * @brief Creates a new instance of scanbotsdk_document_quality_threshold with given params and stores it in the location specified by the last argument.
 * @ingroup c_document_quality_analyzer
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param symbol_quality: Symbol quality.
 * @param symbol_ratio: Symbol ratio.
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_document_quality_threshold_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_quality_threshold_create(
    double symbol_quality,
    double symbol_ratio,
    scanbotsdk_document_quality_threshold_t** result);


/**
 * @brief Frees the memory allocated for the instance of scanbotsdk_document_quality_threshold_t. If null is passed, the function does nothing.
 * @ingroup c_document_quality_analyzer
 * @param object: Pointer to the instance of scanbotsdk_document_quality_threshold_t to be freed
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_quality_threshold_free(scanbotsdk_document_quality_threshold_t* object);

/**
 * @brief Returns value of symbol_quality field of the given object.
 * @ingroup c_document_quality_analyzer
 * @details Symbol quality.
 * @param self: Pointer to the instance of scanbotsdk_document_quality_threshold_t
 * @param symbol_quality: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_quality_threshold_get_symbol_quality(scanbotsdk_document_quality_threshold_t* self, double* symbol_quality);

/**
 * @brief Returns value of symbol_ratio field of the given object.
 * @ingroup c_document_quality_analyzer
 * @details Symbol ratio.
 * @param self: Pointer to the instance of scanbotsdk_document_quality_threshold_t
 * @param symbol_ratio: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_quality_threshold_get_symbol_ratio(scanbotsdk_document_quality_threshold_t* self, double* symbol_ratio);


/**
 * @brief scanbotsdk_document_quality_analyzer_configuration_t class
 * @details Document Quality Analyzer configuration.
 * @ingroup c_document_quality_analyzer
*/
typedef struct scanbotsdk_document_quality_analyzer_configuration_t scanbotsdk_document_quality_analyzer_configuration_t;

/**
 * @brief Creates a new instance of scanbotsdk_document_quality_analyzer_configuration with given params and stores it in the location specified by the last argument.
 * @ingroup c_document_quality_analyzer
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param quality_thresholds: Quality thresholds to separate quality levels.
 * Entries of the array must not be null.
 * @param quality_thresholds_size: Size of the array quality_thresholds
 * @param quality_indices: quality levels.
 * @param quality_indices_size: Size of the array quality_indices
 * @param detect_orientation: Enable orientation detection. Document orientation will be returned in `DocumentQualityAnalyzerResult.orientation`.
 * 
 * Default is false
 * @param inspect_small_text: Inspect small text (typically less than 12 pixels height) when analyzing the document quality.
 * If true, processing will be slower, but when the quality issue with a document is the low resolution of the text,
 * then the issue will be caught.
 * 
 * Default is false
 * @param max_image_size: Maximum image size in pixels, if image is bigger, it will be resized.
 * 
 * Default is 2000
 * @param min_estimated_number_of_symbols_for_document: If estimated number of symbols is less than this value, return that document is not found.
 * 
 * Default is 20
 * @param min_processed_fraction: At least this fraction of the image will be processed, range is from 0 to 1.
 * Decreasing this value below 1.0 can lead to faster processing but may result in
 * less accurate prediction, as only a subset of the image tiles will be analyzed.
 * 
 * Default is 1
 * @param max_processed_fraction: At most this fraction of the image will be processed, range is from 0 to 1.
 * Decreasing this value below 1.0 can lead to faster processing but may result in
 * less accurate prediction, as only a subset of the image tiles will be analyzed.
 * 
 * Default is 1
 * @param min_number_of_required_symbols: If this number of symbols is found and minProcessedFraction of the image is processed, the processing stops.
 * 
 * Default is 100
 * @param min_required_orientation_confidence: If detectOrientation is True, minNumberOfRequiredSymbols is found, and orientationConfidence is bigger than this threshold, the processing stops.
 * If the maxProcessedFraction part of the image is processed and orientationConfidence is lower than the threshold, the returned orientation will be 0.
 * 
 * Default is 0
 * @param tile_size: Image will be processed in tiles of this size; will be ignored if image is small.
 * 
 * Default is 300
 * @param return_quality_heatmap: If true, will return the quality heatmap as a part of the result.
 * In this case, the entire image will be processed and the minProcessedFraction will be ignored.
 * Useful for debugging situations where the returned quality doesn't appear to match the perceived quality.
 * 
 * Default is false
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_document_quality_analyzer_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_quality_analyzer_configuration_create(
    scanbotsdk_document_quality_threshold_t** quality_thresholds,
    size_t quality_thresholds_size,
    scanbotsdk_document_quality_t* quality_indices,
    size_t quality_indices_size,
    bool detect_orientation,
    bool inspect_small_text,
    int max_image_size,
    int min_estimated_number_of_symbols_for_document,
    double min_processed_fraction,
    double max_processed_fraction,
    int min_number_of_required_symbols,
    double min_required_orientation_confidence,
    int tile_size,
    bool return_quality_heatmap,
    scanbotsdk_document_quality_analyzer_configuration_t** result);

/**
 * @brief Creates a new instance of scanbotsdk_document_quality_analyzer_configuration_t with given required params and stores it in the location specified by the last argument.
 * @ingroup c_document_quality_analyzer
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_document_quality_analyzer_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_quality_analyzer_configuration_create_with_defaults(
    scanbotsdk_document_quality_analyzer_configuration_t** result);


/**
 * @brief Frees the memory allocated for the instance of scanbotsdk_document_quality_analyzer_configuration_t. If null is passed, the function does nothing.
 * @ingroup c_document_quality_analyzer
 * @param object: Pointer to the instance of scanbotsdk_document_quality_analyzer_configuration_t to be freed
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_quality_analyzer_configuration_free(scanbotsdk_document_quality_analyzer_configuration_t* object);

/**
 * @brief Returns value of quality_thresholds field of the given object. The returned pointers do NOT own the underlying object, caller must not free them.
 * @ingroup c_document_quality_analyzer
 * @details Quality thresholds to separate quality levels.
 * @param self: Pointer to the instance of scanbotsdk_document_quality_analyzer_configuration_t
 @param size: Size of the pre-allocated array. Must be equal to the size obtained by calling the corresponding _size function.
 * @param quality_thresholds: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_quality_analyzer_configuration_get_quality_thresholds(scanbotsdk_document_quality_analyzer_configuration_t* self, scanbotsdk_document_quality_threshold_t** quality_thresholds, size_t size);
/**
 * @brief Returns size of quality_thresholds array.
 * @ingroup c_document_quality_analyzer
 * @param self: Pointer to the instance of scanbotsdk_document_quality_analyzer_configuration_t
 * @param size: Pointer to a variable that will store the size.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_quality_analyzer_configuration_get_quality_thresholds_size(scanbotsdk_document_quality_analyzer_configuration_t* self, size_t* size);
/**
 * @brief Sets value of quality_thresholds field of the given object.
 * @ingroup c_document_quality_analyzer
 * @details Quality thresholds to separate quality levels.
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_document_quality_analyzer_configuration_t, the field of which will be set
 * @param quality_thresholds: The value to be set.
 * @param quality_thresholds_size: Size of the array.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_quality_analyzer_configuration_set_quality_thresholds(scanbotsdk_document_quality_analyzer_configuration_t* self, scanbotsdk_document_quality_threshold_t** quality_thresholds, size_t quality_thresholds_size);

/**
 * @brief Returns value of quality_indices field of the given object. The returned value is direct view into memory, no pre-allocations needed.
 * @ingroup c_document_quality_analyzer
 * @details quality levels.
 * @param self: Pointer to the instance of scanbotsdk_document_quality_analyzer_configuration_t
 * @param quality_indices: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_quality_analyzer_configuration_get_quality_indices(scanbotsdk_document_quality_analyzer_configuration_t* self, scanbotsdk_document_quality_t** quality_indices);
/**
 * @brief Returns size of quality_indices array.
 * @ingroup c_document_quality_analyzer
 * @param self: Pointer to the instance of scanbotsdk_document_quality_analyzer_configuration_t
 * @param size: Pointer to a variable that will store the size.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_quality_analyzer_configuration_get_quality_indices_size(scanbotsdk_document_quality_analyzer_configuration_t* self, size_t* size);
/**
 * @brief Sets value of quality_indices field of the given object.
 * @ingroup c_document_quality_analyzer
 * @details quality levels.
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_document_quality_analyzer_configuration_t, the field of which will be set
 * @param quality_indices: The value to be set.
 * @param quality_indices_size: Size of the array.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_quality_analyzer_configuration_set_quality_indices(scanbotsdk_document_quality_analyzer_configuration_t* self, scanbotsdk_document_quality_t* quality_indices, size_t quality_indices_size);

/**
 * @brief Returns value of detect_orientation field of the given object.
 * @ingroup c_document_quality_analyzer
 * @details Enable orientation detection. Document orientation will be returned in `DocumentQualityAnalyzerResult.orientation`.
 * 
 * Default is false
 * @param self: Pointer to the instance of scanbotsdk_document_quality_analyzer_configuration_t
 * @param detect_orientation: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_quality_analyzer_configuration_get_detect_orientation(scanbotsdk_document_quality_analyzer_configuration_t* self, bool* detect_orientation);
/**
 * @brief Sets value of detect_orientation field of the given object.
 * @ingroup c_document_quality_analyzer
 * @details Enable orientation detection. Document orientation will be returned in `DocumentQualityAnalyzerResult.orientation`.
 * 
 * Default is false
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_document_quality_analyzer_configuration_t, the field of which will be set
 * @param detect_orientation: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_quality_analyzer_configuration_set_detect_orientation(scanbotsdk_document_quality_analyzer_configuration_t* self, bool detect_orientation);

/**
 * @brief Returns value of inspect_small_text field of the given object.
 * @ingroup c_document_quality_analyzer
 * @details Inspect small text (typically less than 12 pixels height) when analyzing the document quality.
 * If true, processing will be slower, but when the quality issue with a document is the low resolution of the text,
 * then the issue will be caught.
 * 
 * Default is false
 * @param self: Pointer to the instance of scanbotsdk_document_quality_analyzer_configuration_t
 * @param inspect_small_text: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_quality_analyzer_configuration_get_inspect_small_text(scanbotsdk_document_quality_analyzer_configuration_t* self, bool* inspect_small_text);
/**
 * @brief Sets value of inspect_small_text field of the given object.
 * @ingroup c_document_quality_analyzer
 * @details Inspect small text (typically less than 12 pixels height) when analyzing the document quality.
 * If true, processing will be slower, but when the quality issue with a document is the low resolution of the text,
 * then the issue will be caught.
 * 
 * Default is false
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_document_quality_analyzer_configuration_t, the field of which will be set
 * @param inspect_small_text: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_quality_analyzer_configuration_set_inspect_small_text(scanbotsdk_document_quality_analyzer_configuration_t* self, bool inspect_small_text);

/**
 * @brief Returns value of max_image_size field of the given object.
 * @ingroup c_document_quality_analyzer
 * @details Maximum image size in pixels, if image is bigger, it will be resized.
 * 
 * Default is 2000
 * @param self: Pointer to the instance of scanbotsdk_document_quality_analyzer_configuration_t
 * @param max_image_size: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_quality_analyzer_configuration_get_max_image_size(scanbotsdk_document_quality_analyzer_configuration_t* self, int* max_image_size);
/**
 * @brief Sets value of max_image_size field of the given object.
 * @ingroup c_document_quality_analyzer
 * @details Maximum image size in pixels, if image is bigger, it will be resized.
 * 
 * Default is 2000
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_document_quality_analyzer_configuration_t, the field of which will be set
 * @param max_image_size: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_quality_analyzer_configuration_set_max_image_size(scanbotsdk_document_quality_analyzer_configuration_t* self, int max_image_size);

/**
 * @brief Returns value of min_estimated_number_of_symbols_for_document field of the given object.
 * @ingroup c_document_quality_analyzer
 * @details If estimated number of symbols is less than this value, return that document is not found.
 * 
 * Default is 20
 * @param self: Pointer to the instance of scanbotsdk_document_quality_analyzer_configuration_t
 * @param min_estimated_number_of_symbols_for_document: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_quality_analyzer_configuration_get_min_estimated_number_of_symbols_for_document(scanbotsdk_document_quality_analyzer_configuration_t* self, int* min_estimated_number_of_symbols_for_document);
/**
 * @brief Sets value of min_estimated_number_of_symbols_for_document field of the given object.
 * @ingroup c_document_quality_analyzer
 * @details If estimated number of symbols is less than this value, return that document is not found.
 * 
 * Default is 20
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_document_quality_analyzer_configuration_t, the field of which will be set
 * @param min_estimated_number_of_symbols_for_document: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_quality_analyzer_configuration_set_min_estimated_number_of_symbols_for_document(scanbotsdk_document_quality_analyzer_configuration_t* self, int min_estimated_number_of_symbols_for_document);

/**
 * @brief Returns value of min_processed_fraction field of the given object.
 * @ingroup c_document_quality_analyzer
 * @details At least this fraction of the image will be processed, range is from 0 to 1.
 * Decreasing this value below 1.0 can lead to faster processing but may result in
 * less accurate prediction, as only a subset of the image tiles will be analyzed.
 * 
 * Default is 1
 * @param self: Pointer to the instance of scanbotsdk_document_quality_analyzer_configuration_t
 * @param min_processed_fraction: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_quality_analyzer_configuration_get_min_processed_fraction(scanbotsdk_document_quality_analyzer_configuration_t* self, double* min_processed_fraction);
/**
 * @brief Sets value of min_processed_fraction field of the given object.
 * @ingroup c_document_quality_analyzer
 * @details At least this fraction of the image will be processed, range is from 0 to 1.
 * Decreasing this value below 1.0 can lead to faster processing but may result in
 * less accurate prediction, as only a subset of the image tiles will be analyzed.
 * 
 * Default is 1
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_document_quality_analyzer_configuration_t, the field of which will be set
 * @param min_processed_fraction: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_quality_analyzer_configuration_set_min_processed_fraction(scanbotsdk_document_quality_analyzer_configuration_t* self, double min_processed_fraction);

/**
 * @brief Returns value of max_processed_fraction field of the given object.
 * @ingroup c_document_quality_analyzer
 * @details At most this fraction of the image will be processed, range is from 0 to 1.
 * Decreasing this value below 1.0 can lead to faster processing but may result in
 * less accurate prediction, as only a subset of the image tiles will be analyzed.
 * 
 * Default is 1
 * @param self: Pointer to the instance of scanbotsdk_document_quality_analyzer_configuration_t
 * @param max_processed_fraction: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_quality_analyzer_configuration_get_max_processed_fraction(scanbotsdk_document_quality_analyzer_configuration_t* self, double* max_processed_fraction);
/**
 * @brief Sets value of max_processed_fraction field of the given object.
 * @ingroup c_document_quality_analyzer
 * @details At most this fraction of the image will be processed, range is from 0 to 1.
 * Decreasing this value below 1.0 can lead to faster processing but may result in
 * less accurate prediction, as only a subset of the image tiles will be analyzed.
 * 
 * Default is 1
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_document_quality_analyzer_configuration_t, the field of which will be set
 * @param max_processed_fraction: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_quality_analyzer_configuration_set_max_processed_fraction(scanbotsdk_document_quality_analyzer_configuration_t* self, double max_processed_fraction);

/**
 * @brief Returns value of min_number_of_required_symbols field of the given object.
 * @ingroup c_document_quality_analyzer
 * @details If this number of symbols is found and minProcessedFraction of the image is processed, the processing stops.
 * 
 * Default is 100
 * @param self: Pointer to the instance of scanbotsdk_document_quality_analyzer_configuration_t
 * @param min_number_of_required_symbols: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_quality_analyzer_configuration_get_min_number_of_required_symbols(scanbotsdk_document_quality_analyzer_configuration_t* self, int* min_number_of_required_symbols);
/**
 * @brief Sets value of min_number_of_required_symbols field of the given object.
 * @ingroup c_document_quality_analyzer
 * @details If this number of symbols is found and minProcessedFraction of the image is processed, the processing stops.
 * 
 * Default is 100
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_document_quality_analyzer_configuration_t, the field of which will be set
 * @param min_number_of_required_symbols: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_quality_analyzer_configuration_set_min_number_of_required_symbols(scanbotsdk_document_quality_analyzer_configuration_t* self, int min_number_of_required_symbols);

/**
 * @brief Returns value of min_required_orientation_confidence field of the given object.
 * @ingroup c_document_quality_analyzer
 * @details If detectOrientation is True, minNumberOfRequiredSymbols is found, and orientationConfidence is bigger than this threshold, the processing stops.
 * If the maxProcessedFraction part of the image is processed and orientationConfidence is lower than the threshold, the returned orientation will be 0.
 * 
 * Default is 0
 * @param self: Pointer to the instance of scanbotsdk_document_quality_analyzer_configuration_t
 * @param min_required_orientation_confidence: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_quality_analyzer_configuration_get_min_required_orientation_confidence(scanbotsdk_document_quality_analyzer_configuration_t* self, double* min_required_orientation_confidence);
/**
 * @brief Sets value of min_required_orientation_confidence field of the given object.
 * @ingroup c_document_quality_analyzer
 * @details If detectOrientation is True, minNumberOfRequiredSymbols is found, and orientationConfidence is bigger than this threshold, the processing stops.
 * If the maxProcessedFraction part of the image is processed and orientationConfidence is lower than the threshold, the returned orientation will be 0.
 * 
 * Default is 0
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_document_quality_analyzer_configuration_t, the field of which will be set
 * @param min_required_orientation_confidence: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_quality_analyzer_configuration_set_min_required_orientation_confidence(scanbotsdk_document_quality_analyzer_configuration_t* self, double min_required_orientation_confidence);

/**
 * @brief Returns value of tile_size field of the given object.
 * @ingroup c_document_quality_analyzer
 * @details Image will be processed in tiles of this size; will be ignored if image is small.
 * 
 * Default is 300
 * @param self: Pointer to the instance of scanbotsdk_document_quality_analyzer_configuration_t
 * @param tile_size: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_quality_analyzer_configuration_get_tile_size(scanbotsdk_document_quality_analyzer_configuration_t* self, int* tile_size);
/**
 * @brief Sets value of tile_size field of the given object.
 * @ingroup c_document_quality_analyzer
 * @details Image will be processed in tiles of this size; will be ignored if image is small.
 * 
 * Default is 300
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_document_quality_analyzer_configuration_t, the field of which will be set
 * @param tile_size: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_quality_analyzer_configuration_set_tile_size(scanbotsdk_document_quality_analyzer_configuration_t* self, int tile_size);

/**
 * @brief Returns value of return_quality_heatmap field of the given object.
 * @ingroup c_document_quality_analyzer
 * @details If true, will return the quality heatmap as a part of the result.
 * In this case, the entire image will be processed and the minProcessedFraction will be ignored.
 * Useful for debugging situations where the returned quality doesn't appear to match the perceived quality.
 * 
 * Default is false
 * @param self: Pointer to the instance of scanbotsdk_document_quality_analyzer_configuration_t
 * @param return_quality_heatmap: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_quality_analyzer_configuration_get_return_quality_heatmap(scanbotsdk_document_quality_analyzer_configuration_t* self, bool* return_quality_heatmap);
/**
 * @brief Sets value of return_quality_heatmap field of the given object.
 * @ingroup c_document_quality_analyzer
 * @details If true, will return the quality heatmap as a part of the result.
 * In this case, the entire image will be processed and the minProcessedFraction will be ignored.
 * Useful for debugging situations where the returned quality doesn't appear to match the perceived quality.
 * 
 * Default is false
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_document_quality_analyzer_configuration_t, the field of which will be set
 * @param return_quality_heatmap: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_quality_analyzer_configuration_set_return_quality_heatmap(scanbotsdk_document_quality_analyzer_configuration_t* self, bool return_quality_heatmap);


/**
 * @brief scanbotsdk_document_quality_analyzer_result_t class
 * @details Result of document quality analysis. It can be used to determine, e.g., if a document is good enough to be used for OCR processing.
 * @ingroup c_document_quality_analyzer
*/
typedef struct scanbotsdk_document_quality_analyzer_result_t scanbotsdk_document_quality_analyzer_result_t;

/**
 * @brief Frees the memory allocated for the instance of scanbotsdk_document_quality_analyzer_result_t. If null is passed, the function does nothing.
 * @ingroup c_document_quality_analyzer
 * @param object: Pointer to the instance of scanbotsdk_document_quality_analyzer_result_t to be freed
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_quality_analyzer_result_free(scanbotsdk_document_quality_analyzer_result_t* object);

/**
 * @brief Returns value of document_found field of the given object.
 * @ingroup c_document_quality_analyzer
 * @details True if a document was found.
 * @param self: Pointer to the instance of scanbotsdk_document_quality_analyzer_result_t
 * @param document_found: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_quality_analyzer_result_get_document_found(scanbotsdk_document_quality_analyzer_result_t* self, bool* document_found);

/**
 * @brief Returns value of quality field of the given object. The returned pointers do NOT own the underlying object, caller must not free them.
 * @ingroup c_document_quality_analyzer
 * @details Quality of the document, if found.
 * @param self: Pointer to the instance of scanbotsdk_document_quality_analyzer_result_t
 * @param quality: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_quality_analyzer_result_get_quality(scanbotsdk_document_quality_analyzer_result_t* self, scanbotsdk_document_quality_t** quality);

/**
 * @brief Returns value of orientation field of the given object. The returned pointers do NOT own the underlying object, caller must not free them.
 * @ingroup c_document_quality_analyzer
 * @details Dominant orientation of the document, if found and if orientation detection is enabled.
 * The value is in degrees counter-clockwise, where 0 corresponds to the document
 * being straight, and the value is in the range of [-180, 180].
 * To rotate the document to be straight, rotate the image clockwise by this value.
 * @param self: Pointer to the instance of scanbotsdk_document_quality_analyzer_result_t
 * @param orientation: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_quality_analyzer_result_get_orientation(scanbotsdk_document_quality_analyzer_result_t* self, double** orientation);

/**
 * @brief Returns value of orientation_confidence field of the given object. The returned pointers do NOT own the underlying object, caller must not free them.
 * @ingroup c_document_quality_analyzer
 * @details Confidence that the reported orientation of the document is correct. Returned if orientation detection is enabled.
 * The value is in the range of [0, 1].
 * Possible reasons for low confidence are:
 *   * Document contains text with multiple orientations.
 *   * Text on the document is poorly readable.
 *   * Text on the document is on the edge of detectable text range (text is too small or too big).
 *   * Insufficient statistics because only part of the image was processed. See minProcessedFraction, maxProcessedFraction, and earlyStopIfNSymbolsFound options in the DocumentQualityAnalyzerConfiguration.
 * @param self: Pointer to the instance of scanbotsdk_document_quality_analyzer_result_t
 * @param orientation_confidence: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_quality_analyzer_result_get_orientation_confidence(scanbotsdk_document_quality_analyzer_result_t* self, double** orientation_confidence);

/**
 * @brief Returns value of cumulative_quality_histogram field of the given object. The returned value is direct view into memory, no pre-allocations needed.
 * @ingroup c_document_quality_analyzer
 * @details Cumulative histogram where every entry is equal to the number of symbols with quality equal or lower than N percent, where N is the index of the entry in the array.
 * @param self: Pointer to the instance of scanbotsdk_document_quality_analyzer_result_t
 * @param cumulative_quality_histogram: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_quality_analyzer_result_get_cumulative_quality_histogram(scanbotsdk_document_quality_analyzer_result_t* self, int** cumulative_quality_histogram);
/**
 * @brief Returns size of cumulative_quality_histogram array.
 * @ingroup c_document_quality_analyzer
 * @param self: Pointer to the instance of scanbotsdk_document_quality_analyzer_result_t
 * @param size: Pointer to a variable that will store the size.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_quality_analyzer_result_get_cumulative_quality_histogram_size(scanbotsdk_document_quality_analyzer_result_t* self, size_t* size);

/**
 * @brief Returns value of cumulative_contrast_histogram field of the given object. The returned value is direct view into memory, no pre-allocations needed.
 * @ingroup c_document_quality_analyzer
 * @details Cumulative histogram where every entry is equal to the number of symbols with contrast equal or lower than N percent, where N is the index of the entry in the array.
 * @param self: Pointer to the instance of scanbotsdk_document_quality_analyzer_result_t
 * @param cumulative_contrast_histogram: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_quality_analyzer_result_get_cumulative_contrast_histogram(scanbotsdk_document_quality_analyzer_result_t* self, int** cumulative_contrast_histogram);
/**
 * @brief Returns size of cumulative_contrast_histogram array.
 * @ingroup c_document_quality_analyzer
 * @param self: Pointer to the instance of scanbotsdk_document_quality_analyzer_result_t
 * @param size: Pointer to a variable that will store the size.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_quality_analyzer_result_get_cumulative_contrast_histogram_size(scanbotsdk_document_quality_analyzer_result_t* self, size_t* size);

/**
 * @brief Returns value of cumulative_text_size_histogram field of the given object. The returned value is direct view into memory, no pre-allocations needed.
 * @ingroup c_document_quality_analyzer
 * @details Cumulative histogram where every entry is equal to the number of symbols with text size equal or lower than N percent, where N is the index of the entry in the array.
 * @param self: Pointer to the instance of scanbotsdk_document_quality_analyzer_result_t
 * @param cumulative_text_size_histogram: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_quality_analyzer_result_get_cumulative_text_size_histogram(scanbotsdk_document_quality_analyzer_result_t* self, int** cumulative_text_size_histogram);
/**
 * @brief Returns size of cumulative_text_size_histogram array.
 * @ingroup c_document_quality_analyzer
 * @param self: Pointer to the instance of scanbotsdk_document_quality_analyzer_result_t
 * @param size: Pointer to a variable that will store the size.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_quality_analyzer_result_get_cumulative_text_size_histogram_size(scanbotsdk_document_quality_analyzer_result_t* self, size_t* size);

/**
 * @brief Returns value of quality_heatmap field of the given object. The returned pointers do NOT own the underlying object, caller must not free them.
 * @ingroup c_document_quality_analyzer
 * @details Quality heatmap.
 * Black marks areas of no detected text. Colors represent the quality of detected text,
 * with red meaning the lowest quality and yellow and green meaning progressively higher quality.
 * @param self: Pointer to the instance of scanbotsdk_document_quality_analyzer_result_t
 * @param quality_heatmap: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_document_quality_analyzer_result_get_quality_heatmap(scanbotsdk_document_quality_analyzer_result_t* self, scanbotsdk_image_t** quality_heatmap);


#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* SCANBOTSDK_DOCUMENTQUALITYANALYZERTYPES_H */