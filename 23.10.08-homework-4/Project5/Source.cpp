#include <iostream>
#include <cstdlib>

int main(int argc, char** argv)
{
	int n = 0;
	std::cin >> n;

	int* a = (int*)malloc(sizeof(int) * n);

	for (int i = 0; i < n; ++i)
	{
		int b = 0;
		std::cin >> b;

		*(a + i) = b;
	}

	for (int i = 0; i < n; ++i)
	{
		std::cout << *(a + n - 1 - i) << " ";
	}

	free(a);

	return EXIT_SUCCESS;
}
