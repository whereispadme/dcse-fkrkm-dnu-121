#pragma once
#include <iostream>
#include <conio.h>
using namespace std;

class Base1 {

	//�������� ����� ������ Base1
public:
	Base1() : a(0) { cout << "�������� ����������� ������ Base1" << endl; }
	virtual ~Base1() { cout << "�������� ���������� ������ Base1" << endl; _getch(); }

	void metod1_Base1()const { cout << "����� metod1_Base1 ������ Base1" << endl; }
	   
	//�������� ����� ������
private:
	int a;

};