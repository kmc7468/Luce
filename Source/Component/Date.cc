#include <Luce/Component/Date.hh>

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
	}
}