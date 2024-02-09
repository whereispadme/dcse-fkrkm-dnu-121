#include "Parallelogram.h"

Parallelogram::Parallelogram() : Triangle()
{
}

Parallelogram::Parallelogram(const double a, const double b, const double h) : Triangle(a, b, h)
{
}

Parallelogram::~Parallelogram()
{
}

double Parallelogram::getArea() const
{
	return this->a * this->c;
}