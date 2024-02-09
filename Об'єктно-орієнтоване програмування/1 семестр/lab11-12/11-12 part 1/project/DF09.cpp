//реализация методов класса DF09
#include "DF09.h"
#include <iostream>
#include <conio.h>
#include <Windows.h>
using namespace std;

//конструктор по умолчанию
DF09::DF09() {

	this->array = nullptr;
	this->size = 0;

}

//ининциализация элементов массива нулевыми значениями + new
DF09::DF09(int size) {

	this->size = size;
	array = new int[size];

	for (int i = 0; i < size; ++i) {

		array[i] = 0;

	}

}
//корректный конструктор копирования (корректная работа деструктора и инициализация объекта)
//замена конструктора побитового копирования
DF09::DF09(const DF09& object) {

	this->size = object.size;
	this->array = new int[size];
	for (int i = 0; i < size; ++i) {

		array[i] = object.array[i];

	}

}

//деструктор объектов класса
DF09::~DF09() {

	if (this->size > 0) {

		delete[] this->array;

	}

}


//реализация геттера для поля Size, использование в дружественной функции view()
int DF09::getSize(void) const {
	return this->size;
}

//реализация корректной перегрузки оператора присваивания
//избежание побитового копирования
DF09& DF09::operator = (const DF09& object)
{

	this->size = object.size;
	array = new int[size];

	for (int i = 0; i < size; ++i) {
		array[i] = object.array[i];
	}

	//возвращаем текущий объект
	return *this;
}


//реализация перегрузки оператора суммирования (объект + объект)
DF09 DF09::operator + (const DF09& object) {

	DF09 temp;

	temp.size = object.size;
	temp.array = new int[temp.size];

	for (int i = 0; i < temp.size; ++i) {
		
			temp.array[i] = array[i] + object.array[i];

	}

	return temp;

}

DF09 DF09::operator +(int value) {
	DF09 temp;

	temp.size = size;
	temp.array = new int[temp.size];
	for (int i = 0; i < size; ++i) {
		temp.array[i] = array[i] + value;
	}

	return temp;
}

//перегрузка оператора вычетания, (объект - объект)
DF09 DF09::operator -(const DF09& object) {

	
	DF09 temp;

	temp.size = size;
	temp.array = new int[temp.size];

	for (int i = 0; i < temp.size; ++i) {
		temp.array[i] = array[i] - object.array[i];
	}

	return temp;
}

//реализация перегрузки оператора индексации
int& DF09::operator[](const unsigned int index) const {

	return this->array[index];

}