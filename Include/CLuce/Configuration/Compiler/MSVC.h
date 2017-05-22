#ifndef CLUCE_HEADER_CONFIGURATION_COMPILER_MSVC_H
#define CLUCE_HEADER_CONFIGURATION_COMPILER_MSVC_H
#include <CLuce/Configuration/Basic-Value.h>
#include <CLuce/Configuration/Compiler-Value.h>

#ifdef CLUCE_CONFIG_COMPILER
#error The compiler configuration is invalid.
#endif

#define CLUCE_CONFIG_COMPILER CLUCE_CONFIG_MSVC

#define CLUCE_CONFIG_LINUX_SUPPORTED CLUCE_CONFIG_NO
#define CLUCE_CONFIG_UNIX_SUPPORTED CLUCE_CONFIG_NO
#define CLUCE_CONFIG_WINDOWS_SUPPORTED CLUCE_CONFIG_YES

#include <CLuce/Configuration/Platform/Windows.h>

#endif