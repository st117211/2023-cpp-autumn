#include <iostream>

int main(int argc, char** argv)
{
	int a = 0;
	std::cin >> a;

	for (int i = 0; i < a; ++i)
	{
		for (int j = 0; j < a; ++j)
		{
			std::cout << 2 * a - i - j - 1;
		}
		std::cout << std::endl;
	}

	return EXIT_SUCCESS;
}