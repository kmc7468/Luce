#ifndef LUCE_HEADER_RANDOM_DETAIL_WELL_HH
#define LUCE_HEADER_RANDOM_DETAIL_WELL_HH

#include <algorithm>
#include <climits>
#include <cstdlib>
#include <ctime>

namespace Luce
{
	namespace Random
	{
		template<typename ResultTy_,
			Utility::UIntMax W_, Utility::UIntMax R_, Utility::UIntMax P_,
			Utility::UIntMax M1_, Utility::UIntMax M2_, Utility::UIntMax M3_,
			Utility::UIntMax And_ = 0>
			WellEngine<ResultTy_, W_, R_, P_, M1_, M2_, M3_, And_>::WellEngine()
		{
			SeedIndex_ = 0;
			Z_[0] = 0;
			Z_[1] = 0;
			Z_[2] = 0;
			Init();
		}
		template<typename ResultTy_,
			Utility::UIntMax W_, Utility::UIntMax R_, Utility::UIntMax P_,
			Utility::UIntMax M1_, Utility::UIntMax M2_, Utility::UIntMax M3_,
			Utility::UIntMax And_ = 0>
			WellEngine<ResultTy_, W_, R_, P_, M1_, M2_, M3_, And_>::WellEngine(const My_& engine)
		{
			std::copy(engine.Seed_, engine.Seed_ + R_, Seed_);
			SeedIndex_ = engine.SeedIndex_;
			Z_[0] = engine.Z_[0];
			Z_[1] = engine.Z_[1];
			Z_[2] = engine.Z_[3];
		}

		template<typename ResultTy_,
			Utility::UIntMax W_, Utility::UIntMax R_, Utility::UIntMax P_,
			Utility::UIntMax M1_, Utility::UIntMax M2_, Utility::UIntMax M3_,
			Utility::UIntMax And_ = 0>
			WellEngine<ResultTy_, W_, R_, P_, M1_, M2_, M3_, And_>::~WellEngine()
		{}

		template<typename ResultTy_,
			Utility::UIntMax W_, Utility::UIntMax R_, Utility::UIntMax P_,
			Utility::UIntMax M1_, Utility::UIntMax M2_, Utility::UIntMax M3_,
			Utility::UIntMax And_ = 0>
			WellEngine<ResultTy_, W_, R_, P_, M1_, M2_, M3_, And_>&
			WellEngine<ResultTy_, W_, R_, P_, M1_, M2_, M3_, And_>::operator=(const My_& engine)
		{
			std::copy(engine.Seed_, engine.Seed_ + R_, Seed_);
			SeedIndex_ = engine.SeedIndex_;
			Z_[0] = engine.Z_[0];
			Z_[1] = engine.Z_[1];
			Z_[2] = engine.Z_[3];

			return *this;
		}
		template<typename ResultTy_,
			Utility::UIntMax W_, Utility::UIntMax R_, Utility::UIntMax P_,
			Utility::UIntMax M1_, Utility::UIntMax M2_, Utility::UIntMax M3_,
			Utility::UIntMax And_ = 0> ResultTy_
			WellEngine<ResultTy_, W_, R_, P_, M1_, M2_, M3_,And_>::
			operator()() LUCE_MACRO_NOEXCEPT
		{
			return Next();
		}

		template<typename ResultTy_,
			Utility::UIntMax W_, Utility::UIntMax R_, Utility::UIntMax P_,
			Utility::UIntMax M1_, Utility::UIntMax M2_, Utility::UIntMax M3_,
			Utility::UIntMax And_ = 0> ResultTy_
			WellEngine<ResultTy_, W_, R_, P_, M1_, M2_, M3_, And_>::Next() LUCE_MACRO_NOEXCEPT
		{
			Z_[0] = Seed_[(SeedIndex_ + (R_ - 1)) & And_];

			// TODO

			return ResultTy_();
		}

		template<typename ResultTy_,
			Utility::UIntMax W_, Utility::UIntMax R_, Utility::UIntMax P_,
			Utility::UIntMax M1_, Utility::UIntMax M2_, Utility::UIntMax M3_,
			Utility::UIntMax And_ = 0>
			void WellEngine<ResultTy_, W_, R_, P_, M1_, M2_, M3_, And_>::Init()
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

				std::copy(bytes, bytes + loop, Seed_);
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

				std::copy(arr, arr + loop, Seed_);
			}
		}
	}
}

#endif