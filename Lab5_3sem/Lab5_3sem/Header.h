#include <iostream>
#include <stdlib.h>

using namespace std;

class matr {
	int** base;
	int size_x, size_y;
public:
	matr(int n, int m);
	~matr();
	int& elem(int i, int j);
	int get_sizex() {
		return size_x;
	};
	int get_sizey() {
		return size_y;
	};
	void print();
};

matr::matr(int n, int m) {
	size_x = n;
	size_y = m;
	base = new int* [size_x];
	for (int i = 0; i < size_x; i++) {
		base[i] = new int[size_y];
	}
}

matr::~matr() {
	for (int i = 0; i < size_x; i++)
		delete[] base[i];
	delete[] base;
	size_y = 0;
	size_x = 0;
}

int& matr::elem(int i, int j) {
	return base[i][j];
}

void matr::print() {
	for (int i = 0; i < size_y; i++) {
		for (int j = 0; j < size_x; j++)
			cout << base[i][j] << " ";
		cout << endl;
	}
}