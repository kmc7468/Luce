#ifndef LUCE_HEADER_MEMORY_ENDIAN_HH
#define LUCE_HEADER_MEMORY_ENDIAN_HH
#include <Luce/Configuration.hh>

namespace Luce
{
	namespace Memory
	{
		class Endian LUCE_MACRO_FINAL
		{
		public:
			typedef int IntegerType;

			enum Enumeration : IntegerType
			{
				None = 0,
				Little,
				Big,
			};

		public:
			LUCE_MACRO_CONSTEXPR Endian() = default;
			~Endian() = default;
		};
	}
}

#endif