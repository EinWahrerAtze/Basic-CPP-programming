#include "Right_triangle.h"

namespace Shapes
{
	Right_triangle::Right_triangle(const std::wstring & nm, int a, int b, int c, int A, int B) : Triangle(nm, a, b, c, A, B, 90) {}
}