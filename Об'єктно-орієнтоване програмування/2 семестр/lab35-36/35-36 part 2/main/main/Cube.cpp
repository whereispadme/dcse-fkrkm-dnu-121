#include "Cube.h"

#include <iostream>
using namespace std;

Cube::Cube() : Polyhedron()
{
}

Cube::Cube(float value) : Polyhedron(value, value, value)
{
}

Cube::~Cube()
{
}

float Cube::getVolume()
{
	return (this->height * 3);
}

float Cube::getSurfaceArea()
{
	return (6 * pow(this->height, 2));
}

void Cube::showFigureType()
{

	cout << endl << "Фигура: Куб" << endl;

}