#ifndef LUCE_HEADER_CONTAINER_DETAIL_ARRAY_HH
#define LUCE_HEADER_CONTAINER_DETAIL_ARRAY_HH

namespace Luce
{
	namespace Container
	{
		template<typename Ty_>
		Array<Ty_>::Array()
		{
			Size_ = 0;
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