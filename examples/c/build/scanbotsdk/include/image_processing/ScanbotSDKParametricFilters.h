// Auto-generated with ScanbotSDKCodegenV3. Modifications will be overwritten.
// Generated from SchemasV3/CoreSchemas/schemas/ParametricFilters.yaml
/**
 * @file ScanbotSDKParametricFilters.h
 */

#pragma once
#ifndef SCANBOTSDK_PARAMETRICFILTERS_H
#define SCANBOTSDK_PARAMETRICFILTERS_H


#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <ScanbotSDKErrorCode.h>
#include <ScanbotSDKDefs.h>

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief scanbotsdk_output_mode_t enum
 * @details Output mode of binarization filter.
 * @ingroup c_image_processing
*/
typedef enum scanbotsdk_output_mode_t {

    /**BINARY - Black and white image, suitable for 1-bit compression.*/
    SCANBOTSDK_OUTPUT_MODE_BINARY = 0,

    /**ANTIALIASED - When the source image is a document photo, this mode
    will produce nice, smooth, antialiased text in grayscale, which is typically more readable
    than the text in BINARY mode. Antialiasing requires extra processing,
    which makes this mode slower than BINARY mode.*/
    SCANBOTSDK_OUTPUT_MODE_ANTIALIASED = 1,

} scanbotsdk_output_mode_t;

/**
 * @brief Returns the string representation of the given scanbotsdk_output_mode_t value.
 * @ingroup c_image_processing
 * @details The returned string doesn't need to be freed.
 * @param value: The value to be converted to string.
 * @param result: Pointer to a variable that will store the string representation of the value.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_output_mode_t_to_string(scanbotsdk_output_mode_t value, const char** result);

/**
 * @brief scanbotsdk_binarization_filter_preset_t enum
 * @details Preset of parameters for custom binarization filter.
 * @ingroup c_image_processing
*/
typedef enum scanbotsdk_binarization_filter_preset_t {

    /**Very fast, performs well if there are no shadows.*/
    SCANBOTSDK_BINARIZATION_FILTER_PRESET_PRESET_1 = 0,

    /**Performs well even if there are shadows. Binarized barcodes typically remain readable.*/
    SCANBOTSDK_BINARIZATION_FILTER_PRESET_PRESET_2 = 1,

    /**Performs well even if there are shadows.*/
    SCANBOTSDK_BINARIZATION_FILTER_PRESET_PRESET_3 = 2,

    /**Performs well even if there are shadows. Recommended for most use cases involving text documents.*/
    SCANBOTSDK_BINARIZATION_FILTER_PRESET_PRESET_4 = 3,

    /**Performs well even if there are shadows.
    The preset is an upgrade to PRESET_4 that adds special treatment for high contrast objects such as barcodes.
    Binarized barcodes typically remain readable.*/
    SCANBOTSDK_BINARIZATION_FILTER_PRESET_PRESET_5 = 4,

} scanbotsdk_binarization_filter_preset_t;

/**
 * @brief Returns the string representation of the given scanbotsdk_binarization_filter_preset_t value.
 * @ingroup c_image_processing
 * @details The returned string doesn't need to be freed.
 * @param value: The value to be converted to string.
 * @param result: Pointer to a variable that will store the string representation of the value.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_binarization_filter_preset_t_to_string(scanbotsdk_binarization_filter_preset_t value, const char** result);

/**
 * @brief scanbotsdk_parametric_filter_t class
 * @details Base class for all parametric filters.
 * @ingroup c_image_processing
*/
typedef struct scanbotsdk_parametric_filter_t scanbotsdk_parametric_filter_t;

/**
 * @brief Frees the memory allocated for the instance of scanbotsdk_parametric_filter_t. If null is passed, the function does nothing.
 * @ingroup c_image_processing
 * @param object: Pointer to the instance of scanbotsdk_parametric_filter_t to be freed
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_parametric_filter_free(scanbotsdk_parametric_filter_t* object);


/**
 * @brief scanbotsdk_scanbot_binarization_filter_t class
 * @details Automatic binarization filter. This filter is a good starting point for most use cases.
 * @ingroup c_image_processing
*/
typedef struct scanbotsdk_scanbot_binarization_filter_t scanbotsdk_scanbot_binarization_filter_t;

/**
 * @brief Creates a new instance of scanbotsdk_scanbot_binarization_filter with given params and stores it in the location specified by the last argument.
 * @ingroup c_image_processing
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param output_mode: Output mode of the filter. BINARY will return a black and white image, GRAYSCALE will return an antialiased grayscale image.
 * 
 * Default is BINARY
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_scanbot_binarization_filter_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_scanbot_binarization_filter_create(
    scanbotsdk_output_mode_t output_mode,
    scanbotsdk_scanbot_binarization_filter_t** result);

/**
 * @brief Creates a new instance of scanbotsdk_scanbot_binarization_filter_t with given required params and stores it in the location specified by the last argument.
 * @ingroup c_image_processing
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_scanbot_binarization_filter_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_scanbot_binarization_filter_create_with_defaults(
    scanbotsdk_scanbot_binarization_filter_t** result);


/**
 * @brief Frees the memory allocated for the instance of scanbotsdk_scanbot_binarization_filter_t. If null is passed, the function does nothing.
 * @ingroup c_image_processing
 * @param object: Pointer to the instance of scanbotsdk_scanbot_binarization_filter_t to be freed
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_scanbot_binarization_filter_free(scanbotsdk_scanbot_binarization_filter_t* object);

/**
 * @brief Checks if the given instance of scanbotsdk_parametric_filter_t is an instance of its subtype scanbotsdk_scanbot_binarization_filter_t.
 * @ingroup c_image_processing
 * @param object: Pointer to the instance of scanbotsdk_parametric_filter_t to be checked
 * @param result: Pointer to a variable that will store the result of the check
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
 */
