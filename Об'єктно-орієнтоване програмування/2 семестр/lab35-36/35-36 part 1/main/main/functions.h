#pragma once

#include <iostream>
#include <Windows.h>
#include <conio.h>
#include <string>
using namespace std;

#define TITLE SetConsoleTitle(L"Кущевский Андрей");

#define RU  SetConsoleCP(1251)
#define RU2 SetConsoleOutputCP(1251);

#define ASCII SetConsoleOutputCP(866)

#define Up 72
#define Down 80
#define Enter 13

void gotoxy(int x, int y);
void hideCursor(bool status);
void setColor(int color);
int mainMenuCursor(string mainMenu[], int size);