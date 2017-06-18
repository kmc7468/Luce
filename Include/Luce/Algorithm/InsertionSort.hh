#ifndef LUCE_HEADER_ALGORITHM_INSERTIONSORT_HH
#define LUCE_HEADER_ALGORITHM_INSERTIONSORT_HH

#include <cstddef>
#include <vector>

namespace Luce
{
	namespace Algorithm
	{
		template<typename Ty_>
		void InsertionSort(std::vector<Ty_>& data);
		template<typename Ty_, std::size_t Len_>
		void InsertionSort(Ty_(&data)[Len_]);
	}

	using Luce::Algorithm::InsertionSort;
}

#include "Detail/InsertionSort.hh"
#endif