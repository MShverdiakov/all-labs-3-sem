#include <iostream>
#include <stdlib.h>

#include "Complex.h"

using namespace std;

class Vect {
	Complex* p;   // ��� ������������ ������
	int size; // ��� ������
public:
	Vect() {  // ����������� �� ���������
		size = 10;
		p = new Complex[size];
	}
	Vect(int n);			// ������ ����������� ������
	Vect(const Vect& a);	// ����������� �����������
	~Vect() { delete[]p; }; // ����������
	Complex& element(int i);	// ������� ���������� ���� 
	int get_size() { return size; }
	void print();
	void input();			// ���� ������� ������ (�������������?)
	int reshenie();			// ������� ������� ������
};

Vect::Vect(int n) { // ������ ����������� ������
	size = n;
	p = new Complex[size];
}

Complex& Vect::element(int i) {		// ������� ���������� ����
	if (i < 0 || i >= this->size) { myException ex; ex.SetErrorNum(1); throw ex; };
	return p[i];
}

Vect::Vect(const Vect& a) { // ����������� �����������
	p = new Complex[a.size];
	if (!p) exit(1);
	for (int i = 0; i < a.size; i++) p[i] = a.p[i];
}

void Vect::input() {		// ���� ������� ������ (�������������?)
	Complex x;
	double re, im;
	cout << "\ninput elements of class Vect\n";
	for (int i = 0; i < this->size; i++) {
		cin >> re >> im;
		x.set(re, im);
		this->p[i] = x;
	}
}

void Vect::print() {		// ����� ������� ������
	for (int i = 0; i < this->size; i++) {
		p[i].print();
	}
	cout << "\n";
}