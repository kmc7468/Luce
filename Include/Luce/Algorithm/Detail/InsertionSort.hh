#ifndef LUCE_HEADER_ALGORITHM_DETAIL_INSERTIONSORT_HH
#define LUCE_HEADER_ALGORITHM_DETAIL_INSERTIONSORT_HH

#include <algorithm> // For C++98/03
#include <utility> // For C++11

namespace Luce
{
	namespace Algorithm
	{
		template<typename Ty_>
		void InsertionSort(std::vector<Ty_>& data)
		{
			
		}
		template<typename Ty_, std::size_t Len_>
		void InsertionSort(Ty_(&data)[Len_])
		{
			for (std::size_t i = 1; i < Len_; ++i)
			{
				std::size_t j = i - 1;
				Ty_ temp = data[i];

				while (j >= 0 && temp < data[j])
				{
					std::swap(data[j], data[j + 1]);
					if (j == 0)
					{
						break;
					}
					--j;
				}
			}
		}
	}
}

#endif