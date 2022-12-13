#pragma once
#include "Triangle.h"

namespace Shapes
{
	class SHAPES_API Equilateral_triangle : public Triangle
	{
	public:
		Equilateral_triangle(const std::wstring & nm = L"Равносторонний треугольник", int a = 30, int A = 60);
	};
}