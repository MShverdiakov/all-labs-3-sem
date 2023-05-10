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

void Sol::reshenie() {		// решение методом класса
	int sum = 0, cnt = 0;
	for (int i = 0; i < size; i += 2) {
		if ((p[i] > 0) && (p[i] < 100)) {
			sum += p[i];
			cnt++;
		}
	};
	cout << "результат решения\n";
	cout << "sum = " << sum << ", cnt = " << cnt << endl;
}