//Реализация класса Stat_d
#include "Stat_d.h"
#include <iostream>
#include <Windows.h>
#include <conio.h>
using namespace std;

//конструктор без параметров, инициализация полей нулевыми значениями
Stat_d::Stat_d() {
	this->m_x = 0;
	this->m_y = 0;
}

//конструтор с параметрами для инициализации полей передаными значениями
Stat_d::Stat_d(int x, int y)
{
	this->m_x = x;
	this->m_y = y;
}

//деструктор без параметров
Stat_d::~Stat_d()
{
	std::cout << "Сработал деструктор!";
}

//Сеттер для поля B
void Stat_d::setB(int B)
{
	this->B = B;
}

//Геттер для поля B
int Stat_d::getB()
{
	return this->B;
}