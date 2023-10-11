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

	int res = 0;
	for (int i = 0; i < n; ++i)
	{
		if (*(a + i) >= 0)
		{
			++res;
		}
	}
	free(a);

	std::cout << res << std::endl;

	return EXIT_SUCCESS;
}
