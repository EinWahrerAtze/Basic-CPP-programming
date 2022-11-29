#include<iostream>
#include "Figure.h"

int main()
{
	Figure figure;
	Triangle figure_one;
	Quadrangle figure_two;

	std::cout << "Sides:\n";
	std::cout << figure << figure_one << figure_two;

	return 0;
}