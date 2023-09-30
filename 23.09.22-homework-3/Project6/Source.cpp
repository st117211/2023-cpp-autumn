#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int f1 = 0;
	int f2 = 1;
	int res = 0;

	std::cin >> n;

	if (n > 1)
	{
		for (int i{ 1 }; i < n; ++i)
		{
			res = f1 + f2;
			
			f1 = f2;
			f2 = res;
		}
	}
	else if (n == 1)
	{
		std::cout << "1";

		return EXIT_SUCCESS;
	}
	else if (n == 0)
	{
		std::cout << "0";

		return EXIT_SUCCESS;
	}

	std::cout << res;

	return EXIT_SUCCESS;
}