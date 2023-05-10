#include "Vect.h"

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");

	int m, cnt = 0;
	cout << "M = "; cin >> m;
	Vect x(m), y(m);
	x.input(); y.input();

	try {
		Complex x1 = x.element(1), x3 = x.element(3);
		cout << x1; cout << x3;
		cout << x.element(5);
		Complex sum = x1 + x3;
		cout << sum;
	}
	catch (myException ex) {
		cout << "Ошибка номер " << ex.GetErrorNum() << "\t";
		cout << ex.what();
	}
}