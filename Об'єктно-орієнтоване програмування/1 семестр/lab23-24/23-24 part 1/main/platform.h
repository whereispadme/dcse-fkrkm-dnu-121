//���������� ������ platform(���������), ��������������� �� tank(��������), ������� ����������� �� ������ freightCat(�������� �����), ������� ����������� �� railwayCarriage(�����)

#pragma once
#include "tank.h"

class platform : public tank {

	//�������� ����� ������
public:
	int boardsAmount;//���������� ������

	platform();
	platform(const string&, const double&, const int&, const int&);
	platform(platform &object);

	void mod(int);
	friend class Menu;
	
};

//����������� ��� ����������
platform::platform() : tank()
{

	this->boardsAmount = 0;

}

//����������� �������������
