/**
 * @file ScanbotSDKRandomAccessSource.h
 * @brief ScanbotSDK Random Access Source C API
 */

#pragma once

#ifndef SCANBOTSDK_RANDOM_ACCESS_SOURCE_H
#define SCANBOTSDK_RANDOM_ACCESS_SOURCE_H

#include <ScanbotSDKDefs.h>
#include <ScanbotSDKErrorCode.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @brief Represents an instance of the opaque random access source
 * @ingroup c_source
 * @details Must be destroyed with <see cref="scanbotsdk_random_access_source_free"/> after use.
 */
typedef struct scanbotsdk_random_access_source_t scanbotsdk_random_access_source_t;

/**
 * @brief Provides interface for implementing custom random access source.
 * @ingroup c_source
 */
typedef struct scanbotsdk_external_random_access_source_t {
    /**
     * @brief Pointer to the source instance.
     */
    void* source;

    /**
     * @brief Pointer to the data stored by source.
     */
    const char* data;

    /**
     * @brief Size of the data stored by source.
     */
    size_t size;

    /**
     * @brief True if the source instance owns the data. Here owns means that holding a
     * pointer to the source is enough to keep the data alive.
     */
    bool is_owning;

    /**
     * @brief Frees the source instance.
     */
    void (*free)(void* source);
} scanbotsdk_external_random_access_source_t;

/**
 * @brief Destroys the source instance. If null is passed does nothing.
 * @ingroup c_source
 * @param object: Pointer to the source instance
 */
SBSDK_API scanbotsdk_error_code_t
scanbotsdk_random_access_source_free(scanbotsdk_random_access_source_t* object);

/**
 * @brief Creates a new instance of the random access source from the path to a file.
 * @ingroup c_source
 * @param path: Pointer to file path
 * @param result: Pointer to a variable that will be set to the new source instance.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if creation was successful
 */
SBSDK_API scanbotsdk_error_code_t scanbotsdk_random_access_source_create_from_path(
    const char* path,
    scanbotsdk_random_access_source_t** result);

/**
 * @brief Creates a new instance of the random access source from an external implementation of
 * random access source.
 * @ingroup c_source
 * @param external_source: External source implementation
 * @param result: Pointer to a variable that will be set to the new source instance.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if creation was successful
 */
SBSDK_API scanbotsdk_error_code_t scanbotsdk_random_access_source_create_from_external(
    scanbotsdk_external_random_access_source_t external_source,
    scanbotsdk_random_access_source_t** result);

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif
