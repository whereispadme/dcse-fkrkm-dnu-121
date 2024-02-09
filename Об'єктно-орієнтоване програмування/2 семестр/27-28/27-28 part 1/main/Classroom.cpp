#include "Classroom.h"
#include <string>

Classroom::Classroom()
{

	this->numberOfClassroom = -1;
	this->furniture = nullptr;

}

Classroom::~Classroom()
{

	if (this->furniture != nullptr) {

		delete this->furniture;

	}

}

void Classroom::setNumberOfClassrom(int numberOfClassroom)
{

	this->numberOfClassroom = numberOfClassroom;

}

int Classroom::getNumberOfClassroom()
{
	
	return this->numberOfClassroom;

}

void Classroom::setFurnitureType(std::string type)
{

	this->furniture = new Furniture(type);

}

void Classroom::setFurnitureTypeOneTime(std::string type)
{

	this->furniture->setTypeOfFutniture(type);

}

std::string Classroom::getFurnitureType()
{
	
	return this->furniture->getTypeOfFutniture();

}

int Classroom::getInventoryNumber()
{

	return this->furniture->getInventoryNumber();

}

void Classroom::copy(Classroom & object)
{

	this->numberOfClassroom = object.numberOfClassroom;
	this->furniture = object.furniture;

}