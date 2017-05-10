#include <Luce.hh>
using namespace Luce;

#include <iostream>

int main()
{
	try
	{
		throw InvalidValue("값이 잘못되었습니다.", __LINE__, __FILE__);
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << std::endl;
		const InvalidValue& iv = static_cast<const InvalidValue&>(e);
		std::cout << iv.File() << std::endl;
		std::cout << iv.Function() << std::endl;
		std::cout << iv.Line() << std::endl;
		std::cout << iv.ToString() << std::endl;
	}

	return 0;
}