#include "Figure.h"

// Фигура
std::string Figure::print() const
{
	std::stringstream ss;
	ss << m_name << ":\n";
	ss << (check() ? "Right.\n" : "Wrong.\n");
	ss << "Sides: " << print_sides() << "Angles: " << print_angles();
	return ss.str();
}

std::string Figure::print_sides() const
{
	std::stringstream ss;
	ss << m_sides << ".\n";
	return ss.str();
}

std::string Figure::print_angles() const
{
	std::stringstream ss;
	ss << "none.\n";
	return ss.str();
}

bool Figure::check() const
{
	return m_sides == 0;
}

Figure::Figure(const std::string & nm, int sides) : m_name(nm), m_sides(sides)
{
	if (m_sides != 0)
	{
		std::stringstream ss;
		ss << print() << "Not created. Reason: there must be 0 sides instead of '" << m_sides << "'!\n";
		throw Wrong_values(ss.str());
	}
}

Figure::~Figure() { }