#include "Isosceles_triangle.h"

// Равнобедренный треугольник
Isosceles_triangle::Isosceles_triangle(const std::string & nm, int sides, int a, int b, int c, int A, int B, int C) : Triangle(nm, sides, a, b, c, A, B, C)
{
	if (a != c)
	{
		std::stringstream ss;
		ss << print() << "Not created. Reason: sides '" << a << "', '" << b << "' and '" << c << "' must be equal to each other!\n";
		throw Wrong_values(ss.str());
	}
	if(A != C)
	{
		std::stringstream ss;
		ss << print() << "Not created. Reason: angles'" << A << "' and '" << C << "' must be equal to each other!\n";
		throw Wrong_values(ss.str());
	}
}