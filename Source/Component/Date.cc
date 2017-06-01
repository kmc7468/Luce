#include <Luce/Component/Date.hh>

#if LUCE_MACRO_SUPPORTED_RVALUE_REF
#include <utility>
#endif

namespace Luce
{
	namespace Component
	{
#if !LUCE_MACRO_SUPPORTED_CONSTEXPR
		Date::Date()
		{
			Data_ = 0;
		}
		Date::Date(const Date& date)
		{
			Data_ = date.Data_;
		}
#endif

		Date& Date::operator=(const Date& date)
		{
			Data_ = date.Data_;
			return *this;
		}

#if !LUCE_MACRO_SUPPORTED_CONSTEXPR
		bool Date::operator==(const Date& date) const LUCE_MACRO_NOEXCEPT
		{
			return Data_ == date.Data_;
		}
		bool Date::operator!=(const Date& date) const LUCE_MACRO_NOEXCEPT
		{
			return Data_ != date.Data_;
		}
		bool Date::operator>(const Date& date) const LUCE_MACRO_NOEXCEPT
		{
			return Data_ > date.Data_;
		}
		bool Date::operator>=(const Date& date) const LUCE_MACRO_NOEXCEPT
		{
			return Data_ >= date.Data_;
		}
		bool Date::operator<(const Date& date) const LUCE_MACRO_NOEXCEPT
		{
			return Data_ < date.Data_;
		}
		bool Date::operator<=(const Date& date) const LUCE_MACRO_NOEXCEPT
		{
			return Data_ <= date.Data_;
		}
#endif
	}
}