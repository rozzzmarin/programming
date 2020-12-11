#include <iostream>
#include <ctime>
#include <vector>
#include <cmath>
#include <string>

std::vector<double>BozoSort(std::vector<double>a, int n, bool y) {
	int r1, r2, ind = 0, check = 0;
	std::vector <double> b(n);
	while (1) {
		r1 = rand() % n;
		r2 = rand() % n;
		if (r1 != r2) {
			std::swap(a[r1], a[r2]);
			if (y) {
				for (int i = 0; i < n - 1; i++) {
					if (a[i] <= a[i + 1]) {
						ind++;
					}
					else {
						ind = 0;
						break;
					}
					if (ind == n - 1) {
						for (int i = 0; i < n; i++) {
							b[i] = a[i];
						}
						check = 1;
						break;
					}
				}
			}
			if (y == 0) {
				for (int i = 0; i < n - 1; i++) {
					if (a[i] >= a[i + 1]) {
						ind++;
					}
					else {
						ind = 0;
						break;
					}
					if (ind == n - 1) {
						for (int i = 0; i < n; i++) {
							b[i] = a[i];
						}
						check = 1;
						break;
					}
				}
			}
		}
		if (check == 1) {
			for (int i = 0; i < n; i++) {
				std::cout << b[i] << " ";
			}
			std::cout << "\n";
			return b;
			break;
		}
	}
}

std::vector<double>BozoSort(std::vector < std::vector < double>>a, int n, bool y) {
	int r1, r2, r3, r4, ind = 0, check = 0, c = 0;
	std::vector <double> b(n);
	while (1)
	{
		int f = sqrt(n);
		r1 = rand() % f;
		r2 = rand() % f;
		r3 = rand() % f;
		r4 = rand() % f;
		if (r1 != r3 || r2 != r4) {
			std::swap(a[r1][r2], a[r3][r4]);
			if (y) {
				for (int i = 0; i <= sqrt(n) - 1; i++) {
					for (int j = 0; j <= sqrt(n) - 1; j++) {
						if (j == sqrt(n) - 1) {
							if (i == sqrt(n) - 1) {
								if (ind == n - 1) {
									for (int i = 0; i < sqrt(n); i++) {
										for (int j = 0; j < sqrt(n); j++) {
											b[c] = a[i][j];
											c++;
										}
									}
									check = 1;
									break;
								}
								else {
									break;
								}
							}
							if (a[i][j] <= a[i + 1][0]) {
								ind++;
							}
							else {
								ind = 0;
								break;
							}
						}
						else {
							if (a[i][j] <= a[i][j + 1]) {
								ind++;
							}
							else {
								ind = 0;
								break;
							}
						}
					}
				}
			}
			if (y == 0) {
				for (int i = 0; i <= sqrt(n) - 1; i++) {
					for (int j = 0; j <= sqrt(n) - 1; j++) {
						if (j == sqrt(n) - 1) {
							if (i == sqrt(n) - 1) {
								if (ind == n - 1) {
									for (int i = 0; i < sqrt(n); i++) {
										for (int j = 0; j < sqrt(n); j++) {
											b[c] = a[i][j];
											c++;
										}
									}
									check = 1;
									break;
								}
								else {
									break;
								}
							}
							if (a[i][j] >= a[i + 1][0]) {
								ind++;
							}
							else {
								ind = 0;
								break;
							}
						}
						else {
							if (a[i][j] >= a[i][j + 1]) {
								ind++;
							}
							else {
								ind = 0;
								break;
							}
						}
					}
				}
			}
			if (check == 1) {
				for (int i = 0; i < n; i++) {
					std::cout << b[i] << " ";
				}
				std::cout << "\n";
				return b;
				break;
			}
		}
	}
}
std::vector<double>BozoSort(std::vector<double>a, bool y) {
	if (y == 1)return BozoSort(a, 3, y);
	else return BozoSort(a, 3, y);
}

int main() {
	setlocale(LC_ALL, "ru");
	srand(time(NULL));
	int n, a = 0, k;
	std::cout << "Введите количество элементов в массиве\n";
	std::cin >> n;
	std::vector <double> mas(n);
	std::vector < std::vector < double>> mas2(sqrt(n), std::vector<double>(sqrt(n)));
	std::cout << "Введите элементы массива\n";
	for (int i = 0; i < n; i++)
	{
		std::cin >> mas[i];
	}
	for (int i = 0; i < sqrt(n); i++)
	{
		for (int j = 0; j < sqrt(n); j++
			)
		{
			mas2[i][j] = mas[a];
			a++;
		}
	}
	std::cout << "Введите размер\n";
	std::cin >> k;
	std::vector<double> MAS(k);
	std::vector < std::vector < double>> MAS2(sqrt(k), std::vector<double>(sqrt(k)));
	std::cout << "Введите масив\n";
	char l[] = "99999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999";


	for (int i = 0; i < k; i++) {
		std::cin >> l;
		int number = 0;
		if (l[0] == '-') {
			for (int i = 1; i < strlen(l); i++) {
				int b = (int)l[i] - (int)'0';
				number = number * 10 + b;
			}
			number = -number;
		}
		else {
			for (int i = 0; i < strlen(l); i++) {
				int b = (int)l[i] - (int)'0';
				number = number * 10 + b;
			}
		}
		MAS[i] = number;
	}
	a = 0;
	for (int i = 0; i < sqrt(k); i++)
	{
		for (int j = 0; j < sqrt(k); j++)
		{
			MAS2[i][j] = MAS[a];
			a++;
		}
	}
	std::cout << "\n";
	BozoSort(mas, n, 1);
	BozoSort(mas, n, 0);
	BozoSort(mas2, n, 1);
	BozoSort(mas2, n, 0);
	BozoSort(mas, 1);
	BozoSort(mas, 0);
	BozoSort(MAS, k, 1);
	BozoSort(MAS, k, 0);
	BozoSort(MAS2, k, 1);
	BozoSort(MAS2, k, 0);
	BozoSort(MAS, 1);
	BozoSort(MAS, 0);
}