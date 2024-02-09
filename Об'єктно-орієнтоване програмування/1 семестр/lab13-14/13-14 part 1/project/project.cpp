//Кущевский Андрей, ПЗ-19-1
#include "Stat_d.h"
#include <iostream>
#include <Windows.h>
#include <conio.h>
using namespace std;

/*Инициализация статических полей вне класса*/
double Stat_d::A = 2.75;
int Stat_d::B = 777;

int main() {

	setlocale(0, "rus");

	//Создаём два объекта, передача двух параметров в конструктор
	Stat_d objectA(10, 10), objectB(-10, 10);

	//вывод значений m_x, m_y двух объектов, установленных в конструкторе с параметрами
	std::cout << "a\t" << objectA.m_x << '\t' << objectA.m_y << std::endl;
	std::cout << "b\t" << objectB.m_x << '\t' << objectB.m_y << std::endl;

	std::cout << "Статик A для объектов а и b:" << Stat_d::A << std::endl;
	std::cout << "Стат. поле B для объекта a (a.getB):" << objectA.getB() << std::endl;
	std::cout << "Стат. поле B для объекта b (b.getB):" << objectB.getB() << std::endl << std::endl;

	Stat_d::A = 1.2e308;
	std::cout << "Статическое поле A после его изменения в main():" << Stat_d::A << std::endl << std::endl;
	
	objectA.setB(100);
	std::cout << "Статическое поле B для объекта objectB после его изменения в objectA.setB():" << objectB.getB() << std::endl;

	objectB.setB(-100);
	std::cout << "Статическое поле B для объекта objectA после его изменения в objectB.setB():" << objectA.getB() << std::endl;


	_getch();
	return 0;
}