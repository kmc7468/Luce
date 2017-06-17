#ifndef LUCE_HEADER_RANDOM_RANDPRIME_HH
#define LUCE_HEADER_RANDOM_RANDPRIME_HH

#include <Luce/Utility/Integer.hh>

#include <cstddef>
#include <utility>
#include <vector>

namespace Luce
{
	namespace Random
	{
		template<typename Ty_>
		Ty_ RandPrime();
		void RandPrime(std::vector<Utility::UInt8>& data);
		void RandPrime(std::pair<Utility::UInt8*, std::size_t>& data);
	}

	using Luce::Random::RandPrime;
}

#include "Detail/RandPrime.hh"
#endif