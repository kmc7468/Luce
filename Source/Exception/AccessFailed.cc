#include <Luce/Exception/AccessFailed.hh>

#if LUCE_MACRO_SUPPORTED_RVALUE_REF
#include <utility>
#endif

namespace Luce
{
	namespace Exception
	{
		AccessFailed::AccessFailed(const AccessFailed& exception)
			: LuceException(exception)
		{}
#if LUCE_MACRO_SUPPORTED_RVALUE_REF
		AccessFailed::AccessFailed(AccessFailed&& exception) LUCE_MACRO_NOEXCEPT
			: LuceException(std::move(exception))
		{}
#endif

		AccessFailed& AccessFailed::operator=(const AccessFailed& exception)
		{
			LuceException::operator=(exception);

			return *this;
		}
#if LUCE_MACRO_SUPPORTED_RVALUE_REF
		AccessFailed& AccessFailed::operator=(AccessFailed&& exception) LUCE_MACRO_NOEXCEPT
		{
			LuceException::operator=(std::move(exception));

			return *this;
		}
#endif

		std::string AccessFailed::ToString() const
		{
			return ToString("Luce::Exception::AccessFailed");
		}
	}
}