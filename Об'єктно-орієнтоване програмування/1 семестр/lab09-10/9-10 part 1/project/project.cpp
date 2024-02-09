//Кущевский Андрей, ПЗ-19-1
#include <iostream>
#include <windows.h>
#include <conio.h>
#include "DF09.h"
using namespace std;

//Прототипы функций
int setSize();									//метод иниц. размера массива->параметр для конструктора при создании объекта
int setIndex1(DF09& object);					//Друж. метод класса (ввод 1 индекса для интервала)
int setIndex2(DF09& object, int i1);			//Друж. метод класса (ввод 2 индекса для интервала)
int calculateSum(DF09& object, int i1, int i2); //Друж. метод класса (подсчет суммы элементов в указанном интервале)
int calculateMult(DF09& object, int i1, int i2);//Друж. метод класса (подсчет произведения элементов в указанном интервале)

int main() {
	setlocale(0, "rus");

	int sum(0), mult(1);	//результат выполнения функция суммы, произведения
	int i1(0), i2(0);		//индексы интервала
	
	int size(0);			//размер массива (параметр для конструктора)
	size = setSize();
	
	DF09 object(size);
	object.setArray();
	object.printArray();
	i1 = setIndex1(object);
	i2 = setIndex2(object, i1);
	sum = calculateSum(object, i1, i2);
	object.printArray();
	std::cout << "Сумма элементов массива в интервале(" << i1 << "," << i2 << "):" << sum;
	_getch();

	i1 = setIndex1(object);
	i2 = setIndex2(object, i1);
	mult = calculateMult(object, i1, i2);
	object.printArray();
	std::cout << "Произведение элементов массива в интервале(" << i1 << "," << i2 << "):" << mult;
	_getch();

	std::cout << std::endl;
	
	return 0;
}

int setSize() {
cout:

	std::cout << "Введите размер массива:";
	int size(0);
	std::cin >> size;
	if (size <= 0) {
		system("cls");
		std::cout << "Ошибка!Введите корректное значение!";
		cin.ignore();
		cin.clear();
		_getch();
		system("cls");
		goto cout;
	}

	return size;
}

int setIndex1(DF09 &object) {
cout:	
	system("cls");
	std::cout << "Введите первый индекс интервала:";
	int i1;
	std::cin >> i1;

	if (i1 > object.size || i1<=0) {
		std::cout << "Ошибка!Индекс выходит за пределы массива!";
		cin.ignore();
		cin.clear();
		_getch();
		goto cout;
	}
	return i1;
}

int setIndex2(DF09 &object, int i1) {
cout:
	system("cls");
	std::cout << "Введите второй индекс интервала:";
	int i2;
	std::cin >> i2;
	if (i2 > object.size || i2<=0) {
		std::cout << "Ошибка!Индекс выходит за пределы массива!";
		cin.ignore();
		cin.clear();
		_getch();
		goto cout;
	}
	else if (i2==i1) {
		std::cout << "Первый индекс интервала равен второму!";
		cin.ignore();
		cin.clear();
		_getch();
		goto cout;
	}

	system("cls");
	return i2;
}

int calculateSum(DF09& object, int i1, int i2) {
	int sum(0);

	for (int i = 0; i < object.size; ++i) {
		if ((i >= i1-1 && i <= i2-1) || i <= i1 - 1 && i >= i2 - 1) {
			sum += object.array[i];
		}
	}

	return sum;
}

int calculateMult(DF09& object, int i1, int i2){
	int mult(1);

	for (int i = 0; i < object.size; ++i) {
		if ((i >= i1 - 1 && i <= i2 - 1) || i <= i1 - 1 && i >= i2 - 1) {
			mult *= object.array[i];
		}
	}
	return mult;
}