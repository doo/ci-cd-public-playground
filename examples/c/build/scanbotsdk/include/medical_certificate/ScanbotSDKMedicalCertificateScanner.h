// Auto-generated with ScanbotSDKCodegenV3. Modifications will be overwritten.
// Generated from SchemasV3/CoreSchemas/schemas/MedicalCertificateScanner.yaml
/**
 * @file ScanbotSDKMedicalCertificateScanner.h
 */

#pragma once
#ifndef SCANBOTSDK_MEDICALCERTIFICATESCANNER_H
#define SCANBOTSDK_MEDICALCERTIFICATESCANNER_H


#include <ScanbotSDKImage.h>
#include <medical_certificate/ScanbotSDKMedicalCertificateTypes.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <ScanbotSDKErrorCode.h>
#include <ScanbotSDKDefs.h>

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief scanbotsdk_medical_certificate_scanner_t class
 * @details API for medical certificate scanning.
 * 
 * Required licence feature(s): MedicalCertificateScanner.
 * @ingroup c_medical_certificate
*/
typedef struct scanbotsdk_medical_certificate_scanner_t scanbotsdk_medical_certificate_scanner_t;

/**
 * @brief Creates a new instance of scanbotsdk_medical_certificate_scanner with given params and stores it in the location specified by the last argument.
 * @ingroup c_medical_certificate
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_medical_certificate_scanner_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_medical_certificate_scanner_create(
        scanbotsdk_medical_certificate_scanner_t** result
);

/**
 * @brief Frees the memory allocated for the instance of scanbotsdk_medical_certificate_scanner_t. If null is passed, the function does nothing.
 * @ingroup c_medical_certificate
 * @param self: Pointer to the instance of scanbotsdk_medical_certificate_scanner_t to be freed
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_medical_certificate_scanner_free(
        scanbotsdk_medical_certificate_scanner_t* self
);

/**
 * @brief Recognize the document in the given image.
 * @ingroup c_medical_certificate
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_medical_certificate_scanner_t method to be called on
 * @param image: The image to recognize.
 * The value must not be null.
 * @param parameters: The recognition parameters.
 * The value must not be null.
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_medical_certificate_scanner_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_medical_certificate_scanner_run(
    scanbotsdk_medical_certificate_scanner_t* self, 
    scanbotsdk_image_t* image,
    scanbotsdk_medical_certificate_scanning_parameters_t* parameters,
    scanbotsdk_medical_certificate_scanning_result_t** result
);


#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* SCANBOTSDK_MEDICALCERTIFICATESCANNER_H */