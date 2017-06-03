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
		};
	}

	using Luce::Numberic::Ratio;
}

#include "Detail/Ratio.hh"
#endif