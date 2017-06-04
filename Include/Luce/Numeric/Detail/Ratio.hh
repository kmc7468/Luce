#ifndef LUCE_HEADER_NUMBERIC_DETAIL_RATIO_HH
#define LUCE_HEADER_NUMBERIC_DETAIL_RATIO_HH

namespace Luce
{
	namespace Numberic
	{
#if !LUCE_MACRO_SUPPORTED_CONSTEXPR
		template<Utility::IntMax Num_, Utility::IntMax Den_ = 1>
		const Utility::IntMax Ratio<Num_, Den_>::Numerator = Num_;
		template<Utility::IntMax Num_, Utility::IntMax Den_ = 1>
		const Utility::IntMax Ratio<Num_, Den_>::Denominator = Den_;
#endif
	}
}

#endif