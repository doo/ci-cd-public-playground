// Auto-generated with ScanbotSDKCodegenV3. Modifications will be overwritten.
// Generated from SchemasV3/CoreSchemas/schemas/LicensingTypes.yaml
/**
 * @file ScanbotSDKLicensingTypes.h
 */

#pragma once
#ifndef SCANBOTSDK_LICENSINGTYPES_H
#define SCANBOTSDK_LICENSINGTYPES_H


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
 * @brief scanbotsdk_license_status_t enum
 * @details Status of the license plate scanner.
 * @ingroup c_licensing
*/
typedef enum scanbotsdk_license_status_t {

    /**License is valid and accepted.*/
    SCANBOTSDK_LICENSE_STATUS_OKAY = 0,

    /**No license set yet. The SDK is in trial mode.*/
    SCANBOTSDK_LICENSE_STATUS_TRIAL = 1,

    /**License is valid but will expire soon. Make sure to update your license before it expires to ensure uninterrupted function.*/
    SCANBOTSDK_LICENSE_STATUS_OKAY_EXPIRING_SOON = 2,

    /**No license set. On platforms that support trial mode, it means that the SDK's trial mode is over.*/
    SCANBOTSDK_LICENSE_STATUS_FAILURE_NOT_SET = 10,

    /**No license active. The set license was unreadable or has an invalid format.*/
    SCANBOTSDK_LICENSE_STATUS_FAILURE_CORRUPTED = 11,

    /**No license active. The set license does not cover the current operating system.*/
    SCANBOTSDK_LICENSE_STATUS_FAILURE_WRONG_OS = 12,

    /**No license active. The set license does not cover the current app's bundle identifier.*/
    SCANBOTSDK_LICENSE_STATUS_FAILURE_APP_ID_MISMATCH = 13,

    /**No license active. The set license is valid but it has expired.*/
    SCANBOTSDK_LICENSE_STATUS_FAILURE_EXPIRED = 14,

    /**No license active. The online license check failed.*/
    SCANBOTSDK_LICENSE_STATUS_FAILURE_SERVER = 15,

    /**No license active. The set license does not cover the current SDK version.*/
    SCANBOTSDK_LICENSE_STATUS_FAILURE_VERSION = 16,

    /**No license active. The set license is not yet active.*/
    SCANBOTSDK_LICENSE_STATUS_FAILURE_INACTIVE = 17,

} scanbotsdk_license_status_t;

/**
 * @brief Returns the string representation of the given scanbotsdk_license_status_t value.
 * @ingroup c_licensing
 * @details The returned string doesn't need to be freed.
 * @param value: The value to be converted to string.
 * @param result: Pointer to a variable that will store the string representation of the value.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_license_status_t_to_string(scanbotsdk_license_status_t value, const char** result);

/**
 * @brief scanbotsdk_device_deregistration_error_t class
 * @details Description of error that occurred during device deregistration.
 * @ingroup c_licensing
*/
typedef struct scanbotsdk_device_deregistration_error_t scanbotsdk_device_deregistration_error_t;

/**
 * @brief Creates a new instance of scanbotsdk_device_deregistration_error with given params and stores it in the location specified by the last argument.
 * @ingroup c_licensing
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param device_id: Sequential number of the device registration. Starts with 0. Each time a call to initializeLicense with a new license is made, the device ID.
 * @param error_message: Error message describing the error.
 * The value must not be null.
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_device_deregistration_error_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_device_deregistration_error_create(
    int device_id,
    const char* error_message,
    scanbotsdk_device_deregistration_error_t** result);


/**
 * @brief Frees the memory allocated for the instance of scanbotsdk_device_deregistration_error_t. If null is passed, the function does nothing.
 * @ingroup c_licensing
 * @param object: Pointer to the instance of scanbotsdk_device_deregistration_error_t to be freed
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_device_deregistration_error_free(scanbotsdk_device_deregistration_error_t* object);

/**
 * @brief Returns value of device_id field of the given object.
 * @ingroup c_licensing
 * @details Sequential number of the device registration. Starts with 0. Each time a call to initializeLicense with a new license is made, the device ID.
 * @param self: Pointer to the instance of scanbotsdk_device_deregistration_error_t
 * @param device_id: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_device_deregistration_error_get_device_id(scanbotsdk_device_deregistration_error_t* self, int* device_id);

/**
 * @brief Returns value of error_message field of the given object. The returned pointers do NOT own the underlying object, caller must not free them.
 * @ingroup c_licensing
 * @details Error message describing the error.
 * @param self: Pointer to the instance of scanbotsdk_device_deregistration_error_t
 * @param error_message: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_device_deregistration_error_get_error_message(scanbotsdk_device_deregistration_error_t* self, const char** error_message);


/**
 * @brief scanbotsdk_license_info_t class
 * @details Information about the SDK license.
 * @ingroup c_licensing
*/
typedef struct scanbotsdk_license_info_t scanbotsdk_license_info_t;

