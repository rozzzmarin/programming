#include <iostream>
#include <string>
#include <string_view>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int n, found = 0;
    string tick;
    cout << "Введите количество билетов:\n"; cin >> n;
    cout << "Введите номер билета/билетов:";
    for (int numcount = 1; numcount <= n; numcount++)
    {
        cin >> tick;
        if (tick[0] == 'a' && tick[4] == '5' && tick[5] == '5' && tick[6] == '6' && tick[7] == '6' && tick[8] == '1')
        {
            cout << tick << ' ';
        }
        else
        {
            found++;
        }
    }
    if (found == n)
    {
        cout << "-1";
    }
    return 0;
}