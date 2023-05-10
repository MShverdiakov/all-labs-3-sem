#include <iostream>
#include <fstream>

using namespace std;

template <typename T> void delete_2d_arr(T** arr, int n, int m) {
	for (int i = 0; i < m; i++)
		delete[] arr[i];
	delete[] arr;
}

template <typename Type> Type** load_data(int& x, int& y) {
	ifstream fin("input.txt");
	int &n = x, &m = y; fin >> n >> m;
	Type** arr = new Type* [m];
	for (int i = 0; i < m; i++)
		arr[i] = new Type[n];
	
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			fin >> arr[i][j];
	fin.close();
	return arr;
}

template <typename T> bool isMultiple(T* arr, int m, T x) {
	bool flag = false;
	for (int j = 0; j < m; j++)
		if (arr[j] % x == 0) {
			flag = true; break; // вообще тупо как-то использовать досрочный выход когда можно while
		}
	return flag;
}