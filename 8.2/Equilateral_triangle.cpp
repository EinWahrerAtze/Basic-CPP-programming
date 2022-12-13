#include "Equilateral_triangle.h"

// Равносторонний треугольник
Equilateral_triangle::Equilateral_triangle(const std::string & nm, int sides, int a, int b, int c, int A, int B, int C)
											: Triangle(nm, sides, a, b, c, A, B, C)
{
	if (A != 60 || B != 60 || C != 60)
	{
		std::stringstream ss;
		ss << print() << "Not created. Reason: angles '" << A << "', '" << B << "' and '" << C << "' must be equal to 60°!\n";
		throw Wrong_values(ss.str());
	}
	if (a != b || b != c || c != a)
	{
		std::stringstream ss;
		ss << print() << "Not created. Reason: sides '" << a << "', '" << b << "' and '" << c << "' must be equal to each other!\n";
		throw Wrong_values(ss.str());
	}
}