#include "TeamMember.h"
#include <iostream>
#include <Windows.h>
#include <conio.h>
#include <string>
using namespace std;


//������� � �������
void TeamMember::setSurname(string str) { m_surname = str; }
void TeamMember::setMatchAmount(int value) { m_matchAmount = value; }
void TeamMember::setNumber(int value){ m_number = value; }

string TeamMember::getSurname () { return m_surname; }
int TeamMember::getMatchAmount() { return m_matchAmount; }
int TeamMember::getNumber() { return m_number; }

//���������� ������������ � ����������� � �����������

TeamMember::TeamMember(string str, int valueMatch, int valueNumber) {
	
	std::cout << "�������� ����������� � ����������� ��� ������������� �����!";
	m_surname = str;
	m_matchAmount = valueMatch;
	m_number = valueNumber;
	_getch();
}

TeamMember::~TeamMember() {

	std::cout << "�������� ���������� ��� ����������!";
	_getch();
}

