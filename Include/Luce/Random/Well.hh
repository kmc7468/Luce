#ifndef LUCE_HEADER_RANDOM_WELL_HH
#define LUCE_HEADER_RANDOM_WELL_HH
#include <Luce/Configuration.hh>

#include <Luce/Utility/Integer.hh>
#include <Luce/Utility/NonComparable.hh>

#include <cstddef>

namespace Luce
{
	namespace Random
	{
		template<typename ResultTy_,std::size_t W_, std::size_t R_, std::size_t P_,
			std::size_t M1_, std::size_t M2_, std::size_t M3_>
		class WellEngine LUCE_MACRO_FINAL
			: Utility::NonComparable
		{
			LUCE_MACRO_CANNOT_PARENT(WellEngine)

		public:
			typedef ResultTy_ Result;

		private:
			typedef WellEngine<ResultTy_, W_, R_, P_, M1_, M2_, M3_> My_;

		public:
			WellEngine();
			WellEngine(const My_& engine);

		public:
			My_& operator=(const My_& engine);

		private:
			void Init();

		public:
			static const std::size_t W = W_;
			static const std::size_t R = R_;
			static const std::size_t P = P_;
			static const std::size_t M1 = M1_;
			static const std::size_t M2 = M2_;
			static const std::size_t M3 = M3_;

		private:
			ResultTy_ Seed_[R_];
			ResultTy_ SeedIndex_;
			ResultTy_ Z_[3];
		};

		typedef WellEngine<Utility::UInt32, 32, 16, 0, 13, 9, 5> Well512;
	}

	using Luce::Random::Well512;
}

#include "Detail/Well.hh"
#endif