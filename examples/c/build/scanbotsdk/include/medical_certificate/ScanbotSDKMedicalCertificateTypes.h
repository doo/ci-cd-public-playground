// Auto-generated with ScanbotSDKCodegenV3. Modifications will be overwritten.
// Generated from SchemasV3/CoreSchemas/schemas/MedicalCertificateTypes.yaml
/**
 * @file ScanbotSDKMedicalCertificateTypes.h
 */

#pragma once
#ifndef SCANBOTSDK_MEDICALCERTIFICATETYPES_H
#define SCANBOTSDK_MEDICALCERTIFICATETYPES_H


#include <ScanbotSDKImage.h>
#include <ScanbotSDKTypes.h>
#include <document_scanner/ScanbotSDKDocumentScannerTypes.h>
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
 * @brief scanbotsdk_medical_certificate_scanning_parameters_t class
 * @details Parameters for the medical certificate scanning. The scanner supports
 * Form 1 (Arbeitsunfähigkeitsbescheinigung) and
 * Form 21a (Ärztliche Bescheinigung für den Bezug von Krankengeld bei Erkrankung eines Kindes)
 * from the KBV (Kassenärztliche Bundesvereinigung) list of forms.
 * @ingroup c_medical_certificate
*/
typedef struct scanbotsdk_medical_certificate_scanning_parameters_t scanbotsdk_medical_certificate_scanning_parameters_t;