SBSDK_API scanbotsdk_error_code_t scanbotsdk_parametric_filter_is_scanbotsdk_scanbot_binarization_filter(scanbotsdk_parametric_filter_t* object, bool* result);
/**
 * @brief Casts the given instance of scanbotsdk_parametric_filter_t to its subtype scanbotsdk_scanbot_binarization_filter_t. If the given instance is not an instance of the subtype, result will be null.
 * @ingroup c_image_processing
 * @param object: Pointer to the instance of scanbotsdk_parametric_filter_t to be casted
 * @param result: Pointer to a variable that will store the casted instance of scanbotsdk_scanbot_binarization_filter_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_parametric_filter_as_scanbotsdk_scanbot_binarization_filter(scanbotsdk_parametric_filter_t* object, scanbotsdk_scanbot_binarization_filter_t** result);
/**
 * @brief Casts the given instance of scanbotsdk_scanbot_binarization_filter_t to its parent type scanbotsdk_parametric_filter_t.
 * @ingroup c_image_processing
 * @param object: Pointer to the instance of scanbotsdk_parametric_filter_t to be casted
 * @param result: Pointer to a variable that will store the casted instance of scanbotsdk_scanbot_binarization_filter_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_scanbot_binarization_filter_as_scanbotsdk_parametric_filter(scanbotsdk_scanbot_binarization_filter_t* object, scanbotsdk_parametric_filter_t** result);

/**
 * @brief Returns value of output_mode field of the given object.
 * @ingroup c_image_processing
 * @details Output mode of the filter. BINARY will return a black and white image, GRAYSCALE will return an antialiased grayscale image.
 * 
 * Default is BINARY
 * @param self: Pointer to the instance of scanbotsdk_scanbot_binarization_filter_t
 * @param output_mode: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_scanbot_binarization_filter_get_output_mode(scanbotsdk_scanbot_binarization_filter_t* self, scanbotsdk_output_mode_t* output_mode);
/**
 * @brief Sets value of output_mode field of the given object.
 * @ingroup c_image_processing
 * @details Output mode of the filter. BINARY will return a black and white image, GRAYSCALE will return an antialiased grayscale image.
 * 
 * Default is BINARY
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_scanbot_binarization_filter_t, the field of which will be set
 * @param output_mode: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_scanbot_binarization_filter_set_output_mode(scanbotsdk_scanbot_binarization_filter_t* self, scanbotsdk_output_mode_t output_mode);


/**
 * @brief scanbotsdk_custom_binarization_filter_t class
 * @details Automatic binarization filter. This filter is a good starting point for most use cases.
 * @ingroup c_image_processing
*/
typedef struct scanbotsdk_custom_binarization_filter_t scanbotsdk_custom_binarization_filter_t;

/**
 * @brief Creates a new instance of scanbotsdk_custom_binarization_filter with given params and stores it in the location specified by the last argument.
 * @ingroup c_image_processing
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param output_mode: Output mode of the filter. BINARY will return a black and white image, GRAYSCALE will return an antialiased grayscale image.
 * 
 * Default is BINARY
 * @param denoise: Value controlling the amount of noise removal. Value between 0 and 1.
 * Too little noise removal may result in a very noisy image, worsening readability.
 * Too much noise removal may result in the degradation of text, again, worsening readability.
 * 
 * Default is 0.5
 * @param radius: Filter radius. The bigger the radius, the slower the filter and generally the less noise in the result.
 * The radius is used for both shadows removal and the calculation of local statistics in the main body of the filter.
 * Higher radius usually allows to cope better with regions of light text on dark background.
 * All the values larger than 127 are clamped to 127.
 * 
 * Default is 32
 * @param preset: Preset of binarization filter parameters that are found to perform well on different types of documents.
 * 
 * Default is PRESET_4
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_custom_binarization_filter_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_custom_binarization_filter_create(
    scanbotsdk_output_mode_t output_mode,
    double denoise,
    int radius,
    scanbotsdk_binarization_filter_preset_t preset,
    scanbotsdk_custom_binarization_filter_t** result);

/**
 * @brief Creates a new instance of scanbotsdk_custom_binarization_filter_t with given required params and stores it in the location specified by the last argument.
 * @ingroup c_image_processing
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_custom_binarization_filter_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_custom_binarization_filter_create_with_defaults(
    scanbotsdk_custom_binarization_filter_t** result);


/**
 * @brief Frees the memory allocated for the instance of scanbotsdk_custom_binarization_filter_t. If null is passed, the function does nothing.
 * @ingroup c_image_processing
 * @param object: Pointer to the instance of scanbotsdk_custom_binarization_filter_t to be freed
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_custom_binarization_filter_free(scanbotsdk_custom_binarization_filter_t* object);

/**
 * @brief Checks if the given instance of scanbotsdk_parametric_filter_t is an instance of its subtype scanbotsdk_custom_binarization_filter_t.
 * @ingroup c_image_processing
 * @param object: Pointer to the instance of scanbotsdk_parametric_filter_t to be checked
 * @param result: Pointer to a variable that will store the result of the check
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
 */
