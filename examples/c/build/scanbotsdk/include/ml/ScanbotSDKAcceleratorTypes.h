// Auto-generated with ScanbotSDKCodegenV3. Modifications will be overwritten.
// Generated from SchemasV3/CoreSchemas/schemas/AcceleratorTypes.yaml
/**
 * @file ScanbotSDKAcceleratorTypes.h
 */

#pragma once
#ifndef SCANBOTSDK_ACCELERATORTYPES_H
#define SCANBOTSDK_ACCELERATORTYPES_H


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
 * @brief scanbotsdk_accelerator_t class
 * @details Accelerator to use for running machine learning models.
 * @ingroup c_ml
*/
typedef struct scanbotsdk_accelerator_t scanbotsdk_accelerator_t;

/**
 * @brief Frees the memory allocated for the instance of scanbotsdk_accelerator_t. If null is passed, the function does nothing.
 * @ingroup c_ml
 * @param object: Pointer to the instance of scanbotsdk_accelerator_t to be freed
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_accelerator_free(scanbotsdk_accelerator_t* object);


/**
 * @brief scanbotsdk_tensor_rt_accelerator_t class
 * @details TensorRT accelerator.
 * @ingroup c_ml
*/
typedef struct scanbotsdk_tensor_rt_accelerator_t scanbotsdk_tensor_rt_accelerator_t;

/**
 * @brief Creates a new instance of scanbotsdk_tensor_rt_accelerator with given params and stores it in the location specified by the last argument.
 * @ingroup c_ml
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param engine_path: Directory in which the TensorRT engine files are stored. The SDK automatically generates the files if they are absent. 
 * 
 * Note, that it might take a few minutes to generate the engine files, therefore it is recommended to set the path to a directory that is not deleted between app launches. 
 * 
 * If the path is empty, the SDK will generate the engine files in the current working directory.
 * 
 * Default is ""
 * The value must not be null.
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_tensor_rt_accelerator_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_tensor_rt_accelerator_create(
    const char* engine_path,
    scanbotsdk_tensor_rt_accelerator_t** result);

/**
 * @brief Creates a new instance of scanbotsdk_tensor_rt_accelerator_t with given required params and stores it in the location specified by the last argument.
 * @ingroup c_ml
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_tensor_rt_accelerator_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_tensor_rt_accelerator_create_with_defaults(
    scanbotsdk_tensor_rt_accelerator_t** result);


/**
 * @brief Frees the memory allocated for the instance of scanbotsdk_tensor_rt_accelerator_t. If null is passed, the function does nothing.
 * @ingroup c_ml
 * @param object: Pointer to the instance of scanbotsdk_tensor_rt_accelerator_t to be freed
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_tensor_rt_accelerator_free(scanbotsdk_tensor_rt_accelerator_t* object);

/**
 * @brief Checks if the given instance of scanbotsdk_accelerator_t is an instance of its subtype scanbotsdk_tensor_rt_accelerator_t.
 * @ingroup c_ml
 * @param object: Pointer to the instance of scanbotsdk_accelerator_t to be checked
 * @param result: Pointer to a variable that will store the result of the check
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
 */
SBSDK_API scanbotsdk_error_code_t scanbotsdk_accelerator_is_scanbotsdk_tensor_rt_accelerator(scanbotsdk_accelerator_t* object, bool* result);
/**
 * @brief Casts the given instance of scanbotsdk_accelerator_t to its subtype scanbotsdk_tensor_rt_accelerator_t. If the given instance is not an instance of the subtype, result will be null.
 * @ingroup c_ml
 * @param object: Pointer to the instance of scanbotsdk_accelerator_t to be casted
 * @param result: Pointer to a variable that will store the casted instance of scanbotsdk_tensor_rt_accelerator_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_accelerator_as_scanbotsdk_tensor_rt_accelerator(scanbotsdk_accelerator_t* object, scanbotsdk_tensor_rt_accelerator_t** result);
/**
 * @brief Casts the given instance of scanbotsdk_tensor_rt_accelerator_t to its parent type scanbotsdk_accelerator_t.
 * @ingroup c_ml
 * @param object: Pointer to the instance of scanbotsdk_accelerator_t to be casted
 * @param result: Pointer to a variable that will store the casted instance of scanbotsdk_tensor_rt_accelerator_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_tensor_rt_accelerator_as_scanbotsdk_accelerator(scanbotsdk_tensor_rt_accelerator_t* object, scanbotsdk_accelerator_t** result);

/**
 * @brief Returns value of engine_path field of the given object. The returned pointers do NOT own the underlying object, caller must not free them.
 * @ingroup c_ml
 * @details Directory in which the TensorRT engine files are stored. The SDK automatically generates the files if they are absent. 
 * 
 * Note, that it might take a few minutes to generate the engine files, therefore it is recommended to set the path to a directory that is not deleted between app launches. 
 * 
 * If the path is empty, the SDK will generate the engine files in the current working directory.
 * 
 * Default is ""
 * @param self: Pointer to the instance of scanbotsdk_tensor_rt_accelerator_t
 * @param engine_path: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_tensor_rt_accelerator_get_engine_path(scanbotsdk_tensor_rt_accelerator_t* self, const char** engine_path);


#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* SCANBOTSDK_ACCELERATORTYPES_H */