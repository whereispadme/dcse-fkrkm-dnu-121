#include "Furniture.h"

Furniture::Furniture()
{

	this->type = "";
	this->inventoryNumber = -1;

}

Furniture::Furniture(std::string type)
{

	if (type == "����") {

		this->type = "����";
		this->inventoryNumber = 1;

	}
	else if (type == "���� ����������") {

		this->type = "���� ����������";
		this->inventoryNumber = 2;

	}
	else if (type == "������ �������") {

		this->type = "������ �������";
		this->inventoryNumber = 3;

	}
	else if (type == "�����������") {

		this->type = "�����������";
		this->inventoryNumber = 0;

	}

}

Furniture::~Furniture()
{
}

std::string Furniture::getTypeOfFutniture()
{

	return this->type;

}

unsigned int Furniture::getInventoryNumber()
{

	return this->inventoryNumber;

}

void Furniture::setTypeOfFutniture(std::string type)
{

	if (type == "����") {

		this->type = "����";
		this->inventoryNumber = 1;

	}
	else if (type == "���� ����������") {

		this->type = "���� ����������";
		this->inventoryNumber = 2;

	}
	else if (type == "������ �������") {

		this->type = "������ �������";
		this->inventoryNumber = 3;

	}
	else if (type == "�����������") {

		this->type = "�����������";
		this->inventoryNumber = 0;

	}

}