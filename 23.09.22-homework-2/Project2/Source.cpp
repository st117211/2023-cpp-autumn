#include <iostream>

int main(int argc, char* argv[])
{
	int crkt = 0;	//������ ����� �� ������
	int chk = 0;	//�����, ������� ����� ���������

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