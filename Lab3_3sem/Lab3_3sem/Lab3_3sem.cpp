﻿#include <iostream>

#include "Header.h"

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	
	int n;
	cout << "N = "; cin >> n;
	
	Complex* p = new Complex[n]; // создаем массив комплексных
	
	double re, im;
	cout << "\nинициализация массива:\n";
	for (int i = 0; i < n; i++) {
		cin >> re >> im;
		p[i].set(re, im);
	}

	cout << "\nвывод массива комплексных чисел\n";
	for (int i = 0; i < n; i++) {
		p[i].print();
	}

	double sum = 0.0; // инициализируем переменную суммы комплексных чисел
	int quantity = 0;
	for (int i = 0; i < n; i++) {
		if ((p[i].get_x() < 0) && (p[i].get_y() < 0)) {
			sum = sum + p[i].module();	// а если +=?
			quantity++;
		}
	}
	cout << "среднее арифметическое модулей чисел, у которых мнимая и действительная часть отрицательны:\n";
	if (quantity != 0)
		cout << (sum / quantity);
	else
		cout << "Нет таких чисел";
}