SBSDK_API scanbotsdk_error_code_t scanbotsdk_parametric_filter_is_scanbotsdk_custom_binarization_filter(scanbotsdk_parametric_filter_t* object, bool* result);
/**
 * @brief Casts the given instance of scanbotsdk_parametric_filter_t to its subtype scanbotsdk_custom_binarization_filter_t. If the given instance is not an instance of the subtype, result will be null.
 * @ingroup c_image_processing
 * @param object: Pointer to the instance of scanbotsdk_parametric_filter_t to be casted
 * @param result: Pointer to a variable that will store the casted instance of scanbotsdk_custom_binarization_filter_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_parametric_filter_as_scanbotsdk_custom_binarization_filter(scanbotsdk_parametric_filter_t* object, scanbotsdk_custom_binarization_filter_t** result);
/**
 * @brief Casts the given instance of scanbotsdk_custom_binarization_filter_t to its parent type scanbotsdk_parametric_filter_t.
 * @ingroup c_image_processing
 * @param object: Pointer to the instance of scanbotsdk_parametric_filter_t to be casted
 * @param result: Pointer to a variable that will store the casted instance of scanbotsdk_custom_binarization_filter_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_custom_binarization_filter_as_scanbotsdk_parametric_filter(scanbotsdk_custom_binarization_filter_t* object, scanbotsdk_parametric_filter_t** result);

/**
 * @brief Returns value of output_mode field of the given object.
 * @ingroup c_image_processing
 * @details Output mode of the filter. BINARY will return a black and white image, GRAYSCALE will return an antialiased grayscale image.
 * 
 * Default is BINARY
 * @param self: Pointer to the instance of scanbotsdk_custom_binarization_filter_t
 * @param output_mode: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_custom_binarization_filter_get_output_mode(scanbotsdk_custom_binarization_filter_t* self, scanbotsdk_output_mode_t* output_mode);
/**
 * @brief Sets value of output_mode field of the given object.
 * @ingroup c_image_processing
 * @details Output mode of the filter. BINARY will return a black and white image, GRAYSCALE will return an antialiased grayscale image.
 * 
 * Default is BINARY
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_custom_binarization_filter_t, the field of which will be set
 * @param output_mode: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_custom_binarization_filter_set_output_mode(scanbotsdk_custom_binarization_filter_t* self, scanbotsdk_output_mode_t output_mode);

/**
 * @brief Returns value of denoise field of the given object.
 * @ingroup c_image_processing
 * @details Value controlling the amount of noise removal. Value between 0 and 1.
 * Too little noise removal may result in a very noisy image, worsening readability.
 * Too much noise removal may result in the degradation of text, again, worsening readability.
 * 
 * Default is 0.5
 * @param self: Pointer to the instance of scanbotsdk_custom_binarization_filter_t
 * @param denoise: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_custom_binarization_filter_get_denoise(scanbotsdk_custom_binarization_filter_t* self, double* denoise);
/**
 * @brief Sets value of denoise field of the given object.
 * @ingroup c_image_processing
 * @details Value controlling the amount of noise removal. Value between 0 and 1.
 * Too little noise removal may result in a very noisy image, worsening readability.
 * Too much noise removal may result in the degradation of text, again, worsening readability.
 * 
 * Default is 0.5
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_custom_binarization_filter_t, the field of which will be set
 * @param denoise: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_custom_binarization_filter_set_denoise(scanbotsdk_custom_binarization_filter_t* self, double denoise);

/**
 * @brief Returns value of radius field of the given object.
 * @ingroup c_image_processing
 * @details Filter radius. The bigger the radius, the slower the filter and generally the less noise in the result.
 * The radius is used for both shadows removal and the calculation of local statistics in the main body of the filter.
 * Higher radius usually allows to cope better with regions of light text on dark background.
 * All the values larger than 127 are clamped to 127.
 * 
 * Default is 32
 * @param self: Pointer to the instance of scanbotsdk_custom_binarization_filter_t
 * @param radius: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_custom_binarization_filter_get_radius(scanbotsdk_custom_binarization_filter_t* self, int* radius);
/**
 * @brief Sets value of radius field of the given object.
 * @ingroup c_image_processing
 * @details Filter radius. The bigger the radius, the slower the filter and generally the less noise in the result.
 * The radius is used for both shadows removal and the calculation of local statistics in the main body of the filter.
 * Higher radius usually allows to cope better with regions of light text on dark background.
 * All the values larger than 127 are clamped to 127.
 * 
 * Default is 32
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_custom_binarization_filter_t, the field of which will be set
 * @param radius: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_custom_binarization_filter_set_radius(scanbotsdk_custom_binarization_filter_t* self, int radius);

/**
 * @brief Returns value of preset field of the given object.
 * @ingroup c_image_processing
 * @details Preset of binarization filter parameters that are found to perform well on different types of documents.
 * 
 * Default is PRESET_4
 * @param self: Pointer to the instance of scanbotsdk_custom_binarization_filter_t
 * @param preset: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_custom_binarization_filter_get_preset(scanbotsdk_custom_binarization_filter_t* self, scanbotsdk_binarization_filter_preset_t* preset);
/**
 * @brief Sets value of preset field of the given object.
 * @ingroup c_image_processing
 * @details Preset of binarization filter parameters that are found to perform well on different types of documents.
 * 
 * Default is PRESET_4
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_custom_binarization_filter_t, the field of which will be set
 * @param preset: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_custom_binarization_filter_set_preset(scanbotsdk_custom_binarization_filter_t* self, scanbotsdk_binarization_filter_preset_t preset);


/**
 * @brief scanbotsdk_color_document_filter_t class
 * @details Color document filter. This filter is a good starting point for most use cases.
 * @ingroup c_image_processing
*/
typedef struct scanbotsdk_color_document_filter_t scanbotsdk_color_document_filter_t;

