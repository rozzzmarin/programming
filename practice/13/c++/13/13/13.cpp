#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int n;
    while (cout << "Введите число, чтобы проверить, простое ли оно:\n" && !(cin >> n)) {
        cin.clear();
        string str;
        getline(cin, str);
        cout << "Пожалуйста, введите корректные данные.\n";
    }
    if (n >= 2 && n <= pow(10, 9)) {
        if (n == 2) {
            cout << "Простое\n";
        }
        for (int m = 2; m < n; m++) {
            if (n % m != 0) {
                cout << "Простое\n";
                break;
            }
            else {
                cout << "Составное\n";
                break;
            }
        }
    }
    else cout << "Пожалуйста, введите корректные данные.\n";
}
