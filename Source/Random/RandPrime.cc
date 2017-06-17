#include <Luce/Random/RandPrime.hh>

namespace Luce
{
	namespace Random
	{
		void RandPrime(std::vector<Utility::UInt8>& data)
		{
			std::pair<Utility::UInt8*, std::size_t> result(data.data(), data.size());
			RandPrime(result);

			data.assign(result.first, result.first + result.second);
		}
		void RandPrime(std::pair<Utility::UInt8*, std::size_t>& data)
		{
			// TODO
		}
	}
}