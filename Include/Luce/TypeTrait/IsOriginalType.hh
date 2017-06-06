#ifndef LUCE_HEADER_TYPETRAIT_ISORIGINALTYPE_HH
#define LUCE_HEADER_TYPETRAIT_ISORIGINALTYPE_HH
#include <Luce/Configuration.hh>

#include <Luce/Utility/NonComparable.hh>
#include <Luce/Utility/NonCopyable.hh>

#include <climits>

namespace Luce
{
	namespace TypeTrait
	{
		template<typename Ty_>
		struct IsOriginalType LUCE_MACRO_FINAL
			: private Utility::NonComparable, private Utility::NonCopyable
		{
			LUCE_MACRO_CANNOT_PARENT(IsOriginalType)

		public:
			static const bool Value = false;
		};
		template<>
		struct IsOriginalType<bool> LUCE_MACRO_FINAL
			: private Utility::NonComparable, private Utility::NonCopyable
		{
			LUCE_MACRO_CANNOT_PARENT(IsOriginalType)

		public:
			static const bool Value = true;
		};
		template<>
		struct IsOriginalType<char> LUCE_MACRO_FINAL
			: private Utility::NonComparable, private Utility::NonCopyable
		{
			LUCE_MACRO_CANNOT_PARENT(IsOriginalType)

		public:
			static const bool Value = true;
		};
		template<>
		struct IsOriginalType<signed char> LUCE_MACRO_FINAL
			: private Utility::NonComparable, private Utility::NonCopyable
		{
			LUCE_MACRO_CANNOT_PARENT(IsOriginalType)

		public:
			static const bool Value = true;
		};
		template<>
		struct IsOriginalType<unsigned char> LUCE_MACRO_FINAL
			: private Utility::NonComparable, private Utility::NonCopyable
		{
			LUCE_MACRO_CANNOT_PARENT(IsOriginalType)

		public:
			static const bool Value = true;
		};
		template<>
		struct IsOriginalType<short> LUCE_MACRO_FINAL
			: private Utility::NonComparable, private Utility::NonCopyable
		{
			LUCE_MACRO_CANNOT_PARENT(IsOriginalType)

		public:
			static const bool Value = true;
		};
		template<>
		struct IsOriginalType<unsigned short> LUCE_MACRO_FINAL
			: private Utility::NonComparable, private Utility::NonCopyable
		{
			LUCE_MACRO_CANNOT_PARENT(IsOriginalType)

		public:
			static const bool Value = true;
		};
		template<>
		struct IsOriginalType<int> LUCE_MACRO_FINAL
			: private Utility::NonComparable, private Utility::NonCopyable
		{
			LUCE_MACRO_CANNOT_PARENT(IsOriginalType)

		public:
			static const bool Value = true;
		};
		template<>
		struct IsOriginalType<unsigned int> LUCE_MACRO_FINAL
			: private Utility::NonComparable, private Utility::NonCopyable
		{
			LUCE_MACRO_CANNOT_PARENT(IsOriginalType)

		public:
			static const bool Value = true;
		};
		template<>
		struct IsOriginalType<long> LUCE_MACRO_FINAL
			: private Utility::NonComparable, private Utility::NonCopyable
		{
			LUCE_MACRO_CANNOT_PARENT(IsOriginalType)

		public:
			static const bool Value = true;
		};
		template<>
		struct IsOriginalType<unsigned long> LUCE_MACRO_FINAL
			: private Utility::NonComparable, private Utility::NonCopyable
		{
			LUCE_MACRO_CANNOT_PARENT(IsOriginalType)

		public:
			static const bool Value = true;
		};
#if LUCE_MACRO_SUPPORTED_LONGLONG
		template<>
		struct IsOriginalType<long long> LUCE_MACRO_FINAL
			: private Utility::NonComparable, private Utility::NonCopyable
		{
			LUCE_MACRO_CANNOT_PARENT(IsOriginalType)

		public:
			static const bool Value = true;
		};
		template<>
		struct IsOriginalType<unsigned long long> LUCE_MACRO_FINAL
			: private Utility::NonComparable, private Utility::NonCopyable
		{
			LUCE_MACRO_CANNOT_PARENT(IsOriginalType)

		public:
			static const bool Value = true;
		};
#endif
		template<>
		struct IsOriginalType<float> LUCE_MACRO_FINAL
			: private Utility::NonComparable, private Utility::NonCopyable
		{
			LUCE_MACRO_CANNOT_PARENT(IsOriginalType)

		public:
			static const bool Value = true;
		};
		template<>
		struct IsOriginalType<double> LUCE_MACRO_FINAL
			: private Utility::NonComparable, private Utility::NonCopyable
		{
			LUCE_MACRO_CANNOT_PARENT(IsOriginalType)

		public:
			static const bool Value = true;
		};
		template<>
		struct IsOriginalType<long double> LUCE_MACRO_FINAL
			: private Utility::NonComparable, private Utility::NonCopyable
		{
			LUCE_MACRO_CANNOT_PARENT(IsOriginalType)

		public:
			static const bool Value = true
				;
		};
		template<>
		struct IsOriginalType<wchar_t> LUCE_MACRO_FINAL
			: private Utility::NonComparable, private Utility::NonCopyable
		{
			LUCE_MACRO_CANNOT_PARENT(IsOriginalType)

		public:
			static const bool Value = true;
		};
#if LUCE_MACRO_SUPPORTED_CHAR_1632
		template<>
		struct IsOriginalType<char16_t> LUCE_MACRO_FINAL
			: private Utility::NonComparable, private Utility::NonCopyable
		{
			LUCE_MACRO_CANNOT_PARENT(IsOriginalType)

		public:
			static const bool Value = true;
		};
		template<>
		struct IsOriginalType<char32_t> LUCE_MACRO_FINAL
			: private Utility::NonComparable, private Utility::NonCopyable
		{
			LUCE_MACRO_CANNOT_PARENT(IsOriginalType)

		public:
			static const bool Value = true;
		};
#endif
#ifndef ULLONG_MAX
#if LUCE_MACRO_IS_MSVC
		template<>
		struct IsOriginalType<__int64> LUCE_MACRO_FINAL
			: private Utility::NonComparable, private Utility::NonCopyable
		{
			LUCE_MACRO_CANNOT_PARENT(IsOriginalType)

		public:
			static const bool Value = true;
		};
		template<>
		struct IsOriginalType<unsigned __int64> LUCE_MACRO_FINAL
			: private Utility::NonComparable, private Utility::NonCopyable
		{
			LUCE_MACRO_CANNOT_PARENT(IsOriginalType)

		public:
			static const bool Value = true;
		};
#endif
#endif
	}

	using Luce::TypeTrait::IsOriginalType;
}

#endif