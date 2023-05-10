#include <iostream>

using namespace std;

double z1(double* x) {
	double res, m = *x, root;
	if (m < 0) throw "Под корнем отрицательное число";
	
	root = sqrt(2 * m);
	if (root == 0 || (m - root) == 0 || (m + 2) == 0)
		throw "Попытка разделить на ноль при вычислении Z1";

	res = ((m + 2) / root + 2 / (m - root) - m / (root + 2)) * ((sqrt(m) - sqrt(2)) / (m + 2));
	return res;
}

double z2(double* x) {
	double res, m = *x, root;
	if (m < 0) throw "Под корнем отрицательное число";
	
	root = sqrt(m) + sqrt(2);
	res = 1 / root;
	return res;
}

int main()
{
	setlocale(LC_ALL, "RU");
	double m;
	cout << "введите число m -- "; cin >> m;

	try {
		cout << "\nz1 = " << z1(&m);
	}
	catch (const char* msg) {
		cout << msg;
	}

	cout << "\nz2 = " << z2(&m);
}