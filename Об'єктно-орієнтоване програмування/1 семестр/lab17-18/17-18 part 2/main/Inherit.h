#pragma once
#include "Base.h"
#include <iostream>
using namespace std;
//определение унаследованого от Base класса Inherit (наследование с модификатором доступа protected)
//public поля базового класса становятся protected для класса Inherit
//это значит, что обращаться к полям и методам класса можно только из унаследованного класса
class Inherit : protected Base
{

	//закрытая часть класса
private:
	int mult;
	float div;
	float procent = 0;

	//открытая часть класса
public:
	//конструкторы и деструктор класса
	Inherit();
	Inherit(int a_base, int b_base);
	~Inherit();

	//методы
	
	//сеттеры для поля mult(результат произведения), div(результат деления) и procent(процент a от суммы полей базового класса)
	void setResultMult();
	void setResultDiv();
	void setResultProcent();
	
	//собственные методы унаследованого класса для суммы и разницы полей a и b
	int sumChild() { return getA() + getB(); }
	int diffChild() { return getA() - getB(); }

	//методы для получения данных из закрытых полей класса с помощью геттеров реализованных в базовом классе
	//(т.к при protected наследовании можем обращаться к ранее открытой части базового класса)
	int getA() { return baseGet_A(); }
	int getB() { return baseGet_B(); }

	//собственный метод класса Inherit для просмотра состояния объектов
	void printStatus();

	//дружественная функция для просмотра состояния объекта унаследованного класса
	friend void view(Inherit& object);

};