#include <iostream>
#include <stdlib.h>
#include <Windows.h>

using namespace std;

class Vect {
protected:
	int* p;   // сам динамический массив
	int size; // его размер
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
};

class Sol : protected Vect {
public:
	Sol() {
		size = 20;
		p = new int[size];
	}
	Sol(int n) {
		size = n;
		p = new int[size];
	}
	void input() {
		Vect::input();
	}
	void print() {
		Vect::print();
	}
	void reshenie();
};