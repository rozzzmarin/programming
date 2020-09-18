#include <iostream>

int main() {
	setlocale(LC_ALL, "Russian");
	using namespace std;

	int a, b, t;
	cout << "int(a), int(b): "; cin >> a >> b;
	cout << a << " " << b << " с использованием дополнительной переменной: ";
	t = a;
	a = b;
	b = t;
	cout << "int(a) = " << a << ", " << "int(b) = " << b << endl;
	cout << a << " " << b << " без использования дополнительной переменной: ";
	a = a + b;
	b = a - b;
	a = a - b;
	cout << "int(a) = " << a << ", " << "int(b) = " << b;
}