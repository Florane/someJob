#include <iostream>

int main()
{
    int num;
    std::cin >> num;
    std::cout << num/1000%10 << " " << num/100%10 << " " << num/10%10 << " " << num%10 << std::endl;
    return 0;
}