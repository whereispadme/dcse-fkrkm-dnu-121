#include "TeamMember.h"
#include <iostream>
#include <Windows.h>
#include <conio.h>
#include <string>
using namespace std;


//сеттеры и геттеры
void TeamMember::setSurname(string str) { m_surname = str; }
void TeamMember::setMatchAmount(int value) { m_matchAmount = value; }
void TeamMember::setNumber(int value){ m_number = value; }

string TeamMember::getSurname () { return m_surname; }
int TeamMember::getMatchAmount() { return m_matchAmount; }
int TeamMember::getNumber() { return m_number; }

//реализация конструктора с параметрами и деструктора

TeamMember::TeamMember(string str, int valueMatch, int valueNumber) {
	
	std::cout << "Сработал конструктор с параметрами для инициализации полей!";
	m_surname = str;
	m_matchAmount = valueMatch;
	m_number = valueNumber;
	_getch();
}

TeamMember::~TeamMember() {

	std::cout << "Сработал деструктор без параметров!";
	_getch();
}

