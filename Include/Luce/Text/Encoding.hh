#ifndef LUCE_HEADER_TEXT_ENCODING_HH
#define LUCE_HEADER_TEXT_ENCODING_HH
#include <Luce/Configuration.hh>

#include <Luce/Text/EncodingRef.hh>
#include <Luce/Utility/Integer.hh>
#include <Luce/Utility/NonCopyable.hh>

namespace Luce
{
	namespace Memory
	{
		class Endian;
	}

	namespace Text
	{
		class LUCE_MACRO_EXPORT Encoding
			: Utility::NonCopyable
		{
		public:
			virtual ~Encoding();

		protected:
			Encoding();

		public:
			bool operator==(const Encoding& encoding) const LUCE_MACRO_NOEXCEPT;
			bool operator!=(const Encoding& encoding) const LUCE_MACRO_NOEXCEPT;

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

#if !defined(LUCE_MACRO_LINKING_TEXT) && LUCE_MACRO_IS_MSVC
#define LUCE_MACRO_LINKING_TEXT
#pragma comment(lib, "Luce-Text.lib")
#endif
#endif