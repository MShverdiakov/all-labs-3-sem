#include <iostream> 
#include <windows.h> 

using namespace std;

class Dots {
public:
    double* x;
    double* y;
};

class Triangle : public Dots {
public:
    double area_tr();
};


double Triangle::area_tr() {
    return 0.5 * (x[1] * (y[2] - y[3]) + x[2] * (y[3] - y[1]) + x[3] * (y[1] - y[2]));
}


class Rectangle_ : public Dots {

public:
    Dots a, b;
    double area_rt() {
        return (sqrt(pow(x[2] - x[1], 2) + pow(y[2] - y[1], 2)) * sqrt(pow(x[3] - x[2], 2) + pow(y[3] - y[2], 2)));
    }
};

bool LineSegmentsIntersection(double x1, double y1, double x2, double y2,
    double x3, double y3, double x4, double y4)
{
    double _1 = x1 - x2;
    double _2 = x1 - x3;
    double _3 = x3 - x4;
    double _4 = y1 - y2;
    double _5 = y1 - y3;
    double _6 = y3 - y4;
    double d = _1 * _6 - _4 * _3;
    double t = (_2 * _6 - _5 * _3) / d;
    double u = (_2 * _4 - _5 * _1) / d;
    return t >= 0. && t <= 1. && u >= 0. && u <= 1.;
}

class Factory : public Triangle, public Rectangle_ {
    double* x;
    double* y;
    int n;
    string ind;
public:
    void make(int _n) {
        n = _n;
        x = new double[n];
        y = new double[n];
        for (int i = 0; i < n; i++) {
            cout << "Введите " << n << " вершины в формате x y" << endl;
            cin >> x[i];
            cin >> y[i];
        }
        cout << "Введите индетификатор\n";
        cin >> ind;

    }

    void show() {
        cout << endl << "Координаты вершин " << endl << "x y" << endl;
        for (int i = 0; i < n; i++) {
            cout << x[i] << " " << y[i] << endl;
        }
        cout << "Индетификатор - " << ind << endl;
    }

    void move(double _X, double _Y) {
        for (int i = 0; i < n; i++) {
            x[i] = x[i] + _X;
            y[i] = y[i] + _Y;
        }
    }

    bool IsIntersect(Factory& ob1, Factory& ob2) {
        bool res = false;
        for (int i1 = 0; i1 < ob1.n; i1++)
            for (int j1 = 0; j1 < i1; j1++)
                for (int i2 = 0; i2 < ob2.n; i2++)
                    for (int j2 = 0; j2 < i2; j2++)
                        res += LineSegmentsIntersection(ob1.x[i1], ob1.y[i1], ob1.x[j1], ob1.y[j1], ob2.x[i2], ob2.y[i2],
                            ob2.x[j2], ob2.y[j2]);
        if (res)
            cout << "\nпересекаются";
        else
            cout << "\nне пересекаются";
        return res;
    }
};