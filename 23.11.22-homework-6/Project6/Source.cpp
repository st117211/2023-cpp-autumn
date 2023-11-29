#include<iostream>

void hanoi(int n, int from, int to)
{
	if (n <= 0)
	{
		return;
	}

	int res = 6 - from - to;

	if (n == 1)
	{
		printf("%d %d %d\n", n, from, to);
	}
	else
	{
		hanoi(n - 1, from, to);
		hanoi(n - 2, to, res);
		printf("%d %d %d\n", 0, from, to);
		hanoi(n - 2, res, from);
		hanoi(n - 1, from, to);
	}
}

int main(int argc, char* argv[])
{
	int a = 0;
	std::cin >> a;

	hanoi(a, 1, 3);

	return EXIT_SUCCESS;
}