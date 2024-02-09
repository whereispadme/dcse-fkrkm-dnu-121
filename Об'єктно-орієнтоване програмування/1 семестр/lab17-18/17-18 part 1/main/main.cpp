//Кущевский Андрей, ПЗ-19-1
#include "Base.h"
#include "Inherit.h"

#include <iostream>
#include <Windows.h>
#include <conio.h>

using namespace std;

//реализация дружественной функции для просмотра состояниия объекта класса Inherit
void view(const Inherit& object) {
	
	cout << endl;
	cout << "Объект класса:" << typeid(object).name() << endl;
	cout << "Object a:" << object.a << endl;
	cout << "Object b:" << object.b << endl;
	cout << "Object temp:" << object.temp << endl;
	cout << endl;

}


//главная функция программы
int main() {

	system("color 0A");
	setlocale(0, "rus");

	Inherit object(5, 6, 20);

	cout << endl << "Результат работы методов базового класса для объекта унаследованного класса:" << endl;

	cout << "Сумма:" << object.sum_B() << endl;
	cout << "Разница:" << object.diff_B() << endl;

	view(object);

	object.setDiv();
	object.setMult();

	cout << endl << endl;
	system("pause");
	return 0;
}