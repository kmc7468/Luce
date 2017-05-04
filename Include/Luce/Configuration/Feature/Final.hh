#ifndef LUCE_HEADER_CONFIGURATION_FEATURE_FINAL_HH
#define LUCE_HEADER_CONFIGURATION_FEATURE_FINAL_HH
#include <Luce/Configuration/Basic-Value.hh>

#if LUCE_MACRO_IS_YES(LUCE_CONFIG_FINAL) 
#define LUCE_MACRO_FINAL final
#define LUCE_MACRO_CANNOT_PARENT(name)
#else
#define LUCE_MACRO_FINAL
#define LUCE_MACRO_CANNOT_PARENT(name)		\
private:									\
~name();
#endif

#endif