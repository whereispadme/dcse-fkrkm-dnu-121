#pragma once
#include "Triangle.h"

class Parallelogram : public Triangle
{

public:
	Parallelogram();
	Parallelogram(const double, const double, const double);
	~Parallelogram();
	
	double getArea() const;

};