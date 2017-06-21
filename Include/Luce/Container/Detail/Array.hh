#ifndef LUCE_HEADER_CONTAINER_DETAIL_ARRAY_HH
#define LUCE_HEADER_CONTAINER_DETAIL_ARRAY_HH

#include <algorithm>

namespace Luce
{
	namespace Container
	{
		template<typename Ty_>
		Array<Ty_>::Array()
		{
			Address_ = NULL;
			Size_ = 0;
		}
		template<typename Ty_>
		Array<Ty_>::Array(const My_& array)
		{
			if (IsHeapAlloc_())
			{
				Address_ = new Ty_[array.Size_];
				Size_ = array.Size_;
				std::copy(Address_, Address_ + Size_, array.Address_);
			}
			else
			{
				// TODO: Stack alloctation
			}
		}

		template<typename Ty_>
		Array<Ty_>::~Array()
		{
			if (IsHeapAlloc_())
			{
				delete[] Address_;
			}
		}

		template<typename Ty_>
		bool Array<Ty_>::IsStackAlloc_() const
		{
			return Size_ < 0;
		}
		template<typename Ty_>
		bool Array<Ty_>::IsHeapAlloc_() const
		{
			return Size_ > 0;
		}
	}
}

#endif