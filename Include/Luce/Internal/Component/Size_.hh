#ifndef LUCE_HEADER_INTERNAL_COMPONENT_SIZE__HH
#define LUCE_HEADER_INTERNAL_COMPONENT_SIZE__HH

#include <Luce/Exception/LuceException.hh>

#include <stdexcept>
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
#if LUCE_MACRO_SUPPORTED_INITIALIZER_LIST
		template<typename Elem_>
		BasicSize<Elem_>::BasicSize(const std::initializer_list<Elem_>& initializer)
		{
			if (initializer.size() == 2)
			{
				Width_ = *initializer.begin();
				Height_ = *(initializer.begin() + 1);
			}
			else
				throw Exception::LuceException(std::invalid_argument(""), __LINE__,
											   __FILE__, __FUNCTION__);
		}
#endif
		template<typename Elem_>
		bool BasicSize<Elem_>::operator==(const My_& size) const
		{
			return Width_ == size.Width_ && Height_ == size.Height_;
		}
		template<typename Elem_>
		bool BasicSize<Elem_>::operator!=(const My_& size) const
		{
			return Width_ != size.Width_ || Height_ != size.Height_;
		}
		template<typename Elem_>
		BasicSize<Elem_>& BasicSize<Elem_>::operator=(const My_& size)
		{
			Width_ = size.Width_;
			Height_ = size.Height_;
			return *this;
		}
#if LUCE_MACRO_SUPPORTED_RVALUE_REF
		template<typename Elem_>
		BasicSize<Elem_>& BasicSize<Elem_>::operator=(My_&& size) LUCE_MACRO_NOEXCEPT
		{
			Width_ = std::move(size.Width_);
			Height_ = std::move(size.Height_);
			return *this;
		}
#endif

		template<typename Elem_>
		std::pair<Elem_, Elem_> BasicSize<Elem_>::ToPair() const
		{
			return std::pair<Elem_, Elem_>(Width_, Height_);
		}

		template<typename Elem_>
		Elem_ BasicSize<Elem_>::GetWidth() const
		{
			return Width_;
		}
		template<typename Elem_>
		void BasicSize<Elem_>::SetWidth(const Elem_& width)
		{
			Width_ = width;
		}
		template<typename Elem_>
		Elem_ BasicSize<Elem_>::GetHeight() const
		{
			return Height_;
		}
		template<typename Elem_>
		void BasicSize<Elem_>::SetHeight(const Elem_& height)
		{
			Height_ = height;
		}

#if LUCE_MACRO_SUPPORTED_CONSTEXPR
		template<typename Elem_>
		LUCE_MACRO_CONSTEXPR CxBasicSize<Elem_>::CxBasicSize()
			: Width_(0), Height_(0)
		{}
		template<typename Elem_>
		LUCE_MACRO_CONSTEXPR CxBasicSize<Elem_>::
			CxBasicSize(const Elem_& width, const Elem_& height)
			: Width_(width), Height_(height)
		{}
		template<typename Elem_>
		LUCE_MACRO_CONSTEXPR CxBasicSize<Elem_>::CxBasicSize(const My_& size)
			: Width_(size.Width_), Height_(size.Height_)
		{}
#if LUCE_MACRO_SUPPORTED_RVALUE_REF
		template<typename Elem_>
		LUCE_MACRO_CONSTEXPR CxBasicSize<Elem_>::CxBasicSize(My_&& size) LUCE_MACRO_NOEXCEPT
			: Width_(std::move(size.Width_)), Height_(std::move(size.Height_))
		{}
#endif
#if LUCE_MACRO_SUPPORTED_INITIALIZER_LIST
		template<typename Elem_>
		LUCE_MACRO_CONSTEXPR CxBasicSize<Elem_>::CxBasicSize(
			const std::initializer_list<Elem_>& initializer)
			: Width_(*initializer.begin()), Height_(*(initializer.begin() + 1))
		{}
#endif

		template<typename Elem_>
		LUCE_MACRO_CONSTEXPR bool CxBasicSize<Elem_>::operator==(const My_& size) const
		{
			return Width_ == size.Width_ && Height_ == size.Height_;
		}
		template<typename Elem_>
		LUCE_MACRO_CONSTEXPR bool CxBasicSize<Elem_>::operator!=(const My_& size) const
		{
			return Width_ != size.Width_ || Height_ != size.Height_;
		}
		template<typename Elem_>
		CxBasicSize<Elem_>& CxBasicSize<Elem_>::operator=(const My_& size)
		{
			Width_ = size.Width_;
			Height_ = size.Height_;
			return *this;
		}
#if LUCE_MACRO_SUPPORTED_RVALUE_REF
		template<typename Elem_>
		CxBasicSize<Elem_>& CxBasicSize<Elem_>::operator=(My_&& size) LUCE_MACRO_NOEXCEPT
		{
			Width_ = std::move(size.Width_);
			Height_ = std::move(size.Height_);
			return *this;
		}
#endif

		template<typename Elem_>
		std::pair<Elem_, Elem_> CxBasicSize<Elem_>::ToPair() const
		{
			return std::pair<Elem_, Elem_>(Width_, Height_);
		}

		template<typename Elem_>
		LUCE_MACRO_CONSTEXPR Elem_ CxBasicSize<Elem_>::GetWidth() const
		{
			return Width_;
		}
		template<typename Elem_>
		void CxBasicSize<Elem_>::SetWidth(const Elem_& width)
		{
			Width_ = width;
		}
		template<typename Elem_>
		LUCE_MACRO_CONSTEXPR Elem_ CxBasicSize<Elem_>::GetHeight() const
		{
			return Height_;
		}
		template<typename Elem_>
		void CxBasicSize<Elem_>::SetHeight(const Elem_& height)
		{
			Height_ = height;
		}
#endif
	}
}

#endif