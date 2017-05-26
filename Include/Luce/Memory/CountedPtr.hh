#ifndef LUCE_HEADER_MEMORY_COUNTEDPTR_HH
#define LUCE_HEADER_MEMORY_COUNTEDPTR_HH
#include <Luce/Configuration.hh>

#include <Luce/Utility/Integer.hh>

namespace Luce
{
	namespace Memory
	{
		template<typename Ty_>
		class CountedPtr LUCE_MACRO_FINAL
		{
			LUCE_MACRO_CANNOT_PARENT(CountedPtr)

		private:
			typedef CountedPtr<Ty_> My_;

		public:
			CountedPtr();
			CountedPtr(const My_& ptr);
#if LUCE_MACRO_SUPPORTED_RVALUE_REF
			CountedPtr(My_&& ptr);
#endif

		private:
			Ty_* Address_;
			Utility::UIntPtr* Reference_;
		};
	}

	using Luce::Memory::CountedPtr;
}

#include <Luce/Internal/Memory/CountedPtr_.hh>
#endif