/**
 * @brief Creates a new instance of scanbotsdk_color_document_filter with given params and stores it in the location specified by the last argument.
 * @ingroup c_image_processing
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_color_document_filter_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_color_document_filter_create(
    scanbotsdk_color_document_filter_t** result);


/**
 * @brief Frees the memory allocated for the instance of scanbotsdk_color_document_filter_t. If null is passed, the function does nothing.
 * @ingroup c_image_processing
 * @param object: Pointer to the instance of scanbotsdk_color_document_filter_t to be freed
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_color_document_filter_free(scanbotsdk_color_document_filter_t* object);

/**
 * @brief Checks if the given instance of scanbotsdk_parametric_filter_t is an instance of its subtype scanbotsdk_color_document_filter_t.
 * @ingroup c_image_processing
 * @param object: Pointer to the instance of scanbotsdk_parametric_filter_t to be checked
 * @param result: Pointer to a variable that will store the result of the check
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
 */
SBSDK_API scanbotsdk_error_code_t scanbotsdk_parametric_filter_is_scanbotsdk_color_document_filter(scanbotsdk_parametric_filter_t* object, bool* result);
/**
 * @brief Casts the given instance of scanbotsdk_parametric_filter_t to its subtype scanbotsdk_color_document_filter_t. If the given instance is not an instance of the subtype, result will be null.
 * @ingroup c_image_processing
 * @param object: Pointer to the instance of scanbotsdk_parametric_filter_t to be casted
 * @param result: Pointer to a variable that will store the casted instance of scanbotsdk_color_document_filter_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_parametric_filter_as_scanbotsdk_color_document_filter(scanbotsdk_parametric_filter_t* object, scanbotsdk_color_document_filter_t** result);
/**
 * @brief Casts the given instance of scanbotsdk_color_document_filter_t to its parent type scanbotsdk_parametric_filter_t.
 * @ingroup c_image_processing
 * @param object: Pointer to the instance of scanbotsdk_parametric_filter_t to be casted
 * @param result: Pointer to a variable that will store the casted instance of scanbotsdk_color_document_filter_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_color_document_filter_as_scanbotsdk_parametric_filter(scanbotsdk_color_document_filter_t* object, scanbotsdk_parametric_filter_t** result);


/**
 * @brief scanbotsdk_brightness_filter_t class
 * @details Brightness adjustment filter.
 * @ingroup c_image_processing
*/
typedef struct scanbotsdk_brightness_filter_t scanbotsdk_brightness_filter_t;

/**
 * @brief Creates a new instance of scanbotsdk_brightness_filter with given params and stores it in the location specified by the last argument.
 * @ingroup c_image_processing
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param brightness: Brightness adjustment value in the range from -1 to 1. Negative values will make the image darker, positive values will make it brighter.
 * 
 * Default is 0.0
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_brightness_filter_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_brightness_filter_create(
    double brightness,
    scanbotsdk_brightness_filter_t** result);

/**
 * @brief Creates a new instance of scanbotsdk_brightness_filter_t with given required params and stores it in the location specified by the last argument.
 * @ingroup c_image_processing
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_brightness_filter_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_brightness_filter_create_with_defaults(
    scanbotsdk_brightness_filter_t** result);


/**
 * @brief Frees the memory allocated for the instance of scanbotsdk_brightness_filter_t. If null is passed, the function does nothing.
 * @ingroup c_image_processing
 * @param object: Pointer to the instance of scanbotsdk_brightness_filter_t to be freed
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_brightness_filter_free(scanbotsdk_brightness_filter_t* object);

/**
 * @brief Checks if the given instance of scanbotsdk_parametric_filter_t is an instance of its subtype scanbotsdk_brightness_filter_t.
 * @ingroup c_image_processing
 * @param object: Pointer to the instance of scanbotsdk_parametric_filter_t to be checked
 * @param result: Pointer to a variable that will store the result of the check
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
 */
