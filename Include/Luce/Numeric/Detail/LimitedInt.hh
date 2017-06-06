#ifndef LUCE_HEADER_NUMBERIC_DETAIL_LIMITEDINT_HH
#define LUCE_HEADER_NUMBERIC_DETAIL_LIMITEDINT_HH

#include <algorithm>

namespace Luce
{
	namespace Numberic
	{
		template<Utility::UIntMax Byte_>
		LUCE_MACRO_CONSTEXPR LimitedUInt<Byte_>::LimitedUInt()
#if LUCE_MACRO_SUPPORTED_CONSTEXPR
			: Data_()
#endif
		{
#if !LUCE_MACRO_SUPPORTED_CONSTEXPR
			std::fill(Data_.Data, Data_.Data + Byte_, 0);
#endif
		}
		template<Utility::UIntMax Byte_>
		LUCE_MACRO_CONSTEXPR LimitedUInt<Byte_>::LimitedUInt(const My_& integer)
#if LUCE_MACRO_SUPPORTED_CONSTEXPR
			: Data_(integer.Data_)
#endif
		{
#if !LUCE_MACRO_SUPPORTED_CONSTEXPR
			std::copy(integer.Data_.Data, integer.Data_.Data + Byte_, Data_.Data);
#endif
		}

		template<Utility::UIntMax Byte_>
		LimitedUInt<Byte_>& LimitedUInt<Byte_>::operator=(const My_& integer)
		{
			std::copy(integer.Data_.Data, integer.Data_.Data + Byte_, Data_.Data);
			return *this;
		}
		template<Utility::UIntMax Byte_>
		LUCE_MACRO_CONSTEXPR bool
			LimitedUInt<Byte_>::operator==(const My_& integer) const LUCE_MACRO_NOEXCEPT
		{
			return Equal_(integer, 0);
		}

		template<Utility::UIntMax Byte_>
		LUCE_MACRO_CONSTEXPR bool LimitedUInt<Byte_>::Equal_(const My_& integer,
															 Utility::UIntMax index)
			const LUCE_MACRO_NOEXCEPT
		{
#if LUCE_MACRO_SUPPORTED_CONSTEXPR
			return Data_.Data[index] == integer.Data_.Data[index] ?
				(index + 1 == Byte_ ? true : Equal_(integer, index + 1)) :
				(index + 1 == Byte_ ? false : Equal_(integer, index + 1));
#else
			for (Utility::UIntMax i = 0; i < Byte_; ++i)
			{
				if (Data_[i] != integer.Data_[i])
				{
					return false;
				}
			}

			return true;
#endif
		}
	}
}

#endif