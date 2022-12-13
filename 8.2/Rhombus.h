#pragma once
#include "Parallelogram.h"

// Ромб
class Rhombus : public Parallelogram
{
public:
	Rhombus(const std::string & nm = "Rhombus", int sides = 4, int a = 30, int b = 30, int c = 30, int d = 30,
			int A = 60, int B = 120, int C = 60, int D = 120);
};