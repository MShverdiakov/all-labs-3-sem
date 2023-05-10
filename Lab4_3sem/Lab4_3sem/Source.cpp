#include "Header.h"

Vect::Vect(int n) { // просто конструктор класса
	size = n;
	p = new int[size];
}

int& Vect::element(int i) {		// функция ссылочного типа
	return p[i];
}

Vect::Vect(const Vect& a) { // конструктор копирования
	p = new int[a.size];
	if (!p) exit(1);
	for (int i = 0; i < a.size; i++) p[i] = a.p[i];
}

int Vect::reshenie() {		// решение методом класса
	int i, j, tmp;
	int min = p[0], min_n = 0;
	for (i = 1; i < this->size; i++) {	// находим минимальный элемент и его номер
		if (min > p[i]) { min = p[i]; min_n = i; }
	};
	for (int i = min_n + 1; i < this->size; i++) {	// сортировка выбором
		j = i;
		for (int k = i; k < this->size; k++) {
			if (p[j] < p[k]) {
				j = k;
			}
		}
		tmp = p[i];
		p[i] = p[j];
		p[j] = tmp;
	}
	return min_n;
}

void Vect::input() {		// ввод объекта класса (инициализация?)
	int x;
	for (int i = 0; i < this->size; i++) {
		cin >> x;
		this->p[i] = x;
	}
}

void Vect::print() {		// вывод объекта класса
	for (int i = 0; i < this->size; i++) {
		cout << this->p[i] << " ";
	}
	cout << "\n";
}