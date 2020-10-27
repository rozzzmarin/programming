#include <iostream>
using namespace std;

int main(){
	setlocale(LC_ALL, "Russian");
	int h1, h2, m1, m2, time1, time2;
	char sep;
	cout << "Введите время приходa первого человека по примеру: часы:минуты\n"; cin >> h1 >> sep >> m1;
	cout << "Введите время приходa второго человека по примеру: часы:минуты\n";  cin >> h2 >> sep >> m2;
	switch (sep) {
		if (((h1 > 23) || (h1 < 0)) || ((m1 > 59) || (m1 < 0))) {
			cout << "Некорректный формат ввода времени.\n";
			break;
		}
		if (((h2 > 23) || (h2 < 0)) || ((m2 > 59) || (m2 < 0))) {
			cout << "Некорректный формат ввода времени.\n";
			break;
		}
	case ':':
		time1 = (h1 * 60) + m1;
		time2 = (h2 * 60) + m2;
		if (abs(time1 - time2) <= 15) {
			cout << "Встреча состоится\n";
			break;
		}
		else {
			cout << "Некорректный формат ввода времени.\n";
			break;
		}
	default:
		cout << "Некорректный формат ввода времени.\n";
		break;
	}
}