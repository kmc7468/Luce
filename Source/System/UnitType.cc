#include <Luce/System/UnitType.hh>

namespace Luce
{
	namespace System
	{
#if !LUCE_MACRO_SUPPORTED_CONSTEXPR
		const char* const UnitType::Enum_String_[] = { "Cpu", "Gpu" };
		const UnitType::Enumeration UnitType::Enum_Item_[] = { Cpu, Gpu };
		const std::size_t UnitType::Enum_Index_[] = { 0, 1 };
#endif
	}
}