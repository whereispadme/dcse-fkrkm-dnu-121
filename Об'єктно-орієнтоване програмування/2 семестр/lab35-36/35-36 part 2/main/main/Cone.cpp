#include "Cone.h"

#include <iostream>
#include <cmath>
using namespace std;

#define PI 3.141592653589793238462643

Cone::Cone() : Round()
{
	this->generatrixCone = 0;
}

Cone::Cone(float height, float surfaceRadius, float generatrixCone) : Round(height, surfaceRadius)
{
	this->generatrixCone = generatrixCone;
}

Cone::~Cone()
{
}

float Cone::getVolume()
{
	float volume = 1.f / 3.f * PI * this->surfaceRadius * this->surfaceRadius * this->height;
	return volume;
}

float Cone::getSurfaceArea()
{
	float surfaceArea = PI * this->surfaceRadius * (this->surfaceRadius + 1);
	return surfaceArea;
}

void Cone::showFigureType()
{
	cout << endl << "Фигура: Конус" << endl;
}