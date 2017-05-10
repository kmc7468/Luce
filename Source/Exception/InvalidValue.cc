#include <Luce/Exception/InvalidValue.hh>

#if LUCE_MACRO_SUPPORTED_RVALUE_REF
#include <utility>
#endif

namespace Luce
{
	namespace Exception
	{
		InvalidValue::InvalidValue(const InvalidValue& exception)
			: LuceException(exception)
		{}
#if LUCE_MACRO_SUPPORTED_RVALUE_REF
		InvalidValue::InvalidValue(InvalidValue&& exception) LUCE_MACRO_NOEXCEPT
			: LuceException(std::move(exception))
		{}
#endif

		InvalidValue& InvalidValue::operator=(const InvalidValue& exception)
		{
			LuceException::operator=(exception);

			return *this;
		}
#if LUCE_MACRO_SUPPORTED_RVALUE_REF
		InvalidValue& InvalidValue::operator=(InvalidValue&& exception) LUCE_MACRO_NOEXCEPT
		{
			LuceException::operator=(std::move(exception));

			return *this;
		}
#endif

		std::string InvalidValue::ToString() const
		{
			return ToString("Luce::Exception::InvalidValue");
		}
	}
}