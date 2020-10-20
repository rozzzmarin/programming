#include <iostream>

int main() {
    using namespace std;
    setlocale(LC_ALL, "Russian");
    double a = 9.8;
    double x, x0, v0, t, d;
    cout << "Введите значения x0, v0, t: "; cin >> x0 >> v0 >> t;
    x = x0 + (v0 * t) - (a * t * t / 2);
    d = abs(x - x0);
    cout << "Объект преодолеет расстояние, равное " << d;
}
