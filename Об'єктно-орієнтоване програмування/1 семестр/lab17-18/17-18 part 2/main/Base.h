#pragma once

//����������� �������� ������
class Base
{

	//�������� ����� ������
protected:
	int a;
	int b;


	//�������� ����� ������
public:
	//������������ � ���������� ������
	Base();
	Base(int a, int b);
	~Base();

	//������� ��� ����� a � b ��� ��������������� ��� protected ������������ ������
	int baseGet_A() { return a; }
	int baseGet_B() { return b; }

	//������� ��� ��������� ����� �������� ������ ��� ��������������
	void viewInherit();
	
};