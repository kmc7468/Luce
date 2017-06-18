#ifndef LUCE_HEADER_ALGORITHM_DETAIL_SELECTIONSORT_HH
#define LUCE_HEADER_ALGORITHM_DETAIL_SELECTIONSORT_HH

#include <algorithm> // For C++98/03
#include <utility> // For C++11

namespace Luce
{
	namespace Algorithm
	{
		template<typename Ty_>
		void SelectionSort(std::vector<Ty_>& data)
		{
			for (std::size_t i = 0; i < data.size(); ++i)
			{
				for (std::size_t j = i + 1; j < data.size(); ++j)
				{
					if (data[i] > data[j])
					{
						std::swap(data[i], data[j]);
					}
				}
			}
		}
		template<typename Ty_, std::size_t Len_>
		void SelectionSort(Ty_(&data)[Len_])
		{
			for (std::size_t i = 0; i < Len_; ++i)
			{
				for (std::size_t j = i + 1; j < Len_; ++j)
				{
					if (data[i] > data[j])
					{
						std::swap(data[i], data[j]);
					}
				}
			}
		}
	}
}

#endif