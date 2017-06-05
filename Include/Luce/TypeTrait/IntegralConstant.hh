#ifndef LUCE_HEADER_TYPETRAIT_INTEGRALCONSTANT_HH
#define LUCE_HEADER_TYPETRAIT_INTEGRALCONSTANT_HH
#include <Luce/Configuration.hh>

#include <Luce/TypeTrait/EnableIf.hh>
#include <Luce/TypeTrait/IsOriginalType.hh>

namespace Luce
{
	namespace TypeTrait
	{
		/*
		template<typename Ty_, Ty_ Value_>
		struct IntegralConstant;

		template<typename Ty_, Ty_ Value_,
			typename = typename DisableIf<IsOriginalType<Ty_>::Value>::Type>
		struct IntegralConstant
		{
		public:
			typedef Ty_ ValueType;

		public:
			LUCE_MACRO_CONSTEXPR operator Ty_() const LUCE_MACRO_NOEXCEPT;
			LUCE_MACRO_CONSTEXPR Ty_ operator()() const LUCE_MACRO_NOEXCEPT;

		public:
			LUCE_MACRO_CONSTEXPR static const Ty_ Value
#if LUCE_MACRO_SUPPORTED_CONSTEXPR
				= Value_
#endif
				;
		};
		template<typename Ty_, Ty_ Value_,
			typename = typename EnableIf<IsOriginalType<Ty_>::Value>::Type>
			struct IntegralConstant
		{
		public:
			typedef Ty_ ValueType;

		public:
			LUCE_MACRO_CONSTEXPR operator Ty_() const LUCE_MACRO_NOEXCEPT;
			LUCE_MACRO_CONSTEXPR Ty_ operator()() const LUCE_MACRO_NOEXCEPT;

		public:
			LUCE_MACRO_CONSTEXPR static const Ty_ Value
#if LUCE_MACRO_SUPPORTED_CONSTEXPR
				= Value_
#endif
				;
		};

		typedef IntegralConstant<bool, true> True;
		typedef IntegralConstant<bool, false> False;
		*/
	}

	/*using Luce::TypeTrait::IntegralConstant;

	using Luce::TypeTrait::True;
	using Luce::TypeTrait::False;*/
}

#include "Detail/IntegralConstant.hh"
#endif