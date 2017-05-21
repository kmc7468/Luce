#ifndef LUCE_HEADER_CONFIGURATION_LUCEINFO_HH
#define LUCE_HEADER_CONFIGURATION_LUCEINFO_HH
#include <Luce/Configuration.hh>

#include <Luce/Utility/Integer.hh>
#include <Luce/Utility/NonComparable.hh>
#include <Luce/Utility/NonCopyable.hh>

#include <string>

#define LUCE_MACRO_VERSION "1.0.0"
#define LUCE_MACRO_MAJOR 1
#define LUCE_MACRO_MINOR 0
#define LUCE_MACRO_PATCHLEVEL 0

namespace Luce
{
	class LuceInfo LUCE_MACRO_FINAL
		: Utility::NonComparable, Utility::NonCopyable
	{
		LUCE_MACRO_CANNOT_PARENT(LuceInfo)

	public:
		static const std::string VersionStr;
		static const Utility::UIntFaster Major;
		static const Utility::UIntFaster Minor;
		static const Utility::UIntFaster PatchLevel;
	};
}

#if !defined(LUCE_MACRO_LINKING_LUCE) && LUCE_MACRO_IS_MSVC
#define LUCE_MACRO_LINKING_LUCE
#pragma comment(lib, "Luce.lib")
#endif
#endif