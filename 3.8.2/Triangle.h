#pragma once
#include "Figure.h"

class Triangle : public Figure
{
public:
	Triangle(const std::string & nm = "Triangle", int sides = 3, int a = 10, int b = 20, int c = 30, int A = 50, int B = 60, int C = 70);
protected:
	std::string print_sides() const override;
	std::string print_angles() const override;
	bool check() const override;
private:
	int m_sides;
	int m_a;
	int m_b;
	int m_c;
	int m_A;
	int m_B;
	int m_C;
};