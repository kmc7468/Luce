#ifndef LUCE_HEADER_WINDOWS_REGISTRY_HH
#define LUCE_HEADER_WINDOWS_REGISTRY_HH
#include <Luce/Configuration.hh>

#if LUCE_MACRO_IS_WINDOWS
#include <Luce/Utility/NonComparable.hh>
#include <Luce/Utility/NonCopyable.hh>
#include <Luce/Windows/RegistryKey.hh>

namespace Luce
{
	namespace Windows
	{
		class LUCE_MACRO_EXPORT Registry LUCE_MACRO_FINAL
			: Utility::NonComparable, Utility::NonCopyable
		{
			LUCE_MACRO_CANNOT_PARENT(Registry)

		public:
			static const RegistryKey ClassesRoot;
			static const RegistryKey CurrentUser;
			static const RegistryKey LocalMachine;
			static const RegistryKey Users;
			static const RegistryKey CurrentConfig;
			static const RegistryKey PerformanceData;
		};
	}
}
#endif

#endif