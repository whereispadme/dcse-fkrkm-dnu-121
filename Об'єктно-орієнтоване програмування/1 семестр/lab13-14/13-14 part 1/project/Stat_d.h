#pragma once
class Stat_d
{
public:
	static double A;//���������� ��������������� ���� ������ � ������������� ������� public
	int m_x;
	int m_y;

private:
	static int B;//���������� ������������ ���� ������ � ������������� ������� private

public:
	/*����������� � ���������� ������*/

	Stat_d();		 //����������� ��� ����������
	Stat_d(int, int);//����������� � �����������(��� ������������� ��������)
	~Stat_d();		 //����������


	/*������� � �������*/
	void setB(int);
	int getB();
};