/**
 * @brief Creates a new instance of scanbotsdk_medical_certificate_scanning_parameters with given params and stores it in the location specified by the last argument.
 * @ingroup c_medical_certificate
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param should_crop_document: Document will be detected and cropped before recognition.
 * If false, a cropped image of a document is assumed.
 * 
 * Default is true
 * @param recognize_patient_info_box: All data in the patient info box will be extracted.
 * If false, the patient info box is ignored.
 * 
 * Default is true
 * @param recognize_barcode: Some forms are printed with an extra barcode that encodes the same information as the document.
 * Reading the barcode is more reliable than OCR and is recommended when possible.
 * If false, the barcode will not be scanned.
 * 
 * Default is true
 * @param extract_cropped_image: If true, cropped document image will be extracted and returned.
 * 
 * Default is false
 * @param preprocess_input: If true, the image is sharpened before processing.
 * 
 * Default is false
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_medical_certificate_scanning_parameters_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_medical_certificate_scanning_parameters_create(
    bool should_crop_document,
    bool recognize_patient_info_box,
    bool recognize_barcode,
    bool extract_cropped_image,
    bool preprocess_input,
    scanbotsdk_medical_certificate_scanning_parameters_t** result);

/**
 * @brief Creates a new instance of scanbotsdk_medical_certificate_scanning_parameters_t with given required params and stores it in the location specified by the last argument.
 * @ingroup c_medical_certificate
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_medical_certificate_scanning_parameters_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_medical_certificate_scanning_parameters_create_with_defaults(
    scanbotsdk_medical_certificate_scanning_parameters_t** result);


/**
 * @brief Frees the memory allocated for the instance of scanbotsdk_medical_certificate_scanning_parameters_t. If null is passed, the function does nothing.
 * @ingroup c_medical_certificate
 * @param object: Pointer to the instance of scanbotsdk_medical_certificate_scanning_parameters_t to be freed
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_medical_certificate_scanning_parameters_free(scanbotsdk_medical_certificate_scanning_parameters_t* object);

/**
 * @brief Returns value of should_crop_document field of the given object.
 * @ingroup c_medical_certificate
 * @details Document will be detected and cropped before recognition.
 * If false, a cropped image of a document is assumed.
 * 
 * Default is true
 * @param self: Pointer to the instance of scanbotsdk_medical_certificate_scanning_parameters_t
 * @param should_crop_document: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_medical_certificate_scanning_parameters_get_should_crop_document(scanbotsdk_medical_certificate_scanning_parameters_t* self, bool* should_crop_document);
/**
 * @brief Sets value of should_crop_document field of the given object.
 * @ingroup c_medical_certificate
 * @details Document will be detected and cropped before recognition.
 * If false, a cropped image of a document is assumed.
 * 
 * Default is true
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_medical_certificate_scanning_parameters_t, the field of which will be set
 * @param should_crop_document: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_medical_certificate_scanning_parameters_set_should_crop_document(scanbotsdk_medical_certificate_scanning_parameters_t* self, bool should_crop_document);

/**
 * @brief Returns value of recognize_patient_info_box field of the given object.
 * @ingroup c_medical_certificate
 * @details All data in the patient info box will be extracted.
 * If false, the patient info box is ignored.
 * 
 * Default is true
 * @param self: Pointer to the instance of scanbotsdk_medical_certificate_scanning_parameters_t
 * @param recognize_patient_info_box: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_medical_certificate_scanning_parameters_get_recognize_patient_info_box(scanbotsdk_medical_certificate_scanning_parameters_t* self, bool* recognize_patient_info_box);
/**
 * @brief Sets value of recognize_patient_info_box field of the given object.
 * @ingroup c_medical_certificate
 * @details All data in the patient info box will be extracted.
 * If false, the patient info box is ignored.
 * 
 * Default is true
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_medical_certificate_scanning_parameters_t, the field of which will be set
 * @param recognize_patient_info_box: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_medical_certificate_scanning_parameters_set_recognize_patient_info_box(scanbotsdk_medical_certificate_scanning_parameters_t* self, bool recognize_patient_info_box);

/**
 * @brief Returns value of recognize_barcode field of the given object.
 * @ingroup c_medical_certificate
 * @details Some forms are printed with an extra barcode that encodes the same information as the document.
 * Reading the barcode is more reliable than OCR and is recommended when possible.
 * If false, the barcode will not be scanned.
 * 
 * Default is true
 * @param self: Pointer to the instance of scanbotsdk_medical_certificate_scanning_parameters_t
 * @param recognize_barcode: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_medical_certificate_scanning_parameters_get_recognize_barcode(scanbotsdk_medical_certificate_scanning_parameters_t* self, bool* recognize_barcode);
/**
 * @brief Sets value of recognize_barcode field of the given object.
 * @ingroup c_medical_certificate
 * @details Some forms are printed with an extra barcode that encodes the same information as the document.
 * Reading the barcode is more reliable than OCR and is recommended when possible.
 * If false, the barcode will not be scanned.
 * 
 * Default is true
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_medical_certificate_scanning_parameters_t, the field of which will be set
 * @param recognize_barcode: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_medical_certificate_scanning_parameters_set_recognize_barcode(scanbotsdk_medical_certificate_scanning_parameters_t* self, bool recognize_barcode);

/**
 * @brief Returns value of extract_cropped_image field of the given object.
 * @ingroup c_medical_certificate
 * @details If true, cropped document image will be extracted and returned.
 * 
 * Default is false
 * @param self: Pointer to the instance of scanbotsdk_medical_certificate_scanning_parameters_t
 * @param extract_cropped_image: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_medical_certificate_scanning_parameters_get_extract_cropped_image(scanbotsdk_medical_certificate_scanning_parameters_t* self, bool* extract_cropped_image);
/**
 * @brief Sets value of extract_cropped_image field of the given object.
 * @ingroup c_medical_certificate
 * @details If true, cropped document image will be extracted and returned.
 * 
 * Default is false
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_medical_certificate_scanning_parameters_t, the field of which will be set
 * @param extract_cropped_image: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_medical_certificate_scanning_parameters_set_extract_cropped_image(scanbotsdk_medical_certificate_scanning_parameters_t* self, bool extract_cropped_image);

/**
 * @brief Returns value of preprocess_input field of the given object.
 * @ingroup c_medical_certificate
 * @details If true, the image is sharpened before processing.
 * 
 * Default is false
 * @param self: Pointer to the instance of scanbotsdk_medical_certificate_scanning_parameters_t
 * @param preprocess_input: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_medical_certificate_scanning_parameters_get_preprocess_input(scanbotsdk_medical_certificate_scanning_parameters_t* self, bool* preprocess_input);
/**
 * @brief Sets value of preprocess_input field of the given object.
 * @ingroup c_medical_certificate
 * @details If true, the image is sharpened before processing.
 * 
 * Default is false
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_medical_certificate_scanning_parameters_t, the field of which will be set
 * @param preprocess_input: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_medical_certificate_scanning_parameters_set_preprocess_input(scanbotsdk_medical_certificate_scanning_parameters_t* self, bool preprocess_input);


/**
 * @brief scanbotsdk_medical_certificate_check_box_type_t enum
 * @details Type of the checkbox.
 * @ingroup c_medical_certificate
*/
typedef enum scanbotsdk_medical_certificate_check_box_type_t {

    /**Unknown checkbox type.*/
    SCANBOTSDK_MEDICAL_CERTIFICATE_CHECK_BOX_TYPE_UNKNOWN = 0,

    /**(Form 1) Work accident (Arbeitsunfall, Arbeitsunfall-folgen, Berufskrankheit) checkbox.*/
    SCANBOTSDK_MEDICAL_CERTIFICATE_CHECK_BOX_TYPE_WORK_ACCIDENT = 1,

    /**(Form 1) Assigned to accident insurance doctor (dem Durchgangsarzt zugewiesen) checkbox.*/
    SCANBOTSDK_MEDICAL_CERTIFICATE_CHECK_BOX_TYPE_ASSIGNED_TO_ACCIDENT_INSURANCE_DOCTOR = 2,

    /**(Form 1) Initial certificate (Erstbescheinigung) checkbox.*/
    SCANBOTSDK_MEDICAL_CERTIFICATE_CHECK_BOX_TYPE_INITIAL_CERTIFICATE = 3,

    /**(Form 1) Renewed certificate (Folgebescheinigung) checkbox.*/
    SCANBOTSDK_MEDICAL_CERTIFICATE_CHECK_BOX_TYPE_RENEWED_CERTIFICATE = 4,

    /**(Form 1) Insured pay case (ab 7. AU-Woche oder sonstiger Krankengeldfall) checkbox.*/
    SCANBOTSDK_MEDICAL_CERTIFICATE_CHECK_BOX_TYPE_INSURED_PAY_CASE = 5,

    /**(Form 1) Final certificate (Endbescheinigung) checkbox.*/
    SCANBOTSDK_MEDICAL_CERTIFICATE_CHECK_BOX_TYPE_FINAL_CERTIFICATE = 6,

    /**(Form 21a) Requires care yes (Die Art der Erkrankung macht die Betreuung und Beaufsichtigung notwendig... ja) checkbox.*/
    SCANBOTSDK_MEDICAL_CERTIFICATE_CHECK_BOX_TYPE_REQUIRES_CARE_YES = 7,

    /**(Form 21a) Requires care no (Die Art der Erkrankung macht die Betreuung und Beaufsichtigung notwendig... nein) checkbox.*/
    SCANBOTSDK_MEDICAL_CERTIFICATE_CHECK_BOX_TYPE_REQUIRES_CARE_NO = 8,

    /**(Form 21a) Accident yes (Unfall... ja) checkbox.*/
    SCANBOTSDK_MEDICAL_CERTIFICATE_CHECK_BOX_TYPE_ACCIDENT_YES = 9,

    /**(Form 21a) Accident no (Unfall... nein) checkbox.*/
    SCANBOTSDK_MEDICAL_CERTIFICATE_CHECK_BOX_TYPE_ACCIDENT_NO = 10,

    /**(Form 1) Other accident (Sonstiger Unfall, Unfallfolgen) checkbox.*/
    SCANBOTSDK_MEDICAL_CERTIFICATE_CHECK_BOX_TYPE_OTHER_ACCIDENT = 11,

    /**(Form 21a) Entitlement to continued payment yes (Anspruch auf Entgeltfortzahlung) checkbox.*/
    SCANBOTSDK_MEDICAL_CERTIFICATE_CHECK_BOX_TYPE_ENTITLEMENT_TO_CONTINUED_PAYMENT_YES = 12,

    /**(Form 21a) Entitlement to continued payment no (keinen Anspruch auf Entgeltfortzahlung) checkbox.*/
    SCANBOTSDK_MEDICAL_CERTIFICATE_CHECK_BOX_TYPE_ENTITLEMENT_TO_CONTINUED_PAYMENT_NO = 13,

    /**(Form 21a) Sick pay was claimed no (Krankengeld aus Anlass einer früheren Erkrankung des umseitig genannten Kindes wurde in diesem Kalenderjahr NICHT bezogen) checkbox.*/
    SCANBOTSDK_MEDICAL_CERTIFICATE_CHECK_BOX_TYPE_SICK_PAY_WAS_CLAIMED_NO = 14,

    /**(Form 21a) Sick pay was claimed yes (Krankengeld aus Anlass einer früheren Erkrankung des umseitig genannten Kindes wurde in diesem Kalenderjahr bezogen) checkbox.*/
    SCANBOTSDK_MEDICAL_CERTIFICATE_CHECK_BOX_TYPE_SICK_PAY_WAS_CLAIMED_YES = 15,

    /**(Form 21a) Single parent no (Ich bin Alleinerziehende(r)... nein) checkbox.*/
    SCANBOTSDK_MEDICAL_CERTIFICATE_CHECK_BOX_TYPE_SINGLE_PARENT_NO = 16,

    /**(Form 21a) Single parent yes (Ich bin Alleinerziehende(r)... ja) checkbox.*/
    SCANBOTSDK_MEDICAL_CERTIFICATE_CHECK_BOX_TYPE_SINGLE_PARENT_YES = 17,

} scanbotsdk_medical_certificate_check_box_type_t;

