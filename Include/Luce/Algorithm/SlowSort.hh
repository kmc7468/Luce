#ifndef LUCE_HEADER_ALGORITHM_SLOWSORT_HH
#define LUCE_HEADER_ALGORITHM_SLOWSORT_HH

namespace Luce
{
	namespace Algorithm
	{
		template<typename Ty_>
		void SlowSort(std::vector<Ty_>& data);
		template<typename Ty_, std::size_t Len_>
		void SlowSort(Ty_(&data)[Len_]);
	}

	using Luce::Algorithm::SlowSort;
}

#include "Detail/SlowSort.hh"
#endif