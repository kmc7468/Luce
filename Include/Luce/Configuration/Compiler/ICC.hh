#ifndef LUCE_HEADER_CONFIGURATION_COMPILER_ICC_HH
#define LUCE_HEADER_CONFIGURATION_COMPILER_ICC_HH
#include <Luce/Configuration/Basic-Value.hh>
#include <Luce/Configuration/Compiler-Value.hh>

#ifdef LUCE_CONFIG_COMPILER
#error The compiler configuration is invalid.
#endif

#define LUCE_CONFIG_COMPILER LUCE_CONFIG_ICC

#define LUCE_CONFIG_LINUX_SUPPORTED LUCE_CONFIG_YES
#define LUCE_CONFIG_UNIX_SUPPORTED LUCE_CONFIG_NO
#define LUCE_CONFIG_WINDOWS_SUPPORTED LUCE_CONFIG_YES

#if defined(_WIN16) || defined(_WIN32) || defined(_WIN64)
#include <Luce/Configuration/Platform/Windows.hh>
#elif defined(__linux__) || defined(linux) || defined(__linux)
#include <Luce/Configuration/Platform/Linux.hh>
#else
#error An unsupported platform.
#endif

#define LUCE_CONFIG_LONGLONG LUCE_CONFIG_YES
#define LUCE_CONFIG_NOEXCEPT_TYPESYSTEM LUCE_CONFIG_NO

#if ((__INTEL_COMPILER / 100) == 14 && (__INTEL_COMPILER % 100 / 10) >= 0) ||\
(__INTEL_COMPILER / 100) >= 15 // Intel C++ Compiler 14.0
#define LUCE_CONFIG_NOEXCEPT LUCE_CONFIG_YES
#else
#define LUCE_CONFIG_NOEXCEPT LUCE_CONFIG_NO
#endif

#if ((__INTEL_COMPILER / 100) == 13 && (__INTEL_COMPILER % 100 / 10) >= 0) ||\
(__INTEL_COMPILER / 100) >= 14 // Intel C++ Compiler 13.0
#define LUCE_CONFIG_CONSTEXPR LUCE_CONFIG_YES
#define LUCE_CONFIG_INITIALIZER_LIST LUCE_CONFIG_YES
#else
#define LUCE_CONFIG_CONSTEXPR LUCE_CONFIG_NO
#define LUCE_CONFIG_INITIALIZER_LIST LUCE_CONFIG_NO
#endif

#if ((__INTEL_COMPILER / 100) == 12 && (__INTEL_COMPILER % 100 / 10) >= 1) ||\
(__INTEL_COMPILER / 100) >= 13 // Intel C++ Compiler 12.1
#define LUCE_CONFIG_CHAR_1632 LUCE_CONFIG_YES
#else
#define LUCE_CONFIG_CHAR_1632 LUCE_CONFIG_NO
#endif

#if ((__INTEL_COMPILER / 100) == 12 && (__INTEL_COMPILER % 100 / 10) >= 0) ||\
(__INTEL_COMPILER / 100) >= 13 // Intel C++ Compiler 12.0
#define LUCE_CONFIG_DELETE LUCE_CONFIG_YES
#define LUCE_CONFIG_FINAL LUCE_CONFIG_YES
#define LUCE_CONFIG_OVERRIDE LUCE_CONFIG_YES
#else
#define LUCE_CONFIG_DELETE LUCE_CONFIG_NO
#define LUCE_CONFIG_FINAL LUCE_CONFIG_NO
#define LUCE_CONFIG_OVERRIDE LUCE_CONFIG_NO
#endif

#if ((__INTEL_COMPILER / 100) == 11 && (__INTEL_COMPILER % 100 / 10) >= 1) ||\
(__INTEL_COMPILER / 100) >= 12 // Intel C++ Compiler 11.1
#define LUCE_CONFIG_RLALUE_REFERENCE LUCE_CONFIG_YES
#else
#define LUCE_CONFIG_RLALUE_REFERENCE LUCE_CONFIG_NO
#endif

#if ((__INTEL_COMPILER / 100) == 11 && (__INTEL_COMPILER % 100 / 10) >= 0) ||\
(__INTEL_COMPILER / 100) >= 12 // Intel C++ Compiler 11.0
#define LUCE_CONFIG_STATICASSERT LUCE_CONFIG_YES
#else
#define LUCE_CONFIG_STATICASSERT LUCE_CONFIG_NO
#endif

#endif