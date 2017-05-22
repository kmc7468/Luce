#ifndef CLUCE_HEADER_CONFIGURATION_LINKINGMODE_H
#define CLUCE_HEADER_CONFIGURATION_LINKINGMODE_H
#include <CLuce/Configuration/Compiler.h>
#include <CLuce/Configuration/LinkingMode-Value.h>

#ifdef CLUCE_CONFIG_LINKING_MODE
#error The linking mode configuration is invalid.
#endif

#if CLUCE_MACRO_IS_MSVC && (defined(CLUCE_DYNAMIC) || defined(CLUCE_SHARED))
#if CLUCE_EXPORT
#define CLUCE_MACRO_EXPORT __declspec(dllexport)
#else
#define CLUCE_MACRO_EXPORT __declspec(dllimport)
#endif
#else
#define CLUCE_MACRO_EXPORT
#endif

#if defined(CLUCE_DYNAMIC) || defined(CLUCE_SHARED)
#define CLUCE_CONFIG_LINKING_MODE CLUCE_CONFIG_SHARED
#else
#define CLUCE_CONFIG_LINKING_MODE CLUCE_CONFIG_STATIC
#endif

#endif