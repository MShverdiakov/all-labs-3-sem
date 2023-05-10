#include <iostream>

using namespace std;

struct Complex {
    double x, y; // действительная и мнимая часть
};

typedef struct Complex cmx;

void set(double x, double y, cmx* c) { // установить комплексное число
    c->x = x;
    c->y = y;
}

void show(cmx x) { // показать комплексное число
    std::cout << x.x << " + " << x.y << "i" << std::endl;
}

cmx operator + (cmx x, cmx y) { // сложение
    cmx res;
    res.x = x.x + y.x;
    res.y = x.y + y.y;
    return res;
 };

cmx operator + (cmx x, double re) { // сложение
    cmx res;
    res.x = x.x + re;
    res.y = x.y;
    return res;
};

cmx operator - (cmx x, cmx y) { // сложение
    cmx res;
    res.x = x.x - y.x;
    res.y = x.y - y.y;
    return res;
};

cmx operator * (cmx x, cmx y) { // сложение
    cmx res;
    res.x = x.x * y.x - x.y * y.y;
    res.y = x.x * y.y + x.y * y.x;
    return res;
 };

cmx operator | (cmx *res, cmx x) { // взятие модуля TODO
    res->x = sqrt(x.x * x.x + x.y * x.y);
    res->y = 0;
    return *res;
};

int main()
{
    setlocale(LC_ALL, "Russian");
    double x, y, re = 0.5;
    cmx c1, c2, res;
    std::cin >> x >> y;
    set(x, y, &c1);
    std::cin >> x >> y;
    set(x, y, &c2);

    show(c1);
    show(c2);
    res = c1 + c2;
    std::cout << "сложение\n";
    show(res);
    res = c1 + re;
    std::cout << "сложение вещ\n";
    show(res);
    res = c1 - c2;
    std::cout << "вычитание\n";
    show(res);
    res = c1 * c2;
    std::cout << "умножение\n";
    show(res);
    std::cout << "модуль\n";
    show(&res | c1);
    show(&res | c2);
    cin.get();
}