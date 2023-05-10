#include "Header.h"

int main() {
	setlocale(LC_ALL, "Russian");
	int n;
	cin >> n; // вводим размер вектора
	if (n > 15) { return 1; };
	Sol v = Sol(n); // вызываем конструктор класса
	v.input();
	v.print();
	
	v.reshenie();
	system("pause");
};