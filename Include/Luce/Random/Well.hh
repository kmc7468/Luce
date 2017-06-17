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
		template<typename ResultTy_, 
			Utility::UIntMax W_, Utility::UIntMax R_, Utility::UIntMax P_,
			Utility::UIntMax M1_, Utility::UIntMax M2_, Utility::UIntMax M3_,
			Utility::UIntMax And_>
			class WellEngine LUCE_MACRO_FINAL
			: Utility::NonComparable
		{
			LUCE_MACRO_CANNOT_PARENT(WellEngine)

		public:
			typedef ResultTy_ Result;

		private:
			typedef WellEngine<ResultTy_, W_, R_, P_, M1_, M2_, M3_, And_> My_;

		public:
			WellEngine();
			WellEngine(const My_& engine);

		public:
			My_& operator=(const My_& engine);
			ResultTy_ operator()() const LUCE_MACRO_NOEXCEPT;

		public:
			ResultTy_ Next() LUCE_MACRO_NOEXCEPT;

		private:
			void Init();

		public:
			static const Utility::UIntMax W = W_;
			static const Utility::UIntMax R = R_;
			static const Utility::UIntMax P = P_;
			static const Utility::UIntMax M1 = M1_;
			static const Utility::UIntMax M2 = M2_;
			static const Utility::UIntMax M3 = M3_;

		private:
			ResultTy_ Seed_[R_];
			ResultTy_ SeedIndex_;
			ResultTy_ Z_[3];
		};

		typedef WellEngine<Utility::UInt32, 32, 16, 0, 13, 9, 5, 0xF> Well512;
#ifndef LUCE_MACRO_INTEGER_MAX_32
		typedef WellEngine<Utility::UInt64, 32, 16, 0, 13, 9, 5, 0xF> Well512_64;
#endif
	}

	using Luce::Random::Well512;
}

#include "Detail/Well.hh"
#endif