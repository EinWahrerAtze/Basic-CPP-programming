#pragma once
#include "Parallelogram.h"

namespace Shapes
{
	class SHAPES_API Rhombus : public Parallelogram
	{
	public:
		Rhombus(const std::wstring & nm = L"Ромб", int a = 30, int A = 30, int B = 40);
	};
}