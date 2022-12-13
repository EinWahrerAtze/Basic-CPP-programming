#include "Rectangle.h"

namespace Shapes
{
	Rectangle::Rectangle(const std::wstring & nm, int a, int b, int A) : Parallelogram(nm, a, b, A, A) {}
}