#include <iostream>

int main(int argc, char* argv[])
{
	int x = 0;
	int i = 1;
	int res = 0;

	std::cin >> x;

	for (i; i * i < x; ++i)
	{
		if (x % i == 0)
		{
			++res;
		}
	}

	res *= 2;

	if (i * i == x)
	{
		++res;
	}

	std::cout << res;

	return EXIT_SUCCESS;
}