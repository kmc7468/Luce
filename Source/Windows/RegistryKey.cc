#include <Luce/Windows/RegistryKey.hh>

#if LUCE_MACRO_IS_WINDOWS
#include <Luce/Exception/UncaughtApiError.hh>

#include <Windows.h>

namespace Luce
{
	namespace Windows
	{
		struct RegistryKey::Data_
		{
			HKEY Key_;
		};

		RegistryKey::RegistryKey(const Utility::UIntPtr& hkey)
		{
			Value_ = new RegistryKey::Data_;
			Value_->Key_ = reinterpret_cast<HKEY>(hkey);
		}
		RegistryKey::~RegistryKey()
		{
			switch (reinterpret_cast<Utility::UIntPtr>(Value_->Key_))
			{
			case reinterpret_cast<Utility::UIntPtr>(HKEY_CLASSES_ROOT) :
			case reinterpret_cast<Utility::UIntPtr>(HKEY_CURRENT_USER) :
			case reinterpret_cast<Utility::UIntPtr>(HKEY_LOCAL_MACHINE) :
			case reinterpret_cast<Utility::UIntPtr>(HKEY_USERS) :
			case reinterpret_cast<Utility::UIntPtr>(HKEY_CURRENT_CONFIG) :
			case reinterpret_cast<Utility::UIntPtr>(HKEY_PERFORMANCE_DATA) :
				break;

			default:
			{
				RegCloseKey(Value_->Key_);
			}
			}

			delete Value_;
		}

		RegistryKey RegistryKey::OpenSubKey(const std::string& name)
		{
			HKEY sub_key;
			std::wstring str; // temp
			
			if (RegOpenKey(Value_->Key_, str.c_str(), &sub_key) != ERROR_SUCCESS)
			{
				throw Exception::UncaughtApiError(__LINE__, __FILE__, __FUNCTION__);
			}

			return reinterpret_cast<Utility::UIntPtr>(sub_key);
		}
	}
}
#endif