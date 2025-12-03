// Auto-generated with ScanbotSDKCodegenV3. Modifications will be overwritten.
// Generated from SchemasV3/CoreSchemas/schemas/ObjectPoolTypes.yaml
/**
 * @file ScanbotSDKObjectPoolTypes.h
 */

#pragma once
#ifndef SCANBOTSDK_OBJECTPOOLTYPES_H
#define SCANBOTSDK_OBJECTPOOLTYPES_H


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
 * @brief scanbotsdk_ref_counted_object_profile_t class
 * @details Profile info of a reference-counted stored object.
 * @ingroup c_utils
*/
typedef struct scanbotsdk_ref_counted_object_profile_t scanbotsdk_ref_counted_object_profile_t;

/**
 * @brief Creates a new instance of scanbotsdk_ref_counted_object_profile with given params and stores it in the location specified by the last argument.
 * @ingroup c_utils
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param unique_id: Unique ID of the object.
 * The value must not be null.
 * @param timestamp_created: Timestamp (milliseconds since the UNIX epoch), at which the object was first created.
 * @param strong_references: Number of strong references associated with the object. The strong reference count increases when a new instance of a platform ImageRef class is created from the object's unique ID and decreases when the ImageRef instance is destroyed.
 * 
 * Default is 0
 * @param serialized_references: Number of serialized references to the object. The serialized reference count increases when an ImageRef is written to JSON or a Parcel on Android and decrease when the respective JSON or Parcel is deserialized.
 * 
 * Default is 0
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_ref_counted_object_profile_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_ref_counted_object_profile_create(
    const char* unique_id,
    int64_t timestamp_created,
    int strong_references,
    int serialized_references,
    scanbotsdk_ref_counted_object_profile_t** result);

/**
 * @brief Creates a new instance of scanbotsdk_ref_counted_object_profile_t with given required params and stores it in the location specified by the last argument.
 * @ingroup c_utils
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param unique_id: Unique ID of the object.
 * The value must not be null.
 * @param timestamp_created: Timestamp (milliseconds since the UNIX epoch), at which the object was first created.
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_ref_counted_object_profile_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_ref_counted_object_profile_create_with_defaults(
    const char* unique_id,
    int64_t timestamp_created,
    scanbotsdk_ref_counted_object_profile_t** result);


/**
 * @brief Frees the memory allocated for the instance of scanbotsdk_ref_counted_object_profile_t. If null is passed, the function does nothing.
 * @ingroup c_utils
 * @param object: Pointer to the instance of scanbotsdk_ref_counted_object_profile_t to be freed
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_ref_counted_object_profile_free(scanbotsdk_ref_counted_object_profile_t* object);

/**
 * @brief Returns value of unique_id field of the given object. The returned pointers do NOT own the underlying object, caller must not free them.
 * @ingroup c_utils
 * @details Unique ID of the object.
 * @param self: Pointer to the instance of scanbotsdk_ref_counted_object_profile_t
 * @param unique_id: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_ref_counted_object_profile_get_unique_id(scanbotsdk_ref_counted_object_profile_t* self, const char** unique_id);

/**
 * @brief Returns value of timestamp_created field of the given object.
 * @ingroup c_utils
 * @details Timestamp (milliseconds since the UNIX epoch), at which the object was first created.
 * @param self: Pointer to the instance of scanbotsdk_ref_counted_object_profile_t
 * @param timestamp_created: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_ref_counted_object_profile_get_timestamp_created(scanbotsdk_ref_counted_object_profile_t* self, int64_t* timestamp_created);

/**
 * @brief Returns value of strong_references field of the given object.
 * @ingroup c_utils
 * @details Number of strong references associated with the object. The strong reference count increases when a new instance of a platform ImageRef class is created from the object's unique ID and decreases when the ImageRef instance is destroyed.
 * 
 * Default is 0
 * @param self: Pointer to the instance of scanbotsdk_ref_counted_object_profile_t
 * @param strong_references: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_ref_counted_object_profile_get_strong_references(scanbotsdk_ref_counted_object_profile_t* self, int* strong_references);

/**
 * @brief Returns value of serialized_references field of the given object.
 * @ingroup c_utils
 * @details Number of serialized references to the object. The serialized reference count increases when an ImageRef is written to JSON or a Parcel on Android and decrease when the respective JSON or Parcel is deserialized.
 * 
 * Default is 0
 * @param self: Pointer to the instance of scanbotsdk_ref_counted_object_profile_t
 * @param serialized_references: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_ref_counted_object_profile_get_serialized_references(scanbotsdk_ref_counted_object_profile_t* self, int* serialized_references);


#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* SCANBOTSDK_OBJECTPOOLTYPES_H */