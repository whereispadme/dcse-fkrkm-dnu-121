//���� ���������� �������� ������ railwayCarriage(�����)
#pragma once
#include <string>
using namespace std;

class railwayCarriage {

	//�������� ����� ������
public:
	//������������, ���������� � ������ ������
	railwayCarriage();
	railwayCarriage(const string &model, const double &weight);
	railwayCarriage(const railwayCarriage &object);
	~railwayCarriage();

	void mod(int weight);
	friend class Menu;

	//���������� ����� ������
protected:
	string model; //���(������)
	double weight;//��� (�����)
	
};

//����������� ��� ����������
railwayCarriage::railwayCarriage()
{

	this->model = "";
	this->weight = 0;

}

//����������� �������������
railwayCarriage::railwayCarriage(const string &model, const double &weight)
{

	this->model = model;
	this->weight = weight;

}

//����������� �����������
railwayCarriage::railwayCarriage(const railwayCarriage &object)
{

	this->model = object.model;
	this->weight = object.weight;

}

//����������
railwayCarriage::~railwayCarriage()
{
}

//����� ��� ���������� ���� ������
void railwayCarriage::mod(int weight)
{

	this->weight += weight;

}