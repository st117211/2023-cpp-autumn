#include <iostream>

int main(int argc, char* argv[])
{
	int yr = 0;

	std::cin >> yr;

	if (yr % 4 == 0 && yr % 100 != 0 || yr % 400 == 0)
	{
		std::cout << "YES" << std::endl;
	}
	else
	{
		std::cout << "NO" << std::endl;
	}

	return EXIT_SUCCESS;
}