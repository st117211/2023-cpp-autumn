#include<iostream>

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	int n = 0;
	int temp = 0;
	int a1 = 0;
	int b1 = 0;
	int c = 0;
	
	std::cin >> a;
	std::cin >> b;
	std::cin >> n;

	if (b > a)
	{
		temp = a;
		a = b;
		b = temp;

		for (int i = 1; i <= a; ++i)
		{
			if (a % i == 0 && b % i == 0)
			{
				c = i;
			}
		}
		if (c % n != 0)
		{
			std::cout << "impossible";

			return EXIT_SUCCESS;
		}
		while (b1 != n && a1 != a)
		{
			while (b1 < b)
			{
				while (a1 < a)
				{
					++a;
					if (a1 == a)
					{
						std::cout << ">A" << std::endl;
					}
				}
				while (b1 < b && a1 != 0)
				{
					++b1;
					--a1;
					if (b1 == b || a1 == 0)
					{
						std::cout << "A>B" << std::endl;
					}
				}
			}

			if (a1 == n || b1 == n)
			{
				return EXIT_SUCCESS;
			}
			while (b1 > 0)
			{
				--b1;
				if (b1 == 0)
				{
					std::cout << "B>" << std::endl;
				}
			}
			if (a1 == n || b1 == n)
			{
				return EXIT_SUCCESS;
			}
			while (a1 > 0 && b1 != 0)
			{
				++b1;
				--a1;
				if (b1 == b || a1 == 0)
				{
					std::cout << "A>B" << std::endl;
				}
			}
		}
	}
	else
	{
		for (int i = 1; i <= a; ++i)
		{
			if (a % i == 0 && b % i == 0)
			{
				c = i;
			}
		}
		if (c % n != 0)
		{
			std::cout << "Impossible" << std::endl;
			return EXIT_SUCCESS;
		}
		while (b1 != n && a1 != n)
		{
			while (b1 < b)
			{
				while (a1 < a)
				{
					++a1;
					if (a1 == a)
					{
						std::cout << ">B" << std::endl;
					}
				}
				while (b1 < b && a1 != 0)
				{
					++b1;
					--a1;
					if (b1 == b || a1 == 0)
					{
						std::cout << "B>A" << std::endl;
					}
				}
			}
			if (a1 == n || b1 == n)
			{
				return EXIT_SUCCESS;
			}
			while (b1 > 0)
			{
				--b1;
				if (b1 == 0)
				{
					std::cout << "A>" << std::endl;
				}
			}
			if (a1 == n || b1 == n)
			{
				return EXIT_SUCCESS;
			}
			while (a1 > 0 && b1 != b)
			{
				++b1;
				--a1;
				if (b1 == b || a1 == 0)
				{
					std::cout << "B>A" << std::endl;
				}
			}
		}
	}

	return EXIT_SUCCESS;
}
