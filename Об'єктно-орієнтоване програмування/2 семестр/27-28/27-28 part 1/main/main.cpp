/*
	
	В кабінети коледж закупив меблі.

	Меблі характеризуються видом (стіл письмовий, шафа тощо) та мають інвентарний номер. +
	Кабінет має номер і містить меблі. +
	Реалізувати функціонал додавання, видалення, редагування інформації про кабінети та меблі. +
	Реалізувати можливість прийняття меблів на баланс в кабінет, переміщення одиниці меблів в інший кабінет, видачі списку меблів в кабінеті +

*/

#include "Classroom.h"
#include "Furniture.h"
#include "Other.h"

#include <iostream>
#include <Windows.h>
#include <conio.h>
#include <string>

using namespace std;

void headTable()
{

	cout << "+------------------------------------------+" << endl;
	cout << "|   Номер   |      Тип      |    Инвент.   |" << endl;
	cout << "|  кабинета |     мебели    | номер мебели |" << endl;
	cout << "+------------------------------------------+" << endl;
					      
}

void endTable()
{

	cout << "+------------------------------------------+" << endl;

}

void freeViewData(Classroom *(&classroom), int &amountOfClassroom)
{

	headTable();

	for (int i = 0; i < amountOfClassroom; ++i) {

		cout << "|     ";
		printf("%-6u", classroom[i].getNumberOfClassroom());
		cout << "|";

		printf("%-15s", classroom[i].getFurnitureType().c_str());
		cout << "|      ";

		printf("%-8u", classroom[i].getInventoryNumber());
		cout << "|" << endl;

	}

	endTable();

}

//1
void viewData(Classroom *(&classroom), int &amountOfClassroom)
{

	system("cls");
	clearStreamInput();

	if (amountOfClassroom == 0) {

		setColor(12);
		
		cout << "На данный данный момент нет записей о кабинетах, воспользуйтесь соответствующим пунктом меню для добавления!";
		
		setColor(14);
		
		cout << endl << endl;
		system("pause");
		system("cls");
		return;

	}

	headTable();

	for (int i = 0; i < amountOfClassroom; ++i) {

		cout << "|     ";
		printf("%-6u", classroom[i].getNumberOfClassroom());
		cout << "|";

		printf("%-15s", classroom[i].getFurnitureType().c_str());
		cout << "|      ";

		printf("%-8u", classroom[i].getInventoryNumber());
		cout << "|" << endl;

	}

	endTable();

	endProcedure();

}

int getNumOfClassroom() 
{

	int numOfClassroom = 0;

	cout << "Введите номер кабинета: ";
	getCorrectInteger(numOfClassroom);
	
	return numOfClassroom;

}

string getFurnitureType()
{
	
	cout << endl;
	cout << "[1] Шкаф" << endl;
	cout << "[2] Стол письменный" << endl;
	cout << "[3] Кресло учителя" << endl;
	cout << "[0] Отсутствует" << endl;
	cout << endl << "Выберите мебель для кабинета по инвентарному номеру: ";
	
	int activeMenu = 0;

	
	while (!(cin >> activeMenu) || (activeMenu <= -1) || (activeMenu >= 4)) {

		clearStreamInput();
		setColor(12);
		cout << "Ошибка! Выберите значение из спиcка: ";

	}
	
	setColor(14);

	string type;

	switch (activeMenu)	
	{

	case 1: {

		type = "Шкаф";
		return type;

	}
	
	case 2: {

		type = "Стол письменный";
		return type;

	}

	case 3: {

		type = "Кресло учителя";
		return type;

	}
	
	case 0: {

		type = "Отсутствует";
		return type;

	}

	}

}

bool checkRepeatNumOfClassroom(Classroom *(&classroom), int &amountOfClassroom, int numOfClassroom)
{

	for (int i = 0; i < amountOfClassroom; ++i) {

		if (numOfClassroom == classroom->getNumberOfClassroom()) {

			setColor(12);
			cout << "Кабинет с данным номером уже существует! ";
			return true;

		}

	}

	return false;

}

