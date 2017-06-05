#ifndef LUCE_HEADER_TYPETRAIT_TYPEEQUAL_HH
#define LUCE_HEADER_TYPETRAIT_TYPEEQUAL_HH
#include <Luce/Configuration.hh>

#include <Luce/Utility/NonComparable.hh>
#include <Luce/Utility/NonCopyable.hh>

namespace Luce
{
	namespace TypeTrait
	{
		template<typename Lhs_, typename Rhs_>
		struct TypeEqual LUCE_MACRO_FINAL
			: private Utility::NonComparable, private Utility::NonCopyable
		{
			LUCE_MACRO_CANNOT_PARENT(TypeEqual)

		public:
			static const bool Value = false;
		};
		template<typename Type_>
		struct TypeEqual<Type_, Type_> LUCE_MACRO_FINAL
			: private Utility::NonComparable, private Utility::NonCopyable
		{
			LUCE_MACRO_CANNOT_PARENT(TypeEqual)

		public:
			static const bool Value = true;
		};
	}

	using Luce::TypeTrait::TypeEqual;
}

#endif