#include<iostream>
#include<math.h>

int main (int argc, char* argv[])
{
	int a0 = 1;
	int aN = 0;
	int d = 0;
	int n = 0;
	int sum = 0;

	std::cin >> aN;

	d = (aN + 1) / abs(aN + 1);
	n = abs((aN - a0) / d) + 1;
	sum = (a0 + aN) * n / 2;

	std::cout << sum << std::endl;

	return EXIT_SUCCESS;

}