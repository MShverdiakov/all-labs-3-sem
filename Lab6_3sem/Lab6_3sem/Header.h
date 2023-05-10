#include <iostream>
#include <stdlib.h>

using namespace std;

class matr {
	int** base;
	int size_x, size_y;
	// static int factor;
	static int counter;
public:
	static int factor;
	matr(int n, int m);
	~matr();
	int& elem(int i, int j);
	void input();
	/*static void set_factor(int x) {
		factor = x;
	}
	static int get_factor() {
		return factor;
	}*/
	static int get_counter() {
		return counter;
	}
	void multiplication();
	int get_sizex() {
		return size_x;
	};
	int get_sizey() {
		return size_y;
	};
	void print();
};

int matr::counter = 0;
int matr::factor = 1;

matr::matr(int n, int m) {
	size_x = n;
	size_y = m;
	base = new int* [size_x];
	for (int i = 0; i < size_x; i++) {
		base[i] = new int[size_y];
	}
	counter++;
}

matr::~matr() {
	for (int i = 0; i < size_x; i++) {
		delete[] base[i];
		delete[] base;
		size_y = 0;
		size_x = 0;
	}
}

int& matr::elem(int i, int j) {
	return base[i][j];
}

void matr::input() {
	for (int i = 0; i < size_y; i++) {
		for (int j = 0; j < size_x; j++)
			cin >> base[i][j];
	}
}

void matr::multiplication() {
	for (int i = 0; i < size_y; i++) {
		for (int j = 0; j < size_x; j++)
			base[i][j] *= factor;
	}
}

void matr::print() {
	for (int i = 0; i < size_y; i++) {
		for (int j = 0; j < size_x; j++)
			cout << base[i][j] << " ";
		cout << endl;
	}
}