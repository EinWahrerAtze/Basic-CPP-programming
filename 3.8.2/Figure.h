#pragma once
#include "Wrong_values.h"
#include <sstream>

class Figure
{
public:
	std::string print() const;
	Figure(const std::string & nm = "Figure", int sides = 0);
	virtual ~Figure();
protected:
	virtual std::string print_sides() const;
	virtual std::string print_angles() const;
	virtual bool check() const;
private:
	std::string m_name;
	int m_sides;
};
