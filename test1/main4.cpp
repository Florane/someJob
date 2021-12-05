#include <iostream>

int main()
{
    int input = -1;
    int sum = 0, i = 0;
    for(;input != 0;i++)
    {
        std::cin >> input;
        sum += input;
    }
    i--;
    std::cout << i << ' ' << sum << ' ' << (sum*1.0)/i << std::endl;
    return 0;
}