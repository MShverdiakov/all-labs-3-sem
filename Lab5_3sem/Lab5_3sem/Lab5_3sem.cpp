#include "Header.h"
#include <algorithm>

int main()
{
    setlocale(LC_ALL, "Russian");
    int m;
    cin >> m;
    matr a(m, m);

    int info;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            cin >> info;
            a.elem(i, j) = info;
        }
    }

    int cnt = 0;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < i; j++) {
            if (a.elem(i, j) < 0 && a.elem(i, j) > (-1) * a.elem(i, i)) cnt++;
        }
    }
    cout << "количество отрицательных элементов под главной диагональю, которые по абсолютной величине больше соответствующего элемента на главной диагонали\n" << cnt;

    int *v = new int [m];
    for (int i = 0; i < m; i++) {
        v[i] = a.elem(i, m - i - 1);
    }
    sort(v, v + m, greater<int>());
    for (int i = 0; i < m; i++) {
        a.elem(i, m - i - 1) = v[i];
    }
    cout << "\nsorted matrix\n";
    a.print();
}