#include "hemisphere.h"
#include <cmath>

const float PI = 3.14159265358979323846264f;

Hemisphere::Hemisphere() : Round()
{
}

Hemisphere::Hemisphere(float radius) : Round(radius, 0.)
{
}

float Hemisphere::getVolume()
{
    return(2. / 3. * PI * pow(this->radius, 3.));
}

float Hemisphere::getSurfaceArea()
{
    return (3. * PI * pow(this->radius, 2.));
}
