#include "Square.h"

// Квадрат
Square::Square(const std::string & nm, int sides, int a, int b, int c, int d,
			   int A, int B, int C, int D) : Rectangle(nm, sides, a, b, c, d, A, B, C, D)
{
	if (a != b || b != c || c != d || d != a)
	{
		std::stringstream ss;
		ss << print() << "Not created. Reason: sides '" << a << "' and '" << b << "', '" << c << "' and '" << d << "' must be equal to each other!\n";
		throw Wrong_values(ss.str());
	}
	if (A != 90 || B != 90 || C != 90 || D != 90)
	{
		std::stringstream ss;
		ss << print() << "Not created. Reason: angles '" << A << "', '" << B << "', " << C << "' and '" << D << "' must be equal to 90°!\n";
		throw Wrong_values(ss.str());
	}
}