#pragma once
#include "figure.h"

class Polyhedron : public Figure
{

protected:
    float height;
    float length;
    float width;

public:
    Polyhedron();
    Polyhedron(float, float, float);
    ~Polyhedron();

};
