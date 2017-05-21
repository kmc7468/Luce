#ifndef LUCE_HEADER_TEXT_ENCODINGREF_HH
#define LUCE_HEADER_TEXT_ENCODINGREF_HH
#include <Luce/Configuration.hh>

namespace Luce
{
	namespace Text
	{
		class Encoding;

		class LUCE_MACRO_EXPORT EncodingRef LUCE_MACRO_FINAL
		{
			friend class Encoding;

			LUCE_MACRO_CANNOT_PARENT(EncodingRef)

		public:
			EncodingRef() LUCE_MACRO_NOEXCEPT;
			EncodingRef(const Encoding& encoding) LUCE_MACRO_NOEXCEPT;
			EncodingRef(const Encoding* const encoding) LUCE_MACRO_NOEXCEPT;
			EncodingRef(const EncodingRef& encoding) LUCE_MACRO_NOEXCEPT;

		private:
			EncodingRef(const Encoding& encoding, bool free) LUCE_MACRO_NOEXCEPT;
			EncodingRef(const Encoding* const encoding, bool free) LUCE_MACRO_NOEXCEPT;

		public:
			const Encoding* operator->() const;
			operator bool() const LUCE_MACRO_NOEXCEPT;

		public:
			const Encoding* Get() const LUCE_MACRO_NOEXCEPT;
			bool IsNull() const LUCE_MACRO_NOEXCEPT;

		private:
			const Encoding* Value_;
			bool Free_;
		};
	}
}

#if !defined(LUCE_MACRO_LINKING_TEXT) && LUCE_MACRO_IS_MSVC
#define LUCE_MACRO_LINKING_TEXT
#pragma comment(lib, "Luce-Text.lib")
#endif
#endif