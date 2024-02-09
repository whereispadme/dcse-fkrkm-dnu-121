#pragma once
#include "round.h"

class Hemisphere : Round
{

public:
    Hemisphere();
    Hemisphere(float);
    float getVolume() override;
    float getSurfaceArea() override;


};
