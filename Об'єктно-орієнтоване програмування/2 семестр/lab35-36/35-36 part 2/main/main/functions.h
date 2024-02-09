#pragma once

#include <iostream>
#include <Windows.h>
#include <conio.h>
#include <string>

#include <errno.h>
#include <stdio.h>
#include <assert.h>
#include <string.h>
#include <stdlib.h>

using namespace std;

#define _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_DEPRECATE
#define CLI_BUFFER_SIZE 5
#pragma warning(disable : 4996)

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
void line();

void cursorMenu(string str, bool flag);
int mainMenuCursor(string mainMenu[], int size);

float defaultFloatCorrectValue();
int floatCorrectValue(float *value, const char *prompt);