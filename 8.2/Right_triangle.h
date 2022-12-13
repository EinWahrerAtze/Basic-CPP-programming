#pragma once
#include "Triangle.h"

// Прямоугольный треугольник
class Right_triangle : public Triangle
{
public:
	Right_triangle(const std::string & nm = "Right triangle", int sides = 3, int a = 10, int b = 20, int c = 30, int A = 40, int B = 50, int C = 90);
};