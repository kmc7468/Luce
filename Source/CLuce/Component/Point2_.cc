#include <CLuce/Component/Point2.h>

#include <cstring>

extern "C"
{
	CLUCE_MACRO_EXPORT const int Luce_Component_Point2_Size = sizeof(Luce::Component::Point2);

	CLUCE_MACRO_EXPORT Luce_Component_Point2 Luce_Component_Point2_Create()
	{
		return new Luce::Component::Point2();
	}
	CLUCE_MACRO_EXPORT int Luce_Component_Point2_Destroy(Luce_Component_Point2* location)
	{
		if (location == NULL)
			return -1;
		else if (*location == NULL)
			return -1;

		delete *location;
		*location = NULL;

		return 0;
	}
	CLUCE_MACRO_EXPORT int Luce_Component_Point2_Initializer(void* memory)
	{
		if (memory == NULL)
			return -1;

		new(memory) Luce::Component::Point2();

		return 0;
	}
	CLUCE_MACRO_EXPORT int Luce_Component_Point2_Destroyer(void* memory)
	{
		if (memory == NULL)
			return -1;

		Luce_Component_Point2 location = reinterpret_cast<Luce_Component_Point2>(
			memory);
		location->Destroyer();

		std::memset(memory, 0, Luce_Component_Point2_Size);

		return 0;
	}

	CLUCE_MACRO_EXPORT int Luce_Component_Point2_Compare(Luce_Component_Point2 lhs,
														 Luce_Component_Point2 rhs)
	{
		if (lhs == NULL || rhs == NULL)
			return -1;

		if (*lhs == *rhs)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	CLUCE_MACRO_EXPORT int Luce_Component_Point2_Equal(Luce_Component_Point2 lhs,
													   Luce_Component_Point2 rhs)
	{
		if (lhs == NULL || rhs == NULL)
			return 0;

		return *lhs == *rhs;
	}
	CLUCE_MACRO_EXPORT int Luce_Component_Point2_Assign(Luce_Component_Point2 lhs,
														Luce_Component_Point2 rhs)
	{
		if (lhs == NULL || rhs == NULL)
			return -1;

		lhs->operator=(*rhs);

		return 0;
	}

	CLUCE_MACRO_EXPORT Luce_Utility_Int32
		Luce_Component_Point2_GetX(Luce_Component_Point2 location)
	{
		if (location == NULL)
			return 0;

		return location->GetX();
	}
	CLUCE_MACRO_EXPORT int
		Luce_Component_Point2_SetX(Luce_Component_Point2 location, Luce_Utility_Int32 x)
	{
		if (location == NULL)
			return -1;

		location->SetX(x);

		return 0;
	}
	CLUCE_MACRO_EXPORT Luce_Utility_Int32
		Luce_Component_Point2_GetY(Luce_Component_Point2 location)
	{
		if (location == NULL)
			return 0;

		return location->GetY();
	}
	CLUCE_MACRO_EXPORT int
		Luce_Component_Point2_SetY(Luce_Component_Point2 location, Luce_Utility_Int32 y)
	{
		if (location == NULL)
			return -1;

		location->SetY(y);

		return 0;
	}
}

extern "C"
{
	CLUCE_MACRO_EXPORT const int Luce_Component_Point2F_Size = sizeof(Luce::Component::Point2F);

	CLUCE_MACRO_EXPORT Luce_Component_Point2F Luce_Component_Point2F_Create()
	{
		return new Luce::Component::Point2F();
	}
	CLUCE_MACRO_EXPORT int Luce_Component_Point2F_Destroy(Luce_Component_Point2F* location)
	{
		if (location == NULL)
			return -1;
		else if (*location == NULL)
			return -1;

		delete *location;
		*location = NULL;

		return 0;
	}
	CLUCE_MACRO_EXPORT int Luce_Component_Point2F_Initializer(void* memory)
	{
		if (memory == NULL)
			return -1;

		new(memory) Luce::Component::Point2F();

		return 0;
	}
	CLUCE_MACRO_EXPORT int Luce_Component_Point2F_Destroyer(void* memory)
	{
		if (memory == NULL)
			return -1;

		Luce_Component_Point2F location = reinterpret_cast<Luce_Component_Point2F>(
			memory);
		location->Destroyer();

		std::memset(memory, 0, Luce_Component_Point2F_Size);

		return 0;
	}

	CLUCE_MACRO_EXPORT int Luce_Component_Point2F_Compare(Luce_Component_Point2F lhs,
														  Luce_Component_Point2F rhs)
	{
		if (lhs == NULL || rhs == NULL)
			return -1;

		if (*lhs == *rhs)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	CLUCE_MACRO_EXPORT int Luce_Component_Point2F_Equal(Luce_Component_Point2F lhs,
														Luce_Component_Point2F rhs)
	{
		if (lhs == NULL || rhs == NULL)
			return 0;

		return *lhs == *rhs;
	}
	CLUCE_MACRO_EXPORT int Luce_Component_Point2F_Assign(Luce_Component_Point2 lhs,
														 Luce_Component_Point2 rhs)
	{
		if (lhs == NULL || rhs == NULL)
			return -1;

		lhs->operator=(*rhs);

		return 0;
	}

	CLUCE_MACRO_EXPORT Luce_Utility_Real32
		Luce_Component_Point2F_GetX(Luce_Component_Point2F location)
	{
		if (location == NULL)
			return 0;

		return location->GetX();
	}
	CLUCE_MACRO_EXPORT int
		Luce_Component_Point2F_SetX(Luce_Component_Point2F location, Luce_Utility_Real32 x)
	{
		if (location == NULL)
			return -1;

		location->SetX(x);

		return 0;
	}
	CLUCE_MACRO_EXPORT Luce_Utility_Real32
		Luce_Component_Point2F_GetY(Luce_Component_Point2F location)
	{
		if (location == NULL)
			return 0;

		return location->GetY();
	}
	CLUCE_MACRO_EXPORT int
		Luce_Component_Point2F_SetY(Luce_Component_Point2F location, Luce_Utility_Real32 y)
	{
		if (location == NULL)
			return -1;

		location->SetY(y);

		return 0;
	}
}