/**
 * @file ScanbotSDKErrorCode.h
 * @brief ScanbotSDK Error Code C API
 */

#pragma once
#ifndef SCANBOTSDK_ERROR_CODE_H
#define SCANBOTSDK_ERROR_CODE_H

#include <stdbool.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @brief Error message for the last error code returned by the Scanbot SDK functions
 */
const char* scanbotsdk_error_message();

/**
 * @brief The error codes returned by most of the Scanbot SDK functions
 */
typedef enum scanbotsdk_error_code_t {
    /** No error */
    SCANBOTSDK_OK = 0,

    /** An unknown error has occurred */
    SCANBOTSDK_ERROR_UNKNOWN_ERROR,

    /**
     * There is no installed license, the license is invalid, no longer valid
     * or does not cover the current OS or operation. Check the license status
     * for more details by calling <see cref="scanbotsdk_get_license_status"/>.
     */
    SCANBOTSDK_ERROR_INVALID_LICENSE_STATUS,

    /** A null pointer was passed to a function */
    SCANBOTSDK_ERROR_NULL_POINTER,

    /** An invalid argument was passed to a function */
    SCANBOTSDK_ERROR_INVALID_ARGUMENT,

    /** Image operation such as save or encode failed */
    SCANBOTSDK_ERROR_INVALID_IMAGE_REF,

    /** Scanbot SDK component needed for the operation is not available */
    SCANBOTSDK_ERROR_COMPONENT_UNAVAILABLE,

    /** The operation is not allowed in the current state */
    SCANBOTSDK_ERROR_ILLEGAL_STATE,

    /** Input/output error */
    SCANBOTSDK_ERROR_IO_ERROR,

    /** The data to be processed is invalid */
    SCANBOTSDK_ERROR_INVALID_DATA,

    /** The operation was canceled */
    SCANBOTSDK_ERROR_OPERATION_CANCELED,

    /** The operation ran out of memory */
    SCANBOTSDK_ERROR_OUT_OF_MEMORY,

    /** The operation timed out */
    SCANBOTSDK_ERROR_TIMEOUT
} scanbotsdk_error_code_t;

#ifdef __cplusplus
}
#endif
#endif
