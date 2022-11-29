// Figure.h -- базовый класс
#include <string>
#pragma once

class Figure
{	
public:
	friend std::ostream & operator<<(std::ostream & os, const Figure & fg);
	Figure(const std::string & str = "Figure", const int n = 0);
private:
	int sides;
	std::string name;
};

// Производный класс Triangle
class Triangle: public Figure
{
public: 
	Triangle(const std::string & str = "Triangle", const int n = 3);
};

// Производный класс Quadangle
class Quadrangle: public Figure
{
public:
	Quadrangle(const std::string & str = "Quadrangle", const int n = 4);
};