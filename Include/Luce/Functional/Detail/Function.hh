#ifndef LUCE_HEADER_FUNCTIONAL_DETAIL_FUNCTION_HH
#define LUCE_HEADER_FUNCTIONAL_DETAIL_FUNCTION_HH

namespace Luce
{
	namespace Functional
	{
		template<typename Ty_>
		Function<Ty_, void>::Function()
		{
			Address_ = NULL;
		}
		template<typename Ty_>
		Function<Ty_, void>::Function(My_* const function)
		{
			Address_ = function;
		}
		template<typename Ty_>
		Function<Ty_, void>::Function(const My_& function)
		{
			Address_ = function.Address_;
		}
		template<typename Ty_>
		Function<Ty_, void>::~Function()
		{}

		template<typename Ty_>
		bool Function<Ty_, void>::IsEmpty() const LUCE_MACRO_NOEXCEPT
		{
			return Address_ == NULL;
		}
	}
}

#endif