#include <iostream>
#include <vector>

void swap(int &a, int &b)
{
    int c = a;
    a = b;
    b = c;
}

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

    for(int i = 0;i < result.size();i++)
    {
        int min = result[i];
        int replace = i;
        for(int j = i;j < result.size();j++)
        {
            if(result[j] < min)
            {
                min = result[j];
                replace = j;
            }
        }
        swap(result[i],result[replace]);
    }
    for(int i = 0;i < result.size();i++)
    {
        std::cout << result[i] << ' ';
    }
    std::cout << std::endl;
    return 0;
}