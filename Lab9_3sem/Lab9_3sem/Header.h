#include <iostream>
#include <stdlib.h>
#include <Windows.h>

using namespace std;

class Vect {
protected:
	int* p;   // ��� ������������ ������
	int size; // ��� ������
public:
	Vect() {  // ����������� �� ���������
		size = 10;
		p = new int[size];
	}
	Vect(int n);			// ������ ����������� ������
	Vect(const Vect& a);	// ����������� �����������
	~Vect() { delete[]p; }; // ����������
	int& element(int i);	// ������� ���������� ���� 
	int get_size() { return size; }
	void print();
	void input();			// ���� ������� ������ (�������������?)
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