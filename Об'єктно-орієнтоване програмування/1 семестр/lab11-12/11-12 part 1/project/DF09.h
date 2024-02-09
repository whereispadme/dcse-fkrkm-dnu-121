#pragma once

class DF09 {
	//���������� ����� ������ � ������������� ������� �� ���������(private)
	int* array;//������
	int size;  //������ �������


public:	
		
	//���������� ������������� � ����������� ������
	DF09();
	DF09(int size);
	DF09(const DF09& object);
	~DF09();

	//������ ��� ������� �������
	int getSize(void) const;
	
	//���������� ��������� ������������
	DF09& operator =(const DF09& object);

	//���������� ��������� + (������+������)
	DF09 operator +(const DF09& object);
	
	//������ + �����
	DF09 operator +(int value);

	//���������� ��������� ��������� (������ - ������)
	DF09 operator -(const DF09& object);


	//���������� ��������� [] ����������
	int& operator[] (const unsigned int index) const;


	friend void view(DF09& object);		//������������� ������� ���������(���������� ��� ������)
};