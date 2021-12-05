#include <iostream>

int main()
{
    int input;
    std::cin >> input;
    int res = 0;
    for(int i = 1;i <= input;i++)
        res += i;
    std::cout << res << std::endl;
    return 0;
}