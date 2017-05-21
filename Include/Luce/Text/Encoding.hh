#ifndef LUCE_HEADER_TEXT_ENCODING_HH
#define LUCE_HEADER_TEXT_ENCODING_HH
#include <Luce/Configuration.hh>

#include <Luce/Text/EncodingRef.hh>
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

		public:
			static const EncodingRef Default;
			static const EncodingRef Ascii;
			static const EncodingRef UTF8;
			static const EncodingRef UTF16;
			static const EncodingRef UTF32;
			static const EncodingRef UTF16_BigEndian;
			static const EncodingRef UTF32_BigEndian;
		};
	}
}

#endif