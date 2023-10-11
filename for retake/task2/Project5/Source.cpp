#include <iostream>

int main(int argc, char** argv)
{
	int a = 0;
	std::cin >> a;

	for (int i = 0; i < a; ++i)
	{
		for (int j = 0; j < a; ++j)
		{
			std::cout << std::max(std::min(a - j, j + 1), std::min(a - i, i + 1));
		}
		std::cout << std::endl;
	}

	return EXIT_SUCCESS;
}