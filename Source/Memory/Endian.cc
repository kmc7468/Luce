#include <Luce/Memory/Endian.hh>

#if LUCE_MACRO_SUPPORTED_RVALUE_REF
#include <utility>
#endif

namespace Luce
{
    namespace Memory
    {
#if !LUCE_MACRO_SUPPORTED_CONSTEXPR
		Endian::Endian()
		{}
		Endian::Endian(const Enumeration& endian)
		{
			Value_ = endian;
		}
		Endian::Endian(const Endian& endian)
		{
			Value_ = endian.Value_;
		}
#if LUCE_MACRO_SUPPORTED_RVALUE_REF
		Endian::Endian(Endian&& endian) LUCE_MACRO_NOEXCEPT
		{
			Value_ = std::move(endian.Value_);
		}
#endif
#endif

		Endian& Endian::operator=(const Endian& endian)
		{
			Value_ = endian.Value_;
			return *this;
		}
#if LUCE_MACRO_SUPPORTED_RVALUE_REF
		Endian& Endian::operator=(Endian&& endian) LUCE_MACRO_NOEXCEPT
		{
			Value_ = std::move(endian.Value_);
			return *this;
		}
#endif

#if !LUCE_MACRO_SUPPORTED_CONSTEXPR

#endif
    }
}