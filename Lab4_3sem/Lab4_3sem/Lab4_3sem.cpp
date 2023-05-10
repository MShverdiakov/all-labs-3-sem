#include "Header.h"

int main() {
	setlocale(LC_ALL, "Russian");
	int n;
	cin >> n; // вводим размер вектора
	if (n > 15) { return 1; };
	Vect v = Vect(n); // вызываем конструктор класса
	v.input();
	v.print();
	if (v.element(2)) cout << "проверка работы метода element" << v.element(2) << "\n";
	// Vect cv = v; // вызов конструктора копирования (можно еще с помощью него сделать)

	// решение с прямо в main с использованием ссылок
	int j, tmp;
	int min = v.element(0), min_n = 0;
	for (int i = 1; i < n; i++) { // находим минимальное значение
		if (min > v.element(i)) { min = v.element(i); min_n = i; }
	};
	// метод element возвращает значение функции ссылочного типа
	for (int i = min_n + 1; i < n; i++) { // сортировка выбором
		j = i;
		for (int k = i; k < n + 1; k++) {
			if (v.element(j) < v.element(k)) {
				j = k;
			}
		}
		tmp = v.element(i);
		v.element(i) = v.element(j);
		v.element(j) = tmp;
	}
	cout << "результат решения в main\n";
	v.print();

	// // часть кода для решения задачи методом класса
	//v.reshenie();
	//cout << "\nрезультат решения методом класса:\n";
	//v.print();
};