#include <iostream> // у меня 14 вариант
#include <conio.h>

#include "MyException.h"

using namespace std;

class Complex {
    double x, y; // действительная и мнимая часть

public:
    friend istream& operator >> (istream& in, Complex& i) { // перегрузка ввода
        in >> i.x >> i.y;
        return in;
    }

    friend ostream& operator << (ostream& out, Complex& i) { // перегрузка вывода
        out << i.x << " + i" << i.y << endl;
        return out;
    }

    void set(double a, double b) { // установить комплексное число
        x = a;
        y = b;
    }

    void print() { // показать комплексное число
        cout << x << " + " << y << "i" << endl;
    }

    bool operator==(Complex i) { // сравнение
        if ((x == i.x) && (y == i.y))
            return true;
        else
            return false;
    }

    Complex operator+(Complex x) { // сложение
        myException ex; ex.SetErrorNum(2); throw ex;
        Complex res;
        res.x = this->x + x.x;
        res.y = this->y + x.y;
        return res;
    }

    Complex operator+(double x) { // сложение
        myException ex; ex.SetErrorNum(2); throw ex;
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

    double get_x() {		// функция ссылочного типа
        return x;
    }

    double get_y() {
        return y;
    }

    bool check() {   // проверка отрицательны ли мнимая и действительная части числа
        if ((this->x < 0) && (this->y < 0))
            return true;
        else
            return false;
    }

    double module() {       // взятие модуля
        double res;
        res = sqrt(x * x + y * y);
        return res;
    }
};