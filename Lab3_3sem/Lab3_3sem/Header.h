#include <iostream> // � ���� 16 �������

using namespace std;

class Complex {
    double x, y; // �������������� � ������ �����

public:
    void set(double a, double b) { // ���������� ����������� �����
        x = a;
        y = b;
    }

    void print() { // �������� ����������� �����
        cout << x << " + " << y << "i" << endl;
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

//int main()
//{
//    setlocale(LC_ALL, "Russian");
//    double x, y, re = 0.5;
//    Complex c1, c2, res;
//    cin >> x >> y;
//    c1.set(x, y);
//    cin >> x >> y;
//    c2.set(x, y);
//
//    c1.print();
//    c2.print();
//    res = c1 + c2;
//    cout << "��������\n";
//    res.print();
//    res = c1 + re;
//    cout << "�������� ���\n";
//    res.print();
//    res = c1 - c2;
//    cout << "���������\n";
//    res.print();
//    res = c1 * c2;
//    cout << "���������\n";
//    res.print();
//    cout << "������\n";
//    re = c1.module();
//    cout << re << "\n";
//    re = c2.module();
//    cout << re;
//    cin.get();
//}