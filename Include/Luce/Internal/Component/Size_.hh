#ifndef LUCE_HEADER_INTERNAL_COMPONENT_SIZE__HH
#define LUCE_HEADER_INTERNAL_COMPONENT_SIZE__HH

#if LUCE_MACRO_SUPPORTED_RVALUE_REF
#include <utility>
#endif

namespace Luce
{
	namespace Component
	{
		template<typename Elem_>
		BasicSize<Elem_>::BasicSize()
		{
			Width_ = Elem_(0);
			Height_ = Elem_(0);
		}
		template<typename Elem_>
		BasicSize<Elem_>::BasicSize(const Elem_& width, const Elem_& height)
		{
			Width_ = width;
			Height_ = height;
		}
		template<typename Elem_>
		BasicSize<Elem_>::BasicSize(const My_& size)
		{
			Width_ = size.Width_;
			Height_ = size.Height_;
		}
#if LUCE_MACRO_SUPPORTED_RVALUE_REF
		template<typename Elem_>
		BasicSize<Elem_>::BasicSize(My_&& size) LUCE_MACRO_NOEXCEPT
		{
			Width_ = std::move(size.Width_);
			Height_ = std::move(size.Height_);
		}
#endif
	}
}

#endif