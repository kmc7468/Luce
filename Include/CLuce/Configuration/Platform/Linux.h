#ifndef CLUCE_HEADER_CONFIGURATION_PLATFORM_LINUX_H
#define CLUCE_HEADER_CONFIGURATION_PLATFORM_LINUX_H
#include <CLuce/Configuration/Platform-Value.h>

#ifdef CLUCE_CONFIG_PLATFORM
#error The platform configuration is invalid.
#endif

#define CLUCE_CONFIG_PLATFORM CLUCE_CONFIG_LINUX

#endif