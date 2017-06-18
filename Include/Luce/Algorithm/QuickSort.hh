#ifndef LUCE_HEADER_ALGORITHM_QUICKSORT_HH
#define LUCE_HEADER_ALGORITHM_QUICKSORT_HH

#include <cstddef>
#include <vector>

namespace Luce
{
	namespace Algorithm
	{
		template<typename Ty_>
		void QuickSort(std::vector<Ty_>& data);
		template<typename Ty_, std::size_t Len_>
		void QuickSort(Ty_(&data)[Len_]);
	}

	using Luce::Algorithm::QuickSort;
}

#include "Detail/QuickSort.hh"
#endif