#include <iostream>
#include <stdlib.h>

#include "Complex.h"

using namespace std;

class Vect {
	Complex* p;   // сам динамический массив
	int size; // его размер
public:
	Vect() {  // конструктор по умолчанию
		size = 10;
		p = new Complex[size];
	}
	Vect(int n);			// просто конструктор класса
	Vect(const Vect& a);	// конструктор копирования
	~Vect() { delete[]p; }; // деструктор
	Complex& element(int i);	// функция ссылочного типа 
	int get_size() { return size; }
	void print();
	void input();			// ввод объекта класса (инициализация?)
	int reshenie();			// решение методом класса
};

Vect::Vect(int n) { // просто конструктор класса
	size = n;
	p = new Complex[size];
}

Complex& Vect::element(int i) {		// функция ссылочного типа
	if (i < 0 || i >= this->size) { myException ex; ex.SetErrorNum(1); throw ex; };
	return p[i];
}

Vect::Vect(const Vect& a) { // конструктор копирования
	p = new Complex[a.size];
	if (!p) exit(1);
	for (int i = 0; i < a.size; i++) p[i] = a.p[i];
}

void Vect::input() {		// ввод объекта класса (инициализация?)
	Complex x;
	double re, im;
	cout << "\ninput elements of class Vect\n";
	for (int i = 0; i < this->size; i++) {
		cin >> re >> im;
		x.set(re, im);
		this->p[i] = x;
	}
}

void Vect::print() {		// вывод объекта класса
	for (int i = 0; i < this->size; i++) {
		p[i].print();
	}
	cout << "\n";
}