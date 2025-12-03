// Auto-generated with ScanbotSDKCodegenV3. Modifications will be overwritten.
// Generated from SchemasV3/CoreSchemas/schemas/FrameAccumulationTypes.yaml
/**
 * @file ScanbotSDKFrameAccumulationTypes.h
 */

#pragma once
#ifndef SCANBOTSDK_FRAMEACCUMULATIONTYPES_H
#define SCANBOTSDK_FRAMEACCUMULATIONTYPES_H


#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <ScanbotSDKErrorCode.h>
#include <ScanbotSDKDefs.h>

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief scanbotsdk_confirmation_method_t enum
 * @details Method used to confirm a result.
 * @ingroup c_frame_accumulation
*/
typedef enum scanbotsdk_confirmation_method_t {

    /**Require seeing the same result multiple times to confirm it. 
    E.g. if the seen values are "John B. Doe", "John B.", "B. Doe", "John B. Doe" then the confirmation count for 
    the value "John B. Doe" is 2 and for the rest it's 1.
    A field's value is considered CONFIRMED if its confirmation count is greater or equal to minConfirmations.*/
    SCANBOTSDK_CONFIRMATION_METHOD_EXACT = 0,

    /**Interpolate between seen values to generate the most likely true value.
    E.g. if the seen values are "John X. Doe", "John B.", "B. Doe" then the most likely true value
    can be interpolated to be "John B. Doe".
    The interpolated value is considered CONFIRMED if each character
    in it has been seen at least minConfirmations times.*/
    SCANBOTSDK_CONFIRMATION_METHOD_INTERPOLATE = 1,

} scanbotsdk_confirmation_method_t;

/**
 * @brief Returns the string representation of the given scanbotsdk_confirmation_method_t value.
 * @ingroup c_frame_accumulation
 * @details The returned string doesn't need to be freed.
 * @param value: The value to be converted to string.
 * @param result: Pointer to a variable that will store the string representation of the value.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_confirmation_method_t_to_string(scanbotsdk_confirmation_method_t value, const char** result);

/**
 * @brief scanbotsdk_result_accumulation_configuration_t class
 * @details Configuration for how to accumulate results.
 * @ingroup c_frame_accumulation
*/
typedef struct scanbotsdk_result_accumulation_configuration_t scanbotsdk_result_accumulation_configuration_t;

