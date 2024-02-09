//Реализация методов
#include "DF09.h"
#include <iostream>
#include <windows.h>
#include <conio.h>
using namespace std;

//Метод инициализации элементов массива пользователем
void DF09::setArray() {
	system("cls");
	for (int i = 0; i < this->size; ++i) {
		std::cout << "A[" << i + 1 << "]:";
		std::cin >> array[i];
	}
	std::cout << std::endl;

}

//Метод вывода элементов массива на экран
void DF09::printArray() {
	std::cout << "Введённый массив:" << std::endl;
	for (int i = 0; i < this->size; ++i) {
		std::cout << array[i] << "\t";
	}
	std::cout << std::endl<<std::endl;
	_getch();
}

//Конструктор с параметром size для выделения памяти из кучи, также инициализация элементов массива нулевыми значениями
DF09::DF09(int size)
{
	this->size = size;
	this->array = new int[this->size];
	
	for (int i = 0; i < size; ++i) {
		array[i] = 0;
	}
	
}

//Реализация деструктора класса с дальнейшим освобождением динамической памяти при уничтожении объекта класса
DF09::~DF09()
{
	
	delete[] this->array;
	std::cout << "Сработал деструктор!";
	_getch();
}