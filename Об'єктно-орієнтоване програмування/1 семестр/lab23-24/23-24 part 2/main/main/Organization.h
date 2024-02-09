//���������� � ���������� ������ Organization(�����������)
#pragma once
#include <iostream>
#include <string>
using namespace std;

class Organization {

	//�������� ����� ������
public:
	string name;//�������� ������������
	Organization();
	Organization(const string&, const double);
	~Organization();
	
	void setFund(double);
	double getFund()const;
	double calculatePayment(const int);
	
	//���������� ����� ������
protected:
	double sizeFund;//������ �����

};

Organization::Organization()
{
	
	this->name = "";
	this->sizeFund = 0;

}

Organization::Organization(const string &name, const double sizeFund)
{

	this->name = name;
	this->sizeFund = sizeFund;

}

Organization::~Organization()
{
}

void Organization::setFund(double sizeFund)
{

	this->sizeFund = sizeFund;

}

double Organization::getFund() const
{
	
	return this->sizeFund;

}

double Organization::calculatePayment(const int value)
{
	
	return (this->sizeFund * value / 1200.0);

}