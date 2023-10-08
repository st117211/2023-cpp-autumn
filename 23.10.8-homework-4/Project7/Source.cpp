#include <iostream>
#include <cstdlib>

int main(int argc, char** argv)
{
	int n = 0;
	std::cin >> n;

	int n1 = n;

	int* a = (int*)malloc(sizeof(int) * n);

	for (int i = 0; i < n; ++i)
	{
		int b = 0;
		std::cin >> b;
		if (b < 0)
		{
			--n1;
		}

		*(a + i) = b;
	}

	if (*(a + n - 1) < 0)
	{
		*(a + n - 1) = 0;
	}

	for (int i = 0; i < n; ++i)
	{
		if (*(a + i) < 0)
		{
			for (i; i < n - 1; ++i)
			{
				*(a + i) = *(a + i + 1);
			}
			i = -1;
		}
	}

	int* res = (int*)malloc(sizeof(int) * n1);

	for (int i = 0; i < n1; ++i)
	{
		*(res + i) = *(a + i);
	}

	for (int i = 0; i < n1; ++i)
	{
		std::cout << *(res + i) << " ";
	}

	free(a);
	free(res);

	return EXIT_SUCCESS;
}
