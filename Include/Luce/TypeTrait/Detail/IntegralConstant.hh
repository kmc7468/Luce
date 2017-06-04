#ifndef LUCE_HEADER_TYPETRAIT_DETAIL_INTEGRALCONSTANT_HH
#define LUCE_HEADER_TYPETRAIT_DETAIL_INTEGRALCONSTANT_HH

namespace Luce
{
	namespace TypeTrait
	{
		template<typename Ty_, Ty_ Value_>
		LUCE_MACRO_CONSTEXPR
			IntegralConstant<Ty_, Value_>::operator Ty_() const LUCE_MACRO_NOEXCEPT
		{
			return Value_;
		}
		template<typename Ty_, Ty_ Value_>
		LUCE_MACRO_CONSTEXPR Ty_
			IntegralConstant<Ty_, Value_>::operator()() const LUCE_MACRO_NOEXCEPT
		{
			return Value_;
		}

#if !LUCE_MACRO_SUPPORTED_CONSTEXPR
		template<typename Ty_, Ty_ Value_>
		const Ty_ IntegralConstant<Ty_, Value_>::Value = Value_;
#endif
	}
}

#endif