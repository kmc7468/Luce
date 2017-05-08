#include <Luce/Exception/LuceException.hh>

#if LUCE_MACRO_SUPPORTED_RVALUE_REF
#include <utility>
#endif

namespace Luce
{
	namespace Exception
	{
		LuceException::LuceException(const std::size_t& line, const std::string& file)
		{
			Line_ = line;
			File_ = file;
		}
		LuceException::LuceException(const std::string& message, const std::size_t& line,
									 const std::string& file)
		{
			Message_ = message;
			Line_ = line;
			File_ = file;
		}
		LuceException::LuceException(const LuceException& exception)
		{
			Message_ = exception.Message_;
			Line_ = exception.Line_;
			File_ = exception.File_;
		}
#if LUCE_MACRO_SUPPORTED_RVALUE_REF
		LuceException::LuceException(LuceException&& exception) LUCE_MACRO_NOEXCEPT
		{
			Message_ = std::move(exception.Message_);
			Line_ = std::move(exception.Line_);
			File_ = std::move(exception.File_);
		}
#endif

		LuceException& LuceException::operator=(const LuceException& exception)
		{
			Message_ = exception.Message_;
			Line_ = exception.Line_;
			File_ = exception.File_;

			return *this;
		}
#if LUCE_MACRO_SUPPORTED_RVALUE_REF
		LuceException& LuceException::operator=(LuceException&& exception) LUCE_MACRO_NOEXCEPT
		{
			Message_ = std::move(exception.Message_);
			Line_ = std::move(exception.Line_);
			File_ = std::move(exception.File_);

			return *this;
		}
#endif

		const char* LuceException::what() const
		{
			return Message_.c_str();
		}
	}
}