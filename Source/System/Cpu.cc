#include <Luce/System/Cpu.hh>

#include <Luce/System/UnitType.hh>

#if LUCE_MACRO_SUPPORTED_RVALUE_REF
#include <utility>
#endif

namespace Luce
{
	namespace System
	{
		Cpu::Cpu(const Cpu& unit)
		{
			Name_ = unit.Name_;
		}
#if LUCE_MACRO_SUPPORTED_RVALUE_REF
		Cpu::Cpu(Cpu&& unit)
		{
			Name_ = std::move(unit.Name_);
		}
#endif

		UnitType Cpu::GetUnitType() const LUCE_MACRO_NOEXCEPT
		{
			return UnitType::Cpu;
		}
	}
}