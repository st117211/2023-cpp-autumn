#include <iostream>

int main(int argc, char** argv)
{
	int first_num = 0;
	int first = 0;
	int last_num = 31;
	int n = 0;
	std::cin >> n;

	for (int i = 0; i < 32; ++i)				//
	{											//
		std::cout << (n >> (31 - i) & 1);		//������� ����� � �������� ����
	}											//

	std::cout << std::endl;

	for (int i = 0; i < 32; ++i)				//
	{											//
		if (first == 0)							//
		{										//
			std::cout << (n >> (31 - i) & 1);	//������� ����� �� ������ �������
			first = (n >> (31 - i) & 1);		//
			++first_num;						//
		}										//
	}											//

	for (int i = 0; i < 32; ++i)				//
	{											//
		if ((n >> i & 1) != 1)					//
		{										//
			--last_num;							//������� ������� ��������� ������� (������������)
		}										//
		else									//
		{										//
			i = 32;								//
		}										//
	}											//

	n = ~n;

	for (int i = first_num; i < last_num; ++i)	//
	{											//
		std::cout << (n >> (31 - i) & 1);		//������� ��������������� ���� �� ������ ������� �� ��������� (�� ������������) 
	}											//

	n = ~n;

	for (int i = last_num; i < 32; ++i)			//
	{											//
		std::cout << (n >> (31 - i) & 1);		//������� ���������� ���� �� ��������� ������� (������������)
	}											//

	return EXIT_SUCCESS;
}
