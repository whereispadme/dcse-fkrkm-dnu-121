#pragma once
class DF09
{
	//Поля класса DF09 с модификатором доступа private
private:
	int* array;
	int size;


	//Методы класса с модификатором доступа public
public:
	//Конструктор с параметрами и деструтор класса
	DF09(int size);
	~DF09();

	//Методы класса DF09
	void printArray();
	void setArray();

	//Дружественные методы класса DF09
	friend int setIndex1(DF09& object);
	friend int setIndex2(DF09& object, int i1);
	friend int calculateSum(DF09 &object, int i1, int i2);
	friend int calculateMult(DF09 &object, int i1, int i2);
};