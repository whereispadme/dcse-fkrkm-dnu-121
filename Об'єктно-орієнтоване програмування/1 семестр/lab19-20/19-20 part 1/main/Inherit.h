#pragma once
#include "Base2.h"

class Inherit : public Base2 {

	//�������� ����� ������ Inherit
public:
	Inherit() : c(0) { cout << "�������� ����������� ������ Inherit" << endl;  }
	~Inherit() { cout << "�������� ���������� ������ Inherit" << endl; _getch(); }

	//��������������� ������ metod1_Base2() ������ Base2 � �������������� �� Base2 ������ Inherit
	void metod1_Base2()const { metod1_Base1(); }

	//�������� ����� ������
private:
	int c;

};