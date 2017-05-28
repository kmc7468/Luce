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
	CLUCE_MACRO_EXPORT int Luce_Component_Point2_Initialize(void* memory)
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
}