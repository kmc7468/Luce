#ifndef LUCE_HEADER_ALGORITHM_ISSORTED_HH
#define LUCE_HEADER_ALGORITHM_ISSORTED_HH

#include <cstddef>

namespace Luce
{
	namespace Algorithm
	{
		template<typename Iterator_>
		bool IsSorted(const Iterator_& begin, const Iterator_& end);
		template<typename Ty_, std::size_t Len_>
		bool IsSorted(const Ty_(&begin)[Len_], const Ty_* const& end);
		template<typename Ty_, std::size_t Len_>
		bool IsSorted(const Ty_(&begin)[Len_]);
		template<typename Iterator_>
		Iterator_ IsSortedUntil(const Iterator_& begin, const Iterator_& end);
		template<typename Ty_, std::size_t Len_>
		const Ty_* IsSortedUntil(const Ty_(&begin)[Len_], const Ty_* const& end);
		template<typename Ty_, std::size_t Len_>
		const Ty_* IsSortedUntil(const Ty_(&begin)[Len_]);
	}

	using Luce::Algorithm::IsSorted;
	using Luce::Algorithm::IsSortedUntil;
}

#include "Detail/IsSorted.hh"
#endif