//определение класса Square(Квадрат), который унаследован от Rectangular
#pragma once
#include "Rectangular.h"

class Square : public Rectangular
{

public:
	Square();
	Square(int);
	Square(int, int);
	virtual ~Square();

	double GetPerim();

};