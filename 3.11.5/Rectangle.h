#pragma once
#include "Parallelogram.h"

namespace Shapes
{
	class SHAPES_API Rectangle : public Parallelogram
	{
	public:
		Rectangle(const std::wstring & nm = L"Прямоугольник", int a = 10, const int b = 20, int A = 90);
	};
}