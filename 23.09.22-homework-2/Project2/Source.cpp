#include <iostream>

int main(int argc, char* argv[])
{
	int crkt = 0;	//верный ответ на задачу
	int chk = 0;	//ответ, который нужно проверить

	std::cin >> crkt;
	std::cin >> chk;
	
	if ((crkt == chk) || (crkt != 1 && chk != 1))
	{
		std::cout << "YES" << std::endl;
	}
	else
	{
		std::cout << "NO" << std::endl;
	}

	return EXIT_SUCCESS;
}