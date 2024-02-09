//определение класса Rectangular(Прямоугольник), который унаследован от Shape
#pragma once
#include "Shape.h"

class Rectangular : public Shape
{

private:
	int itsWidth;
	int itsLength;

public:
	Rectangular();
	Rectangular(int, int); 
	virtual ~Rectangular();

	virtual double getArea();
	virtual double getPerim();
	virtual int getLength();
	virtual int getWidth();
	virtual void draw();
	
};