/**
 * @brief Returns the string representation of the given scanbotsdk_medical_certificate_check_box_type_t value.
 * @ingroup c_medical_certificate
 * @details The returned string doesn't need to be freed.
 * @param value: The value to be converted to string.
 * @param result: Pointer to a variable that will store the string representation of the value.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_medical_certificate_check_box_type_t_to_string(scanbotsdk_medical_certificate_check_box_type_t value, const char** result);

/**
 * @brief scanbotsdk_medical_certificate_check_box_t class
 * @details Structure to contain full information about found box.
 * @ingroup c_medical_certificate
*/
typedef struct scanbotsdk_medical_certificate_check_box_t scanbotsdk_medical_certificate_check_box_t;

/**
 * @brief Frees the memory allocated for the instance of scanbotsdk_medical_certificate_check_box_t. If null is passed, the function does nothing.
 * @ingroup c_medical_certificate
 * @param object: Pointer to the instance of scanbotsdk_medical_certificate_check_box_t to be freed
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_medical_certificate_check_box_free(scanbotsdk_medical_certificate_check_box_t* object);

/**
 * @brief Returns value of type field of the given object.
 * @ingroup c_medical_certificate
 * @details Box type.
 * 
 * Default is UNKNOWN
 * @param self: Pointer to the instance of scanbotsdk_medical_certificate_check_box_t
 * @param type: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_medical_certificate_check_box_get_type(scanbotsdk_medical_certificate_check_box_t* self, scanbotsdk_medical_certificate_check_box_type_t* type);

/**
 * @brief Returns value of checked field of the given object.
 * @ingroup c_medical_certificate
 * @details True if the box is checked.
 * 
 * Default is false
 * @param self: Pointer to the instance of scanbotsdk_medical_certificate_check_box_t
 * @param checked: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_medical_certificate_check_box_get_checked(scanbotsdk_medical_certificate_check_box_t* self, bool* checked);

/**
 * @brief Returns value of checked_confidence field of the given object.
 * @ingroup c_medical_certificate
 * @details Confidence of the checked/unchecked prediction.
 * 
 * Default is 0.0
 * @param self: Pointer to the instance of scanbotsdk_medical_certificate_check_box_t
 * @param checked_confidence: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_medical_certificate_check_box_get_checked_confidence(scanbotsdk_medical_certificate_check_box_t* self, double* checked_confidence);

/**
 * @brief Returns value of quad field of the given object. The returned value is direct view into memory, no pre-allocations needed.
 * @ingroup c_medical_certificate
 * @details Points of the box.
 * @param self: Pointer to the instance of scanbotsdk_medical_certificate_check_box_t
 * @param quad: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_medical_certificate_check_box_get_quad(scanbotsdk_medical_certificate_check_box_t* self, scanbotsdk_pointf_t** quad);
/**
 * @brief Returns size of quad array.
 * @ingroup c_medical_certificate
 * @param self: Pointer to the instance of scanbotsdk_medical_certificate_check_box_t
 * @param size: Pointer to a variable that will store the size.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_medical_certificate_check_box_get_quad_size(scanbotsdk_medical_certificate_check_box_t* self, size_t* size);


/**
 * @brief scanbotsdk_medical_certificate_date_record_type_t enum
 * @details Type of a date record.
 * @ingroup c_medical_certificate
*/
typedef enum scanbotsdk_medical_certificate_date_record_type_t {

    /**(Form 1) Incapable of work since (arbeitsunfähig seit) date.*/
    SCANBOTSDK_MEDICAL_CERTIFICATE_DATE_RECORD_TYPE_INCAPABLE_OF_WORK_SINCE = 0,

    /**(Form 1) Incapable of work until (voraussichtlich arbeitsunfähig bis einschließlich oder letzter Tag der Arbeitsunfähigkeit) date.*/
    SCANBOTSDK_MEDICAL_CERTIFICATE_DATE_RECORD_TYPE_INCAPABLE_OF_WORK_UNTIL = 1,

    /**(Form 1) Diagnosed on (festgestellt am) date.*/
    SCANBOTSDK_MEDICAL_CERTIFICATE_DATE_RECORD_TYPE_DIAGNOSED_ON = 2,

    /**Document date.*/
    SCANBOTSDK_MEDICAL_CERTIFICATE_DATE_RECORD_TYPE_DOCUMENT_DATE = 3,

    /**Birthdate (geb. am).*/
    SCANBOTSDK_MEDICAL_CERTIFICATE_DATE_RECORD_TYPE_BIRTH_DATE = 4,

    /**(Form 21a) Child needs care from (Das genannte Kind bedarf/bedurfte vom) date.*/
    SCANBOTSDK_MEDICAL_CERTIFICATE_DATE_RECORD_TYPE_CHILD_NEEDS_CARE_FROM = 5,

    /**(Form 21a) Child needs care until (Das genannte Kind bedarf/bedurfte bis einschließlich) date.*/
    SCANBOTSDK_MEDICAL_CERTIFICATE_DATE_RECORD_TYPE_CHILD_NEEDS_CARE_UNTIL = 6,

    /**Undefined date type.*/
    SCANBOTSDK_MEDICAL_CERTIFICATE_DATE_RECORD_TYPE_UNDEFINED = 7,

} scanbotsdk_medical_certificate_date_record_type_t;

