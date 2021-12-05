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
    for(int i = 0;i+1 < size*size;i+=2)
        swap(array[i/size][i%size],array[(i+1)/size][(i+1)%size]);
    for(int y = 0;y < size;y++)
    {
        for(int x = 0;x < size;x++)
            std::cout << array[y][x] << ' ';
        std::cout << std::endl;
    }
    return 0;
}