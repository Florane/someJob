#include <iostream>

int main()
{
    int a,b;
    std::cin >> a >> b;
    int res = 0;
    for(int i = a/2*2+1;i <= b;i+=2)
    {
        res += i;
        std::cout << i << ' ';
    }
    std::cout << std::endl << res << std::endl;
    return 0;
}