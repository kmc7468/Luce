#ifndef LUCE_HEADER_MATH_ISPRIME_HH
#define LUCE_HEADER_MATH_ISPRIME_HH
#include <Luce/Configuration.hh>

#include <cstddef>

namespace Luce
{
	namespace Math
	{
		namespace Detail
		{
			template<typename Ty_>
			LUCE_MACRO_CONSTEXPR bool IsPrime_(Ty_ number, std::size_t div);
		}

		template<typename Ty_>
		LUCE_MACRO_CONSTEXPR bool IsPrime(Ty_ number);
		template<typename Ty_>
		bool IsPrimeFast(const Ty_& number);
	}

	using Luce::Math::IsPrime;
	using Luce::Math::IsPrimeFast;
}

#include "Detail/IsPrime.hh"
#endif