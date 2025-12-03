// Auto-generated with ScanbotSDKCodegenV3. Modifications will be overwritten.
// Generated from SchemasV3/CoreSchemas/schemas/Geometry.yaml
/**
 * @file ScanbotSDKGeometry.h
 */

#pragma once
#ifndef SCANBOTSDK_GEOMETRY_H
#define SCANBOTSDK_GEOMETRY_H


#include <ScanbotSDKTypes.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <ScanbotSDKErrorCode.h>
#include <ScanbotSDKDefs.h>

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief scanbotsdk_line_segment_int_t class
 * @details Represents a line segment in 2D space.
 * @ingroup c_geometry
*/
typedef struct scanbotsdk_line_segment_int_t scanbotsdk_line_segment_int_t;

/**
 * @brief Creates a new instance of scanbotsdk_line_segment_int with given params and stores it in the location specified by the last argument.
 * @ingroup c_geometry
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param start: Start point of the segment.
 * @param end: End point of the segment.
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_line_segment_int_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_line_segment_int_create(
    scanbotsdk_point_t start,
    scanbotsdk_point_t end,
    scanbotsdk_line_segment_int_t** result);


/**
 * @brief Frees the memory allocated for the instance of scanbotsdk_line_segment_int_t. If null is passed, the function does nothing.
 * @ingroup c_geometry
 * @param object: Pointer to the instance of scanbotsdk_line_segment_int_t to be freed
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_line_segment_int_free(scanbotsdk_line_segment_int_t* object);

/**
 * @brief Returns value of start field of the given object.
 * @ingroup c_geometry
 * @details Start point of the segment.
 * @param self: Pointer to the instance of scanbotsdk_line_segment_int_t
 * @param start: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_line_segment_int_get_start(scanbotsdk_line_segment_int_t* self, scanbotsdk_point_t* start);

/**
 * @brief Returns value of end field of the given object.
 * @ingroup c_geometry
 * @details End point of the segment.
 * @param self: Pointer to the instance of scanbotsdk_line_segment_int_t
 * @param end: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_line_segment_int_get_end(scanbotsdk_line_segment_int_t* self, scanbotsdk_point_t* end);


/**
 * @brief scanbotsdk_line_segment_float_t class
 * @details Represents a line segment in 2D space.
 * @ingroup c_geometry
*/
typedef struct scanbotsdk_line_segment_float_t scanbotsdk_line_segment_float_t;

/**
 * @brief Creates a new instance of scanbotsdk_line_segment_float with given params and stores it in the location specified by the last argument.
 * @ingroup c_geometry
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param start: Start point of the segment.
 * @param end: End point of the segment.
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_line_segment_float_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_line_segment_float_create(
    scanbotsdk_pointf_t start,
    scanbotsdk_pointf_t end,
    scanbotsdk_line_segment_float_t** result);


/**
 * @brief Frees the memory allocated for the instance of scanbotsdk_line_segment_float_t. If null is passed, the function does nothing.
 * @ingroup c_geometry
 * @param object: Pointer to the instance of scanbotsdk_line_segment_float_t to be freed
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_line_segment_float_free(scanbotsdk_line_segment_float_t* object);

/**
 * @brief Returns value of start field of the given object.
 * @ingroup c_geometry
 * @details Start point of the segment.
 * @param self: Pointer to the instance of scanbotsdk_line_segment_float_t
 * @param start: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_line_segment_float_get_start(scanbotsdk_line_segment_float_t* self, scanbotsdk_pointf_t* start);

/**
 * @brief Returns value of end field of the given object.
 * @ingroup c_geometry
 * @details End point of the segment.
 * @param self: Pointer to the instance of scanbotsdk_line_segment_float_t
 * @param end: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_line_segment_float_get_end(scanbotsdk_line_segment_float_t* self, scanbotsdk_pointf_t* end);


/**
 * @brief scanbotsdk_aspect_ratio_t class
 * @details Aspect ratio is the ratio of the width to the height of an image or screen.
 * @ingroup c_geometry
*/
typedef struct scanbotsdk_aspect_ratio_t scanbotsdk_aspect_ratio_t;

/**
 * @brief Creates a new instance of scanbotsdk_aspect_ratio with given params and stores it in the location specified by the last argument.
 * @ingroup c_geometry
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param width: Width component of the aspect ratio.
 * 
 * Default is 1.0
 * @param height: Height component of the aspect ratio.
 * 
 * Default is 1.0
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_aspect_ratio_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_aspect_ratio_create(
    double width,
    double height,
    scanbotsdk_aspect_ratio_t** result);

/**
 * @brief Creates a new instance of scanbotsdk_aspect_ratio_t with given required params and stores it in the location specified by the last argument.
 * @ingroup c_geometry
 * @details As a rule if a function argument is a pointer to a scanbotsdk structure (scanbotsdk_..._t*) then the corresponding objects after function execution are left in valid but unspecified state, the caller is still responsible for freeing them.
 * Exceptions are scanbotsdk_image_t*, scanbotdk_random_access_source_t* (if applicable) which are guaranteed to be in the original state.
 * @param result: Pointer to a variable that will store the created instance of scanbotsdk_aspect_ratio_t
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_aspect_ratio_create_with_defaults(
    scanbotsdk_aspect_ratio_t** result);


/**
 * @brief Frees the memory allocated for the instance of scanbotsdk_aspect_ratio_t. If null is passed, the function does nothing.
 * @ingroup c_geometry
 * @param object: Pointer to the instance of scanbotsdk_aspect_ratio_t to be freed
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_aspect_ratio_free(scanbotsdk_aspect_ratio_t* object);

/**
 * @brief Returns value of width field of the given object.
 * @ingroup c_geometry
 * @details Width component of the aspect ratio.
 * 
 * Default is 1.0
 * @param self: Pointer to the instance of scanbotsdk_aspect_ratio_t
 * @param width: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_aspect_ratio_get_width(scanbotsdk_aspect_ratio_t* self, double* width);

/**
 * @brief Returns value of height field of the given object.
 * @ingroup c_geometry
 * @details Height component of the aspect ratio.
 * 
 * Default is 1.0
 * @param self: Pointer to the instance of scanbotsdk_aspect_ratio_t
 * @param height: Pointer to a variable that will store the value of the field.
 * @return: Error code, <see cref="SCANBOTSDK_OK"/> if no errors were encountered.
*/
SBSDK_API scanbotsdk_error_code_t scanbotsdk_aspect_ratio_get_height(scanbotsdk_aspect_ratio_t* self, double* height);


#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* SCANBOTSDK_GEOMETRY_H */