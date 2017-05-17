#ifndef LUCE_HEADER_TYPETRAIT_MAKESIGNED_HH
#define LUCE_HEADER_TYPETRAIT_MAKESIGNED_HH
#include <Luce/Configuration.hh>

#include <Luce/TypeTrait/IntegerOriginal.hh>
#include <Luce/Utility/NonComparable.hh>
#include <Luce/Utility/NonCopyable.hh>

namespace Luce
{
	namespace TypeTrait
	{
		template<typename Original_>
		struct MakeSigned_;

		template<typename Integer_>
		struct MakeSigned LUCE_MACRO_FINAL
			: private Utility::NonComparable, private Utility::NonCopyable
		{
			LUCE_MACRO_CANNOT_PARENT(MakeSigned)

		public:
			typedef typename MakeSigned_<
				typename IntegerOriginal<Integer_>::Type>::Type Type;
		};

		template<>
		struct MakeSigned_<char> LUCE_MACRO_FINAL
			: private Utility::NonComparable, private Utility::NonCopyable
		{
			LUCE_MACRO_CANNOT_PARENT(MakeSigned_)

		public:
			typedef signed char Type;
		};
		template<>
		struct MakeSigned_<short> LUCE_MACRO_FINAL
			: private Utility::NonComparable, private Utility::NonCopyable
		{
			LUCE_MACRO_CANNOT_PARENT(MakeSigned_)

		public:
			typedef signed short Type;
		};
		template<>
		struct MakeSigned_<int> LUCE_MACRO_FINAL
			: private Utility::NonComparable, private Utility::NonCopyable
		{
			LUCE_MACRO_CANNOT_PARENT(MakeSigned_)

		public:
			typedef signed int Type;
		};
		template<>
		struct MakeSigned_<long> LUCE_MACRO_FINAL
			: private Utility::NonComparable, private Utility::NonCopyable
		{
			LUCE_MACRO_CANNOT_PARENT(MakeSigned_)

		public:
			typedef signed long Type;
		};
		template<>
		struct MakeSigned_<long long> LUCE_MACRO_FINAL
			: private Utility::NonComparable, private Utility::NonCopyable
		{
			LUCE_MACRO_CANNOT_PARENT(MakeSigned_)

		public:
			typedef signed long long Type;
		};
	}
}

#endif