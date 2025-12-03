// Auto-generated with ScanbotSDKCodegenV3. Modifications will be overwritten.
// Generated from SchemasV3/CoreSchemas/schemas/PDFConfigurationTypes.yaml
/**
 * @file ScanbotSDKPdfConfigurationTypes.h
 */

#pragma once
#ifndef SCANBOTSDK_PDFCONFIGURATIONTYPES_H
#define SCANBOTSDK_PDFCONFIGURATIONTYPES_H


#include <image_processing/ScanbotSDKParametricFilters.h>
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
 * @brief scanbotsdk_pdf_attributes_t class
 * @details PDF attributes.
 * @ingroup c_pdf_generation
*/
typedef struct scanbotsdk_pdf_attributes_t scanbotsdk_pdf_attributes_t;

/**
 * @brief Creates a new instance of scanbotsdk_pdf_attributes with given params and stores it in the location specified by the last argument.
 * @ingroup c_pdf_generation
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param author: Author.
 * 
 * Default is "Created with Scanbot SDK"
 * The value must not be null.
 * @param creator: Creator.
 * 
 * Default is ""
 * The value must not be null.
 * @param title: Title.
 * 
 * Default is ""
 * The value must not be null.
 * @param subject: Subject.
 * 
 * Default is ""
 * The value must not be null.
 * @param keywords: Keywords.
 * 
 * Default is ""
 * The value must not be null.
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_pdf_attributes_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_pdf_attributes_create(
    const char* author,
    const char* creator,
    const char* title,
    const char* subject,
    const char* keywords,
    scanbotsdk_pdf_attributes_t** result);

/**
 * @brief Creates a new instance of scanbotsdk_pdf_attributes_t with given required params and stores it in the location specified by the last argument.
 * @ingroup c_pdf_generation
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_pdf_attributes_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_pdf_attributes_create_with_defaults(
    scanbotsdk_pdf_attributes_t** result);


/**
 * @brief Frees the memory allocated for the instance of scanbotsdk_pdf_attributes_t. If null is passed, the function does nothing.
 * @ingroup c_pdf_generation
 * @param object: Pointer to the instance of scanbotsdk_pdf_attributes_t to be freed
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_pdf_attributes_free(scanbotsdk_pdf_attributes_t* object);

/**
 * @brief Returns value of author field of the given object. The returned pointers do NOT own the underlying object, caller must not free them.
 * @ingroup c_pdf_generation
 * @details Author.
 * 
 * Default is "Created with Scanbot SDK"
 * @param self: Pointer to the instance of scanbotsdk_pdf_attributes_t
 * @param author: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_pdf_attributes_get_author(scanbotsdk_pdf_attributes_t* self, const char** author);
/**
 * @brief Sets value of author field of the given object.
 * @ingroup c_pdf_generation
 * @details Author.
 * 
 * Default is "Created with Scanbot SDK"
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_pdf_attributes_t, the field of which will be set
 * @param author: The value to be set. Must not be null.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_pdf_attributes_set_author(scanbotsdk_pdf_attributes_t* self, const char* author);

/**
 * @brief Returns value of creator field of the given object. The returned pointers do NOT own the underlying object, caller must not free them.
 * @ingroup c_pdf_generation
 * @details Creator.
 * 
 * Default is ""
 * @param self: Pointer to the instance of scanbotsdk_pdf_attributes_t
 * @param creator: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_pdf_attributes_get_creator(scanbotsdk_pdf_attributes_t* self, const char** creator);
/**
 * @brief Sets value of creator field of the given object.
 * @ingroup c_pdf_generation
 * @details Creator.
 * 
 * Default is ""
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_pdf_attributes_t, the field of which will be set
 * @param creator: The value to be set. Must not be null.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_pdf_attributes_set_creator(scanbotsdk_pdf_attributes_t* self, const char* creator);

/**
 * @brief Returns value of title field of the given object. The returned pointers do NOT own the underlying object, caller must not free them.
 * @ingroup c_pdf_generation
 * @details Title.
 * 
 * Default is ""
 * @param self: Pointer to the instance of scanbotsdk_pdf_attributes_t
 * @param title: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_pdf_attributes_get_title(scanbotsdk_pdf_attributes_t* self, const char** title);
/**
 * @brief Sets value of title field of the given object.
 * @ingroup c_pdf_generation
 * @details Title.
 * 
 * Default is ""
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_pdf_attributes_t, the field of which will be set
 * @param title: The value to be set. Must not be null.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_pdf_attributes_set_title(scanbotsdk_pdf_attributes_t* self, const char* title);

/**
 * @brief Returns value of subject field of the given object. The returned pointers do NOT own the underlying object, caller must not free them.
 * @ingroup c_pdf_generation
 * @details Subject.
 * 
 * Default is ""
 * @param self: Pointer to the instance of scanbotsdk_pdf_attributes_t
 * @param subject: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_pdf_attributes_get_subject(scanbotsdk_pdf_attributes_t* self, const char** subject);
/**
 * @brief Sets value of subject field of the given object.
 * @ingroup c_pdf_generation
 * @details Subject.
 * 
 * Default is ""
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_pdf_attributes_t, the field of which will be set
 * @param subject: The value to be set. Must not be null.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_pdf_attributes_set_subject(scanbotsdk_pdf_attributes_t* self, const char* subject);

/**
 * @brief Returns value of keywords field of the given object. The returned pointers do NOT own the underlying object, caller must not free them.
 * @ingroup c_pdf_generation
 * @details Keywords.
 * 
 * Default is ""
 * @param self: Pointer to the instance of scanbotsdk_pdf_attributes_t
 * @param keywords: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_pdf_attributes_get_keywords(scanbotsdk_pdf_attributes_t* self, const char** keywords);
/**
 * @brief Sets value of keywords field of the given object.
 * @ingroup c_pdf_generation
 * @details Keywords.
 * 
 * Default is ""
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_pdf_attributes_t, the field of which will be set
 * @param keywords: The value to be set. Must not be null.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_pdf_attributes_set_keywords(scanbotsdk_pdf_attributes_t* self, const char* keywords);


/**
 * @brief scanbotsdk_page_size_t enum
 * @details Page size.
 * @ingroup c_pdf_generation
*/
typedef enum scanbotsdk_page_size_t {

    /**8.5 x 11 (inches)        612 x 792 (pixels) at 72 DPI.*/
    SCANBOTSDK_PAGE_SIZE_LETTER = 0,

    /**8.5 x 14 (inches)        612 x 1008 (pixels) at 72 DPI.*/
    SCANBOTSDK_PAGE_SIZE_LEGAL = 1,

    /**297 x 420 (mm)           841.89 x 1199.551 (pixels) at 72 DPI.*/
    SCANBOTSDK_PAGE_SIZE_A3 = 2,

    /**210 x 297 (mm)           595.276 x 841.89 (pixels) at 72 DPI.*/
    SCANBOTSDK_PAGE_SIZE_A4 = 3,

    /**148 x 210 (mm)           419.528 x 595.276 (pixels) at 72 DPI.*/
    SCANBOTSDK_PAGE_SIZE_A5 = 4,

    /**250 x 353 (mm)           708.661 x 1000.63 (pixels) at 72 DPI.*/
    SCANBOTSDK_PAGE_SIZE_B4 = 5,

    /**176 x 250 (mm)           498.898 x 708.661 (pixels) at 72 DPI.*/
    SCANBOTSDK_PAGE_SIZE_B5 = 6,

    /**7.25 x 10.5 (inches)     522 x 756 (pixels) at 72 DPI.*/
    SCANBOTSDK_PAGE_SIZE_EXECUTIVE = 7,

    /**4 x 6 (inches)           288 x 432 (pixels) at 72 DPI.*/
    SCANBOTSDK_PAGE_SIZE_US4x6 = 8,

    /**4 x 8 (inches)           288 x 576 (pixels) at 72 DPI.*/
    SCANBOTSDK_PAGE_SIZE_US4x8 = 9,

    /**5 x 7 (inches)           360 x 504 (pixels) at 72 DPI.*/
    SCANBOTSDK_PAGE_SIZE_US5x7 = 10,

    /**4.125 x 9.5 (inches)     297 x 684 (pixels) at 72 DPI.*/
    SCANBOTSDK_PAGE_SIZE_COMM10 = 11,

    /**Physical size will be calculated from the image dimensions and the `dpi` parameter.*/
    SCANBOTSDK_PAGE_SIZE_CUSTOM = 12,

} scanbotsdk_page_size_t;

