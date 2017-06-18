#ifndef LUCE_HEADER_ALGORITHM_MERGESORT_HH
#define LUCE_HEADER_ALGORITHM_MERGESORT_HH

#include <cstddef>
#include <vector>

namespace Luce
{
	namespace Algorithm
	{
		template<typename Ty_>
		void MergeSort(std::vector<Ty_>& data);
		template<typename Ty_, std::size_t Len_>
		void MergeSort(Ty_(&data)[Len_]);
	}

	using Luce::Algorithm::MergeSort;
}

#include "Detail/MergeSort.hh"
#endif