SBSDK_API scanbotsdk_error_code_t scanbotsdk_parametric_filter_is_scanbotsdk_brightness_filter(scanbotsdk_parametric_filter_t* object, bool* result);
/**
 * @brief Casts the given instance of scanbotsdk_parametric_filter_t to its subtype scanbotsdk_brightness_filter_t. If the given instance is not an instance of the subtype, result will be null.
 * @ingroup c_image_processing
 * @param object: Pointer to the instance of scanbotsdk_parametric_filter_t to be casted
 * @param result: Pointer to a variable that will store the casted instance of scanbotsdk_brightness_filter_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_parametric_filter_as_scanbotsdk_brightness_filter(scanbotsdk_parametric_filter_t* object, scanbotsdk_brightness_filter_t** result);
/**
 * @brief Casts the given instance of scanbotsdk_brightness_filter_t to its parent type scanbotsdk_parametric_filter_t.
 * @ingroup c_image_processing
 * @param object: Pointer to the instance of scanbotsdk_parametric_filter_t to be casted
 * @param result: Pointer to a variable that will store the casted instance of scanbotsdk_brightness_filter_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_brightness_filter_as_scanbotsdk_parametric_filter(scanbotsdk_brightness_filter_t* object, scanbotsdk_parametric_filter_t** result);

/**
 * @brief Returns value of brightness field of the given object.
 * @ingroup c_image_processing
 * @details Brightness adjustment value in the range from -1 to 1. Negative values will make the image darker, positive values will make it brighter.
 * 
 * Default is 0.0
 * @param self: Pointer to the instance of scanbotsdk_brightness_filter_t
 * @param brightness: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_brightness_filter_get_brightness(scanbotsdk_brightness_filter_t* self, double* brightness);
/**
 * @brief Sets value of brightness field of the given object.
 * @ingroup c_image_processing
 * @details Brightness adjustment value in the range from -1 to 1. Negative values will make the image darker, positive values will make it brighter.
 * 
 * Default is 0.0
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_brightness_filter_t, the field of which will be set
 * @param brightness: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_brightness_filter_set_brightness(scanbotsdk_brightness_filter_t* self, double brightness);


/**
 * @brief scanbotsdk_contrast_filter_t class
 * @details Contrast adjustment filter.
 * @ingroup c_image_processing
*/
typedef struct scanbotsdk_contrast_filter_t scanbotsdk_contrast_filter_t;

/**
 * @brief Creates a new instance of scanbotsdk_contrast_filter with given params and stores it in the location specified by the last argument.
 * @ingroup c_image_processing
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param contrast: Contrast adjustment value in the range from -1 to 254 (inclusively). Negative values will decrease the contrast, positive values will increase it.
 * 
 * Default is 0.0
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_contrast_filter_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_contrast_filter_create(
    double contrast,
    scanbotsdk_contrast_filter_t** result);

/**
 * @brief Creates a new instance of scanbotsdk_contrast_filter_t with given required params and stores it in the location specified by the last argument.
 * @ingroup c_image_processing
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_contrast_filter_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_contrast_filter_create_with_defaults(
    scanbotsdk_contrast_filter_t** result);


/**
 * @brief Frees the memory allocated for the instance of scanbotsdk_contrast_filter_t. If null is passed, the function does nothing.
 * @ingroup c_image_processing
 * @param object: Pointer to the instance of scanbotsdk_contrast_filter_t to be freed
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_contrast_filter_free(scanbotsdk_contrast_filter_t* object);

/**
 * @brief Checks if the given instance of scanbotsdk_parametric_filter_t is an instance of its subtype scanbotsdk_contrast_filter_t.
 * @ingroup c_image_processing
 * @param object: Pointer to the instance of scanbotsdk_parametric_filter_t to be checked
 * @param result: Pointer to a variable that will store the result of the check
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
 */
SBSDK_API scanbotsdk_error_code_t scanbotsdk_parametric_filter_is_scanbotsdk_contrast_filter(scanbotsdk_parametric_filter_t* object, bool* result);
/**
 * @brief Casts the given instance of scanbotsdk_parametric_filter_t to its subtype scanbotsdk_contrast_filter_t. If the given instance is not an instance of the subtype, result will be null.
 * @ingroup c_image_processing
 * @param object: Pointer to the instance of scanbotsdk_parametric_filter_t to be casted
 * @param result: Pointer to a variable that will store the casted instance of scanbotsdk_contrast_filter_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_parametric_filter_as_scanbotsdk_contrast_filter(scanbotsdk_parametric_filter_t* object, scanbotsdk_contrast_filter_t** result);
/**
 * @brief Casts the given instance of scanbotsdk_contrast_filter_t to its parent type scanbotsdk_parametric_filter_t.
 * @ingroup c_image_processing
 * @param object: Pointer to the instance of scanbotsdk_parametric_filter_t to be casted
 * @param result: Pointer to a variable that will store the casted instance of scanbotsdk_contrast_filter_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_contrast_filter_as_scanbotsdk_parametric_filter(scanbotsdk_contrast_filter_t* object, scanbotsdk_parametric_filter_t** result);

/**
 * @brief Returns value of contrast field of the given object.
 * @ingroup c_image_processing
 * @details Contrast adjustment value in the range from -1 to 254 (inclusively). Negative values will decrease the contrast, positive values will increase it.
 * 
 * Default is 0.0
 * @param self: Pointer to the instance of scanbotsdk_contrast_filter_t
 * @param contrast: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_contrast_filter_get_contrast(scanbotsdk_contrast_filter_t* self, double* contrast);
/**
 * @brief Sets value of contrast field of the given object.
 * @ingroup c_image_processing
 * @details Contrast adjustment value in the range from -1 to 254 (inclusively). Negative values will decrease the contrast, positive values will increase it.
 * 
 * Default is 0.0
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_contrast_filter_t, the field of which will be set
 * @param contrast: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_contrast_filter_set_contrast(scanbotsdk_contrast_filter_t* self, double contrast);


/**
 * @brief scanbotsdk_grayscale_filter_t class
 * @details Converts color images to grayscale and applies autocontrast.
 * @ingroup c_image_processing
*/
typedef struct scanbotsdk_grayscale_filter_t scanbotsdk_grayscale_filter_t;

