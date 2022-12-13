#pragma once
#include "Rectangle.h"

// Квадрат
class Square : public Rectangle
{
public:
	Square(const std::string & nm = "Square", int sides = 4, int a = 20, int b = 20, int c = 20, int d = 20,
		   int A = 90, int B = 90, int C = 90, int D = 90);
};