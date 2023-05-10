#include <iostream>
#include <stdlib.h>

using namespace std;

class Vect {
	int* p;   // ��� ������������ ������
	int size; // ��� ������
	friend void change_elem(Vect& v);
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
	int reshenie();			// ������� ������� ������
};
