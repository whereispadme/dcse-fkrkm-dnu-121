#include "MyClass.h"
#include <iostream>
#include <Windows.h>
#include <conio.h>
using namespace std;

//прототипы методов
void Run(MyClass& object);
void Print(MyClass& object);
void setDefault(MyClass &object);

int main() {
	setlocale(0, "rus");

	//Работа с объектом(по имени)
	MyClass object;
	setValue(object);
	Run(object);
	Print(object);

	//Работа с объектом(указатель)
	MyClass object2;
	MyClass *ptrObj = &object2;
	setDefault(object2);
	Run(object2);

	Print(object2);
	
	_getch();
	return 0;
}

void setValue(MyClass &object) {
	system("cls");
	std::cout << "Ввод данныx:" << std::endl;
	std::cout << "Введите X:";
	double x;
	std::cin >> x;
	object.setX(x);

	std::cout << "Введите Y:";
	double y;
	std::cin >> y;
	object.setY(y);
	
	std::cout << "Введите Z:";
	double z;
	std::cin >> z;
	object.setZ(z);
	std::cout << std::endl;
}

void Run(MyClass& object) {

	double x = object.getX();
	double y = object.getY();
	double z = object.getZ();

	//Проверка на наличие нулевого значения
	
	double result = (fabs(pow(x, y / x) - pow(y / x, 1.0 / 3.0))) + (y - x) * (cos(y) - (z / (y - x))) / (1 + pow(y - x, 2.0));
	if (std::isinf(result) || std::isnan(result) || x==0 || y==0 || z==0) {
		std::cout << "Деление на ноль не возможно!\n";	
	}
	else {
		object.setResult(result);
	}
}

void Print(MyClass& object) {

	std::cout << "Данные объекта класса:";
	std::cout << std::endl << "X:" << object.getX();
	std::cout << std::endl << "Y:" << object.getY();
	std::cout << std::endl << "Z:" << object.getZ();
	std::cout << std::endl << "Результат:" << object.getResult();
	std::cout << std::endl;

	_getch();
	system("cls");
}

void setDefault(MyClass& object) {
	system("cls");
	object.setX(1.825e2);
	object.setY(18.225);
	object.setZ(-3.298);
}