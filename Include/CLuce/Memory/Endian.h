#ifndef CLUCE_HEADER_MEMORY_ENDIAN_H
#define CLUCE_HEADER_MEMORY_ENDIAN_H
#include <CLuce/Configuration.h>

#ifdef __cplusplus
#include <Luce/Memory/Endian.hh>
typedef Luce::Memory::Endian Luce_Memory_Endian;
#else
typedef enum
{
	LME_None,
	LME_Big,
	LME_Little,
} Luce_Memory_Endian;
#endif

typedef Luce_Memory_Endian Luce_Endian;

CLUCE_MACRO_CONNECT_BEGIN

CLUCE_MACRO_EXPORT int Luce_Memory_Endian_SystemEndian(Luce_Memory_Endian* const endian);
CLUCE_MACRO_EXPORT int Luce_Memory_Endian_FromString(Luce_Memory_Endian* const endian,
													 const char* const string);
CLUCE_MACRO_EXPORT int Luce_Memory_Endian_ToString(Luce_Memory_Endian* const endian,
												   char* const string);

CLUCE_MACRO_CONNECT_END

CLUCE_MACRO_EXPORT int Luce_Endian_SystemEndian(Luce_Endian* const endian);
CLUCE_MACRO_EXPORT int Luce_Endian_FromString(Luce_Memory_Endian* const endian,
											  const char* const string);
CLUCE_MACRO_EXPORT int Luce_Endian_ToString(Luce_Memory_Endian* const endian,
											char* const string);

#if !defined(CLUCE_MACRO_LINKING_MEMORY) && CLUCE_MACRO_IS_MSVC
#define CLUCE_MACRO_LINKING_MEMORY
#pragma comment(lib, "CLuce-Memory.lib")
#endif
#endif