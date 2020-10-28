#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    double number, numpow, numberes = 1;
    while (cout << "Введите число, степень которого хотите найти:\n" && !(cin >> number)) {
        cin.clear();
        string str;
        getline(cin, str);
        cout << "Пожалуйста, введите корректные данные.\n";
    }
    while (cout << "Введите степень, в которую хотите возвести число:\n" && !(cin >> numpow)) {
        cin.clear();
        string str;
        getline(cin, str);
        cout << "Пожалуйста, введите корректные данные.\n";
    }
    if (number == 0) {
        cout << "Результат возведения в степень равен:\n1.";
    }
    else if (numpow > 0) {
        while (numpow != 0) {
            numberes *= number;
            numpow -= 1;
        }
        cout << "Результат возведения в степень равен:\n" << numberes;
    }
    else if (numpow < 0) {
        while (numpow != 0) {
            numberes *= number;
            numpow += 1;
        }
        cout << "Результат возведения в степень равен:\n" << 1/numberes;
    }
}
