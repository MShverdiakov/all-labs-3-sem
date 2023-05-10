#include <iostream> // у меня 16 вариант

using namespace std;

class Complex {
    double x, y; // действительная и мнимая часть

public:
    void set(double a, double b) { // установить комплексное число
        x = a;
        y = b;
    }

    void print() { // показать комплексное число
        cout << x << " + " << y << "i" << endl;
    }

    Complex operator+(Complex x) { // сложение
        Complex res;
        res.x = this->x + x.x;
        res.y = this->y + x.y;
        return res;
    }

    Complex operator+(double x) { // сложение
        Complex res;
        res.x = this->x + x;
        res.y = this->y;
        return res;
    }

    Complex operator-(Complex x) { // сложение
        Complex res;
        res.x = this->x - x.x;
        res.y = this->y - x.y;
        return res;
    }

    Complex operator-(double x) { // сложение
        Complex res;
        res.x = this->x - x;
        res.y = this->y;
        return res;
    }

    Complex operator*(Complex x) { // сложение
        Complex res;
        res.x = this->x * x.x - this->y * x.y;
        res.y = this->x * x.y + this->y * x.x;
        return res;
    }

    double module() {
        double res;
        res = sqrt(x * x + y * y);
        return res;
    }
};

int main()
{
    setlocale(LC_ALL, "Russian");
    double x, y, re = 0.5;
    Complex c1, c2, res;
    cin >> x >> y;
    c1.set(x, y);
    cin >> x >> y;
    c2.set(x, y);

    c1.print();
    c2.print();
    res = c1 + c2;
    cout << "сложение\n";
    res.print();
    res = c1 + re;
    cout << "сложение вещ\n";
    res.print();
    res = c1 - c2;
    cout << "вычитание\n";
    res.print();
    res = c1 * c2;
    cout << "умножение\n";
    res.print();
    cout << "модуль\n";
    re = c1.module();
    cout << re << "\n";
    re = c2.module();
    cout << re;
    cin.get();
}