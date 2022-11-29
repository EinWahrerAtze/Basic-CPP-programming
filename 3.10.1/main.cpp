#include <iostream>
#include <string>

int main()
{
	std::string name;
	std::cout << "Enter name: ";
	getline(std::cin, name);
	std::cout << "Hello, " << name << "!\n";

	return 0;
}