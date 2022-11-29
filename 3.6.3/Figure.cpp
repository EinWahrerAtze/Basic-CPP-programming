#include "Figure.h"

void Figure::print()
{
	std::wcout << name << L":\n";
	std::wcout << L"Стороны: ";
	print_sides();
	std::wcout << L'\n';
	std::wcout << L"Углы: ";
	print_angles();
	std::wcout << L'\n';
}

Figure::Figure(const std::wstring & nm) : name(nm) { }

Figure::~Figure() { }