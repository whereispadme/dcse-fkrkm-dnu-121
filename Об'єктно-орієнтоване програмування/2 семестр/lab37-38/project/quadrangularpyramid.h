#pragma once
#include "polyhedron.h"

class QuadrangularPyramid : public Polyhedron
{

private:
    float side;

public:
    QuadrangularPyramid();
    QuadrangularPyramid(float, float, float side);

    float getSurfaceArea() override;
    float getVolume() override;

};
