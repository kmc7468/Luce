#include <Luce/System/Cpu.hh>

#include <Luce/Exception/InvalidValue.hh>
#include <Luce/System/UnitType.hh>

#if LUCE_MACRO_SUPPORTED_RVALUE_REF
#include <utility>
#endif

namespace Luce
{
	namespace System
	{
#if !LUCE_MACRO_SUPPORTED_CONSTEXPR
		Architecture::Architecture() LUCE_MACRO_NOEXCEPT
		{}
		Architecture::Architecture(const Enumeration& architecture) LUCE_MACRO_NOEXCEPT
		{
			Value_ = architecture;
		}
		Architecture::Architecture(const Architecture& architecture) LUCE_MACRO_NOEXCEPT
		{
			Value_ = architecture.Value_;
		}
#if LUCE_MACRO_SUPPORTED_RVALUE_REF
		Architecture::Architecture(Architecture&& architecture) LUCE_MACRO_NOEXCEPT
		{
			Value_ = std::move(architecture.Value_);
		}
#endif
#endif

		Architecture& Architecture::operator=
			(const Architecture& architecture) LUCE_MACRO_NOEXCEPT
		{
			Value_ = architecture.Value_;
			return *this;
		}
#if LUCE_MACRO_SUPPORTED_RVALUE_REF
		Architecture& Architecture::operator=(Architecture&& architecture) LUCE_MACRO_NOEXCEPT
		{
			Value_ = std::move(architecture.Value_);
			return *this;
		}
#endif

#if !LUCE_MACRO_SUPPORTED_CONSTEXPR
		bool Architecture::operator==(const Architecture& architecture) const LUCE_MACRO_NOEXCEPT
		{
			return Value_ == architecture.Value_;
		}
		bool Architecture::operator!=(const Architecture& architecture) const LUCE_MACRO_NOEXCEPT
		{
			return Value_ != architecture.Value_;
		}

		const char* const Architecture::ToString() const
		{
			return ToString_(0);
		}
		const char* const Architecture::ToString_(std::size_t index) const
		{
			if (index >= sizeof(Enum_Item_) / sizeof(Enumeration))
				throw InvalidValue(__LINE__, __FILE__, __FUNCTION__);

			return Value_ == Enum_Index_[index] ? Enum_String_[index] :
				ToString_(index + 1);
		}
		Architecture Architecture::FromString(const char* const str)
		{
			return FromString_(str, 0);
		}
		Architecture Architecture::FromString_(const char* const str, std::size_t index)
		{
			if (index >= sizeof(Enum_Item_) / sizeof(Enumeration))
				throw InvalidValue(__LINE__, __FILE__, __FUNCTION__);

			return strcmp(str, Enum_String_[index]) == 0 ?
				Enum_Item_[index] : FromString_(str, index + 1);
		}

		const char* const Architecture::Enum_String_[]
			= { "Unknown", "x86", "Amd64", "x64", "IA32", "IA64" };
		const Architecture::Enumeration Architecture::Enum_Item_[]
			= { Unknown, x86, Amd64, x64, IA32, IA64 };
		const std::size_t Architecture::Enum_Index_[]
			= { 0, 1, 2, 2, 3, 4 };
#endif

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
		Cpu::~Cpu()
		{}

		Cpu::Cpu(const std::string& name, const System::Architecture& architecture)
		{
			Name_ = name;
			Architecture_ = architecture;
		}

		Cpu Cpu::Create(const std::string& name, const System::Architecture& architecture)
		{
			return Cpu(name, architecture);
		}

		UnitType Cpu::GetUnitType() const LUCE_MACRO_NOEXCEPT
		{
			return UnitType::Cpu;
		}

		Architecture Cpu::Architecture() const LUCE_MACRO_NOEXCEPT
		{
			return Architecture_;
		}
	}
}