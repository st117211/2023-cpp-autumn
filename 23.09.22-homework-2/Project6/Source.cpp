#include <iostream>
#include <cmath>

int main()
{
    int k = 0;
    int m = 0;
    int n = 0;
    int result = 0;

    std::cin >> k;
    std::cin >> m;
    std::cin >> n;

    if (k == 0 || m == 0 || n == 0)
    {
        std::cout << 0 << std::endl;
        exit(0);
    }
    else if (n <= k)
    {
        std::cout << m * 2 << std::endl;
        exit(0);
    }

    result = ceil((n * 2) / k);

    std::cout << result * m << std::endl;

    return EXIT_SUCCESS;
}