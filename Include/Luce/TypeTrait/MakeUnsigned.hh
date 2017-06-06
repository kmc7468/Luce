#ifndef LUCE_HEADER_TYPETRAIT_MAKEUNSIGNED_HH
#define LUCE_HEADER_TYPETRAIT_MAKEUNSIGNED_HH
#include <Luce/Configuration.hh>

#include <Luce/TypeTrait/IntegerOriginal.hh>
#include <Luce/Utility/NonComparable.hh>
#include <Luce/Utility/NonCopyable.hh>

namespace Luce
{
	namespace TypeTrait
	{
		namespace Detail
		{
			template<typename Original_>
			struct MakeUnsigned_;
			template<>
			struct MakeUnsigned_<char> LUCE_MACRO_FINAL
				: private Utility::NonComparable, private Utility::NonCopyable
			{
				LUCE_MACRO_CANNOT_PARENT(MakeUnsigned_)

			public:
				typedef unsigned char Type;
			};
			template<>
			struct MakeUnsigned_<short> LUCE_MACRO_FINAL
				: private Utility::NonComparable, private Utility::NonCopyable
			{
				LUCE_MACRO_CANNOT_PARENT(MakeUnsigned_)

			public:
				typedef unsigned short Type;
			};
			template<>
			struct MakeUnsigned_<int> LUCE_MACRO_FINAL
				: private Utility::NonComparable, private Utility::NonCopyable
			{
				LUCE_MACRO_CANNOT_PARENT(MakeUnsigned_)

			public:
				typedef unsigned int Type;
			};
			template<>
			struct MakeUnsigned_<long> LUCE_MACRO_FINAL
				: private Utility::NonComparable, private Utility::NonCopyable
			{
				LUCE_MACRO_CANNOT_PARENT(MakeUnsigned_)

			public:
				typedef unsigned long Type;
			};
#if LUCE_MACRO_SUPPORTED_LONGLONG
			template<>
			struct MakeUnsigned_<long long> LUCE_MACRO_FINAL
				: private Utility::NonComparable, private Utility::NonCopyable
			{
				LUCE_MACRO_CANNOT_PARENT(MakeUnsigned_)

			public:
				typedef unsigned long long Type;
			};
#endif
		}

		template<typename Integer_>
		struct MakeUnsigned LUCE_MACRO_FINAL
			: private Utility::NonComparable, private Utility::NonCopyable
		{
			LUCE_MACRO_CANNOT_PARENT(MakeUnsigned)

		public:
			typedef typename Detail::MakeUnsigned_<
				typename IntegerOriginal<Integer_>::Type>::Type Type;
		};
	}
}

#endif