#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int count = 0;

	std::cin >> n;

	for (int i{ 1 }; count < n; ++i)
	{
		for (int a{ 1 }; a <= i && count < n; ++a)
		{
			std::cout << i << " ";
			++count;
		}
	}

	return EXIT_SUCCESS;
}