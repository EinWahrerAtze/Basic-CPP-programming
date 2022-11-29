#include "Fraction.h"

Fraction::Fraction(int numenator, int denominator)
{
	numenator_ = numenator;
	denominator_ = denominator;
}

bool Fraction::operator==(const Fraction & f) const
{
	return numenator_ * f.denominator_ == f.numenator_ * denominator_;
}

bool Fraction::operator!=(const Fraction & f) const
{
	return !(*this == f);
}

bool Fraction::operator<(const Fraction & f) const
{
	return numenator_ * f.denominator_ < f.numenator_ * denominator_;
}

bool Fraction::operator>(const Fraction & f) const
{
	return f < *this;
}

bool Fraction::operator>=(const Fraction & f) const
{
	return !(*this < f);
}

bool Fraction::operator<=(const Fraction & f) const
{
	return !(*this > f);
}