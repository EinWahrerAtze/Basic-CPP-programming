#pragma once
#include "Figure.h"

namespace Shapes
{
	class SHAPES_API Triangle : public Figure
	{
	public:
		Triangle(const std::wstring & nm = L"Треугольник", int a = 10, int b = 20, int c = 30, int A = 50, int B = 60, int C = 70);
	protected:
		void print_sides() const override;
		void print_angles() const override;
	private:
		int m_a;
		int m_b;
		int m_c;
		int m_A;
		int m_B;
		int m_C;
	};
}