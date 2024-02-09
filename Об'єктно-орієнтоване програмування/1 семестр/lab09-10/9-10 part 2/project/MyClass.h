#pragma once
class MyClass
{
	//инициализаци€ защищЄнных полей класса MyClass, дл€ дальнейшей работы с ними
private:
	double x;
	double y;
	double z;
	double result;

	//открытые методы класса+дружественные методы
public:
	
	//конструктор и деструктор класса
	MyClass();//конструктор класса, при создании объекта инициализаци€ полей класса нулевыми значени€ми
	~MyClass();
	
	//ћетоды класса MyClass
	//сеттеры дл€ закрытых полей класса("иницилизировать пол€")
	void setX(double x);
	void setY(double y);
	void setZ(double z);
	
	void setResult(double result);
	
	//геттеры дл€ закрытых полей класса("вернуть, получить значение пол€")
	double getX();
	double getY();
	double getZ();

	double getResult();

	/* ƒружественные методы класса MyClass (реализаци€ вне класса) */
	friend void Run(MyClass& object);
	friend void Print(MyClass& object);

	//ƒружественный метод дл€ установки значений пользовательским вводом
	friend void setValue(MyClass& object);

	//ƒружественный метод дл€ установки значений по умолчанию дл€ x, y, z (по варианту)
	friend void setDefault(MyClass &object);
};