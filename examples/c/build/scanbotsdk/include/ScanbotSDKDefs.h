#pragma once
#ifndef SCANBOTSDK_DEFS_H
#define SCANBOTSDK_DEFS_H

#ifdef __cplusplus
extern "C" {
#endif

#ifdef _WIN32
#ifdef SBSDK_GIT_VERSION
#define SBSDK_API __declspec(dllexport)
#else
#define SBSDK_API __declspec(dllimport)
#endif
#else
#define SBSDK_API
#endif

#ifdef __cplusplus
}
#endif
#endif  // SCANBOTSDK_DEFS_H