/**
 * @brief Returns the string representation of the given scanbotsdk_page_size_t value.
 * @ingroup c_pdf_generation
 * @details The returned string doesn't need to be freed.
 * @param value: The value to be converted to string.
 * @param result: Pointer to a variable that will store the string representation of the value.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_page_size_t_to_string(scanbotsdk_page_size_t value, const char** result);

/**
 * @brief scanbotsdk_page_direction_t enum
 * @details Page direction.
 * @ingroup c_pdf_generation
*/
typedef enum scanbotsdk_page_direction_t {

    /**Portrait.*/
    SCANBOTSDK_PAGE_DIRECTION_PORTRAIT = 0,

    /**Landscape.*/
    SCANBOTSDK_PAGE_DIRECTION_LANDSCAPE = 1,

    /**Decides based on image aspect ratio.*/
    SCANBOTSDK_PAGE_DIRECTION_AUTO = 2,

} scanbotsdk_page_direction_t;

/**
 * @brief Returns the string representation of the given scanbotsdk_page_direction_t value.
 * @ingroup c_pdf_generation
 * @details The returned string doesn't need to be freed.
 * @param value: The value to be converted to string.
 * @param result: Pointer to a variable that will store the string representation of the value.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_page_direction_t_to_string(scanbotsdk_page_direction_t value, const char** result);

/**
 * @brief scanbotsdk_page_fit_t enum
 * @details Page fit.
 * @ingroup c_pdf_generation
*/
typedef enum scanbotsdk_page_fit_t {

    /**Fit image into page. May leave white borders if the aspect ratio
    of the image and the page don't match. Preserves image aspect ratio.*/
    SCANBOTSDK_PAGE_FIT_FIT_IN = 0,

    /**Fill page with image. Will crop the image if the aspect ratio
    of the image and the page don't match. Preserves image aspect ratio.*/
    SCANBOTSDK_PAGE_FIT_FILL_IN = 1,

    /**Stretch image to fill the entire page. The image will never be cropped
    and there will never be any white borders left, but the image aspect ratio
    will be made to match the page aspect ratio.*/
    SCANBOTSDK_PAGE_FIT_STRETCH = 2,

    /**No resizing, centers the image on the page. The physical size of the image
    will be determined by the `dpi` parameter.*/
    SCANBOTSDK_PAGE_FIT_NONE = 3,

} scanbotsdk_page_fit_t;

