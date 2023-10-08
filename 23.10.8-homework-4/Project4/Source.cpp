#include <iostream>
#include <cstdlib>

int main(int argc, char** argv)
{
	int max = 0;
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
		if (*(a + i) > max)
		{
			max = *(a + i);
		}
	}
	free(a);

	std::cout << max;

	return EXIT_SUCCESS;
}
