#include "CBook.h"
#include <iostream>
#include <Windows.h>
#include <conio.h>
#include <string>
using namespace std;

/*
�������� �������(����������) � �������(������� ��������) � ������� �� �����:

-���������� ������
-���������� ��������
-���������� ���
-������� ������
-������� ��������
-������� ���
*/

//�������
void CBook::setAuthor(string str) {

	this->m_Author = str;

}

void CBook::setTitle(string str) {

	this->m_Title = str;

}

void CBook::setYear(int year) {

	this->m_Year = year;

}

//�������
std::string CBook::getAuthor() {

	return m_Author;

}

std::string CBook::getTitle() {

	return m_Title;

}

int CBook::getYear() {

	return m_Year;

}


//������ � ������������� � ������������ ������
CBook::CBook() {

	std::cout << "�������� ����������� ��� ����������!" << std::endl;

}

CBook::~CBook() {

	std::cout << "�������� ���������� ��� ����������!" << std::endl;

}