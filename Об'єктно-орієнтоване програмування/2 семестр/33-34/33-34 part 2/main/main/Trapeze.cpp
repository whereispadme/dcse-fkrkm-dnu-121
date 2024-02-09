#include "Trapeze.h"

Trapeze::Trapeze() : Triangle()
{

	this->d = 0;
	this->h = 0;

}

Trapeze::Trapeze(const double a, const double b, const double c, const double d, const double h) : Triangle(a, b, c)
{

	this->d = d;
	this->h = h;

}

Trapeze::~Trapeze()
{
}

void Trapeze::setFigure(const double a, const double b, const double c, const double d, const double h)
{

	Triangle::setFigure(a, b, c);
	this->d = d;
	this->h = h;

}

void Trapeze::getFigure(double &a, double &b, double &c, double &d, double &h)
{

	a = this->a;
	b = this->b;
	c = this->c;
	d = this->d;
	h = this->h;

}

double Trapeze::getArea() const
{
	
	return 0.5 * (this->a + this->b) * this->h;

}