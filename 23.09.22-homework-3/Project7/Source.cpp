#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int res = 1;
	int degree = 2;

	std::cin >> n;

	if (n < 2)
	{
		std::cout << "0";
	}
	else if (n == 2)
	{
		std::cout << "1";

	}
	else
	{
		for (int i{ 0 }; degree < n; ++res)
		{
			degree *= 2;
		}

		std::cout << res;
	}
	
	return EXIT_SUCCESS;
}