#include "Header.h"

void cubeProcedure(Figure *figure)
{

	float edge = 0;

	cout << "Введите ребро куба: ";
	cin >> edge;

	figure = new Cube(edge);

	line();

	figure->showFigureType();
	cout << endl << "Объем куба равен: " << figure->getVolume();
	cout << endl << "Площадь поверхности куба равна: " << figure->getSurfaceArea();

	line();

	cout << endl << endl;
	system("pause");

}

void coneProcedure(Figure *figure)
{

	float height = 0;
	float surfaceRadius = 0;
	float genetrixCone = 0;

	cout << "Введите высоту конуса: ";
	cin >> height;

	cout << endl << "Введите радиус основания конуса: ";
	cin >> surfaceRadius;

	cout << endl << "Введите образующуюю конуса: ";
	cin >> genetrixCone;

	figure = new Cone(height, surfaceRadius, genetrixCone);

	line();

	figure->showFigureType();
	cout << endl << "Объем конуса равен: " << figure->getVolume();
	cout << endl << "Площадь поверхности конуса равна: " << figure->getSurfaceArea();

	line();

	cout << endl << endl;
	system("pause");

}

void startProcedure()
{
	
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	SetConsoleTitle(L"Кущевский Андрей, ПЗ-19-1");
	setColor(14);

}

void endProcedure()
{

	system("cls");
	setColor(14);
	hideCursor(true);
	system("pause");
	cin.ignore(cin.rdbuf()->in_avail());

}

int main()
{

	startProcedure();

	int choice = 0;
	bool flag = true;

	string mainMenu[] = 
	{
		"Куб",
		"Конус",
		"Завершение работы программы"
	};

	Figure *figure = nullptr;

	while(flag)
	{

		system("cls");

		choice = mainMenuCursor(mainMenu, 3);

		switch (choice)
		{

		case 0:
		{
			system("cls");
			hideCursor(true);
			cubeProcedure(figure);
			break;
		}

		case 1:
		{
			system("cls");
			hideCursor(true);
			coneProcedure(figure);
			break;
		}

		case 2:
		{
			flag = false;
		}

		}

	}

	if (figure != nullptr)
		delete figure;

	endProcedure();
	return 0;

}