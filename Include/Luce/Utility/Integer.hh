#ifndef LUCE_HEADER_UTILITY_INTEGER_HH
#define LUCE_HEADER_UTILITY_INTEGER_HH
#include <Luce/Configuration.hh>

#include <Luce/TypeTrait/MakeSigned.hh>
#include <Luce/TypeTrait/MakeUnsigned.hh>
#include <Luce/Utility/NonComparable.hh>
#include <Luce/Utility/NonCopyable.hh>

#include <climits>
#include <cstddef>

namespace Luce
{
	namespace Utility
	{
#if UCHAR_MAX == 255
		typedef signed char Int8;
		typedef unsigned char UInt8;
#else
#error It is a platform that does not support the data types required by Luce.
#endif

#if USHRT_MAX == 65535
		typedef signed short Int16;
		typedef unsigned short UInt16;
#elif UINT_MAX == 65535
		typedef signed int Int16;
		typedef unsigned int UInt16;
#else
#error It is a platform that does not support the data types required by Luce.
#endif

#if USHRT_MAX == 4294967295
		typedef signed short Int32;
		typedef unsigned short UInt32;
#elif UINT_MAX == 4294967295
		typedef signed int Int32;
		typedef unsigned int UInt32;
#elif ULONG_MAX == 4294967295
		typedef signed long Int32;
		typedef unsigned long UInt32;
#else
#error It is a platform that does not support the data types required by Luce.
#endif

#ifdef ULLONG_MAX
#if USHRT_MAX == 18446744073709551615
		typedef signed short Int64;
		typedef unsigned short UInt64;
#elif UINT_MAX == 18446744073709551615
		typedef signed int Int64;
		typedef unsigned int UInt64;
#elif ULONG_MAX == 18446744073709551615
		typedef signed long Int64;
		typedef unsigned long UInt64;
#elif ULLONG_MAX == 18446744073709551615
		typedef signed long long Int64;
		typedef unsigned long long UInt64;
#else
#error It is a platform that does not support the data types required by Luce.
#endif
#else
#if USHRT_MAX == 18446744073709551615
		typedef signed short Int64;
		typedef unsigned short UInt64;
#elif UINT_MAX == 18446744073709551615
		typedef signed int Int64;
		typedef unsigned int UInt64;
#elif ULONG_MAX == 18446744073709551615
		typedef signed long Int64;
		typedef unsigned long UInt64;
#else
#error It is a platform that does not support the data types required by Luce.
#endif
#endif

#if LUCE_MACRO_IS_MSVC
#ifdef _WIN64
		typedef Int64 IntPtr;
		typedef UInt64 UIntPtr;
#elif defined(_WIN32)
		typedef Int32 IntPtr;
		typedef UInt32 UIntPtr;
#elif defined(_WIN16)
		typedef Int16 IntPtr;
		typedef UInt16 UIntPtr;
#else
#error It is a platform that does not support the data types required by Luce.
#endif
#else
		typedef typename TypeTrait::MakeSigned<std::size_t>::Type IntPtr;
		typedef typename TypeTrait::MakeUnsigned<std::size_t>::Type UIntPtr;
#endif

		typedef IntPtr IntFaster;
		typedef UIntPtr UIntFaster;
		typedef Int64 IntMax;
		typedef UInt64 UIntMax;

		template<std::size_t Bit_>
		struct IntBit;
		template<>
		struct IntBit<8> LUCE_MACRO_FINAL
			: private NonComparable, private NonCopyable
		{
			LUCE_MACRO_CANNOT_PARENT(IntBit)

		public:
			typedef Int8 Type;
		};
		template<>
		struct IntBit<16> LUCE_MACRO_FINAL
			: private NonComparable, private NonCopyable
		{
			LUCE_MACRO_CANNOT_PARENT(IntBit)

		public:
			typedef Int16 Type;
		};
		template<>
		struct IntBit<32> LUCE_MACRO_FINAL
			: private NonComparable, private NonCopyable
		{
			LUCE_MACRO_CANNOT_PARENT(IntBit)

		public:
			typedef Int32 Type;
		};
		template<>
		struct IntBit<64> LUCE_MACRO_FINAL
			: private NonComparable, private NonCopyable
		{
			LUCE_MACRO_CANNOT_PARENT(IntBit)

		public:
			typedef Int64 Type;
		};

		template<std::size_t Bit_>
		struct UIntBit;
		template<>
		struct UIntBit<8> LUCE_MACRO_FINAL
			: private NonComparable, private NonCopyable
		{
			LUCE_MACRO_CANNOT_PARENT(UIntBit)

		public:
			typedef UInt8 Type;
		};
		template<>
		struct UIntBit<16> LUCE_MACRO_FINAL
			: private NonComparable, private NonCopyable
		{
			LUCE_MACRO_CANNOT_PARENT(UIntBit)

		public:
			typedef UInt16 Type;
		};
		template<>
		struct UIntBit<32> LUCE_MACRO_FINAL
			: private NonComparable, private NonCopyable
		{
			LUCE_MACRO_CANNOT_PARENT(UIntBit)

		public:
			typedef UInt32 Type;
		};
		template<>
		struct UIntBit<64> LUCE_MACRO_FINAL
			: private NonComparable, private NonCopyable
		{
			LUCE_MACRO_CANNOT_PARENT(UIntBit)

		public:
			typedef UInt64 Type;
		};
	}

	using Luce::Utility::Int8;
	using Luce::Utility::Int16;
	using Luce::Utility::Int32;
	using Luce::Utility::Int64;
	using Luce::Utility::IntPtr;
	using Luce::Utility::IntMax;
	using Luce::Utility::IntFaster;
	using Luce::Utility::IntBit;

	using Luce::Utility::UInt8;
	using Luce::Utility::UInt16;
	using Luce::Utility::UInt32;
	using Luce::Utility::UInt64;
	using Luce::Utility::UIntPtr;
	using Luce::Utility::UIntMax;
	using Luce::Utility::UIntFaster;
	using Luce::Utility::UIntBit;
}

#endif