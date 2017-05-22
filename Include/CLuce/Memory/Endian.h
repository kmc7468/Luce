#ifndef CLUCE_HEADER_MEMORY_ENDIAN_H
#define CLUCE_HEADER_MEMORY_ENDIAN_H

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

#endif