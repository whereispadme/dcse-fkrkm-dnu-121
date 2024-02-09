#include "Rectangular.h"
#include <iostream>
using namespace std;

Rectangular::Rectangular()
{
	this->itsWidth = 0;
	this->itsLength = 0;
}

Rectangular::Rectangular(int itsWidth, int itsLength)
{
	this->itsWidth = itsWidth;
	this->itsLength = itsLength;
}

Rectangular::~Rectangular()
{
}

double Rectangular::getArea()
{
	return this->itsLength * this->itsWidth;
}

double Rectangular::getPerim()
{
	return 2 * this->itsLength + 2 * this->itsWidth;
}

int Rectangular::getLength()
{
	return this->itsLength;
}

int Rectangular::getWidth()
{
	return this->itsWidth;
}

void Rectangular::draw()
{
	
	for (int i = 0; i < this->itsLength; i++)
	{
		
		for (int j = 0; j < this->itsWidth; j++)
			cout << "x ";
		
		cout << endl;
	}

}