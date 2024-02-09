#pragma once

//определение базового класса
class Base
{

	//закрытая часть класса
protected:
	int a;
	int b;


	//открытая часть класса
public:
	//конструкторы и деструктор класса
	Base();
	Base(int a, int b);
	~Base();

	//геттеры для полей a и b для унаследованного при protected наследовании класса
	int baseGet_A() { return a; }
	int baseGet_B() { return b; }

	//функция для просмотра полей базового класса для унаследованого
	void viewInherit();
	
};