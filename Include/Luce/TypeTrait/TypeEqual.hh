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
			LUCE_MACRO_CONSTEXPR static const bool Value
#if LUCE_MACRO_SUPPORTED_CONSTEXPR
				= false
#endif
				;
		};
#if !LUCE_MACRO_SUPPORTED_CONSTEXPR
		template<typename Lhs_, typename Rhs_>
		const bool TypeEqual<Lhs_, Rhs_>::Value = false;
#endif
		template<typename Type_>
		struct TypeEqual<Type_, Type_> LUCE_MACRO_FINAL
			: private Utility::NonComparable, private Utility::NonCopyable
		{
			LUCE_MACRO_CANNOT_PARENT(TypeEqual)

		public:
			LUCE_MACRO_CONSTEXPR static const bool Value
#if LUCE_MACRO_SUPPORTED_CONSTEXPR
				= true
#endif
				;
		};
#if !LUCE_MACRO_SUPPORTED_CONSTEXPR
		template<typename Type_>
		const bool TypeEqual<Type_, Type_>::Value = true;
#endif
	}

	using Luce::TypeTrait::TypeEqual;
}

#endif