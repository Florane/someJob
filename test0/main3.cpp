#include <iostream>
#include <vector>
#include <map>

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

    std::map<int,int> met;
    int res = 0;
    for(int i = 0;i < result.size();i++)
    {
        if(met.count(result[i]) == 0)
            met[result[i]] = 1;
        else
            met[result[i]]++;
    }
    for(auto i = met.begin();i != met.end();i++)
    {
        if(i->second > 1)
            res+=(i->first*i->second);
    }
    
    std::cout << res << std::endl;
    return 0;
}