#ifndef LUCE_HEADER_ALGORITHM_DETAIL_QUICKSORT_HH
#define LUCE_HEADER_ALGORITHM_DETAIL_QUICKSORT_HH

#include <algorithm> // For C++98/03
#include <utility> // For C++11

namespace Luce
{
	namespace Algorithm
	{
		namespace Detail
		{
			template<typename Ty_>
			void QuickSort_(std::vector<Ty_>& data, std::size_t left, std::size_t right)
			{
				std::size_t i = left;
				std::size_t j = right;
				std::size_t pivot = data[(left + right) / 2];

				do
				{
					while (data[i] < pivot)
					{
						++i;
					}
					while (data[j] > pivot)
					{
						if (j == 0)
						{
							break;
						}
						--j;
					}

					if (i <= j)
					{
						std::swap(data[i], data[j]);
						++i;
						if (j == 0)
						{
							break;
						}
						--j;
					}
				} while (i <= j);

				if (left < j)
				{
					QuickSort_(data, left, j);
				}

				if (i < right)
				{
					QuickSort_(data, i, right);
				}
			}
			template<typename Ty_, std::size_t Len_>
			void QuickSort_(Ty_(&data)[Len_], std::size_t left, std::size_t right)
			{
				std::size_t i = left;
				std::size_t j = right;
				std::size_t pivot = data[(left + right) / 2];

				do
				{
					while (data[i] < pivot)
					{
						++i;
					}
					while (data[j] > pivot)
					{
						if (j == 0)
						{
							break;
						}
						--j;
					}

					if (i <= j)
					{
						std::swap(data[i], data[j]);
						++i;
						if (j == 0)
						{
							break;
						}
						--j;
					}
				} while (i <= j);

				if (left < j)
				{
					QuickSort_(data, left, j);
				}

				if (i < right)
				{
					QuickSort_(data, i, right);
				}
			}
		}

		template<typename Ty_>
		void QuickSort(std::vector<Ty_>& data)
		{
			Detail::QuickSort_(data, 0, data.size());
		}
		template<typename Ty_, std::size_t Len_>
		void QuickSort(Ty_(&data)[Len_])
		{
			Detail::QuickSort_(data, 0, Len_);
		}
	}
}

#endif