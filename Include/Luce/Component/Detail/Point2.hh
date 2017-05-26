#ifndef LUCE_HEADER_COMPONENT_DETAIL_POINT2_HH
#define LUCE_HEADER_COMPONENT_DETAIL_POINT2_HH

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
		BasicPoint2<Elem_>::BasicPoint2()
		{
			X_ = Elem_(0);
			Y_ = Elem_(0);
		}
		template<typename Elem_>
		BasicPoint2<Elem_>::BasicPoint2(const Elem_& x, const Elem_& y)
		{
			X_ = x;
			Y_ = y;
		}
		template<typename Elem_>
		BasicPoint2<Elem_>::BasicPoint2(const My_& location)
		{
			X_ = location.X_;
			Y_ = location.Y_;
		}
#if LUCE_MACRO_SUPPORTED_RVALUE_REF
		template<typename Elem_>
		BasicPoint2<Elem_>::BasicPoint2(My_&& location) LUCE_MACRO_NOEXCEPT
		{
			X_ = std::move(location.X_);
			Y_ = std::move(location.Y_);
		}
#endif
#if LUCE_MACRO_SUPPORTED_INITIALIZER_LIST
		template<typename Elem_>
		BasicPoint2<Elem_>::BasicPoint2(const std::initializer_list<Elem_>& initializer)
		{
			if (initializer.size() == 2)
			{
				X_ = *initializer.begin();
				Y_ = *(initializer.begin() + 1);
			}
			else
				throw Exception::LuceException(std::invalid_argument(""), __LINE__,
											   __FILE__, __FUNCTION__);
		}
#endif
		template<typename Elem_>
		bool BasicPoint2<Elem_>::operator==(const My_& location) const
		{
			return X_ == location.X_ && Y_ == location.Y_;
		}
		template<typename Elem_>
		bool BasicPoint2<Elem_>::operator!=(const My_& location) const
		{
			return X_ != location.X_ || Y_ != location.Y_;
		}
		template<typename Elem_>
		BasicPoint2<Elem_>& BasicPoint2<Elem_>::operator=(const My_& location)
		{
			X_ = location.X_;
			Y_ = location.Y_;
			return *this;
		}
#if LUCE_MACRO_SUPPORTED_RVALUE_REF
		template<typename Elem_>
		BasicPoint2<Elem_>& BasicPoint2<Elem_>::operator=(My_&& location) LUCE_MACRO_NOEXCEPT
		{
			X_ = std::move(location.X_);
			Y_ = std::move(location.Y_);
			return *this;
		}
#endif

		template<typename Elem_>
		std::pair<Elem_, Elem_> BasicPoint2<Elem_>::ToPair() const
		{
			return std::pair<Elem_, Elem_>(X_, Y_);
		}

		template<typename Elem_>
		Elem_ BasicPoint2<Elem_>::GetX() const
		{
			return X_;
		}
		template<typename Elem_>
		void BasicPoint2<Elem_>::SetX(const Elem_& x)
		{
			X_ = x;
		}
		template<typename Elem_>
		Elem_ BasicPoint2<Elem_>::GetY() const
		{
			return Y_;
		}
		template<typename Elem_>
		void BasicPoint2<Elem_>::SetY(const Elem_& y)
		{
			Y_ = y;
		}

#if LUCE_MACRO_SUPPORTED_CONSTEXPR
		template<typename Elem_>
		LUCE_MACRO_CONSTEXPR CxBasicPoint2<Elem_>::CxBasicPoint2()
			: X_(0), Y_(0)
		{}
		template<typename Elem_>
		LUCE_MACRO_CONSTEXPR CxBasicPoint2<Elem_>::
			CxBasicPoint2(const Elem_& x, const Elem_& y)
			: X_(x), Y_(y)
		{}
		template<typename Elem_>
		LUCE_MACRO_CONSTEXPR CxBasicPoint2<Elem_>::CxBasicPoint2(const My_& location)
			: X_(location.X_), Y_(location.Y_)
		{}
#if LUCE_MACRO_SUPPORTED_RVALUE_REF
		template<typename Elem_>
		LUCE_MACRO_CONSTEXPR CxBasicPoint2<Elem_>::CxBasicPoint2(My_&& location) LUCE_MACRO_NOEXCEPT
			: X_(std::move(location.X_)), Y_(std::move(location.Y_))
		{}
#endif
#if LUCE_MACRO_SUPPORTED_INITIALIZER_LIST
		template<typename Elem_>
		LUCE_MACRO_CONSTEXPR CxBasicPoint2<Elem_>::CxBasicPoint2(
			const std::initializer_list<Elem_>& initializer)
			: X_(*initializer.begin()), Y_(*(initializer.begin() + 1))
		{}
#endif

		template<typename Elem_>
		LUCE_MACRO_CONSTEXPR bool CxBasicPoint2<Elem_>::operator==(const My_& location) const
		{
			return X_ == location.X_ && Y_ == location.Y_;
		}
		template<typename Elem_>
		LUCE_MACRO_CONSTEXPR bool CxBasicPoint2<Elem_>::operator!=(const My_& location) const
		{
			return X_ != location.X_ || Y_ != location.Y_;
		}
		template<typename Elem_>
		CxBasicPoint2<Elem_>& CxBasicPoint2<Elem_>::operator=(const My_& location)
		{
			X_ = location.X_;
			Y_ = location.Y_;
			return *this;
		}
#if LUCE_MACRO_SUPPORTED_RVALUE_REF
		template<typename Elem_>
		CxBasicPoint2<Elem_>& CxBasicPoint2<Elem_>::operator=(My_&& location) LUCE_MACRO_NOEXCEPT
		{
			X_ = std::move(location.X_);
			Y_ = std::move(location.Y_);
			return *this;
		}
#endif

		template<typename Elem_>
		std::pair<Elem_, Elem_> CxBasicPoint2<Elem_>::ToPair() const
		{
			return std::pair<Elem_, Elem_>(X_, Y_);
		}

		template<typename Elem_>
		LUCE_MACRO_CONSTEXPR Elem_ CxBasicPoint2<Elem_>::GetX() const
		{
			return X_;
		}
		template<typename Elem_>
		void CxBasicPoint2<Elem_>::SetX(const Elem_& x)
		{
			X_ = x;
		}
		template<typename Elem_>
		LUCE_MACRO_CONSTEXPR Elem_ CxBasicPoint2<Elem_>::GetY() const
		{
			return Y_;
		}
		template<typename Elem_>
		void CxBasicPoint2<Elem_>::SetY(const Elem_& y)
		{
			Y_ = y;
		}
#endif
	}
}

#endif