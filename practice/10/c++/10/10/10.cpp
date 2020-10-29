#include <iostream>

using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	double s, l1, r1, l2, r2, x1, x2;
	cout << "Введите целое число s, границы диапазона s1, границы диапазона s2 через пробел:\n";
	cin >> s >> l1 >> r1 >> l2 >> r2;

	if ((l1 <= r1) && (l2 <= r2)) {
		if ((s <= (r1 + r2)) && (s >= (l1 + l2))) {
			x1 = l1;
			x2 = s - l1;
			if ((l2 <= x2) && (s <= x1 + r2)) {
				cout << x1 << " " << x2;
			}
			else if ((l2 <= x2) && (s >= x1 + r2)) {
				if (((l1 + abs(x2 - r2)) < r1) && ((r2 - abs(x2 - r2)) > l2)) {
					x1 = (l1 + abs(x2 - r2));
					x2 = s - x1;
					cout << x1 << " " << x2;
				}
				else {
					cout << "-1\n";
				}
			}
		}
		else {
			cout << "-1\n";
		}
	}
	else { cout << "Пожалуйста, введите корректные данные.\n"; }
}