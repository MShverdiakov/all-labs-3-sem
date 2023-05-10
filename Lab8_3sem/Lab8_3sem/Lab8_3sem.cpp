#include "Header.h"

int main() {
	setlocale(LC_ALL, "Russian");
	int n;
	cin >> n; // вводим размер вектора
	if (n > 15) { return 1; };
	Vect v = Vect(n); // вызываем конструктор класса
	v.input();

	change_elem(v);
	v.print();
}