void addClassroom(Classroom *(&classroom), int &amountOfClassroom)
{

	system("cls");
	clearStreamInput();
	hideCursor(true);

	int status = 0;

	if (amountOfClassroom == 0) {

		status = 0;
		setColor(10);
		cout << "В данный момент кабинеты отсутствуют!";
		setColor(14);

	}
	else {

		status = 1;
		setColor(10);
		cout << "В данный момент есть существующие кабинеты, вы можете просмотреть их состояние в соответсвующем списке меню!";
		setColor(14);

	}

	int numOfClassroom = 0;
	string typeOfFurniture;

	bool statusNumberOfClassroom = true;

	switch (status) {

	//если кабинетов не существует
	case 0: {

		cout << endl << endl << "Введите количество кабинетов, которые желаете добавить: ";
		getCorrectInteger(amountOfClassroom);
		
		classroom = new Classroom[amountOfClassroom];

		for (int i = 0; i < amountOfClassroom; ++i) {

			system("cls");
			clearStreamInput();

			cout << "Обработка информации по " << i + 1 << "-ому кабинету в списку:" << endl << endl;
			
			while (statusNumberOfClassroom) {
			
				numOfClassroom = getNumOfClassroom();
				statusNumberOfClassroom = checkRepeatNumOfClassroom(classroom, amountOfClassroom, numOfClassroom);

			}			
			statusNumberOfClassroom = true;

			typeOfFurniture = getFurnitureType();
			
			classroom[i].setNumberOfClassrom(numOfClassroom);
			classroom[i].setFurnitureType(typeOfFurniture);
			
			clearStreamInput();
			cout << endl;
			system("pause");

		}

		break;

	}
	
	//если кабинеты существуют
	case 1: {
		//в конец массива

		setColor(14);

		cout << endl << endl << "Введите кол-во элементов, которое желаете добавить(в конец таблицы): ";
		int newSize = 0;
		getCorrectInteger(newSize);

		newSize += amountOfClassroom;

		Classroom *tempArray = new Classroom[amountOfClassroom];

		for (int i = 0; i < amountOfClassroom; ++i)
			tempArray[i] = classroom[i];

		classroom = new Classroom[newSize];

		for (int i = 0; i < amountOfClassroom; ++i)
			classroom[i] = tempArray[i];

		//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++//
		//Реализация добавления данных в конец массива объектов

		system("cls");

		for (int i = amountOfClassroom; i < newSize; ++i) {

			system("cls");
			clearStreamInput();

			cout << "Обработка информации по " << i + 1 << "-ому кабинету в списку:" << endl << endl;

			while (statusNumberOfClassroom) {

				numOfClassroom = getNumOfClassroom();
				statusNumberOfClassroom = checkRepeatNumOfClassroom(classroom, amountOfClassroom, numOfClassroom);

			}
			statusNumberOfClassroom = true;

			typeOfFurniture = getFurnitureType();

			classroom[i].setNumberOfClassrom(numOfClassroom);
			classroom[i].setFurnitureType(typeOfFurniture);

			clearStreamInput();
			cout << endl;
			system("pause");

		}

		amountOfClassroom = newSize;

		//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++//

		break;

	}

	}

}

void presenceStatusOfClassroom(Classroom *(&classroom), int &amountOfClassroom, int &numOfClassroom, bool &presenceStatus, int &object)
{

	for (int i = 0; i < amountOfClassroom; ++i) {

		if (classroom[i].getNumberOfClassroom() == numOfClassroom) {

			presenceStatus = true;
			object = i;
			break;

		}
		else {

			presenceStatus = false;

		}

	}

}

void addFurniture(Classroom *(&classroom), int &amountOfClassroom)
{

	system("cls");
	clearStreamInput();

	if (amountOfClassroom == 0) {

		setColor(12);

		cout << "На данный данный момент нет записей о кабинетах, воспользуйтесь соответствующим пунктом меню для добавления!";

		setColor(14);

		cout << endl << endl;
		system("pause");
		return;

	}

	freeViewData(classroom, amountOfClassroom);

	hideCursor(true);
	cout << endl << "Выберите номер кабинета, в который желаете добавить мебель: ";
	int numOfClassroom = 0; 
	getCorrectInteger(numOfClassroom);

	bool presenceStatus = false;
	int object = -1;

	presenceStatusOfClassroom(classroom, amountOfClassroom, numOfClassroom, presenceStatus, object);

	string type;

	switch (presenceStatus) 
	{

	case 1: {
		setColor(10);
		cout << endl << "Кабинет был найден!" << endl;
		setColor(14);

		type = getFurnitureType();
		classroom[object].setFurnitureType(type);

		break;
	}

	case 0: {
		setColor(12);
		cout << endl << "Кабинет не был найден! Попробуйте ещё раз!" << endl;
		setColor(14);
		break;
	}

	}
	
	endProcedure();

}

