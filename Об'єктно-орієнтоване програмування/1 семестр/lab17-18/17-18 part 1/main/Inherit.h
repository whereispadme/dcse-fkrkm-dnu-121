#pragma once
#include "Base.h"

//����������� �������������� �� Base ������ Inherit (������������ � ������������� ������� public)
class Inherit : public Base
{

	//�������� ����� ������
private:
	int mult;
	float div;
	int temp;

	//�������� ����� ������
public:
	//������������ � ���������� ������
	Inherit();
	Inherit(int a_base, int b_base, int temp);
	~Inherit();

	//������
	friend void view(const Inherit& object);
	
	//������� ��� ���� Mult(��������� ������������) � Div(��������� �������)
	void setMult();
	void setDiv();
};