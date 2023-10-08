#include <iostream>

int main(int argc, char* argv[])
{
	int x = 0;
	int x1 = 0;
	int num = 0;

	std::cin >> x;
	
	while (x % 10 == 0)
	{
		x /= 10;
	}

	for (int i{ 10 }; x != 0; i * 10)
	{
		std::cout << x % i;
		x /= i;
	}

	return EXIT_SUCCESS;
}