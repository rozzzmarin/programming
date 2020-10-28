#include <iostream>

using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	double s, l1, r1, l2, r2, x1, x2;
	cout << "Введите целое число s, границы диапазона s1, границы диапазона s2 (l2, r2) через пробел:\n";
	cin >> s >> l1 >> r1 >> l2 >> r2;
	if (l1 <= r1 && l2 <= r2) {
		if ((l1 + l2) < s) {

		}
		if ((x1 + x2) == s) {
			cout << x1 << x2;
		}
		else if ((x1 + x2) != s) {
			cout << "-1\n";
		}
	}
	else cout << "Некорректный ввод.\n";
}