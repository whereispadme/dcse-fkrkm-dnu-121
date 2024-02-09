#include "Header.h"

// main.cpp - главная функция
void view(double a, double b)
{

	cout << a << ", " << b;

}

void view(double a, double b, double c)
{

	view(a, b);
	cout << ", " << c;

}

void view(double a, double b, double c, double d, double h)
{

	view(a, b, c);
	cout << ", " << d << ", " << h;

}

void startProcedure()
{

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	SetConsoleTitle(L"Кущевский Андрей, ПЗ-19-1");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);

}

void line()
{

	cout << "_______________________________________________________________________________________________________________________" << endl;

}

void endProcedure()
{

	cout << endl << endl;
	system("pause");
	cin.ignore(cin.rdbuf()->in_avail());

}

int main()
{

	startProcedure();

	Figure *figure[4];

	string name[] =
	{
		"Triangle",
		"Trapeze",
		"Parallelogram",
		"Rectangular"
	};
	int sizeName = size(name);

	//создание объектов разных типов
	Triangle triangle(3.0, 4.0, 2.0);
	Trapeze trapeze(5.0, 2.0, 1.9, 2.8, 1.8);
	Parallelogram parallelogram(15.2, 28.75, 18.3);
	Rectangular rectangle(100.5, 24.13);

	//инициализация каждого указателя на базовый класс соответствующей ссылкой
	figure[0] = &triangle;
	figure[1] = &trapeze;
	figure[2] = &parallelogram;
	figure[3] = &rectangle;

	double a = 0;
	double b = 0;
	double c = 0;
	double d = 0;
	double h = 0;

	line();

	//цикл вывода состояния созданых объектов и их площадей
	for (int i = 0; i < sizeName; ++i)
	{

		cout << endl << name[i] << " (";

		switch (i)
		{

		case 0:
			triangle.getFigure(a, b, c);
			view(a, b, c);
			cout << "):\t\t\t";
			break;

		case 1:
			trapeze.getFigure(a, b, c, d, h);
			view(a, b, c, d, h);
			cout << "):\t\t";
			break;

		case 2:
			parallelogram.getFigure(a, b, h);
			view(a, b, h);
			cout << "):\t";
			break;

		case 3:
			rectangle.getFigure(a, b);
			view(a, b);
			cout << "):\t\t";
			break;

		}

		cout << "Area = " << figure[i]->getArea() << endl;

	}

	line();

	// цикл изменения состояния созданных объектов та их площадей
	for (int i = 0; i < sizeName; ++i)
	{

		cout << endl << name[i] << "(";

		switch (i)
		{

		case 0:
			triangle.setFigure(3, 3, 3);
			triangle.getFigure(a, b, c);
			view(a, b, c);
			cout << "):\t\t\t";
			break;

		case 1:
			trapeze.setFigure(5, 2, 1.8, 1.8, 1.9);
			trapeze.getFigure(a, b, c, d, h);
			view(a, b, c, d, h);
			cout << "):\t\t";
			break;

		case 2:
			parallelogram.setFigure(14, 15, 14);
			parallelogram.getFigure(a, b, h);
			view(a, b, h);
			cout << "):\t\t";
			break;

		case 3:
			rectangle.setFigure(1005, 2413);
			rectangle.getFigure(a, b);
			view(a, b);
			cout << "):\t\t";
			break;

		}

		cout << "Area = " << figure[i]->getArea() << endl;

	}

	line();

	endProcedure();
	return 0;

}