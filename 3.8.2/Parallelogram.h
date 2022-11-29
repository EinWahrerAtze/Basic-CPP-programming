#pragma once
#include "Quadrangle.h"

// Параллелограмм
class Parallelogram : public Quadrangle
{
public:
	Parallelogram(const std::string & nm = "Parallelogram", int sides = 4, int a = 20, int b = 30, int c = 20, int d = 30,
				  int A = 60, int B = 120, int C = 60, int D = 120);
};
