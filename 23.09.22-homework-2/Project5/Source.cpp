#include <iostream>

int main()
{

	int n = 0;
	int m = 0;

	std::cin >> n;

	m = n % 100;

	if (m <= 10 || m >= 20)
	{
		if ((n % 10) == 0 || ((n % 10) >= 5 && (n % 10) <= 9))
		{
			std::cout << n << " bochek";
		}
		else if ((n % 10) == 1)
		{
			std::cout << n << " bochka";
		}
		else
		{
			std::cout << n << " bochki";
		}
	}
	else
	{
		std::cout << n << " bochek";
	}
	return EXIT_SUCCESS;
}