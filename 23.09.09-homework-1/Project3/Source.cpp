#include <iostream>

int main (int argc, char* argv[])
{
	long long a = 0;
	long long b = 0;

	std::cin >> a;

	b = (a / 10) * (a / 10 + 1) * 100 + 25;

	std::cout << b;

	return EXIT_SUCCESS;
}