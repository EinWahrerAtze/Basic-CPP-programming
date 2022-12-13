#pragma once
#include "Rectangle.h"

class Square : public Rectangle
{
public:
	Square(const std::wstring & nm = L"Квадрат", int a = 20, int A = 90);
};