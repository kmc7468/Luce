#ifndef CLUCE_HEADER_MEMORY_ENDIAN_H
#define CLUCE_HEADER_MEMORY_ENDIAN_H
#include <CLuce/Configuration.h>

#ifdef __cplusplus
typedef class Luce_Memory_Endian Luce_Memory_Endian;
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

CLUCE_MACRO_CONNECT_END

int Luce_Endian_SystemEndian(Luce_Endian* const endian);

#if !defined(__cplusplus) && !defined(CLUCE_MACRO_LINKING_MEMORY) && CLUCE_MACRO_IS_MSVC
#define CLUCE_MACRO_LINKING_MEMORY
#pragma comment(lib, "CLuce-Memory.lib")
#endif
#endif