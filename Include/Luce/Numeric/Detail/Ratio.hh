#ifndef LUCE_HEADER_NUMBERIC_DETAIL_RATIO_HH
#define LUCE_HEADER_NUMBERIC_DETAIL_RATIO_HH

namespace Luce
{
	namespace Numberic
	{
		template<Utility::IntMax Num_, Utility::IntMax Den_>
		const Utility::Real64 Ratio<Num_, Den_>::Real =
			static_cast<Utility::Real64>(Num_) / Den_;
	}
}

#endif