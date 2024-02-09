#pragma once

class Matrix {
	//�������� ����� ������
public:
	//������������, ����������
	Matrix();
	Matrix(int rows, int cols);
	~Matrix();

	//������ �������� ������
	void input();
	void calculate();
	void output();

	//�������
	int getRows() { return this->rows; }
	int getCols() { return this->cols; }
	double getMatrix(int i, int j) { return this->matrix[i][j]; }

	//�������� ����� ������
private:
	double **matrix;
	int rows;
	int cols;

};