#pragma once
class Stat_m
{
public:
	/*������������ � ���������� ������ Stat_m*/

	Stat_m(const char *s);//����������� ������ Stat_m � ����������(������ C-style)
	Stat_m();	  //����������� ��� ����������
	~Stat_m();	  //���������� ��� ����������

	static void setAmount(const int);
	static int getAmount();

private:
	static int incObj();//��������� ��������
	static int objAmount;//���������� ��������

	int lenS();//����� ������
	char m_s[40];//40 �������� ��� ������

};