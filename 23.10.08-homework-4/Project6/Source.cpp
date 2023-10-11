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

	int num_max = 0;
	int max = 0;
	int num_min = 0;
	int min = 0;
	for (int i = 0; i < n; ++i)
	{
		if (*(a + i) >= max)
		{
			num_max = i;
			max = *(a + i);
		}

		if (*(a + i) < min)
		{
			num_min = i;
			min = *(a + i);
		}
	}

	*(a + num_min) = max;
	*(a + num_max) = min;

	for (int i = 0; i < n; ++i)
	{
		std::cout << *(a + i) << " ";
	}
	free(a);

	return EXIT_SUCCESS;
}