/**
 * @brief Creates a new instance of scanbotsdk_grayscale_filter with given params and stores it in the location specified by the last argument.
 * @ingroup c_image_processing
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param border_width_fraction: Ignore this fraction of pixels at the edge of the image when calculating statistics.
 * Pixels at the edge of the image typically have poor statistics. Ignoring them
 * and using only the inner pixels when calculating certain statistics can
 * substantially improve the quality of the result.
 * The value must be less than 0.5 but usually good values are between 0 and 0.15.
 * 
 * Default is 0.06
 * @param black_outliers_fraction: Clip this fraction of the darkest pixels in operations such as autocontrast.
 * Increasing the range of middle gray levels at the expense of the brightest and darkest levels
 * may improve the overall contrast and quality of the result.
 * Sum of blackOutliersFraction and whiteOutliersFraction must be less than 1 but usually
 * good values for the parameters do not exceed 0.05;.
 * 
 * Default is 0.0
 * @param white_outliers_fraction: Clip this fraction of the brightest pixels in operations such as autocontrast.
 * Increasing the range of middle gray levels at the expense of the brightest and darkest levels
 * may improve the overall contrast and quality of the result.
 * Sum of blackOutliersFraction and whiteOutliersFraction must be less than 1 but usually
 * good values for the parameters do not exceed 0.05;.
 * 
 * Default is 0.02
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_grayscale_filter_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_grayscale_filter_create(
    double border_width_fraction,
    double black_outliers_fraction,
    double white_outliers_fraction,
    scanbotsdk_grayscale_filter_t** result);

/**
 * @brief Creates a new instance of scanbotsdk_grayscale_filter_t with given required params and stores it in the location specified by the last argument.
 * @ingroup c_image_processing
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_grayscale_filter_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_grayscale_filter_create_with_defaults(
    scanbotsdk_grayscale_filter_t** result);


/**
 * @brief Frees the memory allocated for the instance of scanbotsdk_grayscale_filter_t. If null is passed, the function does nothing.
 * @ingroup c_image_processing
 * @param object: Pointer to the instance of scanbotsdk_grayscale_filter_t to be freed
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_grayscale_filter_free(scanbotsdk_grayscale_filter_t* object);

/**
 * @brief Checks if the given instance of scanbotsdk_parametric_filter_t is an instance of its subtype scanbotsdk_grayscale_filter_t.
 * @ingroup c_image_processing
 * @param object: Pointer to the instance of scanbotsdk_parametric_filter_t to be checked
 * @param result: Pointer to a variable that will store the result of the check
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
 */
