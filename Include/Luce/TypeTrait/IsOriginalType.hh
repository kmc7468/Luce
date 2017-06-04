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
		struct LUCE_MACRO_EXPORT IsOriginalType LUCE_MACRO_FINAL
			: private Utility::NonComparable, private Utility::NonCopyable
		{
			LUCE_MACRO_CANNOT_PARENT(IsOriginalType)

		public:
			static const bool Value = false;
		};
		template<>
		struct LUCE_MACRO_EXPORT IsOriginalType<bool> LUCE_MACRO_FINAL
			: private Utility::NonComparable, private Utility::NonCopyable
		{
			LUCE_MACRO_CANNOT_PARENT(IsOriginalType)

		public:
			static const bool Value = true;
		};
		template<>
		struct LUCE_MACRO_EXPORT IsOriginalType<char> LUCE_MACRO_FINAL
			: private Utility::NonComparable, private Utility::NonCopyable
		{
			LUCE_MACRO_CANNOT_PARENT(IsOriginalType)

		public:
			static const bool Value = true;
		};
		template<>
		struct LUCE_MACRO_EXPORT IsOriginalType<signed char> LUCE_MACRO_FINAL
			: private Utility::NonComparable, private Utility::NonCopyable
		{
			LUCE_MACRO_CANNOT_PARENT(IsOriginalType)

		public:
			static const bool Value = true;
		};
		template<>
		struct LUCE_MACRO_EXPORT IsOriginalType<unsigned char> LUCE_MACRO_FINAL
			: private Utility::NonComparable, private Utility::NonCopyable
		{
			LUCE_MACRO_CANNOT_PARENT(IsOriginalType)

		public:
			static const bool Value = true;
		};
		template<>
		struct LUCE_MACRO_EXPORT IsOriginalType<short> LUCE_MACRO_FINAL
			: private Utility::NonComparable, private Utility::NonCopyable
		{
			LUCE_MACRO_CANNOT_PARENT(IsOriginalType)

		public:
			static const bool Value = true;
		};
		template<>
		struct LUCE_MACRO_EXPORT IsOriginalType<unsigned short> LUCE_MACRO_FINAL
			: private Utility::NonComparable, private Utility::NonCopyable
		{
			LUCE_MACRO_CANNOT_PARENT(IsOriginalType)

		public:
			static const bool Value = true;
		};
		template<>
		struct LUCE_MACRO_EXPORT IsOriginalType<int> LUCE_MACRO_FINAL
			: private Utility::NonComparable, private Utility::NonCopyable
		{
			LUCE_MACRO_CANNOT_PARENT(IsOriginalType)

		public:
			static const bool Value = true;
		};
		template<>
		struct LUCE_MACRO_EXPORT IsOriginalType<unsigned int> LUCE_MACRO_FINAL
			: private Utility::NonComparable, private Utility::NonCopyable
		{
			LUCE_MACRO_CANNOT_PARENT(IsOriginalType)

		public:
			static const bool Value = true;
		};
		template<>
		struct LUCE_MACRO_EXPORT IsOriginalType<long> LUCE_MACRO_FINAL
			: private Utility::NonComparable, private Utility::NonCopyable
		{
			LUCE_MACRO_CANNOT_PARENT(IsOriginalType)

		public:
			static const bool Value = true;
		};
		template<>
		struct LUCE_MACRO_EXPORT IsOriginalType<unsigned long> LUCE_MACRO_FINAL
			: private Utility::NonComparable, private Utility::NonCopyable
		{
			LUCE_MACRO_CANNOT_PARENT(IsOriginalType)

		public:
			static const bool Value = true;
		};
		template<>
		struct LUCE_MACRO_EXPORT IsOriginalType<long long> LUCE_MACRO_FINAL
			: private Utility::NonComparable, private Utility::NonCopyable
		{
			LUCE_MACRO_CANNOT_PARENT(IsOriginalType)

		public:
			static const bool Value = true;
		};
		template<>
		struct LUCE_MACRO_EXPORT IsOriginalType<unsigned long long> LUCE_MACRO_FINAL
			: private Utility::NonComparable, private Utility::NonCopyable
		{
			LUCE_MACRO_CANNOT_PARENT(IsOriginalType)

		public:
			static const bool Value = true;
		};
		template<>
		struct LUCE_MACRO_EXPORT IsOriginalType<float> LUCE_MACRO_FINAL
			: private Utility::NonComparable, private Utility::NonCopyable
		{
			LUCE_MACRO_CANNOT_PARENT(IsOriginalType)

		public:
			static const bool Value = true;
		};
		template<>
		struct LUCE_MACRO_EXPORT IsOriginalType<double> LUCE_MACRO_FINAL
			: private Utility::NonComparable, private Utility::NonCopyable
		{
			LUCE_MACRO_CANNOT_PARENT(IsOriginalType)

		public:
			static const bool Value = true;
		};
		template<>
		struct LUCE_MACRO_EXPORT IsOriginalType<long double> LUCE_MACRO_FINAL
			: private Utility::NonComparable, private Utility::NonCopyable
		{
			LUCE_MACRO_CANNOT_PARENT(IsOriginalType)

		public:
			static const bool Value = true
				;
		};
		template<>
		struct LUCE_MACRO_EXPORT IsOriginalType<wchar_t> LUCE_MACRO_FINAL
			: private Utility::NonComparable, private Utility::NonCopyable
		{
			LUCE_MACRO_CANNOT_PARENT(IsOriginalType)

		public:
			static const bool Value = true;
		};
#if LUCE_MACRO_SUPPORTED_CHAR_1632
		template<>
		struct LUCE_MACRO_EXPORT IsOriginalType<char16_t> LUCE_MACRO_FINAL
			: private Utility::NonComparable, private Utility::NonCopyable
		{
			LUCE_MACRO_CANNOT_PARENT(IsOriginalType)

		public:
			static const bool Value = true;
		};
		template<>
		struct LUCE_MACRO_EXPORT IsOriginalType<char32_t> LUCE_MACRO_FINAL
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
		struct LUCE_MACRO_EXPORT IsOriginalType<__int64> LUCE_MACRO_FINAL
			: private Utility::NonComparable, private Utility::NonCopyable
		{
			LUCE_MACRO_CANNOT_PARENT(IsOriginalType)

		public:
			static const bool Value = true;
		};
		template<>
		struct LUCE_MACRO_EXPORT IsOriginalType<unsigned __int64> LUCE_MACRO_FINAL
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