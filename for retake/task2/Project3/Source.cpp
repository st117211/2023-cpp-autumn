#include <iostream>
#include <math.h>

int main(int argc, char** argv)
{
	int a = 0;
	std::cin >> a;

	for (int i = 0; i < a; ++i)
	{
		for (int j = 4; j <= 0; --j)
		{
			std::cout << abs(5 - i + j);
		}
		std::cout << std::endl;
	}

	return EXIT_SUCCESS;
}