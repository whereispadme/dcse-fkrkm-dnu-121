//файл реализации базового класса railwayCarriage(вагон)
#pragma once
#include <string>
using namespace std;

class railwayCarriage {

	//открытая часть класса
public:
	//конструкторы, деструктор и методы класса
	railwayCarriage();
	railwayCarriage(const string &model, const double &weight);
	railwayCarriage(const railwayCarriage &object);
	~railwayCarriage();

	void mod(int weight);
	friend class Menu;

	//защищённая часть класса
protected:
	string model; //тип(модель)
	double weight;//вес (масса)
	
};

//конструктор без параметров
railwayCarriage::railwayCarriage()
{

	this->model = "";
	this->weight = 0;

}

//конструктор инициализации
railwayCarriage::railwayCarriage(const string &model, const double &weight)
{

	this->model = model;
	this->weight = weight;

}

//конструктор копирования
railwayCarriage::railwayCarriage(const railwayCarriage &object)
{

	this->model = object.model;
	this->weight = object.weight;

}

//деструктор
railwayCarriage::~railwayCarriage()
{
}

//метод для увелечения веса вагона
void railwayCarriage::mod(int weight)
{

	this->weight += weight;

}