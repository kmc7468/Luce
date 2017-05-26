#ifndef LUCE_HEADER_MEMORY_DETAIL_COUNTEDPTR_HH
#define LUCE_HEADER_MEMORY_DETAIL_COUNTEDPTR_HH

#include <cstddef>
#if LUCE_MACRO_SUPPORTED_RVALUE_REF
#include <utility>
#endif

namespace Luce
{
	namespace Memory
	{
		template<typename Ty_>
		CountedPtr<Ty_>::CountedPtr()
		{
			Address_ = new Ty_();
			Reference_ = new Utility::UIntPtr(1);
		}
		template<typename Ty_>
		CountedPtr<Ty_>::CountedPtr(const My_& ptr)
		{
			Address_ = ptr.Address_;
			Reference_ = ptr.Reference_;
			++(*Reference_);
		}
#if LUCE_MACRO_SUPPORTED_RVALUE_REF
		template<typename Ty_>
		CountedPtr<Ty_>::CountedPtr(My_&& ptr)
		{
			Address_ = std::move(ptr.Address_);
			ptr.Address_ = NULL;
			Reference_ = std::move(ptr.Reference_);
			ptr.Reference_ = NULL;
		}
#endif
		template<typename Ty_>
		CountedPtr<Ty_>::~CountedPtr()
		{
			// TEMP

			if (Address_)
			{
				--(*Reference_);

				if (*Reference_ == 0)
				{
					delete Address_;
					delete Reference_;
				}

				Address_ = NULL;
				Reference_ = NULL;
			}
		}
	}
}

#endif