#include <iostream>
#include <stdlib.h>

using namespace std;

class Vect {
	int* p;   // сам динамический массив
	int size; // его размер
	friend void change_elem(Vect& v);
public:
	Vect() {  // конструктор по умолчанию
		size = 10;
		p = new int[size];
	}
	Vect(int n);			// просто конструктор класса
	Vect(const Vect& a);	// конструктор копирования
	~Vect() { delete[]p; }; // деструктор
	int& element(int i);	// функция ссылочного типа 
	int get_size() { return size; }
	void print();
	void input();			// ввод объекта класса (инициализация?)
	int reshenie();			// решение методом класса
};
