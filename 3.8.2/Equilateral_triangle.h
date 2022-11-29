#pragma once
#include "Triangle.h"

// Равносторонний треугольник
class Equilateral_triangle : public Triangle
{
public:
	Equilateral_triangle(const std::string & nm = "Equilateral triangle", int sides = 3, int a = 30, int b = 30, int c = 30, int A = 60, int B = 60, int C = 60);
};