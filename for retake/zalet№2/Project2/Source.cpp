#include <iostream>
#include <math.h>

int main(int argc, char** argv)
{
	int n = 0;
	std::cin >> n;

	/*
	vrode ykladibaus v srok, poetomy mozno dorassakat.
	v obshem tam soldati marshiryut...
	no eto ne vse
	lyche zadachy dodelau
	*/

	//for (int i = 0; i <= abs(2 * n); ++i)													  //
	//{																						  //
	//	std::cout << std::max(( i * n / abs(n)), ((abs(2 * n) - i) * n / abs(n))) << " ";	  // blin a mozno kak to tak eto sdelat
	//}																						  // v odny strochky a to ne polychaetsa

	if (n > 0)
	{
		for (int i = 0; i <= abs(2 * n); ++i)
		{
			std::cout << std::min((i * n / abs(n)), ((abs(2 * n) - i) * n / abs(n))) << " ";
		}
	}

	if (n < 0)
	{
		for (int i = 0; i <= abs(2 * n); ++i)
		{
			std::cout << std::max((i * n / abs(n)), ((abs(2 * n) - i) * n / abs(n))) << " ";
		}
	}

	else
	{
		std::cout << 0;
	}

	return EXIT_SUCCESS;
}
