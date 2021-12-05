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

    int min = result[0], max = result[0];
    for(int i = 0;i < result.size();i++)
    {
        if(result[i] < min)
            min = result[i];
        if(result[i] > max)
            max = result[i];
    }
    std::cout << min << ' ' << max << std::endl;
    return 0;
}