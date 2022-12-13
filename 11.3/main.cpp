#include <iostream>
#include "Leaver.h"

int main()
{
	std::cout << "Enter a name: ";
	std::string name;
	getline(std::cin, name);

	Leaver::Leaver lv;
	std::cout << lv.leave(name);

	return 0;
}