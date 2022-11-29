#include "Isosceles_triangle.h"

namespace Shapes
{
	Isosceles_triangle::Isosceles_triangle(const std::wstring & nm, int a, int b, int A, int B) : Triangle(nm, a, b, a, A, B, A)
	{
	}
}