#ifndef LUCE_HEADER_CONFIGURATION_FEATURE_FINAL_HH
#define LUCE_HEADER_CONFIGURATION_FEATURE_FINAL_HH
#include <Luce/Configuration/Basic-Value.hh>

#include <Luce/Configuration/Compiler.hh>
#include <Luce/Configuration/Feature/Constexpr.hh>

#define LUCE_MACRO_CANNOT_PARENT(name) LUCE_MACRO_CANNOT_PARENT_DESTRUCTOR(name, ;)

#define LUCE_MACRO_CANNOT_PARENT_CONSTEXPR(name) \
LUCE_MACRO_CANNOT_PARENT_CONSTEXPR_DESTRUCTOR(name, ;)

#if LUCE_MACRO_IS_YES(LUCE_CONFIG_CONSTEXPR)
#define LUCE_MACRO_CANNOT_PARENT_CONSTEXPR_DESTRUCTOR(name, body) \
public:															  \
constexpr void Destroyer() {}
#else
#define LUCE_MACRO_CANNOT_PARENT_CONSTEXPR_DESTRUCTOR(name, body) \
LUCE_MACRO_CANNOT_PARENT_DESTRUCTOR(name, body)
#endif

#if LUCE_MACRO_IS_YES(LUCE_CONFIG_FINAL) 
#define LUCE_MACRO_FINAL final
#define LUCE_MACRO_CANNOT_PARENT_DESTRUCTOR(name, body)	\
public:													\
~name()													\
body													\
void Destroyer()										\
{														\
	this->~##name##();									\
}
#else
#define LUCE_MACRO_FINAL
#define LUCE_MACRO_CANNOT_PARENT_DESTRUCTOR(name, body)	\
private:												\
~name()													\
body													\
public:													\
void Destroyer()										\
{														\
	this->~##name##();									\
}
#endif

#endif