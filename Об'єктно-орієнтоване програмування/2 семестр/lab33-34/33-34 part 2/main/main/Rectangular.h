//определение класса Rectangle(Прямоугольник), который унаследован от класса Figure

#pragma once
#include "Figure.h"

class Rectangular : public Figure
{

public:
	
	Rectangular();
	Rectangular(const double, const double);
	~Rectangular();
	
	double getArea() const;
	
};