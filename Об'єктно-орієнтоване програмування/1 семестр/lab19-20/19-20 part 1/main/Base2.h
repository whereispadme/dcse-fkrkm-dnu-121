#pragma once
#include "Base1.h"

class Base2 : public Base1{

	//�������� ����� ������ Base2
public:
	Base2() : b(0) { cout << "�������� ����������� ������ Base2" << endl; }
	virtual ~Base2() { cout << "�������� ���������� ������ Base2" << endl; _getch(); }

	void metod1_Base2()const { cout << "����� metod1_Base2() ������ Base2" << endl; }
	void metod2_Base2()const { cout << "����� metod2_Base2() ������ Base2" << endl; }

	//�������� ����� ������
private:
	int b;

};