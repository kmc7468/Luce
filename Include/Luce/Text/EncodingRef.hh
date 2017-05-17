#ifndef LUCE_HEADER_TEXT_ENCODINGREF_HH
#define LUCE_HEADER_TEXT_ENCODINGREF_HH
#include <Luce/Configuration.hh>

namespace Luce
{
	namespace Text
	{
		class Encoding;

		class EncodingRef LUCE_MACRO_FINAL
		{
			LUCE_MACRO_CANNOT_PARENT(EncodingRef)

		public:
			EncodingRef() LUCE_MACRO_NOEXCEPT;
			EncodingRef(const Encoding& encoding) LUCE_MACRO_NOEXCEPT;
			EncodingRef(const Encoding* const encoding) LUCE_MACRO_NOEXCEPT;
			EncodingRef(const EncodingRef& encoding) LUCE_MACRO_NOEXCEPT;

		private:
			const Encoding* Value_;
		};
	}
}

#endif