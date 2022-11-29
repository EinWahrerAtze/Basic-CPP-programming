#pragma once
#include "Parallelogram.h"

// Прямоугольник
class Rectangle : public Parallelogram
{
public:
	Rectangle(const std::string & nm = "Rectangle", int sides = 4, int a = 10, int b = 20, int c = 10, int d = 20,
			  int A = 90, int B = 90, int C = 90, int D = 90);
};