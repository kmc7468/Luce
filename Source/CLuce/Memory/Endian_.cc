#include <CLuce/Memory/Endian.h>

#include <cstddef>
#include <cstring>

extern "C"
{
	CLUCE_MACRO_EXPORT int Luce_Memory_Endian_SystemEndian(Luce_Memory_Endian* const endian)
	{
		if (endian == NULL)
			return -1;

		Luce::Memory::Endian system_endian = Luce::Memory::Endian::SystemEndian();
		std::memcpy(endian, &system_endian, sizeof(Luce::Memory::Endian));

		return 0;
	}
	CLUCE_MACRO_EXPORT int Luce_Memory_Endian_FromString(Luce_Memory_Endian* const endian,
														 const char* const string)
	{
		if (endian == NULL || string == NULL)
			return -1;

		Luce::Memory::Endian from_string_endian = Luce::Memory::Endian::FromString(string);
		std::memcpy(endian, &from_string_endian, sizeof(Luce::Memory::Endian));

		return 0;
	}
	CLUCE_MACRO_EXPORT int Luce_Memory_Endian_ToString(Luce_Memory_Endian* const endian,
													   char* const string)
	{
		if (endian == NULL)
			return -1;
		
		std::string temp_string = endian->ToString();

		if (string == NULL)
		{
			return temp_string.length();
		}
		else
		{
			std::strcpy(string, temp_string.c_str());
			return 0;
		}
	}
}