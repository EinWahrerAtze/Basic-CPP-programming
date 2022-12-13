// Figure.h -- методы базового класса
#include<iostream>
#include "Figure.h"

std::ostream & operator<<(std::ostream & os, const Figure & fg)
{
	os << "Name: " << fg.name << std::endl << "Sides: " << fg.sides << std::endl;
	return os;
}

Figure::Figure(const std::string& str, int n): name(str), sides(n)
{
}

// Методы производного класса Triangle
Triangle::Triangle(const std::string& str, int n): Figure(str, n)
{
}

// Методы производного класса Quadangle
Quadrangle::Quadrangle(const std::string& str, int n): Figure(str, n)
{
}