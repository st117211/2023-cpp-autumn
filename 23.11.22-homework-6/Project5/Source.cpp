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
	int from = 1;
	int to = 0;
	for (int i = a; i > 0; --i)
	{
		if (i % 2 == 0)
		{
			to = 3;
		}
		else
		{
			to = 2;
		}
		hanoi(i, from, to);
		from = to;
	}

	return EXIT_SUCCESS;
}
