#include "DF09.h"
#include <iostream>
#include <Windows.h>
#include <conio.h>
using namespace std;


//конструктор при создании объекта по умолчанию, поля класса иниц. нулевыми значениями
DF09::DF09() {
	this->array = nullptr;
	this->size = 0;
}

//выделение динамической памяти
DF09::DF09(int value) {
	
	this->size = value;
	array = new float[size];

	std::cout << "\nРабота с объектом по адресу:"<<this;
	std::cout << std::endl;
	for (int i = 0; i < size; ++i) {
		
		std::cout << "A[" << i + 1 << "]:";
		std::cin>>this->array[i];
	
	}
}

//конструктор копирования
DF09::DF09(const DF09& object) {

	this->size = object.size;
	this->array = new float[size];
	for (int i = 0; i < size; ++i) {

		array[i] = object.array[i];

	}

}


DF09::~DF09() {

	delete[] this->array;

}

int DF09::getSize() { return size; }

//реализация корректной перегрузки оператора присваивания
//избежание побитового копирования
DF09& DF09::operator = (const DF09& object)
{

	this->size = object.size;
	array = new float[size];

	for (int i = 0; i < size; ++i) {
		array[i] = object.array[i];
	}

	//возвращаем текущий объект
	return *this;
}

DF09 DF09::operator*(DF09& object)
{
	int min = size; // размер меньшего массива
	int max = size; // размер большего массива
	if (min > object.size) min = object.size;
	if (max < object.size) max = object.size;
	DF09 temp;

	temp.size = max;
	temp.array = new float[temp.size];

	// цикл поэлементного произведения
	for (int i = 0; i < max; i++)
	{
		if (i < min)
			temp.array[i] = array[i] * object.array[i];
		else
		{
			//если размер больше макс, то элемент будет равен элементу правого операнда
			if (size < max)
				temp.array[i] = object.array[i];
			
			//если наоборот, то левого
			else
				temp.array[i] = array[i];
		}
	}

	//возвращаем созданный в результае поэлементного произведения объект
	return temp;
}