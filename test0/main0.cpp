#include <iostream>
#include <ctime>
#include <cstdlib>
#include <vector>

int main()
{
    srand(time(0));
    int size;
    std::cin >> size;
    std::vector<int> result;
    for(int i = 0;i < size;i++)
        result.push_back(rand());
    for(int i = 0;i < size;i++)
        std::cout << result[i] << " ";
    std::cout << std::endl;
    return 0;
}