#include <iostream>
#include <ctime>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int n, guess, repeat;
    do {
        srand(time(0));
        n = rand() % 101;
        cout << "Угадайте случайное загаданное число (от 0 до 100):\n";
        for (double attempt = 1; attempt <= 5; attempt++) {
            cin >> guess;
            if (guess == n) {
                cout << "Поздравляю! Вы угадали\n";
                break;
            }
            else {
                if (attempt == 5) {
                    cout << "Вы проиграли. Было загадано: " << n << endl;
                    break;
                }
                else {
                    if (guess < n) {
                        cout << "Загаданное число больше\n";
                    }
                    else if (guess > n) {
                        cout << "Загаданное число меньше\n";
                    }
                }
            }
        }
        cout << "Хотите начать сначала? (1 - ДА )\n"; cin >> repeat;
    } while (repeat == 1);
    return 0;
}