#include<iostream>

void hanoi(int n, int from, int to)
{
	if (n <= 0)
	{
		return;
	}

	int res = 6 - from - to;
	hanoi(n - 1, from, res);
	printf("%d %d %d\n", n, from, to);
	hanoi(n - 1, res, to);
}

int main(int argc, char* argv[])
{
	int a = 0;
	std::cin >> a;

	hanoi(a, 1, 3);

	return EXIT_SUCCESS;
}