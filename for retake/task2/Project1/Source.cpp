#include <iostream>

int main(int argc, char** argv)
{
	int a = 0;
	std::cin >> a;

	for (int i = 0; i < a; ++i)
	{
		for (int j = 1; j <= a; ++j)
		{
			std::cout << j;
		}
		std::cout << std::endl;
	}

	return EXIT_SUCCESS;
}