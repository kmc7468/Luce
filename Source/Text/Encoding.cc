#include <Luce/Text/Encoding.hh>

namespace Luce
{
	namespace Text
	{
		Encoding::~Encoding()
		{}

		Utility::UInt16 Encoding::CodePage() const LUCE_MACRO_NOEXCEPT
		{
			return 0;
		}
	}
}