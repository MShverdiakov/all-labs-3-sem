#include "Header.h"

Vect::Vect(int n) { // ������ ����������� ������
	size = n;
	p = new int[size];
}

int& Vect::element(int i) {		// ������� ���������� ����
	return p[i];
}

Vect::Vect(const Vect& a) { // ����������� �����������
	p = new int[a.size];
	if (!p) exit(1);
	for (int i = 0; i < a.size; i++) p[i] = a.p[i];
}

void Vect::input() {		// ���� ������� ������ (�������������?)
	int x;
	for (int i = 0; i < this->size; i++) {
		cin >> x;
		this->p[i] = x;
	}
}

void Vect::print() {		// ����� ������� ������
	for (int i = 0; i < this->size; i++) {
		cout << this->p[i] << " ";
	}
	cout << "\n";
}

void Sol::reshenie() {		// ������� ������� ������
	int sum = 0, cnt = 0;
	for (int i = 0; i < size; i += 2) {
		if ((p[i] > 0) && (p[i] < 100)) {
			sum += p[i];
			cnt++;
		}
	};
	cout << "��������� �������\n";
	cout << "sum = " << sum << ", cnt = " << cnt << endl;
}