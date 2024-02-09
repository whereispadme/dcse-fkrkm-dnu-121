#include "Polyhedron.h"

Polyhedron::Polyhedron()
{
    this->height = 0;
    this->length = 0;
    this->width = 0;
}

Polyhedron::Polyhedron(float height, float length, float width)
{
    this->height = height;
    this->length = length;
    this->width = width;
}

Polyhedron::~Polyhedron()
{
}
