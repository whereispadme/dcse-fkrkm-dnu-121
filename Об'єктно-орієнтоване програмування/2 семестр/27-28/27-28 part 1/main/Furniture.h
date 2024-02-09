#pragma once
#include <string>

class Furniture
{

private:
	std::string type;
	unsigned int inventoryNumber;
	
public:
	Furniture();
	Furniture(std::string type);
	~Furniture();

	std::string  getTypeOfFutniture();
	unsigned int getInventoryNumber();

	void setTypeOfFutniture(std::string type);

};