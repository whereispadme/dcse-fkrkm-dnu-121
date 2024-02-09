#pragma once

class Matrix {
	//открытая часть класса
public:
	//конструкторы, деструктор
	Matrix();
	Matrix(int rows, int cols);
	~Matrix();

	//методы базового класса
	void input();
	void calculate();
	void output();

	//геттеры
	int getRows() { return this->rows; }
	int getCols() { return this->cols; }
	double getMatrix(int i, int j) { return this->matrix[i][j]; }

	//закрытая часть класса
private:
	double **matrix;
	int rows;
	int cols;

};