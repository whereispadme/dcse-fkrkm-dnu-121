/*
Вариант 9
Спроектувати клас за варіантом, наведеним в таблиці 3.1 
(навести завдання в звіті) його конструктор за замовчуванням і деструктор, методи встановлення та отримання значень полів, 
використати розроблені методи для роботи з об’єктами класу.

Конструктор повинен ініціалізувати поля класу.
Клас повинен включати дані у відповідності з варіантом та функції встановлення та отримання значень даних.

*/
#include "TeamMember.h"
#include <iostream>
#include <Windows.h>
#include <conio.h>
#include <string>
using namespace std;

void view1(TeamMember object);//прототип функции для просмотра данных первого объекта
void view2(TeamMember &object);//прототип функции для просмотра данных второго объекта

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	string surname;
	int matchAmount;
	int number;

	std::cout << "Инициализация полей первого объекта(по имени):"<<std::endl;
	std::cout << std::endl << "Введите фамилию игрока:";
	getline(cin, surname);
	
	std::cout << "Введите количество сыгранных игроком матчей:";
	std::cin >> matchAmount;
		
	std::cout << "Введите номер игрока на футболке:";
	std::cin >> number;
	

	//объявление первого объекта класса по имени, передача параметров в конструктор с параметрами(условный сеттер) 
	TeamMember firstObject(surname, matchAmount, number);

	view1(firstObject);
	
	cin.clear();
	cin.ignore();
	system("cls");

	std::cout << "Инициализация полей второго объекта(через указатель):" << std::endl;
	std::cout << std::endl << "Введите фамилию игрока:";
	getline(cin, surname);

	std::cout << "Введите количество сыгранных игроком матчей:";
	std::cin >> matchAmount;

	std::cout << "Введите номер игрока на футболке:";
	std::cin >> number;

	//объявление второго объекта класса через указатель, передача параметров в конструктор с параметрами(условный сеттер) 
	TeamMember Object2(surname, matchAmount, number);
	TeamMember *secondObject = &Object2;
	view2(*secondObject);
	
	cin.clear();
	cin.ignore();
	return 0;
}

void view1(TeamMember object) {
	
	system("cls");
	std::cout << "Данные о игроке:" << std::endl;
	std::cout << std::endl << "Фамилия:" << object.getSurname();
	std::cout << std::endl << "Количество сыгранных матчей:" << object.getMatchAmount();
	std::cout << std::endl << "Номер игрока на футболке:" << object.getNumber();
	std::cout << std::endl;

}

void view2(TeamMember &object) {

	system("cls");
	std::cout << "Данные о игроке:" << std::endl;
	std::cout << std::endl << "Фамилия:" << object.getSurname();
	std::cout << std::endl << "Количество сыгранных матчей:" << object.getMatchAmount();
	std::cout << std::endl << "Номер игрока на футболке:" << object.getNumber();
	std::cout << std::endl;

}