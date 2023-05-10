#include <iostream>

#include "Header.h"
#include "Complex.h"

int main()
{
    setlocale(LC_ALL, "Russian");
    int n, m;
    Complex** arr = load_data<Complex>(n, m);

    cout << "Введите кратность" << endl;
    Complex mult; cin >> mult;

    bool flag;
    for (int i = 0; i < n; i++) {
        flag = isMultiple<Complex>(arr[i], m, mult);
        if (flag) { int num = i; cout << "Номер строки " << num + 1 << endl; break; }
    }
    if (!flag) cout << "Нет кратного элемента";

    delete_2d_arr(arr, n, m);
}