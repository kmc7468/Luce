#include <Luce/System/Cpu.hh>

#include <Luce/Exception/LuceException.hh>
#include <Luce/Exception/NotSupportedPlatform.hh>

#include <cstddef>
#include <cstdlib>
#include <new>
#if LUCE_MACRO_IS_WINDOWS
#include <Windows.h>

namespace Luce
{
	namespace System
	{
		std::vector<Cpu> Cpu::GetCpus()
		{
			std::vector<Cpu> cpus;

			return cpus;
		}
	}
}
#endif