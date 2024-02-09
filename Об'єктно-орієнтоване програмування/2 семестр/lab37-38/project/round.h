#pragma once
#include "figure.h"

class Round : public Figure
{

    float height;
protected:
    float radius;

public:
    Round();
    Round(float, float);
    ~Round();

};
