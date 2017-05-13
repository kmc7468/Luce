#include <Luce/Exception/NotSupportedPlatform.hh>

#if LUCE_MACRO_SUPPORTED_RVALUE_REF
#include <utility>
#endif

namespace Luce
{
	namespace Exception
	{
		NotSupportedPlatform::NotSupportedPlatform(const NotSupportedPlatform& exception)
			: LuceException(exception)
		{}
#if LUCE_MACRO_SUPPORTED_RVALUE_REF
		NotSupportedPlatform::
			NotSupportedPlatform(NotSupportedPlatform&& exception) LUCE_MACRO_NOEXCEPT
			: LuceException(std::move(exception))
		{}
#endif

		NotSupportedPlatform& NotSupportedPlatform::
			operator=(const NotSupportedPlatform& exception)
		{
			LuceException::operator=(exception);

			return *this;
		}
#if LUCE_MACRO_SUPPORTED_RVALUE_REF
		NotSupportedPlatform& NotSupportedPlatform::
			operator=(NotSupportedPlatform&& exception) LUCE_MACRO_NOEXCEPT
		{
			LuceException::operator=(std::move(exception));

			return *this;
		}
#endif

		std::string NotSupportedPlatform::ToString() const
		{
			return ToString("Luce::Exception::NotSupportedPlatform");
		}
	}
}