/**
 * @brief Returns the string representation of the given scanbotsdk_medical_certificate_date_record_type_t value.
 * @ingroup c_medical_certificate
 * @details The returned string doesn't need to be freed.
 * @param value: The value to be converted to string.
 * @param result: Pointer to a variable that will store the string representation of the value.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_medical_certificate_date_record_type_t_to_string(scanbotsdk_medical_certificate_date_record_type_t value, const char** result);

/**
 * @brief scanbotsdk_medical_certificate_date_record_t class
 * @details Structure to contain date record information.
 * @ingroup c_medical_certificate
*/
typedef struct scanbotsdk_medical_certificate_date_record_t scanbotsdk_medical_certificate_date_record_t;

/**
 * @brief Frees the memory allocated for the instance of scanbotsdk_medical_certificate_date_record_t. If null is passed, the function does nothing.
 * @ingroup c_medical_certificate
 * @param object: Pointer to the instance of scanbotsdk_medical_certificate_date_record_t to be freed
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_medical_certificate_date_record_free(scanbotsdk_medical_certificate_date_record_t* object);

/**
 * @brief Returns value of quad field of the given object. The returned value is direct view into memory, no pre-allocations needed.
 * @ingroup c_medical_certificate
 * @details Date box.
 * @param self: Pointer to the instance of scanbotsdk_medical_certificate_date_record_t
 * @param quad: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_medical_certificate_date_record_get_quad(scanbotsdk_medical_certificate_date_record_t* self, scanbotsdk_pointf_t** quad);
/**
 * @brief Returns size of quad array.
 * @ingroup c_medical_certificate
 * @param self: Pointer to the instance of scanbotsdk_medical_certificate_date_record_t
 * @param size: Pointer to a variable that will store the size.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_medical_certificate_date_record_get_quad_size(scanbotsdk_medical_certificate_date_record_t* self, size_t* size);

/**
 * @brief Returns value of value field of the given object. The returned pointers do NOT own the underlying object, caller must not free them.
 * @ingroup c_medical_certificate
 * @details Validated date string.
 * 
 * Default is ""
 * @param self: Pointer to the instance of scanbotsdk_medical_certificate_date_record_t
 * @param value: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_medical_certificate_date_record_get_value(scanbotsdk_medical_certificate_date_record_t* self, const char** value);

/**
 * @brief Returns value of raw_string field of the given object. The returned pointers do NOT own the underlying object, caller must not free them.
 * @ingroup c_medical_certificate
 * @details Raw date string.
 * 
 * Default is ""
 * @param self: Pointer to the instance of scanbotsdk_medical_certificate_date_record_t
 * @param raw_string: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_medical_certificate_date_record_get_raw_string(scanbotsdk_medical_certificate_date_record_t* self, const char** raw_string);

/**
 * @brief Returns value of type field of the given object.
 * @ingroup c_medical_certificate
 * @details Date type.
 * 
 * Default is UNDEFINED
 * @param self: Pointer to the instance of scanbotsdk_medical_certificate_date_record_t
 * @param type: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_medical_certificate_date_record_get_type(scanbotsdk_medical_certificate_date_record_t* self, scanbotsdk_medical_certificate_date_record_type_t* type);

/**
 * @brief Returns value of recognition_confidence field of the given object.
 * @ingroup c_medical_certificate
 * @details Confidence in the recognized value.
 * 
 * Default is 0.0
 * @param self: Pointer to the instance of scanbotsdk_medical_certificate_date_record_t
 * @param recognition_confidence: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_medical_certificate_date_record_get_recognition_confidence(scanbotsdk_medical_certificate_date_record_t* self, double* recognition_confidence);


/**
 * @brief scanbotsdk_medical_certificate_patient_info_field_type_t enum
 * @details Type of a field in the patient info box.
 * @ingroup c_medical_certificate
*/
typedef enum scanbotsdk_medical_certificate_patient_info_field_type_t {

    /**Insurance provider (Krankenkasse bzw. Kostenträger).*/
    SCANBOTSDK_MEDICAL_CERTIFICATE_PATIENT_INFO_FIELD_TYPE_INSURANCE_PROVIDER = 0,

    /**First name (Vorname des Versicherten).*/
    SCANBOTSDK_MEDICAL_CERTIFICATE_PATIENT_INFO_FIELD_TYPE_FIRST_NAME = 1,

    /**Last name (Name des Versicherten).*/
    SCANBOTSDK_MEDICAL_CERTIFICATE_PATIENT_INFO_FIELD_TYPE_LAST_NAME = 2,

    /**First line of address.*/
    SCANBOTSDK_MEDICAL_CERTIFICATE_PATIENT_INFO_FIELD_TYPE_ADDRESS_STRING1 = 3,

    /**Second line of address.*/
    SCANBOTSDK_MEDICAL_CERTIFICATE_PATIENT_INFO_FIELD_TYPE_ADDRESS_STRING2 = 4,

    /**Diagnose.*/
    SCANBOTSDK_MEDICAL_CERTIFICATE_PATIENT_INFO_FIELD_TYPE_DIAGNOSE = 5,

    /**Number of the health insurance provider (Kostenträgerkennung).*/
    SCANBOTSDK_MEDICAL_CERTIFICATE_PATIENT_INFO_FIELD_TYPE_HEALTH_INSURANCE_NUMBER = 6,

    /**Personal number of the insured person (Versicherten-Nr.).*/
    SCANBOTSDK_MEDICAL_CERTIFICATE_PATIENT_INFO_FIELD_TYPE_INSURED_PERSON_NUMBER = 7,

    /**Status.*/
    SCANBOTSDK_MEDICAL_CERTIFICATE_PATIENT_INFO_FIELD_TYPE_STATUS = 8,

    /**Number of the place of operation (Betriebsstätten-Nr.).*/
    SCANBOTSDK_MEDICAL_CERTIFICATE_PATIENT_INFO_FIELD_TYPE_PLACE_OF_OPERATION_NUMBER = 9,

    /**Number of the doctor (Arzt-Nr.).*/
    SCANBOTSDK_MEDICAL_CERTIFICATE_PATIENT_INFO_FIELD_TYPE_DOCTOR_NUMBER = 10,

    /**Undefined.*/
    SCANBOTSDK_MEDICAL_CERTIFICATE_PATIENT_INFO_FIELD_TYPE_UNDEFINED = 11,

} scanbotsdk_medical_certificate_patient_info_field_type_t;

