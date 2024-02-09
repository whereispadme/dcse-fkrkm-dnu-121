//����������� ������ �ube(���), ������� ����������� �� Polyhedron
#pragma once
#include "Polyhedron.h"
#include <cmath>

class Cube : public Polyhedron
{

public:
	Cube();
	Cube(float value);
	~Cube();
	
	float getVolume();
	float getSurfaceArea();
	void   showFigureType();

};