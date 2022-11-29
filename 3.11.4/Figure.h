#pragma once
#include <string>
#include <iostream>
#include "Shapes.h"

namespace Shapes
{
	class SHAPES_API Figure
	{
	public:
		void print();
		virtual ~Figure();
	protected:
		Figure(const std::wstring & nm = L"Фигура");
		virtual void print_sides() const = 0;
		virtual void print_angles() const = 0;
	private:
		std::wstring name;
	};
}