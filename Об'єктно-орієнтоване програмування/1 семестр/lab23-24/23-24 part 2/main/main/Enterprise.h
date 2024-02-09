//���������� � ���������� ������ Enterprise (�����������)
#pragma once
#include "Organization.h"

class Enterprise : virtual public Organization
{

	//�������� ����� ������
public:
	Enterprise();
	Enterprise(const string&, const double, const double);
	~Enterprise();
	void setAlloc(const double); 
	double getAlloc() const;
	double calcPayment(const int = 0) const;

//���������� ����� ������
protected:
	double alloc;// �������� ������������������ �����
	
};

Enterprise::Enterprise() : Organization()
{

	this->alloc = 0;

}

Enterprise::Enterprise(const string &name, const double sizeFund, const double alloc) : Organization(name, sizeFund)
{

	this->alloc = alloc;
	
}

Enterprise::~Enterprise()
{
}

void Enterprise::setAlloc(const double alloc)
{

	this->alloc = alloc;

}

double Enterprise::calcPayment(const int value) const
{

	return (this->alloc * value / 1200.0);

}

double Enterprise::getAlloc() const
{

	return this->alloc;

}