#pragma once
#pragma once
#include "Quadrangle.h"

class Parallelogram : public Quadrangle
{
public:
	Parallelogram(const std::wstring & nm = L"Параллелограмм", int a = 20, int b = 30, int A = 30, int B = 40);
};