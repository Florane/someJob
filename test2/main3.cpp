#include <iostream>

int main()
{
    int x,y,z;
    std::cin >> x >> y >> z;
    if(x == y && y == z)
        std::cout << x << "==" << y << "==" << z << std::endl;
    else if(x == y || x == z)
        std::cout << x << "==" << x << std::endl;
    else if(y == z)
        std::cout << y << "==" << z << std::endl;

    int min = x<y?(x<z?x:z):(y<z?y:z);
    std::cout << min << " " << min*min << std::endl;
    return 0;
}