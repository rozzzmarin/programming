#include <iostream>
using namespace std;

int main(){
	setlocale (LC_ALL, "Russian");
	double a, b;
	char mathsymbol;
	cout << "Введите первое число, знак арифметической операции и второе число(через пробел):\n";
	cin >> a >> mathsymbol >> b;
	switch (mathsymbol) {
	case '+':
		cout << "Сумма чисел " << a << " и " << b << " равна " << (a + b);
		break;
	case '-':
		cout << "Разность чисел " << a << " и " << b << " равна " << (a - b);
		break;
	case '*':
		cout << "Произведение чисел " << a << " и " << b << " равно " << (a * b);
		break;
	case '/':
		if (b != 0) {
			cout << "Частное чисел " << a << " и " << b << " равно " << (a / b);
			break;
		}
		else {
			cout << "Недопустимое действие: попытка деления на нуль.\n";
			break;
		}
	default:
		cout << "Вводные данные некорректны или арифметический оператор не поддерживается.\n";
		break;
	}
}