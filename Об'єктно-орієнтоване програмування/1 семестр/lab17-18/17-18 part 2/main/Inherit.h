#pragma once
#include "Base.h"
#include <iostream>
using namespace std;
//����������� �������������� �� Base ������ Inherit (������������ � ������������� ������� protected)
//public ���� �������� ������ ���������� protected ��� ������ Inherit
//��� ������, ��� ���������� � ����� � ������� ������ ����� ������ �� ��������������� ������
class Inherit : protected Base
{

	//�������� ����� ������
private:
	int mult;
	float div;
	float procent = 0;

	//�������� ����� ������
public:
	//������������ � ���������� ������
	Inherit();
	Inherit(int a_base, int b_base);
	~Inherit();

	//������
	
	//������� ��� ���� mult(��������� ������������), div(��������� �������) � procent(������� a �� ����� ����� �������� ������)
	void setResultMult();
	void setResultDiv();
	void setResultProcent();
	
	//����������� ������ �������������� ������ ��� ����� � ������� ����� a � b
	int sumChild() { return getA() + getB(); }
	int diffChild() { return getA() - getB(); }

	//������ ��� ��������� ������ �� �������� ����� ������ � ������� �������� ������������� � ������� ������
	//(�.� ��� protected ������������ ����� ���������� � ����� �������� ����� �������� ������)
	int getA() { return baseGet_A(); }
	int getB() { return baseGet_B(); }

	//����������� ����� ������ Inherit ��� ��������� ��������� ��������
	void printStatus();

	//������������� ������� ��� ��������� ��������� ������� ��������������� ������
	friend void view(Inherit& object);

};