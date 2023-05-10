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
	return p[i];
}

Vect::Vect(const Vect& a) { // ����������� �����������
	p = new Complex[a.size];
	if (!p) exit(1);
	for (int i = 0; i < a.size; i++) p[i] = a.p[i];
}

//int Vect::reshenie() {		// ������� ������� ������
//	int i, j, tmp;
//	int min = p[0], min_n = 0;
//	for (i = 1; i < this->size; i++) {	// ������� ����������� ������� � ��� �����
//		if (min > p[i]) { min = p[i]; min_n = i; }
//	};
//	for (int i = min_n + 1; i < this->size; i++) {	// ���������� �������
//		j = i;
//		for (int k = i; k < this->size; k++) {
//			if (p[j] < p[k]) {
//				j = k;
//			}
//		}
//		tmp = p[i];
//		p[i] = p[j];
//		p[j] = tmp;
//	}
//	return min_n;
//}

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