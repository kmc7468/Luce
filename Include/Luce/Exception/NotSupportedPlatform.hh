#ifndef LUCE_HEADER_EXCEPTION_NOTSUPPORTEDPLATFORM_HH
#define LUCE_HEADER_EXCEPTION_NOTSUPPORTEDPLATFORM_HH
#include <Luce/Configuration.hh>

#include <Luce/Exception/LuceException.hh>

namespace Luce
{
	namespace Exception
	{
		class LUCE_MACRO_EXPORT NotSupportedPlatform : public LuceException
		{
			LUCE_MACRO_LEXCEPT_CONSTRUCTORS(NotSupportedPlatform, LuceException)

		public:
			NotSupportedPlatform(const NotSupportedPlatform& exception);
#if LUCE_MACRO_SUPPORTED_RVALUE_REF
			NotSupportedPlatform(NotSupportedPlatform&& exception) LUCE_MACRO_NOEXCEPT;
#endif

		public:
			NotSupportedPlatform& operator=(const NotSupportedPlatform& exception);
#if LUCE_MACRO_SUPPORTED_RVALUE_REF
			NotSupportedPlatform& operator=
				(NotSupportedPlatform&& exception) LUCE_MACRO_NOEXCEPT;
#endif

		public:
			virtual std::string ToString() const override;

		protected:
			using LuceException::ToString;
		};
	}

	using Luce::Exception::NotSupportedPlatform;
}

#if !defined(LUCE_MACRO_LINKING_EXCEPTION) && LUCE_MACRO_IS_MSVC
#define LUCE_MACRO_LINKING_EXCEPTION
#pragma comment(lib, "Luce-Exception.lib")
#endif
#endif