#ifndef CLUCE_HEADER_CONFIGURATION_PLATFORM_WINDOWS_H
#define CLUCE_HEADER_CONFIGURATION_PLATFORM_WINDOWS_H
#include <CLuce/Configuration/Platform-Value.h>

#ifdef CLUCE_CONFIG_PLATFORM
#error The platform configuration is invalid.
#endif

#define CLUCE_CONFIG_PLATFORM CLUCE_CONFIG_WINDOWS

#endif