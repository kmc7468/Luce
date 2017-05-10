#include <Luce/System/Unit.hh>

namespace Luce
{
	namespace System
	{
#if !LUCE_MACRO_SUPPORTED_CONSTEXPR
		const char* const Unit::Enum_String_[] = { "Cpu", "Gpu" };
		const Unit::Enumeration Unit::Enum_Item_[] = { Cpu, Gpu };
		const std::size_t Unit::Enum_Index_[] = { 0, 1 };
#endif
	}
}