#pragma once
class MyClass
{
	//������������� ���������� ����� ������ MyClass, ��� ���������� ������ � ����
private:
	double x;
	double y;
	double z;
	double result;

	//�������� ������ ������+������������� ������
public:
	
	//����������� � ���������� ������
	MyClass();//����������� ������, ��� �������� ������� ������������� ����� ������ �������� ����������
	~MyClass();
	
	//������ ������ MyClass
	//������� ��� �������� ����� ������("��������������� ����")
	void setX(double x);
	void setY(double y);
	void setZ(double z);
	
	void setResult(double result);
	
	//������� ��� �������� ����� ������("�������, �������� �������� ����")
	double getX();
	double getY();
	double getZ();

	double getResult();

	/* ������������� ������ ������ MyClass (���������� ��� ������) */
	friend void Run(MyClass& object);
	friend void Print(MyClass& object);

	//������������� ����� ��� ��������� �������� ���������������� ������
	friend void setValue(MyClass& object);

	//������������� ����� ��� ��������� �������� �� ��������� ��� x, y, z (�� ��������)
	friend void setDefault(MyClass &object);
};