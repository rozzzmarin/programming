#include <iostream>

int main() {
    using namespace std;
    setlocale(LC_ALL, "Russian");
    double S, p, a, b, c, xa, ya, xb, yb, xc, yc, method;
    while (cout << "Выберите способ ввода параметров треугольника:" << endl << "1. Длины сторон" << endl << "2. Координаты вершин" << endl && !(cin >> method) && !(method == 1) && !(method == 1)) {
        cin.clear();
        cout << "Входные данные неверны. Попробуйте ещё раз.";
        getline
    }
    if (method == 1) {
        cout << "Введите длину стороны а: "; cin >> a; cout << "Введите длину стороны b: "; cin >> b; cout << "Введите длину стороны c: "; cin >> c;
        p = (a + b + c) / 2;
        S = sqrt(p * (p - a) * (p - b) * (p - c));
        cout << "S = " << S;
    }
    if (method == 2) {
        cout << "Введите координаты веришны А (через пробел): "; cin >> xa >> ya; cout << "Введите координаты вершины B (через пробел): "; cin >> xb >> yb; cout << "Введите координаты веришн С (через пробел): "; cin >> xc >> yc;
        a = sqrt((pow((xa - ya), 2) - (pow((xb - yb), 2))));
        b = sqrt((pow((xb - yb), 2) - (pow((xc - yc), 2))));
        c = sqrt((pow((xc - yc), 2) - (pow((xa - ya), 2))));
        p = (a + b + c) / 2;
        S = sqrt(p * (p - a) * (p - b) * (p - c));
        cout << "S = " << S;
    }
}