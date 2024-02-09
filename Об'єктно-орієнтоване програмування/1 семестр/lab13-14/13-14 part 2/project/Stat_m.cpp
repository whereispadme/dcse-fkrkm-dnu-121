//Реализация методов класса Stat_m
#include "Stat_m.h"
#include <iostream>
#include <Windows.h>
#include <conio.h>
#include <string>
using namespace std;


Stat_m::Stat_m(const char* s)
{
	strncpy_s(this->m_s, s, 40);//копировать строку (параметр s) в m_s
}

Stat_m::Stat_m()
{
	m_s[0] = '\0';//присвоить первому символу(элементу) термирующий ноль, *(пустая строка)*
	incObj();
}

Stat_m::~Stat_m()
{
	--objAmount;//постфиксный декремент *objAmount-1*
}

void Stat_m::setAmount(const int v)
{
	objAmount = v;//иниициализировать objAmount параметров v
}

int Stat_m::getAmount()
{
	return objAmount;//вернуть значение objAmount(геттер)
}

int Stat_m::incObj()
{
	return ++objAmount;//префис. инкремент *objAmount+1*
}

int Stat_m::lenS()
{
	return strlen(m_s);//вернуть длину строки m_s 
}
