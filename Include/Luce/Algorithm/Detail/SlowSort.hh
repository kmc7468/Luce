#ifndef LUCE_HEADER_ALGORITHM_DETAIL_SLOWSORT_HH
#define LUCE_HEADER_ALGORITHM_DETAIL_SLOWSORT_HH

namespace Luce
{
	namespace Algorithm
	{
		namespace Detail
		{
			template<typename Ty_>
			void SlowSort_(std::vector<Ty_>& data, std::size_t first, std::size_t last)
			{
				if (first != last)
				{
					std::size_t mid = (first + last) / 2;

					SlowSort_(data, first, mid);
					SlowSort_(data, mid, last);

					if (data[mid - 1] > data[last - 1])
					{
						std::swap(data[mid - 1], data[last - 1]);
					}

					SlowSort_(data, first, last - 1);
				}
			}
			template<typename Ty_, std::size_t Len_>
			void SlowSort_(Ty_(&data)[Len_], std::size_t first, std::size_t last)
			{
				if (first != last)
				{
					std::size_t mid = (first + last) / 2;

					SlowSort_(data, first, mid);
					SlowSort_(data, mid + 1, last);

					if (data[mid] > data[last])
					{
						std::swap(data[mid], data[last]);
					}

					SlowSort_(data, first, last - 1);
				}
			}
		}

		template<typename Ty_>
		void SlowSort(std::vector<Ty_>& data)
		{
			Detail::SlowSort_(data, 0, data.size() - 1);
		}
		template<typename Ty_, std::size_t Len_>
		void SlowSort(Ty_(&data)[Len_])
		{
			Detail::SlowSort_(data, 0, Len_ - 1);
		}
	}
}

#endif