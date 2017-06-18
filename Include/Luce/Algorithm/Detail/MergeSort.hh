#ifndef LUCE_HEADER_ALGORITHM_DETAIL_MERGESORT_HH
#define LUCE_HEADER_ALGORITHM_DETAIL_MERGESORT_HH

#include <algorithm>

namespace Luce
{
	namespace Algorithm
	{
		namespace Detail
		{
			template<typename Ty_>
			void Merge_(std::vector<Ty_>& data, std::size_t first, std::size_t last,
						std::size_t mid)
			{

			}
			template<typename Ty_, std::size_t Len_>
			void Merge_(Ty_(&data)[Len_], std::size_t first, std::size_t last, std::size_t mid)
			{
				Ty_ org[Len_];
				std::copy(data, data + Len_, org);

				std::size_t i = first;
				std::size_t j = mid;

				for (std::size_t k = first; k < last; ++k)
				{
					if (i < mid && (j >= last || org[i] <= org[j]))
					{
						data[k] = org[i++];
					}
					else
					{
						data[k] = org[j++];
					}
				}
			}

			template<typename Ty_>
			void MergeSort_(std::vector<Ty_>& data, std::size_t first, std::size_t last)
			{
				if (last - first >= 2)
				{
					std::size_t mid = (first + last) / 2;

					MergeSort_(data, first, mid);
					MergeSort_(data, mid, last);
					Merge_(data, begin, last, mid);
				}
			}
			template<typename Ty_, std::size_t Len_>
			void MergeSort_(Ty_(&data)[Len_], std::size_t first, std::size_t last)
			{
				if (last - first >= 2)
				{
					std::size_t mid = (first + last) / 2;

					MergeSort_(data, first, mid);
					MergeSort_(data, mid, last);
					Merge_(data, first, last, mid);
				}
			}
		}

		template<typename Ty_>
		void MergeSort(std::vector<Ty_>& data)
		{
			Detail::MergeSort_(data, 0, data.size());
		}
		template<typename Ty_, std::size_t Len_>
		void MergeSort(Ty_(&data)[Len_])
		{
			Detail::MergeSort_(data, 0, Len_);
		}
	}
}

#endif