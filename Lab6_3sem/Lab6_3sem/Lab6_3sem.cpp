#include "Header.h"
#include <algorithm>

int main()
{
    setlocale(LC_ALL, "Russian");
    int m;
    cin >> m;
    matr a(m, m);
    a.input();

    a.factor = 2;
    a.multiplication();
    cout << "\nумноженная на " << a.factor << endl;
    a.print();
    
    matr b(m, m);
    b.input();
    matr::factor = 3;
    b.multiplication();
    cout << "\nумноженная на " << matr::factor << endl;
    b.print();


    cout << "\nчисло созданных матриц = " << matr::get_counter();
}