#include <Luce/Memory/Endian.hh>

#include <utility>

namespace Luce
{
    namespace Memory
    {
#if LUCE_MACRO_IS_NO(LUCE_CONFIG_CONSTEXPR)
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
		Endian::Endian(Endian&& endian)
		{
			Value_ = std::move(endian.Value_);
		}
#endif
#endif
    }
}