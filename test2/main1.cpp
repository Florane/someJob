#include <iostream>
#include <cmath>

int main()
{
    int a,b,c;
    std::cin >> a >> b >> c;
    int s = (a+b+c)/2;
    std::cout << sqrt(s*(s-a)*(s-b)*(s-c)) << std::endl;
    return 0;
}