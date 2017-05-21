#ifndef LUCE_HEADER_INTERNAL_COMPONENT_SIZE2__HH
#define LUCE_HEADER_INTERNAL_COMPONENT_SIZE2__HH

#include <Luce/Exception/LuceException.hh>

#include <stdexcept>
#if LUCE_MACRO_SUPPORTED_RVALUE_REF
#include <utility>
#endif

namespace Luce
{
	namespace Component
	{
		template<typename Elem_, typename Area_>
		BasicSize2<Elem_, Area_>::BasicSize2()
		{
			Width_ = Elem_(0);
			Height_ = Elem_(0);
		}
		template<typename Elem_, typename Area_>
		BasicSize2<Elem_, Area_>::BasicSize2(const Elem_& width, const Elem_& height)
		{
			Width_ = width;
			Height_ = height;
		}
		template<typename Elem_, typename Area_>
		BasicSize2<Elem_, Area_>::BasicSize2(const My_& size)
		{
			Width_ = size.Width_;
			Height_ = size.Height_;
		}
#if LUCE_MACRO_SUPPORTED_RVALUE_REF
		template<typename Elem_, typename Area_>
		BasicSize2<Elem_, Area_>::BasicSize2(My_&& size) LUCE_MACRO_NOEXCEPT
		{
			Width_ = std::move(size.Width_);
			Height_ = std::move(size.Height_);
		}
#endif
#if LUCE_MACRO_SUPPORTED_INITIALIZER_LIST
		template<typename Elem_, typename Area_>
		BasicSize2<Elem_, Area_>::BasicSize2(const std::initializer_list<Elem_>& initializer)
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
		template<typename Elem_, typename Area_>
		bool BasicSize2<Elem_, Area_>::operator==(const My_& size) const
		{
			return Width_ == size.Width_ && Height_ == size.Height_;
		}
		template<typename Elem_, typename Area_>
		bool BasicSize2<Elem_, Area_>::operator!=(const My_& size) const
		{
			return Width_ != size.Width_ || Height_ != size.Height_;
		}
		template<typename Elem_, typename Area_>
		BasicSize2<Elem_, Area_>& BasicSize2<Elem_, Area_>::operator=(const My_& size)
		{
			Width_ = size.Width_;
			Height_ = size.Height_;
			return *this;
		}
#if LUCE_MACRO_SUPPORTED_RVALUE_REF
		template<typename Elem_, typename Area_>
		BasicSize2<Elem_, Area_>& BasicSize2<Elem_, Area_>::operator=(My_&& size)
			LUCE_MACRO_NOEXCEPT
		{
			Width_ = std::move(size.Width_);
			Height_ = std::move(size.Height_);
			return *this;
		}
#endif

		template<typename Elem_, typename Area_>
		std::pair<Elem_, Elem_> BasicSize2<Elem_, Area_>::ToPair() const
		{
			return std::pair<Elem_, Elem_>(Width_, Height_);
		}
		template<typename Elem_, typename Area_>
		Area_ BasicSize2<Elem_, Area_>::Area() const
		{
			return Width_ * Height_;
		}

		template<typename Elem_, typename Area_>
		Elem_ BasicSize2<Elem_, Area_>::GetWidth() const
		{
			return Width_;
		}
		template<typename Elem_, typename Area_>
		void BasicSize2<Elem_, Area_>::SetWidth(const Elem_& width)
		{
			Width_ = width;
		}
		template<typename Elem_, typename Area_>
		Elem_ BasicSize2<Elem_, Area_>::GetHeight() const
		{
			return Height_;
		}
		template<typename Elem_, typename Area_>
		void BasicSize2<Elem_, Area_>::SetHeight(const Elem_& height)
		{
			Height_ = height;
		}

#if LUCE_MACRO_SUPPORTED_CONSTEXPR
		template<typename Elem_, typename Area_>
		LUCE_MACRO_CONSTEXPR CxBasicSize2<Elem_, Area_>::CxBasicSize2()
			: Width_(0), Height_(0)
		{}
		template<typename Elem_, typename Area_>
		LUCE_MACRO_CONSTEXPR CxBasicSize2<Elem_, Area_>::
			CxBasicSize2(const Elem_& width, const Elem_& height)
			: Width_(width), Height_(height)
		{}
		template<typename Elem_, typename Area_>
		LUCE_MACRO_CONSTEXPR CxBasicSize2<Elem_, Area_>::CxBasicSize2(const My_& size)
			: Width_(size.Width_), Height_(size.Height_)
		{}
#if LUCE_MACRO_SUPPORTED_RVALUE_REF
		template<typename Elem_, typename Area_>
		LUCE_MACRO_CONSTEXPR CxBasicSize2<Elem_, Area_>::CxBasicSize2(My_&& size)
			LUCE_MACRO_NOEXCEPT
			: Width_(std::move(size.Width_)), Height_(std::move(size.Height_))
		{}
#endif
#if LUCE_MACRO_SUPPORTED_INITIALIZER_LIST
		template<typename Elem_, typename Area_>
		LUCE_MACRO_CONSTEXPR CxBasicSize2<Elem_, Area_>::CxBasicSize2(
			const std::initializer_list<Elem_>& initializer)
			: Width_(*initializer.begin()), Height_(*(initializer.begin() + 1))
		{}
#endif

		template<typename Elem_, typename Area_>
		LUCE_MACRO_CONSTEXPR bool CxBasicSize2<Elem_, Area_>::operator==(const My_& size) const
		{
			return Width_ == size.Width_ && Height_ == size.Height_;
		}
		template<typename Elem_, typename Area_>
		LUCE_MACRO_CONSTEXPR bool CxBasicSize2<Elem_, Area_>::operator!=(const My_& size) const
		{
			return Width_ != size.Width_ || Height_ != size.Height_;
		}
		template<typename Elem_, typename Area_>
		CxBasicSize2<Elem_, Area_>& CxBasicSize2<Elem_, Area_>::operator=(const My_& size)
		{
			Width_ = size.Width_;
			Height_ = size.Height_;
			return *this;
		}
#if LUCE_MACRO_SUPPORTED_RVALUE_REF
		template<typename Elem_, typename Area_>
		CxBasicSize2<Elem_, Area_>& CxBasicSize2<Elem_, Area_>::operator=(My_&& size)
			LUCE_MACRO_NOEXCEPT
		{
			Width_ = std::move(size.Width_);
			Height_ = std::move(size.Height_);
			return *this;
		}
#endif

		template<typename Elem_, typename Area_>
		std::pair<Elem_, Elem_> CxBasicSize2<Elem_, Area_>::ToPair() const
		{
			return std::pair<Elem_, Elem_>(Width_, Height_);
		}
		template<typename Elem_, typename Area_>
		LUCE_MACRO_CONSTEXPR Area_ CxBasicSize2<Elem_, Area_>::Area() const
		{
			return Width_ * Height_;
		}

		template<typename Elem_, typename Area_>
		LUCE_MACRO_CONSTEXPR Elem_ CxBasicSize2<Elem_, Area_>::GetWidth() const
		{
			return Width_;
		}
		template<typename Elem_, typename Area_>
		void CxBasicSize2<Elem_, Area_>::SetWidth(const Elem_& width)
		{
			Width_ = width;
		}
		template<typename Elem_, typename Area_>
		LUCE_MACRO_CONSTEXPR Elem_ CxBasicSize2<Elem_, Area_>::GetHeight() const
		{
			return Height_;
		}
		template<typename Elem_, typename Area_>
		void CxBasicSize2<Elem_, Area_>::SetHeight(const Elem_& height)
		{
			Height_ = height;
		}
#endif
	}
}

#endif