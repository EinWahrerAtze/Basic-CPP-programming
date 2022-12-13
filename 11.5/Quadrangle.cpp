#include "Quadrangle.h"

namespace Shapes
{
	Quadrangle::Quadrangle(const std::wstring & nm, int a, int b, int c, int d, int A, int B, int C, int D) : Figure(nm)
	{
		m_a = a;
		m_b = b;
		m_c = c;
		m_d = d;
		m_A = A;
		m_B = B;
		m_C = C;
		m_D = D;
	}

	void Quadrangle::print_sides() const
	{
		std::wcout << L"a = " << m_a << L", b = " << m_b << L", c = " << m_c << L", d = " << m_d << L".";
	}

	void Quadrangle::print_angles() const
	{
		std::wcout << L"A = " << m_A << L"°, B = " << m_B << L"°, C = " << m_C << L"°, D = " << m_D << L"°.";
	}
}