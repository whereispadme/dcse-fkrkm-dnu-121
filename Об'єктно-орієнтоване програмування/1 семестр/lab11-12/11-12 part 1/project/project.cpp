//Кущевский Андрей, ПЗ-19-1
#include "DF09.h"
#include <iostream>
#include <conio.h>
#include <Windows.h>
using namespace std;

//прототип дружественной функции класса DF09 для вывода массива для указанного объекта в аргументах функций
void view(DF09 &object);

int main() {
	setlocale(0, "rus");

	//создание двух объектов класса, сработает конструктор DF09(int value);-> выделение дин. памяти под массив
	DF09 object1(5), object2(5);

	for (int i = 0; i < object1.getSize(); ++i) {
		object1[i] = (i + 1) * 2;//присваиваем итому элемент массива (текущее значение итератора + 1) * 2
		object2[i] = i;//присвиваем текущее значение итератора
	}
	std::cout << "Данные по object1:";
	view(object1);

	std::cout << "Данные по object2:";
	view(object2);

	DF09 result(0);
	result = object1 + object2;
	std::cout << "\nРезультат сложения двух объектов:";
	view(result);

	std::cout << "\n---------------------------------------------------\n";

	//работа с перегрузкой оператора + (объект + число)
	int value(5);
	DF09 object3(5);

	std::cout << "\nДанные по object3 до сложения с объекта с числом:";
	view(object3);

	result = object3 + value;

	std::cout << "Результат после сложения object3 с value:";
	view(result);

	std::cout << "\n---------------------------------------------------\n";

	//работа с перегрузкой оператора - (объект - объект)
	result = object3 - object2;
	std::cout << "\nРезультат вычетания object3 - object2:";
	view(result);

	result = object2 - object3;
	std::cout << "\nРезультат вычетания object2 - object3:";
	view(result);

	std::cout << "\n---------------------------------------------------\n";

	//вывод данных по трём объектам
	std::cout << std::endl;
	
	std::cout << "Object1:";
	view(object1);
	
	std::cout << "Object2:";
	view(object2);
	
	std::cout << "Object3:";
	view(object3);

	std::cout << "\n---------------------------------------------------";

	_getch();
	return 0;
}

//реализация фукнции просмотра данных по объекту
void view(DF09& object) {
	for (int i = 0; i < object.size; ++i) {
		std::cout << object.array[i] << "	  ";
	}
	std::cout << std::endl;
}