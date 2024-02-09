#include "Header.h"

void startProcedure()
{

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	SetConsoleTitle(L"Кущевский Андрей, ПЗ-19-1");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);

}

void endProcedure()
{

	system("cls");
	setColor(14);
	system("pause");
	cin.ignore(cin.rdbuf()->in_avail());

}

int main()
{

	startProcedure();

	int choice = 0;
	bool flag = true;

	Shape *shape;

	string mainMenu[] =
	{

		"Circle",
		"Rectangle",
		"Square",
		"Завершение работы программы"

	};

	while (flag) {

		system("cls");

		choice = mainMenuCursor(mainMenu, 4);

		switch (choice)
		{

		case 0:
		{
			system("cls");
			
			shape = new Circle(5);
			shape->draw();

			cout << endl;
			system("pause");
			break;
		}


		case 1:
		{
			system("cls");

			shape = new Rectangular(4, 6);
			shape->draw();

			cout << endl;
			system("pause");
			break;
		}


		case 2:
		{
			system("cls");

			shape = new Square(5);
			shape->draw();

			cout << endl;
			system("pause");
			break;
		}


		case 3:
		{
			flag = false;
			break;
		}

		}
	
	}

	endProcedure();
	return 0;

}