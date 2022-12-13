#include "Parallelogram.h"

// Параллелограмм
Parallelogram::Parallelogram(const std::string & nm, int sides, int a, int b, int c, int d, int A, int B, int C, int D)
							: Quadrangle(nm, sides, a, b, c, d, A, B, C, D)
{
	if (a != c || b != d)
	{
		std::stringstream ss;
		ss << print() << "Not created. Reason: sides '" <<  a << "' and '" << c << "', " << b << "' and '" << d << "' must be equal to each other!\n";
		throw Wrong_values(ss.str());
	}
	if (A != C || B != D)
	{
		std::stringstream ss;
		ss << print() << "Not created. Reason: angles '" << A << "' and '" << C << "', " << B << "' and '" << D << "' must be equal to each other!\n";
		throw Wrong_values(ss.str());
	}
}