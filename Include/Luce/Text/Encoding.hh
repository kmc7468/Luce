#ifndef LUCE_HEADER_TEXT_ENCODING_HH
#define LUCE_HEADER_TEXT_ENCODING_HH
#include <Luce/Configuration.hh>

#include <Luce/Utility/Integer.hh>

namespace Luce
{
	namespace Memory
	{
		class Endian;
	}

	namespace Text
	{
		class LUCE_MACRO_EXPORT Encoding
		{
		public:
			virtual ~Encoding();

		protected:
			Encoding();

		public:
			virtual Utility::UInt32 CodePage() const LUCE_MACRO_NOEXCEPT = 0;
			virtual Memory::Endian Endian() const LUCE_MACRO_NOEXCEPT = 0;
		};
	}
}

#endif