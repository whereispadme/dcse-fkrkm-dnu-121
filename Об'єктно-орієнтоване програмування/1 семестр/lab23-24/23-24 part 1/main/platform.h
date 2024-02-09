//реализация класса platform(платформа), унаследованного от tank(цистерна), который унаследован от класса freightCat(грузовой вагон), который унаследован от railwayCarriage(вагон)

#pragma once
#include "tank.h"

class platform : public tank {

	//открытая часть класса
public:
	int boardsAmount;//количество бортов

	platform();
	platform(const string&, const double&, const int&, const int&);
	platform(platform &object);

	void mod(int);
	friend class Menu;
	
};

//конструктор без параметров
platform::platform() : tank()
{

	this->boardsAmount = 0;

}

//конструктор инициализации
