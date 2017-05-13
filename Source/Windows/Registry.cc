#include <Luce/Windows/Registry.hh>

#if LUCE_MACRO_IS_WINDOWS
namespace Luce
{
	namespace Windows
	{
		const RegistryKey Registry::ClassesRoot = 0;
		const RegistryKey Registry::CurrentUser = 1;
		const RegistryKey Registry::LocalMachine = 2;
		const RegistryKey Registry::Users = 3;
		const RegistryKey Registry::CurrentConfig = 4;
		const RegistryKey Registry::PerformanceData = 5;
	}
}
#endif