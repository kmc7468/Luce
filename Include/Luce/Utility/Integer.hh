#ifndef LUCE_HEADER_UTILITY_INTEGER_HH
#define LUCE_HEADER_UTILITY_INTEGER_HH
#include <Luce/Configuration.hh>

#include <Luce/Utility/NonComparable.hh>
#include <Luce/Utility/NonCopyable.hh>

#if LUCE_MACRO_IS_WINDOWS
#include <basetsd.h>
#else
// TODO
#endif
#include <cstddef>

namespace Luce
{
	namespace Utility
	{
#if LUCE_MACRO_IS_WINDOWS
		typedef ::INT8 Int8;
		typedef ::UINT8 UInt8;
		typedef ::INT16 Int16;
		typedef ::UINT16 UInt16;
		typedef ::INT32 Int32;
		typedef ::UINT32 UInt32;
		typedef ::INT64 Int64;
		typedef ::UINT64 UInt64;
		typedef ::INT_PTR IntPtr;
		typedef ::UINT_PTR UIntPtr;
		
		typedef Int64 IntMax;
		typedef UInt64 UIntMax;
		typedef IntPtr IntFaster;
		typedef UIntPtr UIntFaster;
#else
		// TODO
#endif

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