/**
 * @brief Returns the string representation of the given scanbotsdk_medical_certificate_patient_info_field_type_t value.
 * @ingroup c_medical_certificate
 * @details The returned string doesn't need to be freed.
 * @param value: The value to be converted to string.
 * @param result: Pointer to a variable that will store the string representation of the value.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_medical_certificate_patient_info_field_type_t_to_string(scanbotsdk_medical_certificate_patient_info_field_type_t value, const char** result);

/**
 * @brief scanbotsdk_medical_certificate_patient_info_field_t class
 * @details Patient information field.
 * @ingroup c_medical_certificate
*/
typedef struct scanbotsdk_medical_certificate_patient_info_field_t scanbotsdk_medical_certificate_patient_info_field_t;

/**
 * @brief Frees the memory allocated for the instance of scanbotsdk_medical_certificate_patient_info_field_t. If null is passed, the function does nothing.
 * @ingroup c_medical_certificate
 * @param object: Pointer to the instance of scanbotsdk_medical_certificate_patient_info_field_t to be freed
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_medical_certificate_patient_info_field_free(scanbotsdk_medical_certificate_patient_info_field_t* object);

/**
 * @brief Returns value of type field of the given object.
 * @ingroup c_medical_certificate
 * @details Field type.
 * @param self: Pointer to the instance of scanbotsdk_medical_certificate_patient_info_field_t
 * @param type: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_medical_certificate_patient_info_field_get_type(scanbotsdk_medical_certificate_patient_info_field_t* self, scanbotsdk_medical_certificate_patient_info_field_type_t* type);

/**
 * @brief Returns value of value field of the given object. The returned pointers do NOT own the underlying object, caller must not free them.
 * @ingroup c_medical_certificate
 * @details Field value.
 * @param self: Pointer to the instance of scanbotsdk_medical_certificate_patient_info_field_t
 * @param value: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_medical_certificate_patient_info_field_get_value(scanbotsdk_medical_certificate_patient_info_field_t* self, const char** value);

/**
 * @brief Returns value of recognition_confidence field of the given object.
 * @ingroup c_medical_certificate
 * @details Confidence in the recognized value.
 * @param self: Pointer to the instance of scanbotsdk_medical_certificate_patient_info_field_t
 * @param recognition_confidence: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_medical_certificate_patient_info_field_get_recognition_confidence(scanbotsdk_medical_certificate_patient_info_field_t* self, double* recognition_confidence);


/**
 * @brief scanbotsdk_medical_certificate_patient_info_box_t class
 * @details Patient information box.
 * @ingroup c_medical_certificate
*/
typedef struct scanbotsdk_medical_certificate_patient_info_box_t scanbotsdk_medical_certificate_patient_info_box_t;

