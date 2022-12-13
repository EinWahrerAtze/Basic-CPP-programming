#include "Parallelogram.h"

namespace Shapes
{
	Parallelogram::Parallelogram(const std::wstring & nm, int a, int b, int A, int B) : Quadrangle(nm, a, b, a, b, A, B, A, B) 	{}
}