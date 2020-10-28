#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    long long int f = 1, n, n1 = 1;
    while (cout << "Введите число, факториал которого хотите получить:\n" && !(cin >> n)) {
        cin.clear();
        string str;
        getline(cin, str);
        cout << "Пожалуйста, введите корректные данные.\n";
    }
    while (n1 <= n) {
        f *= n1;
        n1 += 1;
    }
    cout << f;
}
