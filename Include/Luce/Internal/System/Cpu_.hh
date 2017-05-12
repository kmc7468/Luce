#ifndef LUCE_HEADER_INTERNAL_SYSTEM_CPU__HH
#define LUCE_HEADER_INTERNAL_SYSTEM_CPU__HH

namespace Luce
{
	namespace System
	{
#if LUCE_MACRO_SUPPORTED_CONSTEXPR
		LUCE_MACRO_CONSTEXPR Architecture::Architecture() LUCE_MACRO_NOEXCEPT
			: Value_(static_cast<Enumeration>(0))
		{}
		LUCE_MACRO_CONSTEXPR
			Architecture::Architecture(const Enumeration& architecture) LUCE_MACRO_NOEXCEPT
			: Value_(architecture)
		{}
		LUCE_MACRO_CONSTEXPR
			Architecture::Architecture(const Architecture& architecture) LUCE_MACRO_NOEXCEPT
			: Value_(architecture.Value_)
		{}
#if LUCE_MACRO_SUPPORTED_RVALUE_REF
		LUCE_MACRO_CONSTEXPR
			Architecture::Architecture(Architecture&& architecture) LUCE_MACRO_NOEXCEPT
			: Value_(std::move(architecture.Value_))
		{}
#endif

		LUCE_MACRO_CONSTEXPR
			bool Architecture::operator==(const Architecture& architecture)
			const LUCE_MACRO_NOEXCEPT
		{
			return Value_ == architecture.Value_;
		}
		LUCE_MACRO_CONSTEXPR
			bool Architecture::operator!=(const Architecture& architecture)
			const LUCE_MACRO_NOEXCEPT
		{
			return Value_ != architecture.Value_;
		}

		LUCE_MACRO_CONSTEXPR Architecture Architecture::FromString(const char* const str)
		{
			return FromString_(str, 0);
		}
		LUCE_MACRO_CONSTEXPR Architecture Architecture::FromString_(const char* const str,
															std::size_t index)
		{
			return StrCmp_(str, Enum_String_[index]) ?
				Enum_Item_[index] : FromString_(str, index + 1);
		}
		LUCE_MACRO_CONSTEXPR bool Architecture::StrCmp_(const char* lhs, const char* rhs)
		{
			return *lhs == *rhs && (*lhs == '\0' || StrCmp_(lhs + 1, rhs + 1));
		}

		LUCE_MACRO_CONSTEXPR const char* const Architecture::ToString() const
		{
			return ToString_(0);
		}
		LUCE_MACRO_CONSTEXPR
			const char* const Architecture::ToString_(std::size_t index) const
		{
			return Value_ == Enum_Index_[index] ? Enum_String_[index] :
				ToString_(index + 1);
		}
#endif
	}
}

#endif