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
    for(int y = size-1;y >= 0;y--)
    {
        for(int x = size-1;x >= 0;x--)
            std::cout << array[y][x] << ' ';
        std::cout << std::endl;
    }
    return 0;
}