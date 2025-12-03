// Auto-generated with ScanbotSDKCodegenV3. Modifications will be overwritten.
// Generated from SchemasV3/CoreSchemas/schemas/ImageRefProfiler.yaml
/**
 * @file ScanbotSDKImageRefProfiler.h
 */

#pragma once
#ifndef SCANBOTSDK_IMAGEREFPROFILER_H
#define SCANBOTSDK_IMAGEREFPROFILER_H


#include <image/ScanbotSDKImageRefTypes.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <ScanbotSDKErrorCode.h>
#include <ScanbotSDKDefs.h>

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief scanbotsdk_image_ref_profiler_t class
 * @details ImageRef memory profiler.
 * 
 * ImageRefs are reference-counted. If references aren't correctly released for whatever reason, the image memory will leak. Leaking memory over time may cause out-of-memory crashes and must be avoided. The profiler can return basic and detailed information about all currently alive ImageRefs, that can be useful to track leaking ImageRefs or to confirm that there are no leaks.
 * @ingroup c_image
*/
typedef struct scanbotsdk_image_ref_profiler_t scanbotsdk_image_ref_profiler_t;

/**
 * @brief Frees the memory allocated for the instance of scanbotsdk_image_ref_profiler_t. If null is passed, the function does nothing.
 * @ingroup c_image
 * @param self: Pointer to the instance of scanbotsdk_image_ref_profiler_t to be freed
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_image_ref_profiler_free(
        scanbotsdk_image_ref_profiler_t* self
);

/**
 * @brief Returns a snapshot of all alive ImageRefs. The snapshot contains a list of ImageRefs with information such as in-memory size. If detailed profiling is enabled (by calling enableDetailedProfiling beforehand), the profile will contain additional information such as the source from which each ImageRef has been created.
 * @ingroup c_image
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_image_ref_profiler_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_image_ref_profiler_make_snapshot(
    scanbotsdk_image_ref_pool_snapshot_t** result
);

/**
 * @brief After the function is called, ImageRefs will store additional information, such as source from which they were created. This information may be important when trying to understand a profile. This function must be called BEFORE the first ImageRef is created, otherwise details may be lost.
 * @ingroup c_image
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_image_ref_profiler_enable_detailed_profiling(
);

/**
 * @brief Computes difference between two snapshots. To confirm that a particular operation doesn't leak, take a snapshot before and after the operation, and check that the diff doesn't contain any unexpected new ImageRefs.
 * @ingroup c_image
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param first_snapshot: Snapshot that was taken earlier
 * The value must not be null.
 * @param second_snapshot: Snapshot that was taken later
 * The value must not be null.
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_image_ref_profiler_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_image_ref_profiler_diff(
    scanbotsdk_image_ref_pool_snapshot_t* first_snapshot,
    scanbotsdk_image_ref_pool_snapshot_t* second_snapshot,
    scanbotsdk_image_ref_pool_snapshots_diff_t** result
);


#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* SCANBOTSDK_IMAGEREFPROFILER_H */