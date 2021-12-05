#include <iostream>

int main()
{
    int a,b,c;
    std::cin >> a >> b >> c;
    if(a == b && b == c)
        std::cout << a*a*3 << " " << a*a*a*a*a*a << std::endl;
    else if(a == b || a == c)
        std::cout << a*a*2 << " " << a*a*a*a << std::endl;
    else if(b == c)
        std::cout << b*b*2 << " " << b*b*b*b << std::endl;
    else
        std::cout << a << "!=" << b << "!=" << c;
    return 0;
}