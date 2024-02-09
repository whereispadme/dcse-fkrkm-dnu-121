//���������� ������� ������ Stat_m
#include "Stat_m.h"
#include <iostream>
#include <Windows.h>
#include <conio.h>
#include <string>
using namespace std;


Stat_m::Stat_m(const char* s)
{
	strncpy_s(this->m_s, s, 40);//���������� ������ (�������� s) � m_s
}

Stat_m::Stat_m()
{
	m_s[0] = '\0';//��������� ������� �������(��������) ����������� ����, *(������ ������)*
	incObj();
}

Stat_m::~Stat_m()
{
	--objAmount;//����������� ��������� *objAmount-1*
}

void Stat_m::setAmount(const int v)
{
	objAmount = v;//����������������� objAmount ���������� v
}

int Stat_m::getAmount()
{
	return objAmount;//������� �������� objAmount(������)
}

int Stat_m::incObj()
{
	return ++objAmount;//������. ��������� *objAmount+1*
}

int Stat_m::lenS()
{
	return strlen(m_s);//������� ����� ������ m_s 
}
