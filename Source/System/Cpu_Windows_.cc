#include <Luce/System/Cpu.hh>

#include <cstddef>
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