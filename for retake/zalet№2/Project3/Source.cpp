#include <iostream>

int main(int argc, char** argv)
{
	int n = 0;
	std::cin >> n;

	for (n; n != 0; n = n / 10)
	{
		std::cout << n % 10;
	}

	return EXIT_SUCCESS;
}