/**
 * @brief Returns the string representation of the given scanbotsdk_page_fit_t value.
 * @ingroup c_pdf_generation
 * @details The returned string doesn't need to be freed.
 * @param value: The value to be converted to string.
 * @param result: Pointer to a variable that will store the string representation of the value.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_page_fit_t_to_string(scanbotsdk_page_fit_t value, const char** result);

/**
 * @brief scanbotsdk_resampling_method_t enum
 * @details Resampling method.
 * @ingroup c_pdf_generation
*/
typedef enum scanbotsdk_resampling_method_t {

    /**Always geometrically rescale the image to fit the page if necessary. Fast.
    
    Otherwise, downscale the bitmap to match the `dpi` setting via the selected method before
    adding it to the PDF if the calculated image DPI after stretching is greater than `dpi`.
    Slower.*/
    SCANBOTSDK_RESAMPLING_METHOD_NONE = 0,

    /**Nearest-neighbor interpolation. Lowest quality. Produces blocky images, especially when
    upsampling.*/
    SCANBOTSDK_RESAMPLING_METHOD_NEAREST = 1,

    /**Bi-linear interpolation. Better quality than nearest-neighbor, slower. Okay when the
    target size is not too different from the source size.*/
    SCANBOTSDK_RESAMPLING_METHOD_LINEAR = 2,

    /**Bi-cubic interpolation. Better quality than bi-linear, slower. Produces high-quality
    results in a larger range than that of bi-linear.*/
    SCANBOTSDK_RESAMPLING_METHOD_CUBIC = 3,

    /**Lanczos (Sinc) interpolation over 8x8 neighborhood. Produces very high quality results,
    but slower than bi-cubic. Retains sharp edges like those of text when downsampling.*/
    SCANBOTSDK_RESAMPLING_METHOD_LANCZOS4 = 4,

    /**Accurate, produces moire-free results, but tends to produce blurrier images. When
    upsampling, it is similar to nearest-neighbor.*/
    SCANBOTSDK_RESAMPLING_METHOD_AREA = 5,

} scanbotsdk_resampling_method_t;

