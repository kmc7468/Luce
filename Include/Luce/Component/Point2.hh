#ifndef LUCE_HEADER_COMPONENT_POINT2_HH
#define LUCE_HEADER_COMPONENT_POINT2_HH
#include <Luce/Configuration.hh>

#include <Luce/TypeTrait/EnableIf.hh>
#include <Luce/Utility/Integer.hh>
#include <Luce/Utility/Real.hh>

#if LUCE_MACRO_SUPPORTED_INITIALIZER_LIST
#include <initializer_list>
#endif
#include <utility>

namespace Luce
{
	namespace Component
	{
		template<typename Elem_>
		class BasicPoint2 LUCE_MACRO_FINAL
		{
			LUCE_MACRO_CANNOT_PARENT(BasicPoint2)

		private:
			typedef BasicPoint2<Elem_> My_;

		public:
			BasicPoint2();
			BasicPoint2(const Elem_& x, const Elem_& y);
			BasicPoint2(const My_& location);
#if LUCE_MACRO_SUPPORTED_RVALUE_REF
			BasicPoint2(My_&& location) LUCE_MACRO_NOEXCEPT;
#endif
#if LUCE_MACRO_SUPPORTED_INITIALIZER_LIST
			BasicPoint2(const std::initializer_list<Elem_>& initializer);
#endif

		public:
			bool operator==(const My_& location) const;
			bool operator!=(const My_& location) const;
			My_& operator=(const My_& location);
#if LUCE_MACRO_SUPPORTED_RVALUE_REF
			My_& operator=(My_&& location) LUCE_MACRO_NOEXCEPT;
#endif

		public:
			std::pair<Elem_, Elem_> ToPair() const;

		public:
			Elem_ GetX() const;
			void SetX(const Elem_& x);
			Elem_ GetY() const;
			void SetY(const Elem_& y);

		private:
			Elem_ X_;
			Elem_ Y_;
		};

#if LUCE_MACRO_SUPPORTED_CONSTEXPR
		template<typename Elem_>
		class CxBasicPoint2 LUCE_MACRO_FINAL
		{
			LUCE_MACRO_CANNOT_PARENT_CONSTEXPR(CxBasicPoint2)

		private:
			typedef CxBasicPoint2<Elem_> My_;

		public:
			LUCE_MACRO_CONSTEXPR CxBasicPoint2();
			LUCE_MACRO_CONSTEXPR CxBasicPoint2(const Elem_& x, const Elem_& y);
			LUCE_MACRO_CONSTEXPR CxBasicPoint2(const My_& location);
#if LUCE_MACRO_SUPPORTED_RVALUE_REF
			LUCE_MACRO_CONSTEXPR CxBasicPoint2(My_&& location) LUCE_MACRO_NOEXCEPT;
#endif
#if LUCE_MACRO_SUPPORTED_INITIALIZER_LIST
			LUCE_MACRO_CONSTEXPR CxBasicPoint2(const std::initializer_list<Elem_>& initializer);
#endif

		public:
			LUCE_MACRO_CONSTEXPR bool operator==(const My_& location) const;
			LUCE_MACRO_CONSTEXPR bool operator!=(const My_& location) const;
			My_& operator=(const My_& location);
#if LUCE_MACRO_SUPPORTED_RVALUE_REF
			My_& operator=(My_&& location) LUCE_MACRO_NOEXCEPT;
#endif

		public:
			std::pair<Elem_, Elem_> ToPair() const;

		public:
			LUCE_MACRO_CONSTEXPR Elem_ GetX() const;
			void SetX(const Elem_& x);
			LUCE_MACRO_CONSTEXPR Elem_ GetY() const;
			void SetY(const Elem_& y);

		private:
			Elem_ X_;
			Elem_ Y_;
		};

		typedef CxBasicPoint2<Utility::Int32> Point2;
		typedef CxBasicPoint2<Utility::Real32> Point2F;
#else
		typedef BasicPoint2<Utility::Int32> Point2;
		typedef BasicPoint2<Utility::Real32> Point2F;
#endif
	}

	using Luce::Component::Point2;
	using Luce::Component::Point2F;
}

#include <Luce/Internal/Component/Point2_.hh>
#endif