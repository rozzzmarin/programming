#include<iostream>
#include<vector>
#include<locale>
#include <algorithm>

std::vector <int> atom(std::vector <int> m2, int n)
{
	sort(m2.begin(), m2.end(), std::greater<int>());
	if ((m2.size() < 5))
	{
		for (int i = 0; i < n; i++)
		{
			if (i < 5)
			{
				std::cout << m2[i] << ' ';
			}
			else
			{
				break;
			}
		}
	}
	else
	{
		for (int i = m2.size() - 5; i < m2.size(); i++)
		{
			std::cout << m2[i] << ' ';
		}
	}
	std::cout << "\n";
	return m2;
}
int main()
{
	setlocale(LC_ALL, "ru");
	int n;
	std::cout << "Введите количество сигналов\n";
	std::cin >> n;
	std::cout << "Введите сигналы\n";
	std::vector <int> m1(n);
	std::vector <int> m2(0);
	for (int i = 0; i < n; i++)
	{
		std::cin >> m1[i];
	}
	for (int i = 0; i < m1.size(); i++)
	{
		m2.push_back(m1[i]);
		int n = m2.size();
		atom(m2, n);
	}
	return 0;
}