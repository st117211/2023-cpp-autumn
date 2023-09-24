#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int t1 = 0;
	int t2 = 0;
	int t3 = 0;
	int t4 = 0;
	int t5 = 0;

	std::cin >> n;

	if (n / 60 != 0)
	{
		t5 = n / 60;
		n = n - t5 * 60;
	}
	if (n >= 36)
	{
		t5 += 1;
		std::cout << t1 << " " << t2 << " " << t3 << " " << t4 << " " << t5 << std::endl;
		return EXIT_SUCCESS;
	}
	if (n < 36 && n > 29)
	{
		t4 += 1;
		t3 += 1;
		t2 += (n % 10) / 5;
		t1 += (n % 10) - (t2 * 5);
	}
	if (n == 29)
	{
		t4 += 1;
		t3 += 1;
	}
	if (n < 29 && n > 19)
	{
		t4 += 1;
		t2 += (n % 10) / 5;
		t1 += (n % 10) - (t2 * 5);
	}
	if (n <= 19 && n > 17)
	{
		t4 += 1;
	}
	if (n <= 17 && n > 9)
	{
		t3 += 1;
		t2 += (n % 10) / 5;
		t1 += (n % 10) - (t2 * 5);
	}
	if (n == 9)
	{
		t3 += 1;
	}
	if (n < 9)
	{
		t2 = n / 5;
		t1 = n - t2 * 5;
	}

	std::cout << t1 << " " << t2 << " " << t3 << " " << t4 << " " << t5 << std::endl;

	return EXIT_SUCCESS;
}