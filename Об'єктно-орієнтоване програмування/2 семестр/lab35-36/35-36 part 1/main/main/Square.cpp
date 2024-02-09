#include "Square.h"
#include <iostream>

Square::Square() : Rectangular()
{
}

Square::Square(int itsLength) : Rectangular(itsLength, itsLength)
{
}

Square::Square(int itsLength, int itsWidth) : Rectangular(itsLength, itsWidth)
{
	if (getLength() != getWidth())
		std::cout << "Error, not a square... a Rectangle??\n";
}

Square::~Square()
{
}

double Square::GetPerim()
{
	return (this->getLength() * 4);
}