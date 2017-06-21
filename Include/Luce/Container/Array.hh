#ifndef LUCE_HEADER_CONTAINER_ARRAY_HH
#define LUCE_HEADER_CONTAINER_ARRAY_HH
#include <Luce/Configuration.hh>

#include <Luce/TypeTrait/IntegerOriginal.hh>
#include <Luce/TypeTrait/MakeSigned.hh>

#include <cstddef>

namespace Luce
{
	namespace Container
	{
		template<typename Ty_>
		class Array LUCE_MACRO_FINAL
		{
			LUCE_MACRO_CANNOT_PARENT(Array)

		public:
			typedef Array<Ty_>* Ptr;

		private:
			typedef Array<Ty_> My_;
			typedef TypeTrait::MakeSigned<TypeTrait::IntegerOriginal<std::size_t>::Type>::Type
				SizeType_;

		public:
			Array();
			Array(const My_& array);
#if LUCE_MACRO_SUPPORTED_RVALUE_REF
			Array(My_&& array);
#endif

		private:
			bool IsStackAlloc_() const;
			bool IsHeapAlloc_() const;

		private:
			Ty_* Address_;
			SizeType_ Size_;
		};
	}

	using Luce::Container::Array;
}

#include "Detail/Array.hh"
#endif