#include <iostream>
#include <math.h>

int main(int argc, char** argv)
{
	int a = 0;
	int b = 0;
	std::cin >> a;
	std::cin >> b;

	/*
	raz tyt beskonecnoe chislo strochek, to hochetsa o chem nibyd` rasskazat.
	ya vot nedavno na utube sidel i natknylsa na interesnoe video
	ladno, sroki podzhimayt, ne yspeu dopisat`
	*/

	if (a == 0 || b == 0)
	{
		std::cout << 0;

		return EXIT_SUCCESS;
	}

	int res = 0;
	for (int i = 0; i < abs(b); ++i)
	{
		res += a;
	}
	std::cout << res * b / abs(b);

	return EXIT_SUCCESS;
}