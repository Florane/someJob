#include <iostream>
#include <vector>

int main()
{
    std::vector<std::vector<int> > array;
    int size;
    std::cin >> size;
    for(int y = 0;y < size;y++)
    {
        std::vector<int> buffer;
        for(int x = 0;x < size;x++)
        {
            int input;
            std::cin >> input;
            buffer.push_back(input);
        }
        array.push_back(buffer);
    }
    int res = 0;
    for(int y = 0;y < size;y++)
        for(int x = 0;x < size;x++)
            if(y != x)
                res += array[y][x];
    std::cout << res << std::endl;
    return 0;
}