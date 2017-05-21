#include <Luce.hh>
using namespace Luce;

#include <cstdio>
#include <iostream>

int main()
{
	std::cout << "Hello, world!" << std::endl;
	std::printf("%s\n", LuceInfo::VersionStr.c_str());
	std::printf("%d.%d.%d\n", LuceInfo::Major, LuceInfo::Minor, LuceInfo::PatchLevel);

	return 0;
}