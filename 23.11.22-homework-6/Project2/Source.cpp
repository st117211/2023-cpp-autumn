#include<iostream>

void hanoi(int n, int from, int to)
{
	if (n <= 0)
	{
		return;
	}

	if ((from == 1 && to == 3) || (from == 3 && to == 1))
	{
		hanoi(n, from, 2);
		hanoi(n, 2, to);
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
