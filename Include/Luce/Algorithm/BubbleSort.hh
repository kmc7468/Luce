#ifndef LUCE_HEADER_ALGORITHM_BUBBLESORT_HH
#define LUCE_HEADER_ALGORITHM_BUBBLESORT_HH

#include <cstddef>
#include <vector>

namespace Luce
{
	namespace Algorithm
	{
		template<typename Ty_>
		void BubbleSort(std::vector<Ty_>& data);
		template<typename Ty_, std::size_t Len_>
		void BubbleSort(Ty_(&data)[Len_]);
	}

	using Luce::Algorithm::BubbleSort;
}

#include "Detail/BubbleSort.hh"
#endif