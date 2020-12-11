#include<vector>
#include <iostream>
#include <algorithm>
#include <map>

using namespace std;

void print_factorization(unsigned int n) {
	map <unsigned int, unsigned int> slv;
	int div = 2;
	while (n > 1) {
		for (unsigned int i = 2; i <= n; i++) {
			if (!(n % i)) {
				n /= i;

				slv[i] = slv.count(i) ? slv[i] + 1 : 1;
				break;
			}
		}
	}
	cout << "1";
	for (auto r : slv) {
		if (r.second > 1) {
			cout << "*" << r.first << "^" << r.second;
		}
		else {
			cout << "*" << r.first;
		}
	}
}
int main() {
	setlocale(LC_ALL, "Russian");
	unsigned int n;
	cout << "Введите натуральное число:\n"; cin >> n;
	print_factorization(n);
}