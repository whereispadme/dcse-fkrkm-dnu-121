#include "quadrangularpyramid.h"
#include <cmath>

QuadrangularPyramid::QuadrangularPyramid() : Polyhedron()
{
    this->side = 0;
}

QuadrangularPyramid::QuadrangularPyramid(float length, float height, float side) : Polyhedron(length, height, 0.)
{
    this->side = side;
}

float QuadrangularPyramid::getSurfaceArea()
{
    return (pow(this->length, 2.) + 2 * this->length * sqrt(pow(this->side, 2.) - pow(this->length, 2.) / 4));
}

float QuadrangularPyramid::getVolume()
{
    return (1. / 3. * this->height * pow(this->length, 2.));
}
