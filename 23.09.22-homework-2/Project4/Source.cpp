#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int cost1 = 15;
	int cost2 = 70;
	int cost3 = 125;
	int cost4 = 230;
	int cost5 = 440;
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
	if (n * cost4 / 20 >= cost5 && n > 20)
	{
		t5 += 1;
		n = 0 ;
	}
	if (n / 20 != 0 && (n * cost4 / 20 < cost5))
	{
		t4 = n / 20;
		n = n - t4 * 20;
	}
	if (n * cost3 / 10 >= cost4 && n > 10)
	{
		t4 += 1;
		n = 0;
	}
	if (n / 10 != 0 && (n * cost3 / 10 < cost4) && ((n * cost3 / 10) < (n * cost2 / 5)))
	{
		t3 = n / 10;
		n = n - t4 * 10;
	}
	if (n * cost2 / 5 >= cost3 && n > 5)
	{
		t3 += 1;
		n = 0;
	}
	if (n / 5 != 0 && (n * cost2 / 5 < cost3))
	{
		t2 = n / 5;
		n = n - t2 * 5;
	}
	if (n < 5 && n > 1)
	{
		t1 = n;
	}

	std::cout << t1 << " " << t2 << " " << t3 << " " << t4 << " " << t5 << std::endl;

	return EXIT_SUCCESS;
}