/**
 * @brief Frees the memory allocated for the instance of scanbotsdk_medical_certificate_patient_info_box_t. If null is passed, the function does nothing.
 * @ingroup c_medical_certificate
 * @param object: Pointer to the instance of scanbotsdk_medical_certificate_patient_info_box_t to be freed
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_medical_certificate_patient_info_box_free(scanbotsdk_medical_certificate_patient_info_box_t* object);

/**
 * @brief Returns value of quad field of the given object. The returned value is direct view into memory, no pre-allocations needed.
 * @ingroup c_medical_certificate
 * @details Four corners of the patient info box.
 * @param self: Pointer to the instance of scanbotsdk_medical_certificate_patient_info_box_t
 * @param quad: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_medical_certificate_patient_info_box_get_quad(scanbotsdk_medical_certificate_patient_info_box_t* self, scanbotsdk_pointf_t** quad);
/**
 * @brief Returns size of quad array.
 * @ingroup c_medical_certificate
 * @param self: Pointer to the instance of scanbotsdk_medical_certificate_patient_info_box_t
 * @param size: Pointer to a variable that will store the size.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_medical_certificate_patient_info_box_get_quad_size(scanbotsdk_medical_certificate_patient_info_box_t* self, size_t* size);

/**
 * @brief Returns value of fields field of the given object. The returned pointers do NOT own the underlying object, caller must not free them.
 * @ingroup c_medical_certificate
 * @details Vector of found fields.
 * @param self: Pointer to the instance of scanbotsdk_medical_certificate_patient_info_box_t
 @param size: Size of the pre-allocated array. Must be equal to the size obtained by calling the corresponding _size function.
 * @param fields: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_medical_certificate_patient_info_box_get_fields(scanbotsdk_medical_certificate_patient_info_box_t* self, scanbotsdk_medical_certificate_patient_info_field_t** fields, size_t size);
/**
 * @brief Returns size of fields array.
 * @ingroup c_medical_certificate
 * @param self: Pointer to the instance of scanbotsdk_medical_certificate_patient_info_box_t
 * @param size: Pointer to a variable that will store the size.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_medical_certificate_patient_info_box_get_fields_size(scanbotsdk_medical_certificate_patient_info_box_t* self, size_t* size);

/**
 * @brief Returns value of has_contents field of the given object.
 * @ingroup c_medical_certificate
 * @details Whether the patient info box has contents.
 * 
 * Default is false
 * @param self: Pointer to the instance of scanbotsdk_medical_certificate_patient_info_box_t
 * @param has_contents: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_medical_certificate_patient_info_box_get_has_contents(scanbotsdk_medical_certificate_patient_info_box_t* self, bool* has_contents);


/**
 * @brief scanbotsdk_medical_certificate_form_type_t enum
 * @details Type of the medical certificate form.
 * @ingroup c_medical_certificate
*/
typedef enum scanbotsdk_medical_certificate_form_type_t {

    /**Unknown form type.*/
    SCANBOTSDK_MEDICAL_CERTIFICATE_FORM_TYPE_UNKNOWN = 0,

    /**Form 1A.*/
    SCANBOTSDK_MEDICAL_CERTIFICATE_FORM_TYPE_FORM_1A = 1,

    /**Form 1B.*/
    SCANBOTSDK_MEDICAL_CERTIFICATE_FORM_TYPE_FORM_1B = 2,

    /**Form 1C.*/
    SCANBOTSDK_MEDICAL_CERTIFICATE_FORM_TYPE_FORM_1C = 3,

    /**Form 1D.*/
    SCANBOTSDK_MEDICAL_CERTIFICATE_FORM_TYPE_FORM_1D = 4,

    /**Form 21A.*/
    SCANBOTSDK_MEDICAL_CERTIFICATE_FORM_TYPE_FORM_21A = 5,

    /**Form 21A back.*/
    SCANBOTSDK_MEDICAL_CERTIFICATE_FORM_TYPE_FORM_21A_BACK = 6,

    /**Form 1B custom.*/
    SCANBOTSDK_MEDICAL_CERTIFICATE_FORM_TYPE_FORM_1B_CUSTOM = 7,

} scanbotsdk_medical_certificate_form_type_t;

