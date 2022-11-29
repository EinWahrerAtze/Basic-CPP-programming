#include "Right_triangle.h"

// Прямоугольный треугольник
Right_triangle::Right_triangle(const std::string & nm, int sides, int a, int b, int c, int A, int B, int C) : Triangle(nm, sides, a, b, c, A, B, C)
{
	if (C != 90)
	{
		std::stringstream ss;
		ss << print() << "Not created. Reason: angle '" << C << "' must be equal to 90°!\n";
		throw Wrong_values(ss.str());
	}
}