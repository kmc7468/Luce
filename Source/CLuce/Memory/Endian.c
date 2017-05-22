#include <CLuce/Memory/Endian.h>

CLUCE_MACRO_EXPORT int Luce_Endian_SystemEndian(Luce_Endian* const endian)
{
	return Luce_Memory_Endian_SystemEndian(endian);
}

CLUCE_MACRO_EXPORT int Luce_Endian_FromString(Luce_Memory_Endian* const endian,
											  const char* const string)
{
	return Luce_Memory_Endian_FromString(endian, string);
}

CLUCE_MACRO_EXPORT int Luce_Endian_ToString(Luce_Memory_Endian* const endian,
											char* const string)
{
	return Luce_Memory_Endian_ToString(endian, string);
}
