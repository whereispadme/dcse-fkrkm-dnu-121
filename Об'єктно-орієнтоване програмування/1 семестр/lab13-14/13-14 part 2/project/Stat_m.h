#pragma once
class Stat_m
{
public:
	/*Конструкторы и деструктор класса Stat_m*/

	Stat_m(const char *s);//конструктор класса Stat_m с параметром(строка C-style)
	Stat_m();	  //конструктор без параметров
	~Stat_m();	  //деструктор без параметров

	static void setAmount(const int);
	static int getAmount();

private:
	static int incObj();//инкремент объектов
	static int objAmount;//количество объектов

	int lenS();//длина строки
	char m_s[40];//40 символов под строку

};