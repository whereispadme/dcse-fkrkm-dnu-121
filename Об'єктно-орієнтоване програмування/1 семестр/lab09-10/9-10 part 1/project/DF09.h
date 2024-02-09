#pragma once
class DF09
{
	//���� ������ DF09 � ������������� ������� private
private:
	int* array;
	int size;


	//������ ������ � ������������� ������� public
public:
	//����������� � ����������� � ��������� ������
	DF09(int size);
	~DF09();

	//������ ������ DF09
	void printArray();
	void setArray();

	//������������� ������ ������ DF09
	friend int setIndex1(DF09& object);
	friend int setIndex2(DF09& object, int i1);
	friend int calculateSum(DF09 &object, int i1, int i2);
	friend int calculateMult(DF09 &object, int i1, int i2);
};