#include<iostream>

void hanoi(int n, int from, int to)
{
	if (n <= 0)
	{
		return;
	}

	int temp = 0;
	int res = 6 - from - to;

	if (n % 2 != 0)
	{
		int temp = 6 - from - to;
		hanoi(n - 1, from, temp);
		printf("%d %d %d\n", n, from, to);
		hanoi(n - 1, temp, to);

	}

	else if (n % 2 == 0)
	{
		res = 3;
		temp = 6 - from - res;
		hanoi(n - 1, from, to);
		printf("%d %d %d\n", n, from, res);
	}
}

int main(int argc, char* argv[])
{
	int a = 0;
	std::cin >> a;

	hanoi(a, 1, 3);

	return EXIT_SUCCESS;
}