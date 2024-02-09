/*
Кущевский  Андрей, ПЗ-19-1
Реализовать перегрузку оператора *
*/
#include "DF09.h"
#include <iostream>
#include <Windows.h>
#include <conio.h>
using namespace std;

void view(DF09& object);
int setSize();


int main() {

	setlocale(0, "rus");
	int size = 0;

	size = { setSize() };
	DF09 object1(size);

	size = { setSize() };
	DF09 object2(size);

	view(object1);
	view(object2);
	
	//работа с перегрузкой оператора * 
	DF09 result = object1 * object2;
	
	std::cout << std::endl << "\nРезультат произведения двух объектов:";
	view(result);


	_getch();
	return 0;
}

void view(DF09 &object) {

	std::cout << std::endl << "\nДанные об объекте по адресу:" << (&object) << std::endl;
	std::cout << "Массив:\n";

	for (int i = 0; i < object.getSize(); ++i) {

		std::cout << object.array[i] << "	";

	}

}

int setSize() {

	int size;
	
	std::cout << "\nВведите размерность массива:";

	while (!(cin >> size && size > -1)) {
		std::cout << "\nОшибка!Пожалуйста, введите корректное значение:";
		cin.clear();
		cin.ignore(22, '\n');
	}


	return size;
}