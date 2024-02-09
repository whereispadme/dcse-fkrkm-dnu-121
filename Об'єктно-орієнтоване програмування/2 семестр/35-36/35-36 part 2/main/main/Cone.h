//определение класса QuadrangularPyramid(четырехугольная пирамида)
#pragma once
#include "Round.h"

class Cone : public Round
{

protected:
	float generatrixCone;

public:
	Cone();
	Cone(float, float, float);
	~Cone();

	float getVolume();
	float getSurfaceArea();
	void   showFigureType();

};