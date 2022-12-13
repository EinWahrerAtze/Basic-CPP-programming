#include <iostream>
#include "Greeter.h"

int main()
{
	std::cout << "Enter a name: ";
	std::string name;
	getline(std::cin, name);

	Greeter::Greeter gr;
	std::cout << gr.greet(name);

	return 0;
}