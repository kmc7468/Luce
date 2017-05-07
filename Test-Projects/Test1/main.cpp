#include <Luce.hh>
using namespace Luce;

#include <iostream>
#include <thread>

Luce::Threading::Mutex m;

int main()
{
	std::thread t1([]
	{
		for (int i = 0; i < 10000; ++i)
		{
			m.Lock();
			std::cout << 1 << ' ' << i << std::endl;
			m.Unlock();
		}
	});
	std::thread t2([]
	{
		for (int i = 0; i < 10000; ++i)
		{
			m.Lock();
			std::cout << 2 << ' ' << i << std::endl;
			m.Unlock();
		}
	});

	t1.join();
	t2.join();

	return 0;
}