#include <Luce/Exception/LuceException.hh>

#include <sstream>
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
		LuceException::LuceException(const std::size_t& line, const std::string& file,
									 const std::string& function)
		{
			Line_ = line;
			File_ = file;
			Function_ = function;
		}
		LuceException::LuceException(const std::string& message, const std::size_t& line,
									 const std::string& file)
		{
			Message_ = message;
			Line_ = line;
			File_ = file;
		}
		LuceException::LuceException(const std::string& message, const std::size_t& line,
									 const std::string& file, const std::string& function)
		{
			Message_ = message;
			Line_ = line;
			File_ = file;
			Function_ = function;
		}
		LuceException::LuceException(const std::exception& exception, const std::size_t& line,
									 const std::string& file)
			: std::exception(exception)
		{
			Line_ = line;
			File_ = file;
		}
		LuceException::LuceException(const std::exception& exception, const std::size_t& line,
									 const std::string& file, const std::string& function)
			: std::exception(exception)
		{
			Line_ = line;
			File_ = file;
			Function_ = function;
		}
		LuceException::LuceException(const LuceException& exception)
		{
			Message_ = exception.Message_;
			Line_ = exception.Line_;
			File_ = exception.File_;
			Function_ = exception.Function_;
		}
#if LUCE_MACRO_SUPPORTED_RVALUE_REF
		LuceException::LuceException(LuceException&& exception) LUCE_MACRO_NOEXCEPT
		{
			Message_ = std::move(exception.Message_);
			Line_ = std::move(exception.Line_);
			File_ = std::move(exception.File_);
			Function_ = std::move(exception.Function_);
		}
#endif

		LuceException& LuceException::operator=(const LuceException& exception)
		{
			Message_ = exception.Message_;
			Line_ = exception.Line_;
			File_ = exception.File_;
			Function_ = exception.Function_;

			return *this;
		}
#if LUCE_MACRO_SUPPORTED_RVALUE_REF
		LuceException& LuceException::operator=(LuceException&& exception) LUCE_MACRO_NOEXCEPT
		{
			Message_ = std::move(exception.Message_);
			Line_ = std::move(exception.Line_);
			File_ = std::move(exception.File_);
			Function_ = std::move(exception.Function_);

			return *this;
		}
#endif

		const char* LuceException::what() const
		{
			return Message_.c_str();
		}

		std::string LuceException::ToString() const
		{
			return ToString("Luce::Exception::LuceException");
		}

		std::string LuceException::ToString(const std::string& exception_name) const
		{
			std::ostringstream oss;

			oss << exception_name << " - " << Message_ <<
				"(File \"" << File_ << "\", Line " << Line_;

			if (Function_.empty())
			{
				oss << ")";
			}
			else
			{
				oss << ", Function \"" << Function_ << "\")";
			}

			return oss.str();
		}

		std::size_t LuceException::Line() const
		{
			return Line_;
		}
		std::string LuceException::File() const
		{
			return File_;
		}
		std::string LuceException::Message() const
		{
			return Message_;
		}
		std::string LuceException::Function() const
		{
			return Function_;
		}
	}
}