//2
void addDataMenu(Classroom *(&classroom), int &amountOfClassroom)
{

	system("cls");
	clearStreamInput();

	string addDataMenu[] = 
	{

		"Добавить кабинет",
		"Добавить мебель в кабинет",
		"Вернуться в главное меню",

	};

	int activeMenu = threePosMenu(addDataMenu);

	switch (activeMenu) {

	case 0: {
		addClassroom(classroom, amountOfClassroom);
		system("cls");
		break;
	}

	case 1: {
		addFurniture(classroom, amountOfClassroom);
		system("cls");
		break;
	
	}
	
	case 2: {
		return;
		break;

	}

	}

}

void removeClassroom(Classroom *(&classroom), int &amountOfClassroom)
{

	system("cls");

	freeViewData(classroom, amountOfClassroom);

	hideCursor(true);
	
	cout << endl << "Выберите номер кабинета, который желаете удалить: ";
	int numOfClassroom = 0; 
	getCorrectInteger(numOfClassroom);

	bool presenceStatus = false;
	int object = -1;

	presenceStatusOfClassroom(classroom, amountOfClassroom, numOfClassroom, presenceStatus, object);

	switch (presenceStatus)
	{

	case 1: {
		setColor(10);
		cout << endl << "Кабинет был найден!" << endl;
		setColor(14);

 	 	for (int i = object; i < amountOfClassroom - 1; ++i)
			classroom[i] = classroom[i + 1];
		
		amountOfClassroom--;

		freeViewData(classroom, amountOfClassroom);

		break;
	}

	case 0: {
		setColor(12);
		cout << endl << "Кабинет не был найден! Попробуйте ещё раз!" << endl;
		setColor(14);
		break;
	}

	}

	endProcedure();

}

void removeFurnitureFromClassroom(Classroom *(&classroom), int &amountOfClassroom)
{


	system("cls");

	freeViewData(classroom, amountOfClassroom);

	hideCursor(true);

	cout << endl << "Выберите номер кабинета, из которого желаете убрать мебель: ";
	int numOfClassroom = 0;
	getCorrectInteger(numOfClassroom);

	bool presenceStatus = false;
	int object = -1;

	presenceStatusOfClassroom(classroom, amountOfClassroom, numOfClassroom, presenceStatus, object);

	switch (presenceStatus)
	{

	case 1: {
		setColor(10);
		cout << endl << "Кабинет был найден!" << endl;
		setColor(14);

		for (int i = 0; i < amountOfClassroom; ++i) {

			if (classroom[i].getNumberOfClassroom() == numOfClassroom) {

				classroom[i].setFurnitureType("Отсутствует");

			}

		}

		freeViewData(classroom, amountOfClassroom);

		break;
	}

	case 0: {
		setColor(12);
		cout << endl << "Кабинет не был найден! Попробуйте ещё раз!" << endl;
		setColor(14);
		break;
	}

	}

	endProcedure();

}

//3
void removeDataMenu(Classroom *(&classroom), int &amountOfClassroom)
{

	system("cls");
	clearStreamInput();

	if (amountOfClassroom == 0) {

		setColor(12);

		cout << "На данный данный момент нет записей о кабинетах, воспользуйтесь соответствующим пунктом меню для добавления!";

		setColor(14);

		cout << endl << endl;
		system("pause");
		system("cls");
		return;

	}

	string removeDataMenu[] =
	{

		"Удалить кабинет",
		"Убрать мебель из кабинета",
		"Вернуться в главное меню",

	};

	int activeMenu = threePosMenu(removeDataMenu);

	switch (activeMenu) 
	{

	case 0: {
		removeClassroom(classroom, amountOfClassroom);
		system("cls");
		break;
	}
	
	case 1: {
		removeFurnitureFromClassroom(classroom, amountOfClassroom);
		system("cls");
		break;
	}

	case 2: {
		return;
		break;
	}

	}

}

