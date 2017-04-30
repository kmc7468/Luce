#ifndef LUCE_HEADER_CONFIGURATION_LINKINGMODE_HH
#define LUCE_HEADER_CONFIGURATION_LINKINGMODE_HH
#include <Luce/Configuration/Compiler.hh>
#include <Luce/Configuration/LinkingMode-Value.hh>

#ifdef LUCE_CONFIG_LINKING_MODE
#error The linking mode configuration is invalid.
#endif

#if LUCE_MACRO_IS_MSVC && (defined(LUCE_DYNAMIC) || defined(LUCE_SHARED))
#ifdef LUCE_EXPORT
#define LUCE_MACRO_EXPORT __declspec(dllexport)
#else
#define LUCE_MACRO_EXPORT __declspec(dllimport)
#endif
#else
#define LUCE_MACRO_EXPORT
#endif

#if defined(LUCE_DYNAMIC) || defined(LUCE_SHARED)
#define LUCE_CONFIG_LINKING_MODE LUCE_CONFIG_SHARED
#else
#define LUCE_CONFIG_LINKING_MODE LUCE_CONFIG_STATIC
#endif

#endif