/**
 * @brief Creates a new instance of scanbotsdk_result_accumulation_configuration with given params and stores it in the location specified by the last argument.
 * @ingroup c_frame_accumulation
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param confirmation_method: Method used to confirm a result.
 * 
 * Default is EXACT
 * @param min_confirmations: Number of confirmations required to consider a result confirmed (see ConfirmationMethod).
 * Requiring more confirmations will increase the reliability of the result but also the time to
 * gather enough confirmations.
 * 
 * Default is 3
 * @param min_confidence_for_stable_field: Minimum confidence required to consider a field confirmed.
 * 
 * Default is 0.8
 * @param auto_clear_threshold: Will auto-clear the cache if this number of frames have been a different document type or empty.
 * 
 * Default is 4
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_result_accumulation_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_result_accumulation_configuration_create(
    scanbotsdk_confirmation_method_t confirmation_method,
    int min_confirmations,
    double min_confidence_for_stable_field,
    int auto_clear_threshold,
    scanbotsdk_result_accumulation_configuration_t** result);

/**
 * @brief Creates a new instance of scanbotsdk_result_accumulation_configuration_t with given required params and stores it in the location specified by the last argument.
 * @ingroup c_frame_accumulation
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_result_accumulation_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_result_accumulation_configuration_create_with_defaults(
    scanbotsdk_result_accumulation_configuration_t** result);


/**
 * @brief Frees the memory allocated for the instance of scanbotsdk_result_accumulation_configuration_t. If null is passed, the function does nothing.
 * @ingroup c_frame_accumulation
 * @param object: Pointer to the instance of scanbotsdk_result_accumulation_configuration_t to be freed
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_result_accumulation_configuration_free(scanbotsdk_result_accumulation_configuration_t* object);

/**
 * @brief Returns value of confirmation_method field of the given object.
 * @ingroup c_frame_accumulation
 * @details Method used to confirm a result.
 * 
 * Default is EXACT
 * @param self: Pointer to the instance of scanbotsdk_result_accumulation_configuration_t
 * @param confirmation_method: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_result_accumulation_configuration_get_confirmation_method(scanbotsdk_result_accumulation_configuration_t* self, scanbotsdk_confirmation_method_t* confirmation_method);
/**
 * @brief Sets value of confirmation_method field of the given object.
 * @ingroup c_frame_accumulation
 * @details Method used to confirm a result.
 * 
 * Default is EXACT
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_result_accumulation_configuration_t, the field of which will be set
 * @param confirmation_method: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_result_accumulation_configuration_set_confirmation_method(scanbotsdk_result_accumulation_configuration_t* self, scanbotsdk_confirmation_method_t confirmation_method);

/**
 * @brief Returns value of min_confirmations field of the given object.
 * @ingroup c_frame_accumulation
 * @details Number of confirmations required to consider a result confirmed (see ConfirmationMethod).
 * Requiring more confirmations will increase the reliability of the result but also the time to
 * gather enough confirmations.
 * 
 * Default is 3
 * @param self: Pointer to the instance of scanbotsdk_result_accumulation_configuration_t
 * @param min_confirmations: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_result_accumulation_configuration_get_min_confirmations(scanbotsdk_result_accumulation_configuration_t* self, int* min_confirmations);
/**
 * @brief Sets value of min_confirmations field of the given object.
 * @ingroup c_frame_accumulation
 * @details Number of confirmations required to consider a result confirmed (see ConfirmationMethod).
 * Requiring more confirmations will increase the reliability of the result but also the time to
 * gather enough confirmations.
 * 
 * Default is 3
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_result_accumulation_configuration_t, the field of which will be set
 * @param min_confirmations: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_result_accumulation_configuration_set_min_confirmations(scanbotsdk_result_accumulation_configuration_t* self, int min_confirmations);

/**
 * @brief Returns value of min_confidence_for_stable_field field of the given object.
 * @ingroup c_frame_accumulation
 * @details Minimum confidence required to consider a field confirmed.
 * 
 * Default is 0.8
 * @param self: Pointer to the instance of scanbotsdk_result_accumulation_configuration_t
 * @param min_confidence_for_stable_field: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_result_accumulation_configuration_get_min_confidence_for_stable_field(scanbotsdk_result_accumulation_configuration_t* self, double* min_confidence_for_stable_field);
/**
 * @brief Sets value of min_confidence_for_stable_field field of the given object.
 * @ingroup c_frame_accumulation
 * @details Minimum confidence required to consider a field confirmed.
 * 
 * Default is 0.8
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_result_accumulation_configuration_t, the field of which will be set
 * @param min_confidence_for_stable_field: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_result_accumulation_configuration_set_min_confidence_for_stable_field(scanbotsdk_result_accumulation_configuration_t* self, double min_confidence_for_stable_field);

/**
 * @brief Returns value of auto_clear_threshold field of the given object.
 * @ingroup c_frame_accumulation
 * @details Will auto-clear the cache if this number of frames have been a different document type or empty.
 * 
 * Default is 4
 * @param self: Pointer to the instance of scanbotsdk_result_accumulation_configuration_t
 * @param auto_clear_threshold: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_result_accumulation_configuration_get_auto_clear_threshold(scanbotsdk_result_accumulation_configuration_t* self, int* auto_clear_threshold);
/**
 * @brief Sets value of auto_clear_threshold field of the given object.
 * @ingroup c_frame_accumulation
 * @details Will auto-clear the cache if this number of frames have been a different document type or empty.
 * 
 * Default is 4
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_result_accumulation_configuration_t, the field of which will be set
 * @param auto_clear_threshold: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_result_accumulation_configuration_set_auto_clear_threshold(scanbotsdk_result_accumulation_configuration_t* self, int auto_clear_threshold);


/**
 * @brief scanbotsdk_accumulated_results_verifier_configuration_t class
 * @details Configure the frame accumulation process.
 * @ingroup c_frame_accumulation
*/
typedef struct scanbotsdk_accumulated_results_verifier_configuration_t scanbotsdk_accumulated_results_verifier_configuration_t;

