#include <iostream>
#include <conio.h>
#include <Windows.h>
#include <string>

using namespace std;

void line()
{

	cout << endl << "------------------------------------------------------------------------------------------------------------------------" << endl;

}

void startProcedure()
{

	SetConsoleTitle(L"Кущевский Андрей, ПЗ-19-1 | Экзамен");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);

}

void endProcedure()
{

	cin.ignore(cin.rdbuf()->in_avail());
	cin.clear();
	cout << endl;
	system("pause");

}

class Transport
{

protected:
	std::string type;//тип транспорта

public:
	Transport()
	{
		this->type = "";
	}

	Transport(std::string type)
	{
		this->type = type;
	}

	~Transport()
	{
	}

};

class Marsh : public Transport
{

protected:
	unsigned int numberOfMarsh;//номер маршрута
	std::string nameOfEndingStation;//имя конечной остановки

public:
	Marsh() : Transport()
	{
		this->numberOfMarsh = 0;
		this->nameOfEndingStation = "";
	}

	Marsh(std::string type, unsigned int numberOfMarsh, std::string nameOfEndingStation) : Transport(type)
	{
		this->numberOfMarsh = numberOfMarsh;
		this->nameOfEndingStation = nameOfEndingStation;
	}

	~Marsh()
	{
	}

	void setData(std::string type, unsigned int numberOfMarsh, std::string nameOfEndingStation)
	{
		this->type = type;
		this->numberOfMarsh = numberOfMarsh;
		this->nameOfEndingStation = nameOfEndingStation;
	}

	void outputData()
	{

		cout << "Тип транспорта: " << this->type << endl;
		cout << "Номер маршрута: " << this->numberOfMarsh << endl;
		cout << "Назва конечной остановки: " << this->nameOfEndingStation << endl;

		line();

	}


};

int main()
{

	startProcedure();

	cout << endl << "Создание объекта класса Marsh, использование конструктора с параметрами:";
	line();

	Marsh *marsh = new Marsh("Автобус", 97, "Конечная станция");
	marsh->outputData();

	cout << "Результат вызова метода setData(), для изменения свойств объекта класса Marsh:";
	line();

	marsh->setData("Трамвай", 11, "Центральная");
	marsh->outputData();

	delete marsh;

	endProcedure();
	return 0;

}

template<typename T>
class Matrix
{

private:
	T **matrix;
	int rows;
	int cols;

public:
	//методы класса .. реализация класса Matrix ..
	Matrix()
	{

	}

	~Matrix()
	{

	}

};

int main()
{

	Matrix<int> iMatrix;//Матрица целых чисел
	
	Matrix<float> fMatrix;//Матрица вещественных чисел(float)

	Matrix<double> dMatrix;//Матрица вещественных чисел(double)
	
	return 0;

}