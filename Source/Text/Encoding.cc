#include <Luce/Text/Encoding.hh>

#include <cstddef>

namespace Luce
{
	namespace Text
	{
		Encoding::~Encoding()
		{}

		Encoding::Encoding()
		{}
		
		const EncodingRef Encoding::Default = NULL;
		const EncodingRef Encoding::Ascii = NULL;
		const EncodingRef Encoding::UTF8 = NULL;
		const EncodingRef Encoding::UTF16 = NULL;
		const EncodingRef Encoding::UTF32 = NULL;
		const EncodingRef Encoding::UTF16_BigEndian = NULL;
		const EncodingRef Encoding::UTF32_BigEndian = NULL;
	}
}