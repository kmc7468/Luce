#ifndef LUCE_HEADER_NUMERIC_LIMITEDINT_HH
#define LUCE_HEADER_NUMERIC_LIMITEDINT_HH
#include <Luce/Configuration.hh>

#include <Luce/Utility/Integer.hh>

namespace Luce
{
	namespace Numeric
	{
		template<Utility::UIntMax Byte_>
		class LimitedUInt LUCE_MACRO_FINAL
		{
			LUCE_MACRO_CANNOT_PARENT_CONSTEXPR(LimitedUInt)

		private:
			typedef LimitedUInt<Byte_> My_;

		public:
			LUCE_MACRO_CONSTEXPR LimitedUInt();
			LUCE_MACRO_CONSTEXPR LimitedUInt(const My_& integer);

		public:
			My_& operator=(const My_& integer);
			LUCE_MACRO_CONSTEXPR bool operator==(const My_& integer) const LUCE_MACRO_NOEXCEPT;
			LUCE_MACRO_CONSTEXPR bool operator!=(const My_& integer) const LUCE_MACRO_NOEXCEPT;

		private:
			LUCE_MACRO_CONSTEXPR bool Equal_(const My_& integer, Utility::UIntMax index)
				const LUCE_MACRO_NOEXCEPT;

		private:
			struct
			{
				Utility::UInt8 Data[Byte_];
			} Data_;
		};

		typedef LimitedUInt<8> UInt64;
		typedef LimitedUInt<16> UInt128;
	}

	using Luce::Numeric::LimitedUInt;
}

#include "Detail/LimitedInt.hh"
#endif