#include <iostream> // � ���� 16 �������
#include <conio.h>

using namespace std;

class Complex {
    int x, y; // �������������� � ������ �����

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

    int operator%(Complex i) {
        if ((i.x == 0) && (i.y == 0)) {
            cout << "ERROR: division by zero";
            exit;
        }
        if ((x % i.x == 0) && (y % i.y == 0))
            return 0;
        else
            return 1;
    }

    bool operator==(Complex i) { // ���������
        if ((x == i.x) && (y == i.y))
            return true;
        else
            return false;
    }

    Complex operator+(Complex x) { // ��������
        Complex res;
        res.x = this->x + x.x;
        res.y = this->y + x.y;
        return res;
    }

    Complex operator+(double x) { // ��������
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