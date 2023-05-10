#include "Header.h"


int main() {
    int key1, key2, key3;
    double x1, y1;
    SetConsoleOutputCP(1251);
    Factory ob1, ob2;
    do {
        cout << endl << "1 - создать фигуру" << endl << "2 - показать данные фигуры;"
            << endl << "3 - сместить фигуру" << endl <<
            "4 - Проверить пересечение:" << endl << "5 - Выход" << endl <<
            "Ваш выбор?" << endl;
        cin >> key1;
        switch (key1)
        {
        case 1:
            cout << "Первая или вторая фигура?\n";
            cin >> key2;
            switch (key2) {
            case 1:
                cout << "Треугольник - 1, Прямоугольник - 2\n";
                cin >> key3;
                if (key3 == 1) ob1.make(3);
                else ob1.make(2);
                break;
            case 2:
                cout << "Треугольник - 1, Прямоугольник - 2\n";
                cin >> key3;
                if (key3 == 1) ob2.make(3);
                else ob2.make(2);
                break;
            }
            break;
        case 2:
            cout << "Первая или вторая фигура?\n";
            cin >> key2;
            switch (key2) {
            case 1:
                ob1.show();
                break;
            case 2:
                ob2.show();
                break;
            }
            break;
        case 3:
            cout << "Первая или вторая фигура?\n";
            cin >> key2;
            cout << "Вектор смещения\n";
            cin >> x1 >> y1;
            switch (key2) {
            case 1:
                ob1.move(x1, y1);
                break;
            case 2:
                ob2.move(x1, y1);
                break;
            }
            break;
        case 4:
            ob1.IsIntersect(ob1, ob2);
            break;
        case 5: return 0;

        default:
            cout << "нет такой команды" << endl;
        }
    } while (key1 != 5);
}