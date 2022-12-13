#include <iostream>
#include "Right_triangle.h"
#include "Isosceles_triangle.h"
#include "Equilateral_triangle.h"
#include "Quadrangle.h"
#include "Square.h"
#include "Rhombus.h"

int main()
{
	Figure new_figure;
	std::cout << new_figure.print() << "Created.\n\n";

	try
	{
		Figure new_figure_2("Figure 2", 1);
		std::cout << new_figure_2.print();
	}
	catch (Wrong_values & wv)
	{
		std::cout << wv.what() << std::endl;
	}

	Triangle new_triangle;
	std::cout << new_triangle.print() << "Created.\n\n";

	try
	{
		Triangle new_triangle_2("Triangle 2", 3, 10, 20, 30, 60, 70, 20);
		std::cout << new_triangle_2.print();
	}
	catch (Wrong_values & wv)
	{
		std::cout << wv.what() << std::endl;
	}
	
	Right_triangle new_right_triangle;
	std::cout << new_right_triangle.print() << "Created.\n\n";
	
	try
	{
		Right_triangle new_right_triangle_2("Right triangle 2", 3, 10, 20, 30, 50, 50, 80);
		std::cout << new_right_triangle_2.print();
	}
	catch (Wrong_values & wv)
	{
		std::cout << wv.what() << std::endl;
	}

	Isosceles_triangle new_isssceles_triangle;
	std::cout << new_isssceles_triangle.print() << "Created.\n\n";

	try
	{
		Isosceles_triangle new_isssceles_triangle_2("Isssceles triangle 2", 3, 20, 30, 30);
		std::cout << new_isssceles_triangle_2.print();
	}
	catch (Wrong_values & wv)
	{
		std::cout << wv.what() << std::endl;
	}

	Equilateral_triangle new_equilateral_triangle;
	std::cout << new_equilateral_triangle.print() << "Created.\n\n";

	try
	{
		Equilateral_triangle new_equilateral_triangle_2("Equilateral triangle 2", 3, 50, 60, 50, 60, 60, 70);
		std::cout << new_equilateral_triangle_2.print();
	}
	catch (Wrong_values & wv)
	{
		std::cout << wv.what() << std::endl;
	}
	
	Quadrangle new_quadrangle;
	std::cout << new_quadrangle.print() << "Created.\n\n";

	try
	{
		Quadrangle new_quadrangle_2("Quadrangle 2", 3);
		std::cout << new_quadrangle_2.print();
	}
	catch (Wrong_values & wv)
	{
		std::cout << wv.what() << std::endl;
	}

	Rectangle new_rectangle;
	std::cout << new_rectangle.print() << "Created.\n\n";
	
	try
	{
		Rectangle new_rectangle_2("Rectangle 2", 4, 10, 30, 10, 30, 89);
		std::cout << new_rectangle_2.print();
	}
	catch (Wrong_values & wv)
	{
		std::cout << wv.what() << std::endl;
	}

	Square new_sqaure;
	std::cout << new_sqaure.print() << "Created.\n\n";
	
	try
	{
		Square new_sqaure_2("Square 2", 4, 50, 50, 50, 60);
		std::cout << new_sqaure_2.print();
	}
	catch (Wrong_values & wv)
	{
		std::cout << wv.what() << std::endl;
	}
	
	Parallelogram new_parallelogram;
	std::cout << new_parallelogram.print() << "Created.\n\n";
	
	try
	{
		Parallelogram new_parallelogram_2("Parallelogram 2", 4, 10, 60, 10, 60, 80, 120, 90);
		std::cout << new_parallelogram_2.print();
	}
	catch (Wrong_values & wv)
	{
		std::cout << wv.what() << std::endl;
	}
	
	Rhombus new_rhombus;
	std::cout << new_rhombus.print() << "Created.\n\n";
	
	try
	{
		Rhombus new_rhombus_2("Rhombus 2", 4, 50, 5, 49);
		std::cout << new_rhombus_2.print();
	}
	catch (Wrong_values & wv)
	{
		std::cout << wv.what();
	}
	catch (...)
	{
		std::cout << "\nSomething caught in default exceptoin!\n";
	}

	return 0;
}