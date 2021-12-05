#include <iostream>
#include <vector>

int main()
{
    int size;
    std::cin >> size;
    std::vector<int> result;
    for(int i = 0;i < size;i++)
    {
        int a;
        std::cin >> a;
        result.push_back(a);
    }

    int res;
    for(int i = 1;i < result.size();i+=2)
        res += result[i];
    
    std::cout << res << std::endl;
    return 0;
}