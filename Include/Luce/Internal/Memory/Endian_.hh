#ifndef LUCE_HEADER_INTERNAL_MEMORY_ENDIAN__HH
#define LUCE_HEADER_INTERNAL_MEMORY_ENDIAN__HH

#if LUCE_MACRO_SUPPORTED_RVALUE_REF
#include <utility>
#endif

namespace Luce
{
	namespace Memory
	{
#if LUCE_MACRO_SUPPORTED_CONSTEXPR
		LUCE_MACRO_CONSTEXPR Endian::Endian()
			: Value_(static_cast<Enumeration>(0))
		{}
		LUCE_MACRO_CONSTEXPR Endian::Endian(const Enumeration& endian)
			: Value_(endian)
		{}
		LUCE_MACRO_CONSTEXPR Endian::Endian(const Endian& endian)
			: Value_(endian.Value_)
		{}
#if LUCE_MACRO_SUPPORTED_RVALUE_REF
		LUCE_MACRO_CONSTEXPR Endian::Endian(Endian&& endian) LUCE_MACRO_NOEXCEPT
			: Value_(std::move(endian.Value_))
		{}
#endif
#endif
	}
}

#endif