#ifndef LAND_H
#define LAND_H

#include <string>

class Land
{

private:
    int type;

    int count;
    double tax;

    int length;
    int width;

public:
    Land();
    Land(int, int, int, int);

    int getType();
    int getArea();
    int getCount();
    double getTax();

};

#endif // LAND_H
