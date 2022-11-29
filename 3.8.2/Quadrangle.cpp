#include "Quadrangle.h"

// Четырёхугольник
Quadrangle::Quadrangle(const std::string & nm, int sides, int a, int b, int c, int d, int A, int B, int C, int D) : Figure(nm)
{
	m_sides = sides;
	m_a = a;
	m_b = b;
	m_c = c;
	m_d = d;
	m_A = A;
	m_B = B;
	m_C = C;
	m_D = D;

	if ((A + B + C + D) != 360)
	{
		std::stringstream ss;
		ss << print() << "Not created. Reason: sum of '" << A << "', '" << B << "', " << C << "' and '" << D << "' must be equal to 360°!\n";
		throw Wrong_values(ss.str());
	}
	if (sides != 4)
	{
		std::stringstream ss;
		ss << print() << "Not created. Reason: there must be 4 sides instead of '" << sides << "'!\n";
		throw Wrong_values(ss.str());
	}
}

std::string Quadrangle::print_sides() const
{
	std::stringstream ss;
	ss << " a = " << m_a << ", b = " << m_b << ", c = " << m_c << ", d = " << m_d << ".\n";
	return ss.str();
}

std::string Quadrangle::print_angles() const
{
	std::stringstream ss;
	ss << "A = " << m_A << "°, B = " << m_B << "°, C = " << m_C << "°, D = " << m_D << "°.\n";
	return ss.str();
}

bool Quadrangle::check() const
{
	return m_sides == 4 && (m_A + m_B + m_C + m_D) == 360;
}