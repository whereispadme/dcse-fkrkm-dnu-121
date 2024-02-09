//Кущевский Андрей, ПЗ-19-1
#include "Stat_m.h"
#include <iostream>
#include <Windows.h>
#include <conio.h>
using namespace std;

int Stat_m::objAmount;//объявление статического поля objAmount за пределами класса и главной функции main()

int main() {
	setlocale(0, "rus");

	Stat_m::setAmount(0);//инициализация setAmount нулевым значением(0 объектов)

	//Создание двух объектов класса

	//следующие объекты не будут добавлены к getAmount (при создании объекта используется конструктор(const*char))->
	//->в конструкторе отстутствует метод incObj();
	Stat_m object1( "St. Petersburg" ), object2("Yalta");
	
	//Создание 13 объектов класса Stat_m значение getAmount в данный момент = (13)
	Stat_m object[12], object3;

	//Создание 25 динамических объектов, (выделение памяти из кучи)->
	//->значение getAmount в данный момент (13+25=38) объектов
	Stat_m* p = new Stat_m[25];
	std::cout << "Количество объектов до delete[] p:" << Stat_m::getAmount() << std::endl;//вывод количества объектов до удаления динамических объектов
	delete[] p;

	//вывод количества объектов после удаления динамических объектов
	std::cout << "Количество объектов после delete[] p:" << Stat_m::getAmount() << std::endl;

	_getch();
	return 0;
}