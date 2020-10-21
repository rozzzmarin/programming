#include <iostream>

int main() {
    setlocale(LC_ALL, "Russian");
    using namespace std;
    double a, b, c, d, x1, x2;

    while (true) {
        cout << "а = "; cin >> a;
        cout << "b = "; cin >> b;
        cout << "c = "; cin >> c;
        if (a == 0) {
            if (b != 0 && c != 0) {
                x1 = -(c / b); cout << "x = " << x1;
            }
            else if (b != 0 && c == 0) {
                x1 = (0 / b); cout << "x = " << x1;
            }
            else {
                if (b == 0 && c != 0) cout << "Нет корней.";
                if (b == 0 && c == 0) cout << "Любое х является корнем.";
            }
        }
        if (a != 0) {
            if (b != 0 && c != 0) {
                d = (b * b) - (4 * a * c);
                if (d > 0) {
                    x1 = (-b + sqrt(d)) / (2 * a); cout << "x1 = " << x1;
                    x2 = (-b - sqrt(d)) / (2 * a); cout << "x2 = " << x2;
                }
                else {
                    if (d == 0) {
                        x1 = -b / (2 * a); cout << "x = " << x1;
                    }
                    if (d < 0) { cout << "Уравнение имеет не вещественные корни."; }
                }
            }
            else if (b != 0 && c == 0) {
                x1 = 0; x2 = -b / a;
                cout << "x1 = " << x1 << ", x2 = " << x2;
            }
            else if (b == 0) {
                if (c == 0) {
                    x1 = sqrt(0 / a);  cout << "x =" << x1;
                }
                if (c != 0) {
                    x1 = sqrt(c); x2 = -(sqrt(c));
                    cout << "x1 = " << x1 << ", x2 = " << x2;
                }
            }
        }
    }
}