/**
 * @file ScanbotSDKTypes.h
 * @brief The Scanbot SDK C API primitive types.
 */

#pragma once
#ifndef SCANBOTSDK_TYPES_H
#define SCANBOTSDK_TYPES_H

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @brief Represents a point with integer coordinates.
 * @ingroup c_geometry
 */
typedef struct scanbotsdk_point_t {
    /**
     * @brief The x-coordinate of the point.
     */
    int x;
    /**
     * @brief The y-coordinate of the point.
     */
    int y;
} scanbotsdk_point_t;

/**
 * @brief Represents a point with floating point coordinates.
 * @ingroup c_geometry
 */
typedef struct scanbotsdk_pointf_t {
    /**
     * @brief The x-coordinate of the point.
     */
    float x;
    /**
     * @brief The y-coordinate of the point.
     */
    float y;
} scanbotsdk_pointf_t;

/**
 * @brief Represents a rectangle with integer coordinates.
 * @ingroup c_geometry
 */
typedef struct scanbotsdk_rect_t {
    /**
     * @brief The x-coordinate of the top-left corner of the rectangle.
     */
    int x;
    /**
     * @brief The y-coordinate of the top-left corner of the rectangle.
     */
    int y;
    /**
     * @brief The width of the rectangle.
     */
    int width;
    /**
     * @brief The height of the rectangle.
     */
    int height;
} scanbotsdk_rect_t;

/**
 * @brief Represents a rectangle with floating point coordinates.
 * @ingroup c_geometry
 */
typedef struct scanbotsdk_rectf_t {
    /**
     * @brief The x-coordinate of the top-left corner of the rectangle.
     */
    float x;
    /**
     * @brief The y-coordinate of the top-left corner of the rectangle.
     */
    float y;
    /**
     * @brief The width of the rectangle.
     */
    float width;
    /**
     * @brief The height of the rectangle.
     */
    float height;
} scanbotsdk_rectf_t;

#ifdef __cplusplus
} /* extern "C" */
#endif
#endif /* SCANBOTSDK_TYPES_H */
