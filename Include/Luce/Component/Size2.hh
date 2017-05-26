#ifndef LUCE_HEADER_COMPONENT_SIZE2_HH
#define LUCE_HEADER_COMPONENT_SIZE2_HH
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
		template<typename Elem_, typename Area_ = Elem_>
		class BasicSize2 LUCE_MACRO_FINAL
		{
			LUCE_MACRO_CANNOT_PARENT(BasicSize2)

		private:
			typedef BasicSize2<Elem_, Area_> My_;
				
		public:
			BasicSize2();
			BasicSize2(const Elem_& width, const Elem_& height);
			BasicSize2(const My_& size);
#if LUCE_MACRO_SUPPORTED_RVALUE_REF
			BasicSize2(My_&& size) LUCE_MACRO_NOEXCEPT;
#endif
#if LUCE_MACRO_SUPPORTED_INITIALIZER_LIST
			BasicSize2(const std::initializer_list<Elem_>& initializer);
#endif

		public:
			bool operator==(const My_& size) const;
			bool operator!=(const My_& size) const;
			My_& operator=(const My_& size);
#if LUCE_MACRO_SUPPORTED_RVALUE_REF
			My_& operator=(My_&& size) LUCE_MACRO_NOEXCEPT;
#endif

		public:
			std::pair<Elem_, Elem_> ToPair() const;
			Area_ Area() const;

		public:
			Elem_ GetWidth() const;
			void SetWidth(const Elem_& width);
			Elem_ GetHeight() const;
			void SetHeight(const Elem_& height);

		private:
			Elem_ Width_;
			Elem_ Height_;
		};

#if LUCE_MACRO_SUPPORTED_CONSTEXPR
		template<typename Elem_, typename Area_ = Elem_>
		class CxBasicSize2 LUCE_MACRO_FINAL
		{
			LUCE_MACRO_CANNOT_PARENT_CONSTEXPR(CxBasicSize2)

		private:
			typedef CxBasicSize2<Elem_, Area_> My_;

		public:
			LUCE_MACRO_CONSTEXPR CxBasicSize2();
			LUCE_MACRO_CONSTEXPR CxBasicSize2(const Elem_& width, const Elem_& height);
			LUCE_MACRO_CONSTEXPR CxBasicSize2(const My_& size);
#if LUCE_MACRO_SUPPORTED_RVALUE_REF
			LUCE_MACRO_CONSTEXPR CxBasicSize2(My_&& size) LUCE_MACRO_NOEXCEPT;
#endif
#if LUCE_MACRO_SUPPORTED_INITIALIZER_LIST
			LUCE_MACRO_CONSTEXPR CxBasicSize2(const std::initializer_list<Elem_>& initializer);
#endif

		public:
			LUCE_MACRO_CONSTEXPR bool operator==(const My_& size) const;
			LUCE_MACRO_CONSTEXPR bool operator!=(const My_& size) const;
			My_& operator=(const My_& size);
#if LUCE_MACRO_SUPPORTED_RVALUE_REF
			My_& operator=(My_&& size) LUCE_MACRO_NOEXCEPT;
#endif

		public:
			std::pair<Elem_, Elem_> ToPair() const;
			LUCE_MACRO_CONSTEXPR Area_ Area() const;

		public:
			LUCE_MACRO_CONSTEXPR Elem_ GetWidth() const;
			void SetWidth(const Elem_& width);
			LUCE_MACRO_CONSTEXPR Elem_ GetHeight() const;
			void SetHeight(const Elem_& height);

		private:
			Elem_ Width_;
			Elem_ Height_;
		};

		typedef CxBasicSize2<Utility::Int32, Utility::Int64> Size2;
		typedef CxBasicSize2<Utility::Real32, Utility::Real64> Size2F;
#else
		typedef BasicSize2<Utility::Int32, Utility::Int64> Size2;
		typedef BasicSize2<Utility::Real32, Utility::Real64> Size2F;
#endif
	}

	using Luce::Component::Size2;
	using Luce::Component::Size2F;
}

#include "Detail/Size2.hh"
#endif