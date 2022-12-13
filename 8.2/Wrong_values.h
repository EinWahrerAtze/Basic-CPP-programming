#pragma once
#include <string>
#include <stdexcept>

class Wrong_values : public std::runtime_error
{
public:
	Wrong_values(const std::string & what);
};