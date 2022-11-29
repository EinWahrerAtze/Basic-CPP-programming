#include <iostream>
#include "Figure.h"
#include "Triangle.h"
#include "Right_triangle.h"
#include "Isosceles_triangle.h"
#include "Equilateral_triangle.h"
#include "Quadrangle.h"
#include "Rectangle.h"
#include "Square.h"
#include "Parallelogram.h"
#include "Rhombus.h"


void print_info(Shapes::Figure * fg)
{
	fg->print();
}

int main()
{
	setlocale(LC_ALL, "Russian");

	const int SIZE = 9;
	Shapes::Figure * pointer[SIZE];

	pointer[0] = new Shapes::Triangle;
	pointer[1] = new Shapes::Right_triangle;
	pointer[2] = new Shapes::Isosceles_triangle;
	pointer[3] = new Shapes::Equilateral_triangle;
	pointer[4] = new Shapes::Quadrangle;
	pointer[5] = new Shapes::Rectangle;
	pointer[6] = new Shapes::Square;
	pointer[7] = new Shapes::Parallelogram;
	pointer[8] = new Shapes::Rhombus;

	for (int i = 0; i < SIZE; ++i)
	{
		print_info(pointer[i]);
		std::wcout << (i == SIZE - 1 ? "" : "\n");
	}

	for (int i = 0; i < SIZE; ++i)
	{
		delete pointer[i];
	}

	return 0;
}