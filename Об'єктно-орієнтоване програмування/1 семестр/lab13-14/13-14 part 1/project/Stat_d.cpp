//���������� ������ Stat_d
#include "Stat_d.h"
#include <iostream>
#include <Windows.h>
#include <conio.h>
using namespace std;

//����������� ��� ����������, ������������� ����� �������� ����������
Stat_d::Stat_d() {
	this->m_x = 0;
	this->m_y = 0;
}

//���������� � ����������� ��� ������������� ����� ���������� ����������
Stat_d::Stat_d(int x, int y)
{
	this->m_x = x;
	this->m_y = y;
}

//���������� ��� ����������
Stat_d::~Stat_d()
{
	std::cout << "�������� ����������!";
}

//������ ��� ���� B
void Stat_d::setB(int B)
{
	this->B = B;
}

//������ ��� ���� B
int Stat_d::getB()
{
	return this->B;
}