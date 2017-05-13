#include <Luce/Windows/RegistryKey.hh>

#if LUCE_MACRO_IS_WINDOWS
#include <Windows.h>

namespace Luce
{
	namespace Windows
	{
		struct RegistryKey::Data_
		{
			HKEY Key_;
		};

		RegistryKey::RegistryKey(const Utility::IntFaster& hkey)
		{
			Value_ = new RegistryKey::Data_;

			switch (hkey)
			{
			case 0:
			{
				RegOpenKey(HKEY_CLASSES_ROOT, TEXT(""), &Value_->Key_);
				break;
			}

			case 1:
			{
				RegOpenKey(HKEY_CURRENT_USER, TEXT(""), &Value_->Key_);
				break;
			}

			case 2:
			{
				RegOpenKey(HKEY_LOCAL_MACHINE, TEXT(""), &Value_->Key_);
				break;
			}

			case 3:
			{
				RegOpenKey(HKEY_USERS, TEXT(""), &Value_->Key_);
				break;
			}

			case 4:
			{
				RegOpenKey(HKEY_CURRENT_CONFIG, TEXT(""), &Value_->Key_);
				break;
			}

			case 5:
			{
				RegOpenKey(HKEY_PERFORMANCE_DATA, TEXT(""), &Value_->Key_);
				break;
			}

			default:
				break;
			}
		}
		RegistryKey::~RegistryKey()
		{
			RegCloseKey(Value_->Key_);
			delete Value_;
		}
	}
}
#endif