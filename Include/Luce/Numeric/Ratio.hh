#ifndef LUCE_HEADER_NUMBERIC_RATIO_HH
#define LUCE_HEADER_NUMBERIC_RATIO_HH
#include <Luce/Configuration.hh>

#include <Luce/Utility/Integer.hh>
#include <Luce/Utility/Real.hh>

namespace Luce
{
	namespace Numberic
	{
		template<Utility::IntMax Num_, Utility::IntMax Den_>
		struct Ratio LUCE_MACRO_FINAL
		{
			LUCE_MACRO_CANNOT_PARENT_CONSTEXPR(Ratio)

		public:
			LUCE_MACRO_CONSTEXPR static const Utility::IntMax Numerator
#if LUCE_MACRO_SUPPORTED_CONSTEXPR
				= Num_
#endif
				;
			LUCE_MACRO_CONSTEXPR static const Utility::IntMax Denominator
#if LUCE_MACRO_SUPPORTED_CONSTEXPR
				= Den_
#endif
				;
			LUCE_MACRO_CONSTEXPR static const Utility::Real64 Real
#if LUCE_MACRO_SUPPORTED_CONSTEXPR
				= static_cast<Utility::Real64>(Num_) / Den_
#endif
				;
		};

		typedef Ratio<1000000000000000000, 1> Exa;
		typedef Ratio<1000000000000000, 1> Peta;
		typedef Ratio<1000000000000, 1> Tera;
		typedef Ratio<1000000000, 1> Giga;
		typedef Ratio<1000000, 1> Mega;
		typedef Ratio<1000, 1> Kilo;
		typedef Ratio<100, 1> Hecto;
		typedef Ratio<10, 1> Deca;

		typedef Ratio<1, 1000000000000000000> Atto;
		typedef Ratio<1, 1000000000000000> Femto;
		typedef Ratio<1, 1000000000000> Pico;
		typedef Ratio<1, 1000000000> Nano;
		typedef Ratio<1, 1000000> Micro;
		typedef Ratio<1, 1000> Milli;
		typedef Ratio<1, 100> Centi;
		typedef Ratio<1, 10> Deci;
	}

	using Luce::Numberic::Ratio;
}

#include "Detail/Ratio.hh"
#endif