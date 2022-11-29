#include "Triangle.h"

Triangle::Triangle(const std::wstring & nm, int a, int b, int c, int A, int B, int C) : Figure(nm)
{
	m_a = a;
	m_b = b;
	m_c = c;
	m_A = A;
	m_B = B;
	m_C = C;
}

void Triangle::print_sides() const
{
	std::wcout << L"a = " << m_a << L", b = " << m_b << L", c = " << m_c << L".";
}

void Triangle::print_angles() const
{
	std::wcout << L"A = " << m_A << L"°, B = " << m_B << L"°, C = " << m_C << L"°.";
}