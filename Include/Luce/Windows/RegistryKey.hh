#ifndef LUCE_HEADER_WINDOWS_REGISTRYKEY_HH
#define LUCE_HEADER_WINDOWS_REGISTRYKEY_HH
#include <Luce/Configuration.hh>

#if LUCE_MACRO_IS_WINDOWS
#include <Luce/Utility/NonCopyable.hh>
#include <Luce/Utility/Integer.hh>

#include <string>

namespace Luce
{
	namespace Windows
	{
		class LUCE_MACRO_EXPORT RegistryKey LUCE_MACRO_FINAL
			: Utility::NonCopyable
		{
			friend class Registry;

			LUCE_MACRO_CANNOT_PARENT(RegistryKey)

		private:
			struct Data_;

		private:
			RegistryKey(const Utility::UIntPtr& hkey);

		public:
			RegistryKey OpenSubKey(const std::string& name);

		private:
			Data_* Value_;
		};
	}
}
#endif

#endif