SBSDK_API scanbotsdk_error_code_t scanbotsdk_parametric_filter_is_scanbotsdk_grayscale_filter(scanbotsdk_parametric_filter_t* object, bool* result);
/**
 * @brief Casts the given instance of scanbotsdk_parametric_filter_t to its subtype scanbotsdk_grayscale_filter_t. If the given instance is not an instance of the subtype, result will be null.
 * @ingroup c_image_processing
 * @param object: Pointer to the instance of scanbotsdk_parametric_filter_t to be casted
 * @param result: Pointer to a variable that will store the casted instance of scanbotsdk_grayscale_filter_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_parametric_filter_as_scanbotsdk_grayscale_filter(scanbotsdk_parametric_filter_t* object, scanbotsdk_grayscale_filter_t** result);
/**
 * @brief Casts the given instance of scanbotsdk_grayscale_filter_t to its parent type scanbotsdk_parametric_filter_t.
 * @ingroup c_image_processing
 * @param object: Pointer to the instance of scanbotsdk_parametric_filter_t to be casted
 * @param result: Pointer to a variable that will store the casted instance of scanbotsdk_grayscale_filter_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_grayscale_filter_as_scanbotsdk_parametric_filter(scanbotsdk_grayscale_filter_t* object, scanbotsdk_parametric_filter_t** result);

/**
 * @brief Returns value of border_width_fraction field of the given object.
 * @ingroup c_image_processing
 * @details Ignore this fraction of pixels at the edge of the image when calculating statistics.
 * Pixels at the edge of the image typically have poor statistics. Ignoring them
 * and using only the inner pixels when calculating certain statistics can
 * substantially improve the quality of the result.
 * The value must be less than 0.5 but usually good values are between 0 and 0.15.
 * 
 * Default is 0.06
 * @param self: Pointer to the instance of scanbotsdk_grayscale_filter_t
 * @param border_width_fraction: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_grayscale_filter_get_border_width_fraction(scanbotsdk_grayscale_filter_t* self, double* border_width_fraction);
/**
 * @brief Sets value of border_width_fraction field of the given object.
 * @ingroup c_image_processing
 * @details Ignore this fraction of pixels at the edge of the image when calculating statistics.
 * Pixels at the edge of the image typically have poor statistics. Ignoring them
 * and using only the inner pixels when calculating certain statistics can
 * substantially improve the quality of the result.
 * The value must be less than 0.5 but usually good values are between 0 and 0.15.
 * 
 * Default is 0.06
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_grayscale_filter_t, the field of which will be set
 * @param border_width_fraction: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_grayscale_filter_set_border_width_fraction(scanbotsdk_grayscale_filter_t* self, double border_width_fraction);

/**
 * @brief Returns value of black_outliers_fraction field of the given object.
 * @ingroup c_image_processing
 * @details Clip this fraction of the darkest pixels in operations such as autocontrast.
 * Increasing the range of middle gray levels at the expense of the brightest and darkest levels
 * may improve the overall contrast and quality of the result.
 * Sum of blackOutliersFraction and whiteOutliersFraction must be less than 1 but usually
 * good values for the parameters do not exceed 0.05;.
 * 
 * Default is 0.0
 * @param self: Pointer to the instance of scanbotsdk_grayscale_filter_t
 * @param black_outliers_fraction: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_grayscale_filter_get_black_outliers_fraction(scanbotsdk_grayscale_filter_t* self, double* black_outliers_fraction);
/**
 * @brief Sets value of black_outliers_fraction field of the given object.
 * @ingroup c_image_processing
 * @details Clip this fraction of the darkest pixels in operations such as autocontrast.
 * Increasing the range of middle gray levels at the expense of the brightest and darkest levels
 * may improve the overall contrast and quality of the result.
 * Sum of blackOutliersFraction and whiteOutliersFraction must be less than 1 but usually
 * good values for the parameters do not exceed 0.05;.
 * 
 * Default is 0.0
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_grayscale_filter_t, the field of which will be set
 * @param black_outliers_fraction: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_grayscale_filter_set_black_outliers_fraction(scanbotsdk_grayscale_filter_t* self, double black_outliers_fraction);

/**
 * @brief Returns value of white_outliers_fraction field of the given object.
 * @ingroup c_image_processing
 * @details Clip this fraction of the brightest pixels in operations such as autocontrast.
 * Increasing the range of middle gray levels at the expense of the brightest and darkest levels
 * may improve the overall contrast and quality of the result.
 * Sum of blackOutliersFraction and whiteOutliersFraction must be less than 1 but usually
 * good values for the parameters do not exceed 0.05;.
 * 
 * Default is 0.02
 * @param self: Pointer to the instance of scanbotsdk_grayscale_filter_t
 * @param white_outliers_fraction: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_grayscale_filter_get_white_outliers_fraction(scanbotsdk_grayscale_filter_t* self, double* white_outliers_fraction);
/**
 * @brief Sets value of white_outliers_fraction field of the given object.
 * @ingroup c_image_processing
 * @details Clip this fraction of the brightest pixels in operations such as autocontrast.
 * Increasing the range of middle gray levels at the expense of the brightest and darkest levels
 * may improve the overall contrast and quality of the result.
 * Sum of blackOutliersFraction and whiteOutliersFraction must be less than 1 but usually
 * good values for the parameters do not exceed 0.05;.
 * 
 * Default is 0.02
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_grayscale_filter_t, the field of which will be set
 * @param white_outliers_fraction: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_grayscale_filter_set_white_outliers_fraction(scanbotsdk_grayscale_filter_t* self, double white_outliers_fraction);


/**
 * @brief scanbotsdk_white_black_point_filter_t class
 * @details Maps image value channel so that all the pixels darker than the black point are set to 0,
 * all the pixels brighter than the white point are set to 255, and the pixels in between
 * are linearly scaled.
 * @ingroup c_image_processing
*/
typedef struct scanbotsdk_white_black_point_filter_t scanbotsdk_white_black_point_filter_t;

/**
 * @brief Creates a new instance of scanbotsdk_white_black_point_filter with given params and stores it in the location specified by the last argument.
 * @ingroup c_image_processing
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param black_point: Fraction of the value channel range that is set to 0. The value should be in the range from 0 to 1.
 * 
 * Default is 0.0
 * @param white_point: Fraction of the value channel range that is not set to 255. The value should be in the range from 0 to 1.
 * 
 * Default is 1.0
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_white_black_point_filter_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_white_black_point_filter_create(
    double black_point,
    double white_point,
    scanbotsdk_white_black_point_filter_t** result);

/**
 * @brief Creates a new instance of scanbotsdk_white_black_point_filter_t with given required params and stores it in the location specified by the last argument.
 * @ingroup c_image_processing
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_white_black_point_filter_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_white_black_point_filter_create_with_defaults(
    scanbotsdk_white_black_point_filter_t** result);


/**
 * @brief Frees the memory allocated for the instance of scanbotsdk_white_black_point_filter_t. If null is passed, the function does nothing.
 * @ingroup c_image_processing
 * @param object: Pointer to the instance of scanbotsdk_white_black_point_filter_t to be freed
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_white_black_point_filter_free(scanbotsdk_white_black_point_filter_t* object);

/**
 * @brief Checks if the given instance of scanbotsdk_parametric_filter_t is an instance of its subtype scanbotsdk_white_black_point_filter_t.
 * @ingroup c_image_processing
 * @param object: Pointer to the instance of scanbotsdk_parametric_filter_t to be checked
 * @param result: Pointer to a variable that will store the result of the check
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
 */
