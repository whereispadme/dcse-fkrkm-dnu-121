#pragma once

//����������� �������� ������
class Base
{

	//�������� ����� ������
public:
	int a;
	int b;
		
	//������������ � ���������� ������
	Base();
	Base(int a, int b);
	~Base();

	//������ ������
	int sum_B();	//����� a + b
	int diff_B();	//������� a - b

};