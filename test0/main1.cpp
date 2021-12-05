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
    int test;
    std::cin >> test;
    int res;
    if(test == 1)
    {
        for(int i = 0;i < result.size();i++)
            if(result[i] > 0) {res += result[i];}
    }
    else if(test == 2)
    {
        for(int i = 0;i < result.size();i++)
            if(result[i] < 0) {res += result[i];}
    }
    std::cout << res << std::endl;
    return 0;
}