SBSDK_API scanbotsdk_error_code_t scanbotsdk_parametric_filter_is_scanbotsdk_white_black_point_filter(scanbotsdk_parametric_filter_t* object, bool* result);
/**
 * @brief Casts the given instance of scanbotsdk_parametric_filter_t to its subtype scanbotsdk_white_black_point_filter_t. If the given instance is not an instance of the subtype, result will be null.
 * @ingroup c_image_processing
 * @param object: Pointer to the instance of scanbotsdk_parametric_filter_t to be casted
 * @param result: Pointer to a variable that will store the casted instance of scanbotsdk_white_black_point_filter_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_parametric_filter_as_scanbotsdk_white_black_point_filter(scanbotsdk_parametric_filter_t* object, scanbotsdk_white_black_point_filter_t** result);
/**
 * @brief Casts the given instance of scanbotsdk_white_black_point_filter_t to its parent type scanbotsdk_parametric_filter_t.
 * @ingroup c_image_processing
 * @param object: Pointer to the instance of scanbotsdk_parametric_filter_t to be casted
 * @param result: Pointer to a variable that will store the casted instance of scanbotsdk_white_black_point_filter_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_white_black_point_filter_as_scanbotsdk_parametric_filter(scanbotsdk_white_black_point_filter_t* object, scanbotsdk_parametric_filter_t** result);

/**
 * @brief Returns value of black_point field of the given object.
 * @ingroup c_image_processing
 * @details Fraction of the value channel range that is set to 0. The value should be in the range from 0 to 1.
 * 
 * Default is 0.0
 * @param self: Pointer to the instance of scanbotsdk_white_black_point_filter_t
 * @param black_point: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_white_black_point_filter_get_black_point(scanbotsdk_white_black_point_filter_t* self, double* black_point);
/**
 * @brief Sets value of black_point field of the given object.
 * @ingroup c_image_processing
 * @details Fraction of the value channel range that is set to 0. The value should be in the range from 0 to 1.
 * 
 * Default is 0.0
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_white_black_point_filter_t, the field of which will be set
 * @param black_point: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_white_black_point_filter_set_black_point(scanbotsdk_white_black_point_filter_t* self, double black_point);

/**
 * @brief Returns value of white_point field of the given object.
 * @ingroup c_image_processing
 * @details Fraction of the value channel range that is not set to 255. The value should be in the range from 0 to 1.
 * 
 * Default is 1.0
 * @param self: Pointer to the instance of scanbotsdk_white_black_point_filter_t
 * @param white_point: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_white_black_point_filter_get_white_point(scanbotsdk_white_black_point_filter_t* self, double* white_point);
/**
 * @brief Sets value of white_point field of the given object.
 * @ingroup c_image_processing
 * @details Fraction of the value channel range that is not set to 255. The value should be in the range from 0 to 1.
 * 
 * Default is 1.0
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_white_black_point_filter_t, the field of which will be set
 * @param white_point: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_white_black_point_filter_set_white_point(scanbotsdk_white_black_point_filter_t* self, double white_point);


/**
 * @brief scanbotsdk_page_binarization_t enum
 * @details Binarization behavior to apply when adding a page to a PDF/TIFF.
 * @ingroup c_image_processing
*/
typedef enum scanbotsdk_page_binarization_t {

    /**Do not binarize the image.*/
    SCANBOTSDK_PAGE_BINARIZATION_DISABLED = 0,

    /**Binarize the image. Image will be stored as a compressed black-and-white image. This will result in a
    very small file size. If binarizationFilter is set, this binarization filter will be applied.
    Otherwise, a simple thresholding binarization will be applied.*/
    SCANBOTSDK_PAGE_BINARIZATION_ENABLED = 1,

    /**Same behavior as ENABLED if a binarizationFilter is set,
    otherwise same behavior as DISABLED. This is the default.*/
    SCANBOTSDK_PAGE_BINARIZATION_ENABLED_IF_BINARIZATION_FILTER_SET = 2,

} scanbotsdk_page_binarization_t;

/**
 * @brief Returns the string representation of the given scanbotsdk_page_binarization_t value.
 * @ingroup c_image_processing
 * @details The returned string doesn't need to be freed.
 * @param value: The value to be converted to string.
 * @param result: Pointer to a variable that will store the string representation of the value.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_page_binarization_t_to_string(scanbotsdk_page_binarization_t value, const char** result);

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* SCANBOTSDK_PARAMETRICFILTERS_H */