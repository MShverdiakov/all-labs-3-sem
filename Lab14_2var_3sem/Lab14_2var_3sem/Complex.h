#include <iostream> // � ���� 14 �������
#include <conio.h>

#include "MyException.h"

using namespace std;

class Complex {
    double x, y; // �������������� � ������ �����

public:
    friend istream& operator >> (istream& in, Complex& i) { // ���������� �����
        in >> i.x >> i.y;
        return in;
    }

    friend ostream& operator << (ostream& out, Complex& i) { // ���������� ������
        out << i.x << " + i" << i.y << endl;
        return out;
    }

    void set(double a, double b) { // ���������� ����������� �����
        x = a;
        y = b;
    }

    void print() { // �������� ����������� �����
        cout << x << " + " << y << "i" << endl;
    }

    bool operator==(Complex i) { // ���������
        if ((x == i.x) && (y == i.y))
            return true;
        else
            return false;
    }

    Complex operator+(Complex x) { // ��������
        myException ex; ex.SetErrorNum(2); throw ex;
        Complex res;
        res.x = this->x + x.x;
        res.y = this->y + x.y;
        return res;
    }

    Complex operator+(double x) { // ��������
        myException ex; ex.SetErrorNum(2); throw ex;
        Complex res;
        res.x = this->x + x;
        res.y = this->y;
        return res;
    }

    Complex operator-(Complex x) { // ��������
        Complex res;
        res.x = this->x - x.x;
        res.y = this->y - x.y;
        return res;
    }

    Complex operator-(double x) { // ��������
        Complex res;
        res.x = this->x - x;
        res.y = this->y;
        return res;
    }

    Complex operator*(Complex x) { // ��������
        Complex res;
        res.x = this->x * x.x - this->y * x.y;
        res.y = this->x * x.y + this->y * x.x;
        return res;
    }

    double get_x() {		// ������� ���������� ����
        return x;
    }

    double get_y() {
        return y;
    }

    bool check() {   // �������� ������������ �� ������ � �������������� ����� �����
        if ((this->x < 0) && (this->y < 0))
            return true;
        else
            return false;
    }

    double module() {       // ������ ������
        double res;
        res = sqrt(x * x + y * y);
        return res;
    }
};