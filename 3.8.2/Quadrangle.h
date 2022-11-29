#pragma once
#include "Figure.h"

// Четырёхугольник
class Quadrangle : public Figure
{
public:
	Quadrangle(const std::string & nm = "Quadrangle", int sides = 4, int a = 40, int b = 60, int c = 50, int d = 70, int A = 60, int B = 80, int C = 120, int D = 100);
protected:
	std::string print_sides() const override;
	std::string print_angles() const override;
	bool check() const override;
private:
	int m_sides;
	int m_a;
	int m_b;
	int m_c;
	int m_d;
	int m_A;
	int m_B;
	int m_C;
	int m_D;
};