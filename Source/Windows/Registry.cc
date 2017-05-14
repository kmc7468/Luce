#include <Luce/Windows/Registry.hh>

#if LUCE_MACRO_IS_WINDOWS
#include <Luce/Utility/Integer.hh>

#include <Windows.h>

namespace Luce
{
	namespace Windows
	{
		const RegistryKey Registry::ClassesRoot =
			reinterpret_cast<Utility::UIntPtr>(HKEY_CLASSES_ROOT);
		const RegistryKey Registry::CurrentUser = 
			reinterpret_cast<Utility::UIntPtr>(HKEY_CURRENT_USER);
		const RegistryKey Registry::LocalMachine = 
			reinterpret_cast<Utility::UIntPtr>(HKEY_LOCAL_MACHINE);
		const RegistryKey Registry::Users = 
			reinterpret_cast<Utility::UIntPtr>(HKEY_USERS);
		const RegistryKey Registry::CurrentConfig = 
			reinterpret_cast<Utility::UIntPtr>(HKEY_CURRENT_CONFIG);
		const RegistryKey Registry::PerformanceData = 
			reinterpret_cast<Utility::UIntPtr>(HKEY_PERFORMANCE_DATA);
	}
}
#endif