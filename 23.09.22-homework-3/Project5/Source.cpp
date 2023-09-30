#include <iostream>

int main(int argc, char* argv[])
{
	int k = 0;
	int itemp = 0;
	int res = 0;

	std::cin >> k;

	for (int i{ 1 }; i <= k; ++i)
	{
		int itemp = i;
		int divider = 0;

		while (itemp > 0)
		{
			divider = (divider * 10) + (itemp % 10);
			itemp /= 10;
		}

		if (divider == i)
		{
			++res;
		}
	}

	std::cout << res;
	
	return EXIT_SUCCESS;
}