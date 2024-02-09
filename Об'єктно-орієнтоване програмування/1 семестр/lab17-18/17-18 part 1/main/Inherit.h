#pragma once
#include "Base.h"

//определение унаследованого от Base класса Inherit (наследование с модификатором доступа public)
class Inherit : public Base
{

	//закрытая часть класса
private:
	int mult;
	float div;
	int temp;

	//открытая часть класса
public:
	//конструкторы и деструктор класса
	Inherit();
	Inherit(int a_base, int b_base, int temp);
	~Inherit();

	//методы
	friend void view(const Inherit& object);
	
	//сеттеры для поля Mult(результат произведения) и Div(результат деления)
	void setMult();
	void setDiv();
};