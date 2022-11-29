#pragma once
#include "Triangle.h"

// Равнобедренный треугольник
class Isosceles_triangle : public Triangle
{
public:
	Isosceles_triangle(const std::string & nm = "Isosceles triangle", int sides = 3, int a = 10, int b = 20, int c = 10, int A = 50, int B = 80, int C = 50);
};