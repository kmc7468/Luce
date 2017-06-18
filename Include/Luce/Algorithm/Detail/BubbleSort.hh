#ifndef LUCE_HEADER_ALGORITHM_DETAIL_BUBBLESORT_HH
#define LUCE_HEADER_ALGORITHM_DETAIL_BUBBLESORT_HH

#include <algorithm> // For C++98/03
#include <utility> // For C++11

namespace Luce
{
	namespace Algorithm
	{
		template<typename Ty_>
		void BubbleSort(std::vector<Ty_>& data)
		{
			for (std::size_t i = 0; i < data.size() - 1; ++i)
			{
				for (std::size_t j = 0; j < data.size() - 1 - i; ++j)
				{
					if (data[j] > data[j + 1])
					{
						std::swap(data[j], data[j + 1]);
					}
				}
			}
		}
		template<typename Ty_, std::size_t Len_>
		void BubbleSort(Ty_(&data)[Len_])
		{
			for (std::size_t i = 0; i < Len_ - 1; ++i)
			{
				for (std::size_t j = 0; j < Len_ - 1 - i; ++j)
				{
					if (data[j] > data[j + 1])
					{
						std::swap(data[j], data[j + 1]);
					}
				}
			}
		}
	}
}

#endif