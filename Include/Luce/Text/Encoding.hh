#ifndef LUCE_HEADER_TEXT_ENCODING_HH
#define LUCE_HEADER_TEXT_ENCODING_HH
#include <Luce/Configuration.hh>

#include <Luce/Utility/Integer.hh>

namespace Luce
{
	namespace Text
	{
		class Encoding
		{
		public:
			Encoding();
			Encoding(const Encoding& encoding);
			virtual ~Encoding();

		public:
			virtual Utility::UInt16 CodePage() const LUCE_MACRO_NOEXCEPT;
		};
	}
}

#endif