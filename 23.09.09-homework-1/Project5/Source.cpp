#include <iostream>

int main (int argc, char* argv[])
{
	int spd = 0;
	int time = 0;
	int mkad = 109;

	std::cin >> spd;
	std::cin >> time;

	int dist = spd * time;
	
	std::cout << (dist % mkad + mkad) % mkad + 1 << std::endl;

	return EXIT_SUCCESS;
}