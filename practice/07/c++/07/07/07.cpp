#include <iostream>
#include <string>

int main() {
    using namespace std;
    setlocale(LC_ALL, "Russian");
    double S, p, a, b, c, xa, ya, xb, yb, xc, yc;
    int method;
    cout << "Выберите способ ввода параметров треугольника:" << endl << "1. Длины сторон" << endl << "2. Координаты вершин \n";
    cin >> method;
    switch (method) {
    case 1:
        cout << "Введите длину стороны а: "; cin >> a;
        cout << "Введите длину стороны b: "; cin >> b;
        cout << "Введите длину стороны c: "; cin >> c;
        if ((a < (b + c)) && (b < (a + c)) && (c < (b + a))) {
            p = (a + b + c) / 2;
            S = sqrt(p * (p - a) * (p - b) * (p - c));
            cout << "S = " << S;
        }
        else { cout << "Существование такого треугольника невозможно.\n"; }
        break;
    case 2:
        cout << "Введите координаты веришны А (через пробел): "; cin >> xa >> ya;
        cout << "Введите координаты вершины B (через пробел): "; cin >> xb >> yb;
        cout << "Введите координаты веришны С (через пробел): "; cin >> xc >> yc;
        a = sqrt((pow((xb - xa), 2) + (pow((yb - ya), 2))));
        b = sqrt((pow((xc - xb), 2) + (pow((yc - yb), 2))));
        c = sqrt((pow((xc - xa), 2) + (pow((yc - ya), 2))));
        if ((a < (b + c)) && (b < (a + c)) && (c < (b + a))) {
            p = (a + b + c) / 2;
            S = sqrt(p * (p - a) * (p - b) * (p - c));
            cout << "S = " << S;
        }
        else { cout << "Существование такого треугольника невозможно.\n"; }
        break;
    default:
        cout << "Пожалуйста, введите корректные данные.\n";
        break;
    }
    
}

