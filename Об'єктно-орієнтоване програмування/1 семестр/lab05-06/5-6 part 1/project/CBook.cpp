#include "CBook.h"
#include <iostream>
#include <Windows.h>
#include <conio.h>
#include <string>
using namespace std;

/*
Написать сеттеры(установить) и геттеры(вернуть значение) к каждому из полей:

-Установить автора
-Установить название
-Установить год
-Вернуть автора
-Вернуть название
-Вернуть год
*/

//сеттеры
void CBook::setAuthor(string str) {

	this->m_Author = str;

}

void CBook::setTitle(string str) {

	this->m_Title = str;

}

void CBook::setYear(int year) {

	this->m_Year = year;

}

//геттеры
std::string CBook::getAuthor() {

	return m_Author;

}

std::string CBook::getTitle() {

	return m_Title;

}

int CBook::getYear() {

	return m_Year;

}


//Работа с конструктором и деструктором класса
CBook::CBook() {

	std::cout << "Сработал конструктор без параметров!" << std::endl;

}

CBook::~CBook() {

	std::cout << "Сработал деструктор без параметров!" << std::endl;

}