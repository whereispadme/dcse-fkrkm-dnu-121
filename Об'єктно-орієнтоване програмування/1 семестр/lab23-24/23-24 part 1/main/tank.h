//���������� ������ tank(��������), ��������������� �� freightCar(�������� �����), ������� ����������� �� ������ railwayCarriage(�����)
#pragma once
#include "freightCar.h"

class tank : public freightCar
{

	//�������� ����� ������
public:
	tank();
	tank(const string &model, const double &weight, const int &capacity, const double &volume);
	tank(const tank &object);
	~tank();

	void setVolume(const double &volume);
	double getVolume()const;
	void mod(int &volume);
	friend class Menu;

	//�������� ����� ������
private:
	double volume;//����� ��������

};

//����������� ��� ����������
tank::tank() : freightCar()
{

	this->volume = 0;
	
}

//����������� �������������
tank::tank(const string &model, const double &weight, const int &capacity, const double &volume) : freightCar(model, weight, capacity)
{

	this->volume = volume;

}

//����������� �����������
tank::tank(const tank &object) : freightCar(object)
{

	this->volume = object.volume;

}

//����������
tank::~tank()
{
}

//������ ��� ���� volume
void tank::setVolume(const double &volume)
{

	this->volume = volume;

}

//������ ��� ���� volume
double tank::getVolume()const
{

	return this->volume;

}

//����� ��� ���������� ������ ��������
void tank::mod(int &volume)
{

	this->volume += volume;

}