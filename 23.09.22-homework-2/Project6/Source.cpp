#include <iostream>

int main()
{
    int k = 0;
    int m = 0;
    int n = 0;
    int a = 0;

    std::cin >> k;
    std::cin >> m;
    std::cin >> n;

    if (n <= k)
    {
        a = 2 * m;
    }
    else if (n * 2 % k == 0)
    {
        a = m * (n * 2 / k);
    }
    else
    {
        a = m * (1 + (n * 2 / k));
    }

    std::cout << a << std::endl;

    return EXIT_SUCCESS;
}