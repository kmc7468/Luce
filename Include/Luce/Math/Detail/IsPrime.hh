#ifndef LUCE_HEADER_MATH_DETAIL_ISPRIME_HH
#define LUCE_HEADER_MATH_DETAIL_ISPRIME_HH

namespace Luce
{
	namespace Math
	{
		namespace Detail
		{
			template<typename Ty_>
			LUCE_MACRO_CONSTEXPR bool IsPrime_(Ty_ number, std::size_t div)
			{
				return number == 2 ? true :
					(number < 2 ? false :
					(number == (div + 1) ?
					(number % div == 0 ? false : true) :
					(number % div == 0 ? false : IsPrime_(number, div + 1))));
			}
		}

		template<typename Ty_>
		LUCE_MACRO_CONSTEXPR bool IsPrime(Ty_ number)
		{
			return Detail::IsPrime_(number, 2);
		}
		template<typename Ty_>
		bool IsPrimeFast(const Ty_& number)
		{
			if (number == 2)
			{
				return true;
			}
			else if (number < 2)
			{
				return false;
			}

			for (std::size_t i = 2; i < number; ++i)
			{
				if (i % number == 0)
				{
					return false;
				}
			}

			return true;
		}
	}
}

#endif