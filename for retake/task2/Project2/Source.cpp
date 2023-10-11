#include <iostream>

int main(int argc, char** argv)
{
	int a = 0;
	std::cin >> a;

	for (int i = 1; i <= a; ++i)
	{
		for (int j = 1; j <= a; ++j)
		{
			std::cout << i;
		}
		std::cout << std::endl;
	}

	return EXIT_SUCCESS;
}