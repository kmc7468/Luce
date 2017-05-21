#include <Luce/Configuration/LuceInfo.hh>

namespace Luce
{
	const std::string LuceInfo::VersionStr = LUCE_MACRO_VERSION;
	const Utility::UIntFaster LuceInfo::Major = LUCE_MACRO_MAJOR;
	const Utility::UIntFaster LuceInfo::Minor = LUCE_MACRO_MINOR;
	const Utility::UIntFaster LuceInfo::PatchLevel = LUCE_MACRO_PATCHLEVEL;
}