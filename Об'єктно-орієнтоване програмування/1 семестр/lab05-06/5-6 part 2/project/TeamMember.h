#pragma once
#include <string>
using namespace std;
class TeamMember
{
//закрытые поля класса, доступ возможен через сеттеры, геттеры

private:
	string m_surname; //Фамилия
	int m_matchAmount;//количество сыгранных матчей
	int m_number;     //номер на футболке

//"публичные" методы класса TeamMember (имеют доступ к полям с модификатором доступа private)
public:
	//сеттеры
	void setSurname(string str);
	void setMatchAmount(int value);
	void setNumber(int value);
	
	//геттеры
	string getSurname();
	int getMatchAmount();
	int getNumber();



//Конструктор и деструктор
	
	TeamMember(string str, int valueMatch, int valueNumber);//экземпляр конструктора с принимаемыми параметрами для инициализации полей класса
	~TeamMember();//деструктор по умолчанию
	
};