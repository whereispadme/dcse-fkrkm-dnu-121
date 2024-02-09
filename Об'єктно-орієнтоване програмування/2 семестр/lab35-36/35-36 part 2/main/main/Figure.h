//определение базового класса Figure(фигура)
#pragma once

class Figure
{

public:
	Figure();
	virtual ~Figure();

	virtual float getVolume() = 0;
	virtual float getSurfaceArea() = 0;
	virtual void   showFigureType() = 0;

};