#include "Rectangular.h"

Rectangular::Rectangular() : Figure()
{
}

Rectangular::Rectangular(const double a, const double b) : Figure(a, b)
{
}

Rectangular::~Rectangular()
{
}

double Rectangular::getArea() const
{
	return a*b;
}