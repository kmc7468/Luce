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
		namespace Detail
		{
			template<typename ResultTy_>
			ResultTy_ Well512_Next_(ResultTy_(&seed)[16], ResultTy_& seed_index,
									ResultTy_(&z)[3]);
			template<typename ResultTy_>
			ResultTy_ Well1024_Next_(ResultTy_(&seed)[32], ResultTy_& seed_index,
									ResultTy_(&z)[3]);
		}

		template<typename ResultTy_, Utility::UIntMax R_,
			ResultTy_(*Next_)(ResultTy_(&)[R_], ResultTy_&, ResultTy_(&)[3])>
			class WellEngine LUCE_MACRO_FINAL
			: Utility::NonComparable
		{
			LUCE_MACRO_CANNOT_PARENT(WellEngine)

		public:
			typedef ResultTy_ Result;

		private:
			typedef WellEngine<ResultTy_, R_, Next_> My_;

		public:
			WellEngine();
			WellEngine(const My_& engine);

		public:
			My_& operator=(const My_& engine);
			ResultTy_ operator()() LUCE_MACRO_NOEXCEPT;

		public:
			ResultTy_ Next() LUCE_MACRO_NOEXCEPT;

		private:
			void Init();

		private:
			ResultTy_ Seed_[R_];
			ResultTy_ SeedIndex_;
			ResultTy_ Z_[3];
		};

		typedef
			WellEngine<Utility::UInt32, 16, &Detail::Well512_Next_<Utility::UInt32>> Well512;
		typedef
			WellEngine<Utility::UInt32, 32, &Detail::Well1024_Next_<Utility::UInt32>> Well1024;
#ifndef LUCE_MACRO_INTEGER_MAX_32
		typedef
			WellEngine<Utility::UInt64, 16, &Detail::Well512_Next_<Utility::UInt64>> Well512_64;
		typedef
			WellEngine<Utility::UInt64, 32, &Detail::Well1024_Next_<Utility::UInt64>>
			Well1024_64;
#endif
	}

	using Luce::Random::Well512;
	using Luce::Random::Well1024;
#ifndef LUCE_MACRO_INTEGER_MAX_32
	using Luce::Random::Well512_64;
	using Luce::Random::Well1024_64;
#endif
}

#include "Detail/Well.hh"
#include "Detail/WellImpl.hh"
#endif