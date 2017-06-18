#ifndef LUCE_HEADER_ALGORITHM_SELECTIONSORT_HH
#define LUCE_HEADER_ALGORITHM_SELECTIONSORT_HH

#include <cstddef>
#include <vector>

namespace Luce
{
	namespace Algorithm
	{
		template<typename Ty_>
		void SelectionSort(std::vector<Ty_>& data);
		template<typename Ty_, std::size_t Len_>
		void SelectionSort(Ty_(&data)[Len_]);
	}

	using Luce::Algorithm::SelectionSort;
}

#include "Detail/SelectionSort.hh"
#endif