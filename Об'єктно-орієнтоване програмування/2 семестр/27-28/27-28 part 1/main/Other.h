#pragma once

#include <iostream>
#include <Windows.h>
#include <conio.h>
#include <string>

#define KEY_UP 72
#define KEY_DOWN 80
#define ENTER 13

using namespace std;

void gotoxy(int x, int y);

void hideCursor(bool status);

void setColor(int color);

void cursorStrMenu(string str, int color, bool status);

void clearStreamInput();

void endProcedure();

int threePosMenuMenu(string str[]);
int threePosMenu(string mainMenu[]);

int fivePosMenu(string mainMenu[]);

void getCorrectInteger(int &value);