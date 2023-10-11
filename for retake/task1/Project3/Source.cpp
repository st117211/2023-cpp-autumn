#include <iostream>

int main(int argc, char** argv)
{
	int res = 0;
	int c = 0;
	short a = 0;
	short b = 0;
	std::cin >> a;
	std::cin >> b;

	res = a ^ b;
	c = (a & b) << 1;
	while (c)
	{
		int i = res;
		res = res ^ c;
		c = (i & c) << 1;
	}

	std::cout << res;

	return EXIT_SUCCESS;
}