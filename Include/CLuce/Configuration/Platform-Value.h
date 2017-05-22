#ifndef CLUCE_HEADER_CONFIGURATION_PLATFORM_VALUE_H
#define CLUCE_HEADER_CONFIGURATION_PLATFORM_VALUE_H

#define CLUCE_CONFIG_WINDOWS (1985113L)
#define CLUCE_CONFIG_LINUX (1991093L)
#define CLUCE_CONFIG_UNIX (1973103L)

#define CLUCE_MACRO_IS_WINDOWS (CLUCE_CONFIG_PLATFORM == CLUCE_CONFIG_WINDOWS)
#define CLUCE_MACRO_IS_LINUX (CLUCE_CONFIG_PLATFORM == CLUCE_CONFIG_LINUX)
#define CLUCE_MACRO_IS_UNIX (CLUCE_CONFIG_PLATFORM == CLUCE_CONFIG_UNIX)

#endif