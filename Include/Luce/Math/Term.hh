#ifndef LUCE_HEADER_MATH_TERM_HH
#define LUCE_HEADER_MATH_TERM_HH
#include <Luce/Configuration.hh>

#include <vector>

namespace Luce
{
	namespace Math
	{
		template<typename Elem_>
		class BasicTerm LUCE_MACRO_FINAL
		{
			LUCE_MACRO_CANNOT_PARENT(BasicTerm)

		private:
			typedef BasicTerm<Elem_> My_;

		public:
			BasicTerm();
			BasicTerm(const My_& term);

		public:
			bool IsEmpty() const LUCE_MACRO_NOEXCEPT;
			bool IsConstant() const LUCE_MACRO_NOEXCEPT;

		private:
			bool IsEmpty_;
			Elem_ Coefficient_;
			std::vector<char> Char_;
		};

		typedef BasicTerm<double> Term;
	}
}

#include "Detail/Term.hh"
#endif