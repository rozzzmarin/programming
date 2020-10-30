#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	const int places = 37;
	int incount = 0, n = 0, black = 0, red = 0;
	int redarr[18] = { 1, 3, 5, 7, 9, 12, 14, 16, 18, 19, 21, 23, 25, 27, 30, 32, 34, 36 };
	int whole[places];
	for (int i = 0; i < places; i++) {
		whole[i] = 0;
	}
	while (true) {
		cout << "Введите номер:\n"; cin >> incount;
		if (incount >= 0) {
			whole[incount] += 1;
			for (int i = 0; i <= 18; i++) {
				if (incount == redarr[i]) {
					red += 1;
					break;
				}
				else if (i == 17) {
					black += 1;
					break;
				}
			}
		}
		else {
			break;
		}
		for (int i = 0; i < places; i++) {
			if (whole[i] > n) {
				n = whole[i];
			}
		}
		for (int i = 0; i < places; i++) {
			if (whole[i] == n) {
				cout << i << ' ';
			}
		}
		cout << endl;
		for (int i = 0; i < places; i++) {
			if (whole[i] == 0) {
				cout << i << ' ';
			}
		}
		cout << endl << red << ' ' << black << endl;
	}
}