#ifndef LUCE_HEADER_ALGORITHM_DETAIL_ISSORTED_HH
#define LUCE_HEADER_ALGORITHM_DETAIL_ISSORTED_HH

namespace Luce
{
	namespace Algorithm
	{
		template<typename Iterator_>
		bool IsSorted(const Iterator_& begin, const Iterator_& end)
		{
			return IsSortedUntil(begin, end) == end;
		}
		template<typename Ty_, std::size_t Len_>
		bool IsSorted(const Ty_(&begin)[Len_], const Ty_* const& end)
		{
			return IsSortedUntil(begin, end) == end;
		}
		template<typename Iterator_>
		Iterator_ IsSortedUntil(const Iterator_& begin, const Iterator_& end)
		{
			if (begin != end)
			{
				Iterator_ first = begin;
				Iterator_ next = begin;

				while (++next != end)
				{
					if (*next < *first)
					{
						return next;
					}
					first = next;
				}
			}
			return end;
		}
		template<typename Ty_, std::size_t Len_>
		const Ty_* IsSortedUntil(const Ty_(&begin)[Len_], const Ty_* const& end)
		{
			if (begin != end)
			{
				const Ty_* first = begin;
				const Ty_* next = begin;

				while (++next != end)
				{
					if (*next < *first)
					{
						return next;
					}
					first = next;
				}
			}
			return end;
		}
	}
}

#endif