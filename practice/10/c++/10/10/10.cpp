#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian"); 
	long long s, l1, r1, l2, r2;
	bool it_works = true;

	cout << "Введите целое число s, границы диапазона s1, границы диапазона s2 через пробел:\n";
	cin >> s >> l1 >> r1 >> l2 >> r2;

	int x1 = l1; int x2;

	if (x1 + r2 < s) {
		x2 = r2;

		if (s > r1 + x2) {
			cout << "Пожалуйста, введите корректные данные.\n";
			it_works = false;
		}
		else { x1 = s - r2; }
	}
	else {
		if (s < l1 + l2) {
			cout << "Пожалуйста, введите корректные данные.\n";
			it_works = false;
		}
		else {
			x2 = s - x1;
		}
	}

	if (it_works) {
		cout << "x1 = " << x1 << endl;
		cout << "x2 = " << x2 << endl;
	}
}