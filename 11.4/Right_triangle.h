#pragma once
#include "Triangle.h"

namespace Shapes
{
	class SHAPES_API Right_triangle : public Triangle
	{
	public:
		Right_triangle(const std::wstring & nm = L"Прямоугольный треугольник", int a = 10, int b = 20, int c = 30, int A = 50, int B = 60);
	};
}