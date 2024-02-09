#include <iostream>
#include <Windows.h>
#include <conio.h>
#include <string>
#include "CBook.h"
using namespace std;


void view(string s, CBook object);
void view2(string s, CBook *object);//вывод для динамического объекта

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	std::cout << "Работает ConsoleApplication.cpp" << std::endl;

	CBook book;//создали объект класса CBook, так же можно назвать это экземпляром объекта класса CBook

	std::string author;

	std::cout << "Введите автора:";
	getline(cin, author);

	book.setAuthor(author);
	std::cout << std::endl << "Проверка сеттера для поля m_Author получая доступ через геттер:" << book.getAuthor();

	book.setTitle("Object-Oriented Programming in C++");
	std::cout << std::endl << "Проверка сеттера для поля m_Title получая доступ через геттер:" << book.getTitle();

	book.setYear(2004);
	std::cout << std::endl << "Проверка сеттера для поля m_Year получая доступ через геттер:" << book.getYear();
	_getch();

	system("cls");
	std::cout << "Метод view:" << std::endl;
	view("book", book);
	_getch();

	//Создание второго динамического объекта класса CBook
	system("cls");
	std::cout << "Работа с динамическим объектом класса CBook" << std::endl;
	CBook *dynamicObj = new CBook;

	std::cout << "Введите автора:";
	getline(cin, author);

	dynamicObj->setAuthor(author);
	std::cout << std::endl << "Проверка сеттера для поля m_Author получая доступ через геттер:" << dynamicObj->getAuthor();


	dynamicObj->setTitle("Сказки Андерсена");
	std::cout << std::endl << "Проверка сеттера для поля m_Title получая доступ через геттер:" << dynamicObj->getTitle();

	dynamicObj->setYear(1997);
	std::cout << std::endl << "Проверка сеттера для поля m_Year получая доступ через геттер:" << dynamicObj->getYear();
	_getch();


	system("cls");
	std::cout << "Метод view:" << std::endl;
	view2("dynamicObj", dynamicObj);

	delete dynamicObj;

	_getch();
	return 0;
}

void view(string s, CBook object) {

	std::cout << "Состояние объекта " << s << ":" << std::endl;
	std::cout << "Автор:" << object.getAuthor() << std::endl;
	std::cout << "Название:" << object.getTitle() << std::endl;
	std::cout << "Год издания:" << object.getYear() << std::endl;

}

void view2(string s, CBook *object) {

	std::cout << "Состояние объекта " << s << ":" << std::endl;
	std::cout << "Автор:" << object->getAuthor() << std::endl;
	std::cout << "Название:" << object->getTitle() << std::endl;
	std::cout << "Год издания:" << object->getYear() << std::endl;

}