// Auto-generated with ScanbotSDKCodegenV3. Modifications will be overwritten.
// Generated from SchemasV3/CoreSchemas/schemas/MultiPageImageExtractorTypes.yaml
/**
 * @file ScanbotSDKMultiPageImageExtractorTypes.h
 */

#pragma once
#ifndef SCANBOTSDK_MULTIPAGEIMAGEEXTRACTORTYPES_H
#define SCANBOTSDK_MULTIPAGEIMAGEEXTRACTORTYPES_H


#include <ScanbotSDKImage.h>
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
 * @brief scanbotsdk_extracted_image_metadata_t class
 * @details The metadata is taken from the PDF stream's dictionary, not from the image header inside the stream.
 * In a well-formed PDF file, the image metadata encoded in the stream dictionary should be the same as the one encoded in the image header.
 * This, however, is neither required nor checked and may not be true for an ill-formed PDF.
 * @ingroup c_multi_page_image_extractor
*/
typedef struct scanbotsdk_extracted_image_metadata_t scanbotsdk_extracted_image_metadata_t;

/**
 * @brief Creates a new instance of scanbotsdk_extracted_image_metadata with given params and stores it in the location specified by the last argument.
 * @ingroup c_multi_page_image_extractor
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param height: Height of the image in pixels.
 * @param width: Width of the image in pixels.
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_extracted_image_metadata_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_extracted_image_metadata_create(
    int height,
    int width,
    scanbotsdk_extracted_image_metadata_t** result);


/**
 * @brief Frees the memory allocated for the instance of scanbotsdk_extracted_image_metadata_t. If null is passed, the function does nothing.
 * @ingroup c_multi_page_image_extractor
 * @param object: Pointer to the instance of scanbotsdk_extracted_image_metadata_t to be freed
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_extracted_image_metadata_free(scanbotsdk_extracted_image_metadata_t* object);

/**
 * @brief Returns value of height field of the given object.
 * @ingroup c_multi_page_image_extractor
 * @details Height of the image in pixels.
 * @param self: Pointer to the instance of scanbotsdk_extracted_image_metadata_t
 * @param height: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_extracted_image_metadata_get_height(scanbotsdk_extracted_image_metadata_t* self, int* height);

/**
 * @brief Returns value of width field of the given object.
 * @ingroup c_multi_page_image_extractor
 * @details Width of the image in pixels.
 * @param self: Pointer to the instance of scanbotsdk_extracted_image_metadata_t
 * @param width: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_extracted_image_metadata_get_width(scanbotsdk_extracted_image_metadata_t* self, int* width);


/**
 * @brief scanbotsdk_extracted_image_t class
 * @details An image extracted from a multipage image.
 * @ingroup c_multi_page_image_extractor
*/
typedef struct scanbotsdk_extracted_image_t scanbotsdk_extracted_image_t;

/**
 * @brief Frees the memory allocated for the instance of scanbotsdk_extracted_image_t. If null is passed, the function does nothing.
 * @ingroup c_multi_page_image_extractor
 * @param object: Pointer to the instance of scanbotsdk_extracted_image_t to be freed
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_extracted_image_free(scanbotsdk_extracted_image_t* object);

/**
 * @brief Returns value of image field of the given object. The returned pointers do NOT own the underlying object, caller must not free them.
 * @ingroup c_multi_page_image_extractor
 * @details The extracted image.
 * @param self: Pointer to the instance of scanbotsdk_extracted_image_t
 * @param image: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_extracted_image_get_image(scanbotsdk_extracted_image_t* self, scanbotsdk_image_t** image);

/**
 * @brief Returns value of metadata field of the given object. The returned pointers do NOT own the underlying object, caller must not free them.
 * @ingroup c_multi_page_image_extractor
 * @details Metadata of the extracted image.
 * @param self: Pointer to the instance of scanbotsdk_extracted_image_t
 * @param metadata: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_extracted_image_get_metadata(scanbotsdk_extracted_image_t* self, scanbotsdk_extracted_image_metadata_t** metadata);


/**
 * @brief scanbotsdk_extracted_page_t class
 * @details A single page extracted from a multipage image.
 * @ingroup c_multi_page_image_extractor
*/
typedef struct scanbotsdk_extracted_page_t scanbotsdk_extracted_page_t;

/**
 * @brief Frees the memory allocated for the instance of scanbotsdk_extracted_page_t. If null is passed, the function does nothing.
 * @ingroup c_multi_page_image_extractor
 * @param object: Pointer to the instance of scanbotsdk_extracted_page_t to be freed
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_extracted_page_free(scanbotsdk_extracted_page_t* object);

/**
 * @brief Returns value of images field of the given object. The returned pointers do NOT own the underlying object, caller must not free them.
 * @ingroup c_multi_page_image_extractor
 * @details List of images extracted from the page.
 * @param self: Pointer to the instance of scanbotsdk_extracted_page_t
 @param size: Size of the pre-allocated array. Must be equal to the size obtained by calling the corresponding _size function.
 * @param images: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_extracted_page_get_images(scanbotsdk_extracted_page_t* self, scanbotsdk_extracted_image_t** images, size_t size);
/**
 * @brief Returns size of images array.
 * @ingroup c_multi_page_image_extractor
 * @param self: Pointer to the instance of scanbotsdk_extracted_page_t
 * @param size: Pointer to a variable that will store the size.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_extracted_page_get_images_size(scanbotsdk_extracted_page_t* self, size_t* size);


/**
 * @brief scanbotsdk_page_extraction_result_t class
 * @details Result of the extraction of pages from a multipage image.
 * @ingroup c_multi_page_image_extractor
*/
typedef struct scanbotsdk_page_extraction_result_t scanbotsdk_page_extraction_result_t;

/**
 * @brief Frees the memory allocated for the instance of scanbotsdk_page_extraction_result_t. If null is passed, the function does nothing.
 * @ingroup c_multi_page_image_extractor
 * @param object: Pointer to the instance of scanbotsdk_page_extraction_result_t to be freed
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_page_extraction_result_free(scanbotsdk_page_extraction_result_t* object);

/**
 * @brief Returns value of pages field of the given object. The returned pointers do NOT own the underlying object, caller must not free them.
 * @ingroup c_multi_page_image_extractor
 * @details List of extracted pages.
 * @param self: Pointer to the instance of scanbotsdk_page_extraction_result_t
 @param size: Size of the pre-allocated array. Must be equal to the size obtained by calling the corresponding _size function.
 * @param pages: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_page_extraction_result_get_pages(scanbotsdk_page_extraction_result_t* self, scanbotsdk_extracted_page_t** pages, size_t size);
/**
 * @brief Returns size of pages array.
 * @ingroup c_multi_page_image_extractor
 * @param self: Pointer to the instance of scanbotsdk_page_extraction_result_t
 * @param size: Pointer to a variable that will store the size.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_page_extraction_result_get_pages_size(scanbotsdk_page_extraction_result_t* self, size_t* size);


#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* SCANBOTSDK_MULTIPAGEIMAGEEXTRACTORTYPES_H */