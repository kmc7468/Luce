#ifndef LUCE_HEADER_TYPETRAIT_INTEGERORIGINAL_HH
#define LUCE_HEADER_TYPETRAIT_INTEGERORIGINAL_HH
#include <Luce/Configuration.hh>

namespace Luce
{
	namespace TypeTrait
	{
		template<typename Integer_>
		struct IntegerOriginal LUCE_MACRO_FINAL
		{
			LUCE_MACRO_CANNOT_PARENT(IntegerOriginal)

		public:
			typedef Integer_ Type;
		};

		template<>
		struct IntegerOriginal<signed char> LUCE_MACRO_FINAL
		{
			LUCE_MACRO_CANNOT_PARENT(IntegerOriginal)

		public:
			typedef char Type;
		};
		template<>
		struct IntegerOriginal<unsigned char> LUCE_MACRO_FINAL
		{
			LUCE_MACRO_CANNOT_PARENT(IntegerOriginal)

		public:
			typedef char Type;
		};

		template<>
		struct IntegerOriginal<signed short> LUCE_MACRO_FINAL
		{
			LUCE_MACRO_CANNOT_PARENT(IntegerOriginal)

		public:
			typedef short Type;
		};
		template<>
		struct IntegerOriginal<unsigned short> LUCE_MACRO_FINAL
		{
			LUCE_MACRO_CANNOT_PARENT(IntegerOriginal)

		public:
			typedef short Type;
		};
	
		template<>
		struct IntegerOriginal<signed int> LUCE_MACRO_FINAL
		{
			LUCE_MACRO_CANNOT_PARENT(IntegerOriginal)

		public:
			typedef int Type;
		};
		template<>
		struct IntegerOriginal<unsigned int> LUCE_MACRO_FINAL
		{
			LUCE_MACRO_CANNOT_PARENT(IntegerOriginal)

		public:
			typedef int Type;
		};
	
		template<>
		struct IntegerOriginal<signed long> LUCE_MACRO_FINAL
		{
			LUCE_MACRO_CANNOT_PARENT(IntegerOriginal)

		public:
			typedef long Type;
		};
		template<>
		struct IntegerOriginal<unsigned long> LUCE_MACRO_FINAL
		{
			LUCE_MACRO_CANNOT_PARENT(IntegerOriginal)

		public:
			typedef long Type;
		};
	
		template<>
		struct IntegerOriginal<signed long long> LUCE_MACRO_FINAL
		{
			LUCE_MACRO_CANNOT_PARENT(IntegerOriginal)

		public:
			typedef long long Type;
		};
		template<>
		struct IntegerOriginal<unsigned long long> LUCE_MACRO_FINAL
		{
			LUCE_MACRO_CANNOT_PARENT(IntegerOriginal)

		public:
			typedef long long Type;
		};
	}

	using Luce::TypeTrait::IntegerOriginal;
}

#endif