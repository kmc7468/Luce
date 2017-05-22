#include <CLuce/Memory/Endian.h>
#include <Luce/Memory/Endian.hh>

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
}