/**
 * @brief Creates a new instance of scanbotsdk_accumulated_results_verifier_configuration with given params and stores it in the location specified by the last argument.
 * @ingroup c_frame_accumulation
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param maximum_number_of_accumulated_frames: Maximum number of accumulated frames to inspect to verify a scan result.
 * 
 * Default is 3
 * @param minimum_number_of_required_frames_with_equal_scanning_result: Minimum number of accumulated frames that have an equal result in order for the result to be considered verified.
 * 
 * Default is 2
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_accumulated_results_verifier_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_accumulated_results_verifier_configuration_create(
    int maximum_number_of_accumulated_frames,
    int minimum_number_of_required_frames_with_equal_scanning_result,
    scanbotsdk_accumulated_results_verifier_configuration_t** result);

/**
 * @brief Creates a new instance of scanbotsdk_accumulated_results_verifier_configuration_t with given required params and stores it in the location specified by the last argument.
 * @ingroup c_frame_accumulation
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_accumulated_results_verifier_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_accumulated_results_verifier_configuration_create_with_defaults(
    scanbotsdk_accumulated_results_verifier_configuration_t** result);


/**
 * @brief Frees the memory allocated for the instance of scanbotsdk_accumulated_results_verifier_configuration_t. If null is passed, the function does nothing.
 * @ingroup c_frame_accumulation
 * @param object: Pointer to the instance of scanbotsdk_accumulated_results_verifier_configuration_t to be freed
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_accumulated_results_verifier_configuration_free(scanbotsdk_accumulated_results_verifier_configuration_t* object);

/**
 * @brief Returns value of maximum_number_of_accumulated_frames field of the given object.
 * @ingroup c_frame_accumulation
 * @details Maximum number of accumulated frames to inspect to verify a scan result.
 * 
 * Default is 3
 * @param self: Pointer to the instance of scanbotsdk_accumulated_results_verifier_configuration_t
 * @param maximum_number_of_accumulated_frames: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_accumulated_results_verifier_configuration_get_maximum_number_of_accumulated_frames(scanbotsdk_accumulated_results_verifier_configuration_t* self, int* maximum_number_of_accumulated_frames);
/**
 * @brief Sets value of maximum_number_of_accumulated_frames field of the given object.
 * @ingroup c_frame_accumulation
 * @details Maximum number of accumulated frames to inspect to verify a scan result.
 * 
 * Default is 3
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_accumulated_results_verifier_configuration_t, the field of which will be set
 * @param maximum_number_of_accumulated_frames: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_accumulated_results_verifier_configuration_set_maximum_number_of_accumulated_frames(scanbotsdk_accumulated_results_verifier_configuration_t* self, int maximum_number_of_accumulated_frames);

/**
 * @brief Returns value of minimum_number_of_required_frames_with_equal_scanning_result field of the given object.
 * @ingroup c_frame_accumulation
 * @details Minimum number of accumulated frames that have an equal result in order for the result to be considered verified.
 * 
 * Default is 2
 * @param self: Pointer to the instance of scanbotsdk_accumulated_results_verifier_configuration_t
 * @param minimum_number_of_required_frames_with_equal_scanning_result: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_accumulated_results_verifier_configuration_get_minimum_number_of_required_frames_with_equal_scanning_result(scanbotsdk_accumulated_results_verifier_configuration_t* self, int* minimum_number_of_required_frames_with_equal_scanning_result);
/**
 * @brief Sets value of minimum_number_of_required_frames_with_equal_scanning_result field of the given object.
 * @ingroup c_frame_accumulation
 * @details Minimum number of accumulated frames that have an equal result in order for the result to be considered verified.
 * 
 * Default is 2
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_accumulated_results_verifier_configuration_t, the field of which will be set
 * @param minimum_number_of_required_frames_with_equal_scanning_result: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_accumulated_results_verifier_configuration_set_minimum_number_of_required_frames_with_equal_scanning_result(scanbotsdk_accumulated_results_verifier_configuration_t* self, int minimum_number_of_required_frames_with_equal_scanning_result);


#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* SCANBOTSDK_FRAMEACCUMULATIONTYPES_H */