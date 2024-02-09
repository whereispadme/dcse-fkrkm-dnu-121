//реализация класса tank(цистерна), унаследованного от freightCar(грузовой вагон), который унаследован от класса railwayCarriage(вагон)
#pragma once
#include "freightCar.h"

class tank : public freightCar
{

	//открытая часть класса
public:
	tank();
	tank(const string &model, const double &weight, const int &capacity, const double &volume);
	tank(const tank &object);
	~tank();

	void setVolume(const double &volume);
	double getVolume()const;
	void mod(int &volume);
	friend class Menu;

	//закрытая часть класса
private:
	double volume;//объем цистерны

};

//конструктор без параметров
tank::tank() : freightCar()
{

	this->volume = 0;
	
}

//конструктор инициализации
tank::tank(const string &model, const double &weight, const int &capacity, const double &volume) : freightCar(model, weight, capacity)
{

	this->volume = volume;

}

//конструктор копирования
tank::tank(const tank &object) : freightCar(object)
{

	this->volume = object.volume;

}

//деструктор
tank::~tank()
{
}

//сеттер для поля volume
void tank::setVolume(const double &volume)
{

	this->volume = volume;

}

//геттер для поля volume
double tank::getVolume()const
{

	return this->volume;

}

//метод для увеличения объема цистерны
void tank::mod(int &volume)
{

	this->volume += volume;

}