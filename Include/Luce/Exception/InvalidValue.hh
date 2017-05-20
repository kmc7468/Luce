#ifndef LUCE_HEADER_EXCEPTION_INVALIDVALUE_HH
#define LUCE_HEADER_EXCEPTION_INVALIDVALUE_HH
#include <Luce/Configuration.hh>

#include <Luce/Exception/LuceException.hh>

namespace Luce
{
	namespace Exception
	{
		class LUCE_MACRO_EXPORT InvalidValue : public LuceException
		{
			LUCE_MACRO_LEXCEPT_CONSTRUCTORS(InvalidValue, LuceException)

		public:
			InvalidValue(const InvalidValue& exception);
#if LUCE_MACRO_SUPPORTED_RVALUE_REF
			InvalidValue(InvalidValue&& exception) LUCE_MACRO_NOEXCEPT;
#endif

		public:
			InvalidValue& operator=(const InvalidValue& exception);
#if LUCE_MACRO_SUPPORTED_RVALUE_REF
			InvalidValue& operator=(InvalidValue&& exception) LUCE_MACRO_NOEXCEPT;
#endif

		public:
			virtual std::string ToString() const override;

		protected:
			using LuceException::ToString;
		};
	}

	using Luce::Exception::InvalidValue;
}

#endif