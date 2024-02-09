#include <string>
#include "Furniture.h"

#pragma once

class Classroom
{

private:
	unsigned int numberOfClassroom;
	Furniture *furniture;

public:
	Classroom();
	~Classroom();

	void setNumberOfClassrom(int numberOfClassroom);
	int  getNumberOfClassroom();

	void setFurnitureType(std::string type);
	void setFurnitureTypeOneTime(std::string type);

	std::string getFurnitureType();
	int getInventoryNumber();

	void copy(Classroom &object);

};