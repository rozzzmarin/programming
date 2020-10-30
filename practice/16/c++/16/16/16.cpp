#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int n, found = 0;
    string tick;
    cout << "Введите количество билетов:\n"; cin >> n;
    cout << "Введите номер билета/билетов:\n";
    for (int numcount = 1; numcount <= n; numcount++) {
        cin >> tick;
        if (tick[0] == 'a' && tick[4] == '5' && tick[5] == '5' && tick[6] == '6' && tick[7] == '6' && tick[8] == '1') {
            cout << tick << ' ';
        }
        else {
            found += 1;
        }
    }
    if (found == n) {
        cout << "-1";
    }
}