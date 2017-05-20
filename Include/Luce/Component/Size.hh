#ifndef LUCE_HEADER_COMPONENT_SIZE_HH
#define LUCE_HEADER_COMPONENT_SIZE_HH
#include <Luce/Configuration.hh>

#include <Luce/TypeTrait/EnableIf.hh>
#include <Luce/Utility/Integer.hh>

#if LUCE_MACRO_SUPPORTED_INITIALIZER_LIST
#include <initializer_list>
#endif

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
			

		private:
			Elem_ Width_;
			Elem_ Height_;
		};

		typedef BasicSize<Utility::Int32> Size;
		typedef BasicSize<float> SizeF;
	}

	using Luce::Component::Size;
	using Luce::Component::SizeF;
}

#include <Luce/Internal/Component/Size_.hh>
#endif