/**
 * @brief Returns the string representation of the given scanbotsdk_resampling_method_t value.
 * @ingroup c_pdf_generation
 * @details The returned string doesn't need to be freed.
 * @param value: The value to be converted to string.
 * @param result: Pointer to a variable that will store the string representation of the value.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_resampling_method_t_to_string(scanbotsdk_resampling_method_t value, const char** result);

/**
 * @brief scanbotsdk_pdf_configuration_t class
 * @details The parameters `pageSize`, `pageFit`, `dpi` and `resamplingMethod` interact in a complex way
 * when adding bitmap images (JPEG, PNG, or raw) to the PDF.
 * There are three cases to consider:
 * 1. `pageSize` is `CUSTOM`:
 *    in this case `dpi` is used as the conversion ratio to calculate both the physical page and
 *    image sizes in inches from the bitmap dimensions. `resamplingMethod` is ignored.
 * 2. `pageSize` is not `CUSTOM` AND `pageFit` is `NONE`:
 *    in this case `dpi` is used as the conversion ratio to calculate only the physical image
 *    size in inches from the bitmap dimensions. The image is centered onto the page.
 *    `resamplingMethod` is ignored.
 * 3. `pageSize` is not `CUSTOM` AND `pageFit` is not `NONE`:
 *    in this case the page has a pre-determined physical size and we want to stretch the image to
 *    fit the page in one of the ways described by `pageFit`. The image DPI is automatically
 *    calculated for each image from the given physical page size, page fit setting and image
 *    dimensions. There are two sub-cases to consider:
 *    a. `resamplingMethod` is NONE OR the calculated DPI is less than or equal to `dpi`:
 *       in this case the image is added to the PDF without resampling, which means that the image
 *       rectangle is simply rescaled to fit into the page as specified by `pageFit` and
 *       `pageSize`.
 *    b. `resamplingMethod` is not NONE AND the calculated DPI is greater than `dpi`:
 *       in this case the bitmap of the image is resampled to match `dpi` using the selected method
 *       before adding it to the PDF. This will result in a bitmap that is smaller than the
 *       original image and hence, the resulting PDF will be smaller in size.
 * @ingroup c_pdf_generation
*/
typedef struct scanbotsdk_pdf_configuration_t scanbotsdk_pdf_configuration_t;

