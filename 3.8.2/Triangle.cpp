#include "Triangle.h"

// Треугольник
Triangle::Triangle(const std::string & nm, int sides, int a, int b, int c, int A, int B, int C) : Figure(nm)
{
	m_sides = sides;
	m_a = a;
	m_b = b;
	m_c = c;
	m_A = A;
	m_B = B;
	m_C = C;

	if ((m_A + m_B + m_C) != 180)
	{
		std::stringstream ss;
		ss << print() << "Not created. Reason: sum of angles '" << m_A << "', '" << m_B << "' and '" << m_C << "' must be equal to 180°!\n";
		throw Wrong_values(ss.str());
	}
	if (sides != 3)
	{
		std::stringstream ss;
		ss << print() << "Not created.Reason: there must be 3 sides instead of '" << sides << "'!\n";
		throw Wrong_values(ss.str());
	}
}

std::string Triangle::print_sides() const
{
	std::stringstream ss;
	ss << "a = " << m_a << ", b = " << m_b << ", c = " << m_c << ".\n";
	return ss.str();
}

std::string Triangle::print_angles() const
{
	std::stringstream ss;
	ss << "A = " << m_A << "°, B = " << m_B << "°, C = " << m_C << "°.\n";
	return ss.str();
}

bool Triangle::check() const
{
	return m_sides == 3 && (m_A + m_B + m_C) == 180;
}