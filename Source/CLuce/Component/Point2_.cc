#include <CLuce/Component/Point2.h>

#include <cstring>

extern "C"
{
	const int Luce_Component_Point2_Size = sizeof(Luce::Component::Point2);

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