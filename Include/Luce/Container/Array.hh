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
				
		private:
			typedef TypeTrait::MakeSigned<TypeTrait::IntegerOriginal<std::size_t>::Type>::Type
				SizeType_;

		public:
			Array();

		private:
			bool IsStackAlloc_() const;
			bool IsHeapAlloc_() const;

		private:
			SizeType_ Size_;
		};
	}

	using Luce::Container::Array;
}

#include "Detail/Array.hh"
#endif