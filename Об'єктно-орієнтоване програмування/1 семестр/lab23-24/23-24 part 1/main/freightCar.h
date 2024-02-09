//реализация класса freightCar(грузовой вагон), унаследованного от railwayCarriage(вагон)
#pragma once
#include "railwayCarriage.h"
#include <string>
using namespace std;

class freightCar : public railwayCarriage {

	//открытая часть класса
public:
	freightCar();
	freightCar(const string &model, const double &weight, const int &capacity);
	freightCar(const freightCar &object);
	~freightCar();

	void mod(int &weight);
	friend class Menu;
	
	//защищённая часть класса
protected:
	int capacity;//грузоподъемность
	
};

//конструктор без параметров
freightCar::freightCar() : railwayCarriage()
{

	this->capacity = 0;

}

//конструктор инициализации
freightCar::freightCar(const string &model, const double &weight, const int &capacity) : railwayCarriage(model, weight)
{

	this->capacity = capacity;

}

//конструктор копирования
freightCar::freightCar(const freightCar &object) : railwayCarriage(object)
{

	this->capacity = object.capacity;

}

//деструктор
freightCar::~freightCar()
{
}

//метод для увелечения значения грузоподьемности объекта
void freightCar::mod(int &capacity) 
{

	railwayCarriage::mod(capacity);
	this->capacity += capacity;

}