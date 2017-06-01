#include <CLuce/Component/Size2.h>

#include <cstddef>
#include <cstring>

extern "C"
{
	CLUCE_MACRO_EXPORT const int Luce_Component_Size2_Size = sizeof(Luce::Component::Size2);

	CLUCE_MACRO_EXPORT Luce_Component_Size2 Luce_Component_Size2_Create()
	{
		return new Luce::Component::Size2();
	}
	CLUCE_MACRO_EXPORT int Luce_Component_Size2_Destory(Luce_Component_Size2* size)
	{
		if (size == NULL)
			return -1;
		else if (*size == NULL)
			return -1;

		delete *size;
		*size = NULL;

		return 0;
	}
	CLUCE_MACRO_EXPORT int Luce_Component_Size2_Initializer(void* memory)
	{
		if (memory == NULL)
			return -1;

		new(memory) Luce::Component::Size2();

		return 0;
	}
	CLUCE_MACRO_EXPORT int Luce_Component_Size2_Destoryer(void* memory)
	{
		if (memory == NULL)
			return -1;

		Luce_Component_Size2 location = reinterpret_cast<Luce_Component_Size2>(
			memory);
		location->Destroyer();

		std::memset(memory, 0, Luce_Component_Size2_Size);

		return 0;
	}

	CLUCE_MACRO_EXPORT int Luce_Component_Size2_Compare(Luce_Component_Size2 lhs,
														Luce_Component_Size2 rhs)
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
	CLUCE_MACRO_EXPORT int Luce_Component_Size2_Equal(Luce_Component_Size2 lhs,
													  Luce_Component_Size2 rhs)
	{
		if (lhs == NULL || rhs == NULL)
			return 0;

		return *lhs == *rhs;
	}
	CLUCE_MACRO_EXPORT int Luce_Component_Size2_Assign(Luce_Component_Size2 lhs,
													   Luce_Component_Size2 rhs)
	{
		if (lhs == NULL || rhs == NULL)
			return -1;

		lhs->operator=(*rhs);

		return 0;
	}

	CLUCE_MACRO_EXPORT Luce_Utility_Int64 Luce_Component_Size2_Area(Luce_Component_Size2 size)
	{
		return size->Area();
	}

	CLUCE_MACRO_EXPORT Luce_Utility_Int32
		Luce_Component_Size2_GetWidth(Luce_Component_Size2 size)
	{
		if (size == NULL)
			return 0;

		return size->GetWidth();
	}
	CLUCE_MACRO_EXPORT int
		Luce_Component_Size2_SetWidth(Luce_Component_Size2 size, Luce_Utility_Int32 width)
	{
		if (size == NULL)
			return -1;

		size->SetWidth(width);

		return 0;
	}
	CLUCE_MACRO_EXPORT Luce_Utility_Int32
		Luce_Component_Size2_GetHeight(Luce_Component_Size2 size)
	{
		if (size == NULL)
			return 0;

		return size->GetHeight();
	}
	CLUCE_MACRO_EXPORT int
		Luce_Component_Size2_SetHeight(Luce_Component_Size2 size, Luce_Utility_Int32 height)
	{
		if (size == NULL)
			return -1;

		size->SetHeight(height);

		return 0;
	}
}

extern "C"
{
	CLUCE_MACRO_EXPORT const int Luce_Component_Size2F_Size = sizeof(Luce::Component::Size2F);

	CLUCE_MACRO_EXPORT Luce_Component_Size2F Luce_Component_Size2F_Create()
	{
		return new Luce::Component::Size2F();
	}
	CLUCE_MACRO_EXPORT int Luce_Component_Size2F_Destory(Luce_Component_Size2F* size)
	{
		if (size == NULL)
			return -1;
		else if (*size == NULL)
			return -1;

		delete *size;
		*size = NULL;

		return 0;
	}
	CLUCE_MACRO_EXPORT int Luce_Component_Size2F_Initializer(void* memory)
	{
		if (memory == NULL)
			return -1;

		new(memory) Luce::Component::Size2F();

		return 0;
	}
	CLUCE_MACRO_EXPORT int Luce_Component_Size2F_Destoryer(void* memory)
	{
		if (memory == NULL)
			return -1;

		Luce_Component_Size2F location = reinterpret_cast<Luce_Component_Size2F>(
			memory);
		location->Destroyer();

		std::memset(memory, 0, Luce_Component_Size2F_Size);

		return 0;
	}

	CLUCE_MACRO_EXPORT int Luce_Component_Size2F_Compare(Luce_Component_Size2F lhs,
														 Luce_Component_Size2F rhs)
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
	CLUCE_MACRO_EXPORT int Luce_Component_Size2F_Equal(Luce_Component_Size2F lhs,
													   Luce_Component_Size2F rhs)
	{
		if (lhs == NULL || rhs == NULL)
			return 0;

		return *lhs == *rhs;
	}
	CLUCE_MACRO_EXPORT int Luce_Component_Size2F_Assign(Luce_Component_Size2F lhs,
														Luce_Component_Size2F rhs)
	{
		if (lhs == NULL || rhs == NULL)
			return -1;

		lhs->operator=(*rhs);

		return 0;
	}

	CLUCE_MACRO_EXPORT Luce_Utility_Real64 Luce_Component_Size2F_Area(Luce_Component_Size2F size)
	{
		return size->Area();
	}

	CLUCE_MACRO_EXPORT Luce_Utility_Real32
		Luce_Component_Size2F_GetWidth(Luce_Component_Size2F size)
	{
		if (size == NULL)
			return 0;

		return size->GetWidth();
	}
	CLUCE_MACRO_EXPORT int
		Luce_Component_Size2F_SetWidth(Luce_Component_Size2F size, Luce_Utility_Real32 width)
	{
		if (size == NULL)
			return -1;

		size->SetWidth(width);

		return 0;
	}
	CLUCE_MACRO_EXPORT Luce_Utility_Real32
		Luce_Component_Size2F_GetHeight(Luce_Component_Size2F size)
	{
		if (size == NULL)
			return 0;

		return size->GetHeight();
	}
	CLUCE_MACRO_EXPORT int
		Luce_Component_Size2F_SetHeight(Luce_Component_Size2F size, Luce_Utility_Real32 height)
	{
		if (size == NULL)
			return -1;

		size->SetHeight(height);

		return 0;
	}
}