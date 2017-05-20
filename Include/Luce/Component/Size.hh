#ifndef LUCE_HEADER_COMPONENT_SIZE_HH
#define LUCE_HEADER_COMPONENT_SIZE_HH
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
		class BasicSize LUCE_MACRO_FINAL
		{
			LUCE_MACRO_CANNOT_PARENT(BasicSize)

		private:
			typedef BasicSize<Elem_> My_;
				
		public:
			BasicSize();
			BasicSize(const Elem_& width, const Elem_& height);
			BasicSize(const My_& size);
#if LUCE_MACRO_SUPPORTED_RVALUE_REF
			BasicSize(My_&& size) LUCE_MACRO_NOEXCEPT;
#endif
#if LUCE_MACRO_SUPPORTED_INITIALIZER_LIST
			BasicSize(const std::initializer_list<Elem_>& initializer);
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
		template<typename Elem_>
		class CxBasicSize LUCE_MACRO_FINAL
		{
			LUCE_MACRO_CANNOT_PARENT_CONSTEXPR(CxBasicSize)

		private:
			typedef CxBasicSize<Elem_> My_;

		public:
			LUCE_MACRO_CONSTEXPR CxBasicSize();
			LUCE_MACRO_CONSTEXPR CxBasicSize(const Elem_& width, const Elem_& height);
			LUCE_MACRO_CONSTEXPR CxBasicSize(const My_& size);
#if LUCE_MACRO_SUPPORTED_RVALUE_REF
			LUCE_MACRO_CONSTEXPR CxBasicSize(My_&& size) LUCE_MACRO_NOEXCEPT;
#endif
#if LUCE_MACRO_SUPPORTED_INITIALIZER_LIST
			LUCE_MACRO_CONSTEXPR CxBasicSize(const std::initializer_list<Elem_>& initializer);
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

		public:
			LUCE_MACRO_CONSTEXPR Elem_ GetWidth() const;
			void SetWidth(const Elem_& width);
			LUCE_MACRO_CONSTEXPR Elem_ GetHeight() const;
			void SetHeight(const Elem_& height);

		private:
			Elem_ Width_;
			Elem_ Height_;
		};

		typedef CxBasicSize<Utility::Int32> Size;
		typedef CxBasicSize<Utility::Real32> SizeF;
#else
		typedef BasicSize<Utility::Int32> Size;
		typedef BasicSize<Utility::Real32> SizeF;
#endif
	}

	using Luce::Component::Size;
	using Luce::Component::SizeF;
}

#include <Luce/Internal/Component/Size_.hh>
#endif