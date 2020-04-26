#include <iostream>
int main()
{
	int t, n;
	std::cin >> t;
	for (int i = 0; i < t; ++i)
	{
		std::cin >> n;
		int *tab = new int[n];
		for (int j = 0; j < n; ++j)
		{
			std::cin >> tab[j];
		}
		for (int x = n - 1; x> -1; --x)
		{
			std::cout << tab[x] << " ";
		}
		delete[] tab;
		std::cout << std::endl;
	}
}
//bez wskazików
/*#include <iostream>
int main()
{
	int t, n, tab[100];
	std::cin >> t;
	for (int i = 0; i < t; ++i)
	{
		std::cin >> n;
		for (int j = 0; j < n; ++j)
		{
			std::cin >> tab[j];
		}
		for (int j = 0; j< n; ++j)
		{
			std::cout << tab[n - (j + 1)] << " ";
		}
		std::cout << std::endl;
	}
}*/
