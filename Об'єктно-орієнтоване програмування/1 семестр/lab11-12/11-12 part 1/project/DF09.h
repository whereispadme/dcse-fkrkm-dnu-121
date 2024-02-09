#pragma once

class DF09 {
	//объявление полей класса с модификатором доступа по умолчанию(private)
	int* array;//массив
	int size;  //размер массива


public:	
		
	//объявление конструкторов и деструктора класса
	DF09();
	DF09(int size);
	DF09(const DF09& object);
	~DF09();

	//Сеттер для размера массива
	int getSize(void) const;
	
	//перегрузка оператора присваивания
	DF09& operator =(const DF09& object);

	//перегрузка оператора + (объект+объект)
	DF09 operator +(const DF09& object);
	
	//объект + число
	DF09 operator +(int value);

	//перегрузка оператора вычетания (объект - объект)
	DF09 operator -(const DF09& object);


	//перегрузка оператора [] индексации
	int& operator[] (const unsigned int index) const;


	friend void view(DF09& object);		//дружественная функция просмотра(реализация вне класса)
};