/**
 * @brief Frees the memory allocated for the instance of scanbotsdk_license_info_t. If null is passed, the function does nothing.
 * @ingroup c_licensing
 * @param object: Pointer to the instance of scanbotsdk_license_info_t to be freed
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_license_info_free(scanbotsdk_license_info_t* object);

/**
 * @brief Returns value of status field of the given object.
 * @ingroup c_licensing
 * @details License status.
 * @param self: Pointer to the instance of scanbotsdk_license_info_t
 * @param status: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_license_info_get_status(scanbotsdk_license_info_t* self, scanbotsdk_license_status_t* status);

/**
 * @brief Returns value of is_valid field of the given object.
 * @ingroup c_licensing
 * @details True if the license status corresponds to a valid license.
 * @param self: Pointer to the instance of scanbotsdk_license_info_t
 * @param is_valid: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_license_info_get_is_valid(scanbotsdk_license_info_t* self, bool* is_valid);

/**
 * @brief Returns value of license_status_message field of the given object. The returned pointers do NOT own the underlying object, caller must not free them.
 * @ingroup c_licensing
 * @details Message describing the license status.
 * @param self: Pointer to the instance of scanbotsdk_license_info_t
 * @param license_status_message: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_license_info_get_license_status_message(scanbotsdk_license_info_t* self, const char** license_status_message);

/**
 * @brief Returns value of expiration_timestamp field of the given object.
 * @ingroup c_licensing
 * @details Expiration timestamp of the license or trial period in seconds since the UNIX epoch.
 * @param self: Pointer to the instance of scanbotsdk_license_info_t
 * @param expiration_timestamp: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_license_info_get_expiration_timestamp(scanbotsdk_license_info_t* self, double* expiration_timestamp);

/**
 * @brief Returns value of expiration_date_string field of the given object. The returned pointers do NOT own the underlying object, caller must not free them.
 * @ingroup c_licensing
 * @details Expiration date of the license or trial period in ISO 8601 date-time format.
 * @param self: Pointer to the instance of scanbotsdk_license_info_t
 * @param expiration_date_string: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_license_info_get_expiration_date_string(scanbotsdk_license_info_t* self, const char** expiration_date_string);

/**
 * @brief Returns value of error_message field of the given object. The returned pointers do NOT own the underlying object, caller must not free them.
 * @ingroup c_licensing
 * @details Additional error message in case of a license error.
 * @param self: Pointer to the instance of scanbotsdk_license_info_t
 * @param error_message: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_license_info_get_error_message(scanbotsdk_license_info_t* self, const char** error_message);

/**
 * @brief Returns value of online_license_check_in_progress field of the given object.
 * @ingroup c_licensing
 * @details True if an online license check is in progress.
 * @param self: Pointer to the instance of scanbotsdk_license_info_t
 * @param online_license_check_in_progress: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_license_info_get_online_license_check_in_progress(scanbotsdk_license_info_t* self, bool* online_license_check_in_progress);

/**
 * @brief Returns value of license field of the given object. The returned pointers do NOT own the underlying object, caller must not free them.
 * @ingroup c_licensing
 * @details The currently active license. May be different from the license used to initialize
 * the SDK if the online license check has completed and the server has sent
 * an updated license.
 * @param self: Pointer to the instance of scanbotsdk_license_info_t
 * @param license: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_license_info_get_license(scanbotsdk_license_info_t* self, const char** license);

/**
 * @brief Returns value of devices field of the given object. The returned pointers do NOT own the underlying object, caller must not free them.
 * @ingroup c_licensing
 * @details Number of devices the license is valid for, if the license is floating.
 * @param self: Pointer to the instance of scanbotsdk_license_info_t
 * @param devices: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_license_info_get_devices(scanbotsdk_license_info_t* self, int** devices);

/**
 * @brief Returns value of next_online_license_check_in_ms field of the given object.
 * @ingroup c_licensing
 * @details Time in milliseconds until the next online license check will be performed. -1 if no online license check is scheduled.
 * @param self: Pointer to the instance of scanbotsdk_license_info_t
 * @param next_online_license_check_in_ms: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_license_info_get_next_online_license_check_in_ms(scanbotsdk_license_info_t* self, double* next_online_license_check_in_ms);

/**
 * @brief Returns value of device_deregistation_errors field of the given object. The returned pointers do NOT own the underlying object, caller must not free them.
 * @ingroup c_licensing
 * @details List of errors that occurred during device deregistration. If for some device deregistration completed successfully, it will not be listed here. For each device at most one entry will be present.
 * @param self: Pointer to the instance of scanbotsdk_license_info_t
 @param size: Size of the pre-allocated array. Must be equal to the size obtained by calling the corresponding _size function.
 * @param device_deregistation_errors: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_license_info_get_device_deregistation_errors(scanbotsdk_license_info_t* self, scanbotsdk_device_deregistration_error_t** device_deregistation_errors, size_t size);
/**
 * @brief Returns size of device_deregistation_errors array.
 * @ingroup c_licensing
 * @param self: Pointer to the instance of scanbotsdk_license_info_t
 * @param size: Pointer to a variable that will store the size.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_license_info_get_device_deregistation_errors_size(scanbotsdk_license_info_t* self, size_t* size);


/**
 * @brief scanbotsdk_feature_t enum
 * @details License features.
 * @ingroup c_licensing
*/
typedef enum scanbotsdk_feature_t {

    /**Barcode scanner.*/
    SCANBOTSDK_FEATURE_BARCODE_SCANNER = 0,

    /**Check scanner.*/
    SCANBOTSDK_FEATURE_CHECK_SCANNER = 1,

    /**Credit card scanner.*/
    SCANBOTSDK_FEATURE_CREDIT_CARD_SCANNER = 2,

    /**Image processing.*/
    SCANBOTSDK_FEATURE_IMAGE_PROCESSING = 3,

    /**Document scanner.*/
    SCANBOTSDK_FEATURE_DOCUMENT_SCANNER = 4,

    /**License plate scanner.*/
    SCANBOTSDK_FEATURE_LICENSE_PLATE_SCANNER = 5,

    /**Medical certificate scanner.*/
    SCANBOTSDK_FEATURE_MEDICAL_CERTIFICATE_SCANNER = 6,

    /**MRZ scanner.*/
    SCANBOTSDK_FEATURE_MRZ_SCANNER = 7,

    /**OCR.*/
    SCANBOTSDK_FEATURE_OCR = 8,

    /**Text pattern scanner.*/
    SCANBOTSDK_FEATURE_TEXT_PATTERN_SCANNER = 9,

    /**PDF creation.*/
    SCANBOTSDK_FEATURE_PDF_CREATION = 10,

    /**ID card scanner.*/
    SCANBOTSDK_FEATURE_ID_CARD_SCANNER = 11,

    /**Driver license scanner.*/
    SCANBOTSDK_FEATURE_DRIVER_LICENSE_SCANNER = 12,

    /**EHIC scanner.*/
    SCANBOTSDK_FEATURE_EHIC_SCANNER = 13,

    /**Document classification.*/
    SCANBOTSDK_FEATURE_DOCUMENT_CLASSIFICATION = 14,

} scanbotsdk_feature_t;

/**
 * @brief Returns the string representation of the given scanbotsdk_feature_t value.
 * @ingroup c_licensing
 * @details The returned string doesn't need to be freed.
 * @param value: The value to be converted to string.
 * @param result: Pointer to a variable that will store the string representation of the value.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_feature_t_to_string(scanbotsdk_feature_t value, const char** result);

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* SCANBOTSDK_LICENSINGTYPES_H */