void moveFurnitureToAnotherClassroom(Classroom *(&classroom), int &amountOfClassroom)
{
	
	system("cls");

	hideCursor(true);
	cout << "Выберите номер кабинета, из которого желаете убрать мебель: ";
	int numOfClassroomForMove = 0;
	getCorrectInteger(numOfClassroomForMove);

	bool presenceStatus = false;
	int object = -1;

	presenceStatusOfClassroom(classroom, amountOfClassroom, numOfClassroomForMove, presenceStatus, object);

	switch (presenceStatus)
	{

	case 1: {
		setColor(10);
		cout << endl << "Кабинет был найден!" << endl;
		setColor(14);

		cout << endl << "Выберите номер кабинета, в который желаете переместить мебель: ";
		int numOfClassroomForGive = 0;
		getCorrectInteger(numOfClassroomForGive);

		bool presenceStatus_2 = false;
		int object_2 = -1;

		presenceStatusOfClassroom(classroom, amountOfClassroom, numOfClassroomForGive, presenceStatus_2, object_2);

		switch (presenceStatus_2)
		{

		case 1: {
			setColor(10);
			cout << endl << "Кабинет был найден!" << endl;
			setColor(14);

			classroom[object_2].setFurnitureTypeOneTime(classroom[object].getFurnitureType());
			classroom[object].setFurnitureTypeOneTime("Отсутствует");

			freeViewData(classroom, amountOfClassroom);

			break;
		}

		case 0: {
			setColor(12);
			cout << endl << "Кабинет не был найден! Попробуйте ещё раз!" << endl;
			setColor(14);
			endProcedure();
			return;
		}

		}

		break;
	}

	case 0: {
		setColor(12);
		cout << endl << "Кабинет не был найден! Попробуйте ещё раз!" << endl;
		setColor(14);
		break;
	}

	}

	endProcedure();

}

void showDetalInfoAboutClassroom(Classroom *(&classroom), int &amountOfClassroom)
{

	system("cls");

	cout << "Выберите номер кабинета, по которому желаете посмотреть информацию: ";
	int numOfClassroom = 0;
	getCorrectInteger(numOfClassroom);

	bool presenceStatus = false;
	int object = -1;

	presenceStatusOfClassroom(classroom, amountOfClassroom, numOfClassroom, presenceStatus, object);

	switch (presenceStatus)
	{

	case 1: {
		setColor(10);
		cout << endl << "Кабинет был найден!" << endl;
		setColor(14);

		headTable();

		cout << "|     ";
		printf("%-6u", classroom[object].getNumberOfClassroom());
		cout << "|";

		printf("%-15s", classroom[object].getFurnitureType().c_str());
		cout << "|      ";

		printf("%-8u", classroom[object].getInventoryNumber());
		cout << "|" << endl;

		endTable();
			
		break;
	}

	case 0: {
		setColor(12);
		cout << endl << "Кабинет не был найден! Попробуйте ещё раз!" << endl;
		setColor(14);
		break;
	}

	}

	endProcedure();

}

//4
void editDataMenu(Classroom *(&classroom), int &amountOfClassroom)
{

	system("cls");
	clearStreamInput();

	if (amountOfClassroom == 0) {

		setColor(12);

		cout << "На данный данный момент нет записей о кабинетах, воспользуйтесь соответствующим пунктом меню для добавления!";

		setColor(14);

		cout << endl << endl;
		system("pause");
		system("cls");
		return;

	}

	string editDataMenu[] =
	{

		"Переместить мебель из одного кабинет в другой",
		"Просмотреть информацию о кабинете",
		"Вернуться в главное меню",

	};

	int activeMenu = threePosMenu(editDataMenu);

	switch (activeMenu)
	{

	case 0: {
		moveFurnitureToAnotherClassroom(classroom, amountOfClassroom);
		system("cls");
		break;
	}

	case 1: {
		showDetalInfoAboutClassroom(classroom, amountOfClassroom);
		system("cls");
		break;
	}

	case 2: {
		return;
		break;
	}

	}

}

void mainMenu(Classroom *(&classroom), int &amountOfClassroom)
{

	string mainMenu[] =
	{

		"Просмотр иформации",
		"Добавление информации",
		"Удаление информации",
		"Перемещение мебели, просмотр информации о кабинете",
		"Завершение работы программы",

	};

	while (true) {

		int activeMenu = fivePosMenu(mainMenu);

		switch (activeMenu) {

		case 0: {
			viewData(classroom, amountOfClassroom);
			break;
		}

		case 1: {
			addDataMenu(classroom, amountOfClassroom);
			break;
		}

		case 2: {
			removeDataMenu(classroom, amountOfClassroom);
			break;
		}

		case 3: {
			editDataMenu(classroom, amountOfClassroom);
			break;
		}

		case 4: {
			setColor(14);
			hideCursor(true);
			system("cls");
			system("pause");
			return;
		}

		}

	}

}

int main()
{
	
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	SetConsoleTitle(L"Кущевский Андрей, ПЗ-19-1");
	
	int amountOfClassroom = 0;

	Classroom *classroom = new Classroom[amountOfClassroom];

	mainMenu(classroom, amountOfClassroom);

	if(amountOfClassroom != 0)
		delete[] classroom;

	return 0;
	
}