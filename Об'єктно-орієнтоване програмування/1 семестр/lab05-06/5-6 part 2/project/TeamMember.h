#pragma once
#include <string>
using namespace std;
class TeamMember
{
//�������� ���� ������, ������ �������� ����� �������, �������

private:
	string m_surname; //�������
	int m_matchAmount;//���������� ��������� ������
	int m_number;     //����� �� ��������

//"���������" ������ ������ TeamMember (����� ������ � ����� � ������������� ������� private)
public:
	//�������
	void setSurname(string str);
	void setMatchAmount(int value);
	void setNumber(int value);
	
	//�������
	string getSurname();
	int getMatchAmount();
	int getNumber();



//����������� � ����������
	
	TeamMember(string str, int valueMatch, int valueNumber);//��������� ������������ � ������������ ����������� ��� ������������� ����� ������
	~TeamMember();//���������� �� ���������
	
};