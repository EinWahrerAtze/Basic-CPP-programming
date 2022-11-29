#include "Greeter.h"

namespace Greeter
{
	std::string Greeter::greet(const std::string & s)
	{
		std::string greeting = "Hello, " + s + "!\n";
		return greeting;
	}
}