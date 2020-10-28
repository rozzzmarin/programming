#include <iostream>
#include <string>
using namespace std;

int div_wo_remainder(long value, int divisor) {
    return value / divisor;
}

int main() {
    setlocale(LC_ALL, "Russian");
    long n;
    int x = 1; 
    while (cout << "Введите число:\n" && !(cin >> n)) {
        cin.clear();
        string str;
        getline(cin, str);
        cout << "Пожалуйста, введите корректные данные.\n";
    }
    if (n > 1) {
        do {
            n = div_wo_remainder(n, 2);
            x += 1;
        } while (n != 1);
        cout << x;
    }
    else if (n == 1) {
        cout << "1\n";
    }
    else if (n == 0) {
        cout << "0\n";
    }
    else if (n < 0) {
        cout << "Пожалуйста, введите корректные данные.\n";
    }
}