#ifndef LUCE_HEADER_MATH_DETAIL_TERM_HH
#define LUCE_HEADER_MATH_DETAIL_TERM_HH

namespace Luce
{
	namespace Math
	{
		template<typename Elem_>
		BasicTerm<Elem_>::BasicTerm()
		{
			IsEmpty_ = true;
		}
		template<typename Elem_>
		BasicTerm<Elem_>::BasicTerm(const My_& term)
		{
			IsEmpty_ = term.IsEmpty_;
			Coefficient_ = term.Coefficient_;
			Char_ = term.Char_;
		}
		template<typename Elem_>
		BasicTerm<Elem_>::~BasicTerm()
		{}

		template<typename Elem_>
		bool BasicTerm<Elem_>::IsEmpty() const LUCE_MACRO_NOEXCEPT
		{
			return IsEmpty_;
		}
		template<typename Elem_>
		bool BasicTerm<Elem_>::IsConstant() const LUCE_MACRO_NOEXCEPT
		{
			return !IsEmpty() && Char_.empty();
		}
	}
}

#endif