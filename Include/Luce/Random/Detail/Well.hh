#ifndef LUCE_HEADER_RANDOM_DETAIL_WELL_HH
#define LUCE_HEADER_RANDOM_DETAIL_WELL_HH

#include <algorithm>
#include <cstdlib>
#include <ctime>

namespace Luce
{
	namespace Random
	{
		template<typename ResultTy_, Utility::UIntMax R_,
			ResultTy_(*Next_)(ResultTy_(&)[R_], ResultTy_&, ResultTy_(&)[3])>
			WellEngine<ResultTy_, R_, Next_>::WellEngine()
		{
			SeedIndex_ = 0;
			Z_[0] = 0;
			Z_[1] = 0;
			Z_[2] = 0;
			Init();
		}
		template<typename ResultTy_, Utility::UIntMax R_,
			ResultTy_(*Next_)(ResultTy_(&)[R_], ResultTy_&, ResultTy_(&)[3])>
							  WellEngine<ResultTy_, R_, Next_>::WellEngine(const My_& engine)
		{
			std::copy(engine.Seed_, engine.Seed_ + R_, Seed_);
			SeedIndex_ = engine.SeedIndex_;
			Z_[0] = engine.Z_[0];
			Z_[1] = engine.Z_[1];
			Z_[2] = engine.Z_[3];
		}

		template<typename ResultTy_, Utility::UIntMax R_,
			ResultTy_(*Next_)(ResultTy_(&)[R_], ResultTy_&, ResultTy_(&)[3])>
							  WellEngine<ResultTy_, R_, Next_>::~WellEngine()
		{}

		template<typename ResultTy_, Utility::UIntMax R_,
			ResultTy_(*Next_)(ResultTy_(&)[R_], ResultTy_&, ResultTy_(&)[3])>
			WellEngine<ResultTy_, R_, Next_>&
							  WellEngine<ResultTy_, R_, Next_>::operator=(const My_& engine)
		{
			std::copy(engine.Seed_, engine.Seed_ + R_, Seed_);
			SeedIndex_ = engine.SeedIndex_;
			Z_[0] = engine.Z_[0];
			Z_[1] = engine.Z_[1];
			Z_[2] = engine.Z_[3];

			return *this;
		}
		template<typename ResultTy_, Utility::UIntMax R_,
			ResultTy_(*Next_)(ResultTy_(&)[R_], ResultTy_&, ResultTy_(&)[3])> ResultTy_
			WellEngine<ResultTy_, R_, Next_>::operator()() LUCE_MACRO_NOEXCEPT
		{
			return Next_(Seed_, SeedIndex_, Z_);
		}

		template<typename ResultTy_, Utility::UIntMax R_,
			ResultTy_(*Next_)(ResultTy_(&)[R_], ResultTy_&, ResultTy_(&)[3])> ResultTy_
			WellEngine<ResultTy_, R_, Next_>::Next() LUCE_MACRO_NOEXCEPT
		{
			return Next_(Seed_, SeedIndex_, Z_);
		}

		template<typename ResultTy_, Utility::UIntMax R_,
			ResultTy_(*Next_)(ResultTy_(&)[R_], ResultTy_&, ResultTy_(&)[3])>
			void WellEngine<ResultTy_, R_, Next_>::Init()
		{
			std::srand(std::time(NULL));
			std::size_t loop = sizeof(ResultTy_) * R_;

			if (sizeof(ResultTy_) < sizeof(int) || sizeof(ResultTy_) % sizeof(int) != 0)
			{
				Utility::UInt8* bytes = new Utility::UInt8[loop];

				class Fin_
				{
				public:
					Fin_(Utility::UInt8** addr)
					{
						Address_ = addr;
					}
					~Fin_()
					{
						delete[](*Address_);
						*Address_ = NULL;
					}

				private:
					Utility::UInt8** Address_;
				} Fin(&bytes);

				for (std::size_t i = 0; i < loop; ++i)
				{
					Utility::UInt8 rand = std::rand() % UCHAR_MAX;
					bytes[i] = rand;
				}

				Utility::UInt8* seed_u8ptr = reinterpret_cast<Utility::UInt8*>(Seed_);
				std::copy(bytes, bytes + loop, seed_u8ptr);
			}
			else
			{
				loop /= sizeof(int);
				int* arr = new int[loop];

				class Fin_
				{
				public:
					Fin_(int** addr)
					{
						Address_ = addr;
					}
					~Fin_()
					{
						delete[](*Address_);
						*Address_ = NULL;
					}

				private:
					int** Address_;
				} Fin(&arr);

				for (std::size_t i = 0; i < loop; ++i)
				{
					arr[i] = std::rand();
				}

				int* seed_intptr = reinterpret_cast<int*>(Seed_);
				std::copy(arr, arr + loop, seed_intptr);
			}
		}
	}
}

#endif