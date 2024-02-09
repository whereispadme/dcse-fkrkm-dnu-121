//���������� ������ freightCar(�������� �����), ��������������� �� railwayCarriage(�����)
#pragma once
#include "railwayCarriage.h"
#include <string>
using namespace std;

class freightCar : public railwayCarriage {

	//�������� ����� ������
public:
	freightCar();
	freightCar(const string &model, const double &weight, const int &capacity);
	freightCar(const freightCar &object);
	~freightCar();

	void mod(int &weight);
	friend class Menu;
	
	//���������� ����� ������
protected:
	int capacity;//����������������
	
};

//����������� ��� ����������
freightCar::freightCar() : railwayCarriage()
{

	this->capacity = 0;

}

//����������� �������������
freightCar::freightCar(const string &model, const double &weight, const int &capacity) : railwayCarriage(model, weight)
{

	this->capacity = capacity;

}

//����������� �����������
freightCar::freightCar(const freightCar &object) : railwayCarriage(object)
{

	this->capacity = object.capacity;

}

//����������
freightCar::~freightCar()
{
}

//����� ��� ���������� �������� ���������������� �������
void freightCar::mod(int &capacity) 
{

	railwayCarriage::mod(capacity);
	this->capacity += capacity;

}