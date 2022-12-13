#pragma once
#include "Parallelogram.h"

class Rectangle : public Parallelogram
{
public:
	Rectangle(const std::wstring & nm = L"Прямоугольник", int a = 10, const int b = 20, int A = 90);
};