/**
 * @brief Creates a new instance of scanbotsdk_pdf_configuration with given params and stores it in the location specified by the last argument.
 * @ingroup c_pdf_generation
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param attributes: Attributes.
 * The value must not be null.
 * @param page_size: Physical size of the page. If CUSTOM, the page size will be set as the image size at given dpi.
 * 
 * Default is A4
 * @param page_direction: Page direction.
 * 
 * Default is PORTRAIT
 * @param page_fit: How to fit the image into the page. Only used if `pageSize` is not `CUSTOM`.
 * The image can either be stretched to fill the page,
 * in one of three ways, or centered on the page without stretching.
 * 
 * Default is FIT_IN
 * @param dpi: The `dpi` parameter has two different meanings depending on the value of `pageSize` and
 * `pageFit`. If pageSize is CUSTOM or pageFit is NONE, then `dpi` is the conversion ratio used
 * to convert from units of pixels to physical inches when adding bitmap images (JPEG, PNG, or
 * raw) to the PDF. Otherwise, if `resamplingMethod` is not NONE, then the image is downscaled
 * if necessary (if the image after being fit to the page has a higher calculated DPI than
 * `dpi`) to match `dpi` before adding it to the PDF. Otherwise, the setting is ignored and the
 * calculated image DPI is used instead.
 * 
 * Default is 72
 * @param jpeg_quality: JPEG quality for images.
 * Applies if an image is added as a cv::Mat and therefore needs to be encoded.
 * Also applies if `resamplingMethod` not NONE and the image being added needs to be
 * downscaled. Otherwise, when adding JPEG files to the PDF, the files are copied directly into
 * the PDF and not re-encoded, which is many times faster and also preserves the quality of the
 * original.
 * 
 * Default is 80
 * @param resampling_method: Resampling method.
 * 
 * Default is NONE
 * @param binarization_filter: Filter to apply to the input image when adding pages with binarization.
 * The value can be null.
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_pdf_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_pdf_configuration_create(
    scanbotsdk_pdf_attributes_t* attributes,
    scanbotsdk_page_size_t page_size,
    scanbotsdk_page_direction_t page_direction,
    scanbotsdk_page_fit_t page_fit,
    int dpi,
    int jpeg_quality,
    scanbotsdk_resampling_method_t resampling_method,
    scanbotsdk_parametric_filter_t* binarization_filter,
    scanbotsdk_pdf_configuration_t** result);

/**
 * @brief Creates a new instance of scanbotsdk_pdf_configuration_t with given required params and stores it in the location specified by the last argument.
 * @ingroup c_pdf_generation
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_pdf_configuration_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_pdf_configuration_create_with_defaults(
    scanbotsdk_pdf_configuration_t** result);


/**
 * @brief Frees the memory allocated for the instance of scanbotsdk_pdf_configuration_t. If null is passed, the function does nothing.
 * @ingroup c_pdf_generation
 * @param object: Pointer to the instance of scanbotsdk_pdf_configuration_t to be freed
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_pdf_configuration_free(scanbotsdk_pdf_configuration_t* object);

/**
 * @brief Returns value of attributes field of the given object. The returned pointers do NOT own the underlying object, caller must not free them.
 * @ingroup c_pdf_generation
 * @details Attributes.
 * @param self: Pointer to the instance of scanbotsdk_pdf_configuration_t
 * @param attributes: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_pdf_configuration_get_attributes(scanbotsdk_pdf_configuration_t* self, scanbotsdk_pdf_attributes_t** attributes);
/**
 * @brief Sets value of attributes field of the given object.
 * @ingroup c_pdf_generation
 * @details Attributes.
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_pdf_configuration_t, the field of which will be set
 * @param attributes: The value to be set. Must not be null.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_pdf_configuration_set_attributes(scanbotsdk_pdf_configuration_t* self, scanbotsdk_pdf_attributes_t* attributes);

/**
 * @brief Returns value of page_size field of the given object.
 * @ingroup c_pdf_generation
 * @details Physical size of the page. If CUSTOM, the page size will be set as the image size at given dpi.
 * 
 * Default is A4
 * @param self: Pointer to the instance of scanbotsdk_pdf_configuration_t
 * @param page_size: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_pdf_configuration_get_page_size(scanbotsdk_pdf_configuration_t* self, scanbotsdk_page_size_t* page_size);
/**
 * @brief Sets value of page_size field of the given object.
 * @ingroup c_pdf_generation
 * @details Physical size of the page. If CUSTOM, the page size will be set as the image size at given dpi.
 * 
 * Default is A4
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_pdf_configuration_t, the field of which will be set
 * @param page_size: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_pdf_configuration_set_page_size(scanbotsdk_pdf_configuration_t* self, scanbotsdk_page_size_t page_size);

/**
 * @brief Returns value of page_direction field of the given object.
 * @ingroup c_pdf_generation
 * @details Page direction.
 * 
 * Default is PORTRAIT
 * @param self: Pointer to the instance of scanbotsdk_pdf_configuration_t
 * @param page_direction: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_pdf_configuration_get_page_direction(scanbotsdk_pdf_configuration_t* self, scanbotsdk_page_direction_t* page_direction);
/**
 * @brief Sets value of page_direction field of the given object.
 * @ingroup c_pdf_generation
 * @details Page direction.
 * 
 * Default is PORTRAIT
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_pdf_configuration_t, the field of which will be set
 * @param page_direction: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_pdf_configuration_set_page_direction(scanbotsdk_pdf_configuration_t* self, scanbotsdk_page_direction_t page_direction);

/**
 * @brief Returns value of page_fit field of the given object.
 * @ingroup c_pdf_generation
 * @details How to fit the image into the page. Only used if `pageSize` is not `CUSTOM`.
 * The image can either be stretched to fill the page,
 * in one of three ways, or centered on the page without stretching.
 * 
 * Default is FIT_IN
 * @param self: Pointer to the instance of scanbotsdk_pdf_configuration_t
 * @param page_fit: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_pdf_configuration_get_page_fit(scanbotsdk_pdf_configuration_t* self, scanbotsdk_page_fit_t* page_fit);
/**
 * @brief Sets value of page_fit field of the given object.
 * @ingroup c_pdf_generation
 * @details How to fit the image into the page. Only used if `pageSize` is not `CUSTOM`.
 * The image can either be stretched to fill the page,
 * in one of three ways, or centered on the page without stretching.
 * 
 * Default is FIT_IN
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_pdf_configuration_t, the field of which will be set
 * @param page_fit: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_pdf_configuration_set_page_fit(scanbotsdk_pdf_configuration_t* self, scanbotsdk_page_fit_t page_fit);

/**
 * @brief Returns value of dpi field of the given object.
 * @ingroup c_pdf_generation
 * @details The `dpi` parameter has two different meanings depending on the value of `pageSize` and
 * `pageFit`. If pageSize is CUSTOM or pageFit is NONE, then `dpi` is the conversion ratio used
 * to convert from units of pixels to physical inches when adding bitmap images (JPEG, PNG, or
 * raw) to the PDF. Otherwise, if `resamplingMethod` is not NONE, then the image is downscaled
 * if necessary (if the image after being fit to the page has a higher calculated DPI than
 * `dpi`) to match `dpi` before adding it to the PDF. Otherwise, the setting is ignored and the
 * calculated image DPI is used instead.
 * 
 * Default is 72
 * @param self: Pointer to the instance of scanbotsdk_pdf_configuration_t
 * @param dpi: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_pdf_configuration_get_dpi(scanbotsdk_pdf_configuration_t* self, int* dpi);
/**
 * @brief Sets value of dpi field of the given object.
 * @ingroup c_pdf_generation
 * @details The `dpi` parameter has two different meanings depending on the value of `pageSize` and
 * `pageFit`. If pageSize is CUSTOM or pageFit is NONE, then `dpi` is the conversion ratio used
 * to convert from units of pixels to physical inches when adding bitmap images (JPEG, PNG, or
 * raw) to the PDF. Otherwise, if `resamplingMethod` is not NONE, then the image is downscaled
 * if necessary (if the image after being fit to the page has a higher calculated DPI than
 * `dpi`) to match `dpi` before adding it to the PDF. Otherwise, the setting is ignored and the
 * calculated image DPI is used instead.
 * 
 * Default is 72
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_pdf_configuration_t, the field of which will be set
 * @param dpi: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_pdf_configuration_set_dpi(scanbotsdk_pdf_configuration_t* self, int dpi);

/**
 * @brief Returns value of jpeg_quality field of the given object.
 * @ingroup c_pdf_generation
 * @details JPEG quality for images.
 * Applies if an image is added as a cv::Mat and therefore needs to be encoded.
 * Also applies if `resamplingMethod` not NONE and the image being added needs to be
 * downscaled. Otherwise, when adding JPEG files to the PDF, the files are copied directly into
 * the PDF and not re-encoded, which is many times faster and also preserves the quality of the
 * original.
 * 
 * Default is 80
 * @param self: Pointer to the instance of scanbotsdk_pdf_configuration_t
 * @param jpeg_quality: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_pdf_configuration_get_jpeg_quality(scanbotsdk_pdf_configuration_t* self, int* jpeg_quality);
/**
 * @brief Sets value of jpeg_quality field of the given object.
 * @ingroup c_pdf_generation
 * @details JPEG quality for images.
 * Applies if an image is added as a cv::Mat and therefore needs to be encoded.
 * Also applies if `resamplingMethod` not NONE and the image being added needs to be
 * downscaled. Otherwise, when adding JPEG files to the PDF, the files are copied directly into
 * the PDF and not re-encoded, which is many times faster and also preserves the quality of the
 * original.
 * 
 * Default is 80
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_pdf_configuration_t, the field of which will be set
 * @param jpeg_quality: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_pdf_configuration_set_jpeg_quality(scanbotsdk_pdf_configuration_t* self, int jpeg_quality);

/**
 * @brief Returns value of resampling_method field of the given object.
 * @ingroup c_pdf_generation
 * @details Resampling method.
 * 
 * Default is NONE
 * @param self: Pointer to the instance of scanbotsdk_pdf_configuration_t
 * @param resampling_method: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_pdf_configuration_get_resampling_method(scanbotsdk_pdf_configuration_t* self, scanbotsdk_resampling_method_t* resampling_method);
/**
 * @brief Sets value of resampling_method field of the given object.
 * @ingroup c_pdf_generation
 * @details Resampling method.
 * 
 * Default is NONE
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_pdf_configuration_t, the field of which will be set
 * @param resampling_method: The value to be set.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_pdf_configuration_set_resampling_method(scanbotsdk_pdf_configuration_t* self, scanbotsdk_resampling_method_t resampling_method);

/**
 * @brief Returns value of binarization_filter field of the given object. The returned pointers do NOT own the underlying object, caller must not free them.
 * @ingroup c_pdf_generation
 * @details Filter to apply to the input image when adding pages with binarization.
 * @param self: Pointer to the instance of scanbotsdk_pdf_configuration_t
 * @param binarization_filter: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_pdf_configuration_get_binarization_filter(scanbotsdk_pdf_configuration_t* self, scanbotsdk_parametric_filter_t** binarization_filter);
/**
 * @brief Sets value of binarization_filter field of the given object.
 * @ingroup c_pdf_generation
 * @details Filter to apply to the input image when adding pages with binarization.
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param self: Pointer to the instance of scanbotsdk_pdf_configuration_t, the field of which will be set
 * @param binarization_filter: The value to be set. Can be null.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_pdf_configuration_set_binarization_filter(scanbotsdk_pdf_configuration_t* self, scanbotsdk_parametric_filter_t* binarization_filter);


#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* SCANBOTSDK_PDFCONFIGURATIONTYPES_H */