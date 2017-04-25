#ifndef LUCE_HEADER_CONFIGURATION_PLATFORM_LINUX_HH
#define LUCE_HEADER_CONFIGURATION_PLATFORM_LINUX_HH
#include <Luce/Configuration/Platform-Value.hh>

#ifdef LUCE_CONFIG_PLATFORM
#error The platform configuration is invalid.
#endif

#define LUCE_CONFIG_PLATFORM LUCE_CONFIG_LINUX

#endif