#ifndef LUCE_HEADER_MEMORY_ENDIAN_HH
#define LUCE_HEADER_MEMORY_ENDIAN_HH
#include <Luce/Configuration.hh>

namespace Luce
{
	namespace Memory
	{
		class Endian LUCE_MACRO_FINAL
		{
			LUCE_MACRO_CANNOT_PARENT(Endian)

		public:
			enum Enumeration
			{
				None,
				Big,
				Little,
			};
		};
	}
}

#endif