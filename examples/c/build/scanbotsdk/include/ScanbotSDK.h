/**
 * @file ScanbotSDK.h
 * @brief The Scanbot SDK C API
 */

#pragma once
#ifndef SCANBOTSDK_H
#define SCANBOTSDK_H

#include <ScanbotSDKDefs.h>
#include <ScanbotSDKErrorCode.h>
#include <ScanbotSDKImport.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @defgroup c_source Scanbot C SDK Source
 */

/**
 * @defgroup C-Initialization Scanbot C SDK Initialization and License Management
 * @{*/

/**
 * @brief Returns the git version of the Scanbot SDK as a null-terminated string.
 */
SBSDK_API const char* scanbotsdk_get_git_version();

/**
 * @brief Initialization parameters for the Scanbot SDK.
 */
typedef struct scanbotsdk_init_params_t {
    /** @brief The license key. Must be a null terminated string. */
    const char* license_key;

    /** @brief Path to which the SDK can write internal data. */
    const char* writeable_path;
} scanbotsdk_init_params_t;

/**
 * @brief Initialize the Scanbot SDK. You must always call this function before using any other
 * Scanbot SDK functions.
 * @param init_params: The initialization parameters. You must provide a valid license key.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if license initialization was successful
 */
SBSDK_API scanbotsdk_error_code_t
scanbotsdk_initialize(const scanbotsdk_init_params_t* init_params);

/**
 @brief Effectively notifies the server that the license is no longer used by this device.
 @details After calling the method SDK behaves like no license is available.
 * You should call this method if you are using floating license to notify the server that the
 device is no longer using the license and so another device can use it.
 * If you are using a floating license, but you do not call this method, the license will be
 released automatically after a period specified in the license.
 * If during work with the SDK you initialize  the SDK with multiple licenses, there is no need to
 call the function after finishing work with each of the licenses, only with the last one. For
 others, the function is implicitly called automatically.
 * The function returns immediately, but the deregistration process may take some time.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
 */
SBSDK_API scanbotsdk_error_code_t scanbotsdk_deregister_device();

/**
 * @brief Wait for the completion of the all device deregistration processes. See <see
 cref="scanbotsdk_deregister_device"/> for more information.
 * @param timeout_ms: Timeout in milliseconds.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
            <see cref="SCANBOTSDK_ERROR_TIMEOUT_ERROR"/> if waiting times out.
 */
SBSDK_API scanbotsdk_error_code_t
scanbotsdk_wait_for_device_deregistration_completion(int timeout_ms);

/**
 * @brief Returns the current license information.
 * @param info: Pointer to a variable that will be set to the current license information.
                The caller must call scanbotsdk_license_info_free() once the object
                is no longer needed.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
 */
SBSDK_API scanbotsdk_error_code_t scanbotsdk_get_license_info(scanbotsdk_license_info_t** info);

/**
 * @brief Wait for the completion of the online license check. Returns immediately if there's no
 online license check in progress.
 * @param timeout_ms: Timeout in milliseconds.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
            <see cref="SCANBOTSDK_ERROR_TIMEOUT_ERROR"/> if waiting times out.
 */
SBSDK_API scanbotsdk_error_code_t
scanbotsdk_wait_for_online_license_check_completion(int timeout_ms);

/**
 * @defgroup C-Logging Scanbot C SDK Logger
 * @{*/

/**
 * @brief Enable or disable logging.
 * @details By default logging is enabled and logs will be written to the console.
 * Call <see cref="scanbotsdk_set_log_handler"/> to set a custom log handler.
 * @param enable: True to enable logging, false to disable logging
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
 */
SBSDK_API scanbotsdk_error_code_t scanbotsdk_set_logging(bool enable);

/**
 * @brief Sets the log handler.
 * @param log_handler: A pointer to the new log handler function.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
 */
SBSDK_API scanbotsdk_error_code_t
scanbotsdk_set_log_handler(void (*log_handler)(const char* message));

/**
 * @brief Resets any previously set log handler.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
 */
SBSDK_API scanbotsdk_error_code_t scanbotsdk_reset_log_handler();

/**
 * @brief Logs an error message using the Scanbot SDK logger.
 * @param message: The error message, a null terminated string.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
 */
SBSDK_API scanbotsdk_error_code_t scanbotsdk_log_error(const char* message);

/**@}*/

#ifdef __cplusplus
} /* extern "C" */
#endif
#endif /* SCANBOTSDK_H */
