#pragma once
#include "Figure.h"

namespace Shapes
{
	class SHAPES_API Quadrangle : public Figure
	{
	public:
		Quadrangle(const std::wstring & nm = L"Четырёхугольник", int a = 10, int b = 20, int c = 30, int d = 40, int A = 50, int B = 60, int C = 70, int D = 80);
	protected:
		void print_sides() const override;
		void print_angles() const override;
	private:
		int m_a;
		int m_b;
		int m_c;
		int m_d;
		int m_A;
		int m_B;
		int m_C;
		int m_D;
	};
}