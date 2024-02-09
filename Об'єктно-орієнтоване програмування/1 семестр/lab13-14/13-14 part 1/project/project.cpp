//��������� ������, ��-19-1
#include "Stat_d.h"
#include <iostream>
#include <Windows.h>
#include <conio.h>
using namespace std;

/*������������� ����������� ����� ��� ������*/
double Stat_d::A = 2.75;
int Stat_d::B = 777;

int main() {

	setlocale(0, "rus");

	//������ ��� �������, �������� ���� ���������� � �����������
	Stat_d objectA(10, 10), objectB(-10, 10);

	//����� �������� m_x, m_y ���� ��������, ������������� � ������������ � �����������
	std::cout << "a\t" << objectA.m_x << '\t' << objectA.m_y << std::endl;
	std::cout << "b\t" << objectB.m_x << '\t' << objectB.m_y << std::endl;

	std::cout << "������ A ��� �������� � � b:" << Stat_d::A << std::endl;
	std::cout << "����. ���� B ��� ������� a (a.getB):" << objectA.getB() << std::endl;
	std::cout << "����. ���� B ��� ������� b (b.getB):" << objectB.getB() << std::endl << std::endl;

	Stat_d::A = 1.2e308;
	std::cout << "����������� ���� A ����� ��� ��������� � main():" << Stat_d::A << std::endl << std::endl;
	
	objectA.setB(100);
	std::cout << "����������� ���� B ��� ������� objectB ����� ��� ��������� � objectA.setB():" << objectB.getB() << std::endl;

	objectB.setB(-100);
	std::cout << "����������� ���� B ��� ������� objectA ����� ��� ��������� � objectB.setB():" << objectA.getB() << std::endl;


	_getch();
	return 0;
}