/**
 * @brief Returns the string representation of the given scanbotsdk_medical_certificate_form_type_t value.
 * @ingroup c_medical_certificate
 * @details The returned string doesn't need to be freed.
 * @param value: The value to be converted to string.
 * @param result: Pointer to a variable that will store the string representation of the value.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_medical_certificate_form_type_t_to_string(scanbotsdk_medical_certificate_form_type_t value, const char** result);

/**
 * @brief scanbotsdk_medical_certificate_scanning_result_t class
 * @details The result of the medical certificate scanning.
 * @ingroup c_medical_certificate
*/
typedef struct scanbotsdk_medical_certificate_scanning_result_t scanbotsdk_medical_certificate_scanning_result_t;

/**
 * @brief Frees the memory allocated for the instance of scanbotsdk_medical_certificate_scanning_result_t. If null is passed, the function does nothing.
 * @ingroup c_medical_certificate
 * @param object: Pointer to the instance of scanbotsdk_medical_certificate_scanning_result_t to be freed
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_medical_certificate_scanning_result_free(scanbotsdk_medical_certificate_scanning_result_t* object);

/**
 * @brief Returns value of scanning_successful field of the given object.
 * @ingroup c_medical_certificate
 * @details True if scanning was successful.
 * 
 * Default is false
 * @param self: Pointer to the instance of scanbotsdk_medical_certificate_scanning_result_t
 * @param scanning_successful: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_medical_certificate_scanning_result_get_scanning_successful(scanbotsdk_medical_certificate_scanning_result_t* self, bool* scanning_successful);

/**
 * @brief Returns value of patient_info_box field of the given object. The returned pointers do NOT own the underlying object, caller must not free them.
 * @ingroup c_medical_certificate
 * @details Patient info box.
 * @param self: Pointer to the instance of scanbotsdk_medical_certificate_scanning_result_t
 * @param patient_info_box: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_medical_certificate_scanning_result_get_patient_info_box(scanbotsdk_medical_certificate_scanning_result_t* self, scanbotsdk_medical_certificate_patient_info_box_t** patient_info_box);

/**
 * @brief Returns value of check_boxes field of the given object. The returned pointers do NOT own the underlying object, caller must not free them.
 * @ingroup c_medical_certificate
 * @details Found checkboxes.
 * @param self: Pointer to the instance of scanbotsdk_medical_certificate_scanning_result_t
 @param size: Size of the pre-allocated array. Must be equal to the size obtained by calling the corresponding _size function.
 * @param check_boxes: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_medical_certificate_scanning_result_get_check_boxes(scanbotsdk_medical_certificate_scanning_result_t* self, scanbotsdk_medical_certificate_check_box_t** check_boxes, size_t size);
/**
 * @brief Returns size of check_boxes array.
 * @ingroup c_medical_certificate
 * @param self: Pointer to the instance of scanbotsdk_medical_certificate_scanning_result_t
 * @param size: Pointer to a variable that will store the size.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_medical_certificate_scanning_result_get_check_boxes_size(scanbotsdk_medical_certificate_scanning_result_t* self, size_t* size);

/**
 * @brief Returns value of dates field of the given object. The returned pointers do NOT own the underlying object, caller must not free them.
 * @ingroup c_medical_certificate
 * @details Found dates.
 * @param self: Pointer to the instance of scanbotsdk_medical_certificate_scanning_result_t
 @param size: Size of the pre-allocated array. Must be equal to the size obtained by calling the corresponding _size function.
 * @param dates: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_medical_certificate_scanning_result_get_dates(scanbotsdk_medical_certificate_scanning_result_t* self, scanbotsdk_medical_certificate_date_record_t** dates, size_t size);
/**
 * @brief Returns size of dates array.
 * @ingroup c_medical_certificate
 * @param self: Pointer to the instance of scanbotsdk_medical_certificate_scanning_result_t
 * @param size: Pointer to a variable that will store the size.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_medical_certificate_scanning_result_get_dates_size(scanbotsdk_medical_certificate_scanning_result_t* self, size_t* size);

/**
 * @brief Returns value of form_type field of the given object.
 * @ingroup c_medical_certificate
 * @details Form type.
 * 
 * Default is UNKNOWN
 * @param self: Pointer to the instance of scanbotsdk_medical_certificate_scanning_result_t
 * @param form_type: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_medical_certificate_scanning_result_get_form_type(scanbotsdk_medical_certificate_scanning_result_t* self, scanbotsdk_medical_certificate_form_type_t* form_type);

/**
 * @brief Returns value of clockwise_rotations field of the given object.
 * @ingroup c_medical_certificate
 * @details The number of 90-degree clockwise rotations that were applied to the original image.
 * The same number of counter-clockwise rotations are necessary to make the image upright again.
 * 
 * Default is 0
 * @param self: Pointer to the instance of scanbotsdk_medical_certificate_scanning_result_t
 * @param clockwise_rotations: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_medical_certificate_scanning_result_get_clockwise_rotations(scanbotsdk_medical_certificate_scanning_result_t* self, int* clockwise_rotations);

/**
 * @brief Returns value of cropped_image field of the given object. The returned pointers do NOT own the underlying object, caller must not free them.
 * @ingroup c_medical_certificate
 * @details The cropped image used for recognition.
 * @param self: Pointer to the instance of scanbotsdk_medical_certificate_scanning_result_t
 * @param cropped_image: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_medical_certificate_scanning_result_get_cropped_image(scanbotsdk_medical_certificate_scanning_result_t* self, scanbotsdk_image_t** cropped_image);

/**
 * @brief Returns value of scale_x field of the given object.
 * @ingroup c_medical_certificate
 * @details The scale factor used to scale the image to the recognition size.
 * 
 * Default is 1.0
 * @param self: Pointer to the instance of scanbotsdk_medical_certificate_scanning_result_t
 * @param scale_x: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_medical_certificate_scanning_result_get_scale_x(scanbotsdk_medical_certificate_scanning_result_t* self, double* scale_x);

/**
 * @brief Returns value of scale_y field of the given object.
 * @ingroup c_medical_certificate
 * @details The scale factor used to scale the image to the recognition size.
 * 
 * Default is 1.0
 * @param self: Pointer to the instance of scanbotsdk_medical_certificate_scanning_result_t
 * @param scale_y: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_medical_certificate_scanning_result_get_scale_y(scanbotsdk_medical_certificate_scanning_result_t* self, double* scale_y);

/**
 * @brief Returns value of document_detection_result field of the given object. The returned pointers do NOT own the underlying object, caller must not free them.
 * @ingroup c_medical_certificate
 * @details Result of the document detection in the input image. Is available only if the shouldCropDocument parameter is set to true.
 * @param self: Pointer to the instance of scanbotsdk_medical_certificate_scanning_result_t
 * @param document_detection_result: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_medical_certificate_scanning_result_get_document_detection_result(scanbotsdk_medical_certificate_scanning_result_t* self, scanbotsdk_document_detection_result_t** document_detection_result);


#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* SCANBOTSDK_MEDICALCERTIFICATETYPES_H */