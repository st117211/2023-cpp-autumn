#include <iostream>

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	int c = 0;
	int p = 0;

	std::cin >> a;
	std::cin >> b;
	std::cin >> c;

	if (a > b)
	{
		p = a;
		a = b;
		b = p;
	}
	if (b > c)
	{
		p = b;
		b = c;
		c = p;
	}
	if (a > b)
	{
		p = a;
		a = b;
		b = p;
	}

	std::cout << a << " " << b << " " << c;

	return EXIT_SUCCESS;
}