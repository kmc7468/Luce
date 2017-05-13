#include <Luce/Exception/UncaughtApiError.hh>

namespace Luce
{
	namespace Exception
	{
		UncaughtApiError::UncaughtApiError(const UncaughtApiError& exception)
			: LuceException(exception)
		{}
#if LUCE_MACRO_SUPPORTED_RVALUE_REF
		UncaughtApiError::
			UncaughtApiError(UncaughtApiError&& exception) LUCE_MACRO_NOEXCEPT
			: LuceException(std::move(exception))
		{}
#endif

		UncaughtApiError& UncaughtApiError::
			operator=(const UncaughtApiError& exception)
		{
			LuceException::operator=(exception);

			return *this;
		}
#if LUCE_MACRO_SUPPORTED_RVALUE_REF
		UncaughtApiError& UncaughtApiError::
			operator=(UncaughtApiError&& exception) LUCE_MACRO_NOEXCEPT
		{
			LuceException::operator=(std::move(exception));

			return *this;
		}
#endif

		std::string UncaughtApiError::ToString() const
		{
			return ToString("Luce::Exception::UncaughtApiError");
		}
	}
}