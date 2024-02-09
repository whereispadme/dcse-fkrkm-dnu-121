#pragma once

//определение базового класса
class Base
{

	//открытая часть класса
public:
	int a;
	int b;
		
	//конструкторы и деструктор класса
	Base();
	Base(int a, int b);
	~Base();

	//методы класса
	int sum_B();	//сумма a + b
	int diff_B();	//разница a - b

};