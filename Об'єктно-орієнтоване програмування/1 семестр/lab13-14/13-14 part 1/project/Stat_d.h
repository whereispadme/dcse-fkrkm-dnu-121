#pragma once
class Stat_d
{
public:
	static double A;//объявление статистического поля класса с модификатором доступа public
	int m_x;
	int m_y;

private:
	static int B;//объявление статического поля класса с модификатором доступа private

public:
	/*конструктор и деструктор класса*/

	Stat_d();		 //конструктор без параметров
	Stat_d(int, int);//конструктор с параметрами(два целочисленных значения)
	~Stat_d();		 //деструктор


	/*сеттеры и геттеры*/
	void setB(int);
	int getB();
};