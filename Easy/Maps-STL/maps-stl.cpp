#include <iostream>
#include <map>
#include <string>
#include <utility>

int main() {
    int number_of_queries;
    std::cin >> number_of_queries;

    int type;
    int marks;
    std::string name;
    std::map<std::string, int> mp;
    std::map<std::string, int>::iterator itr;
    for(int i = 0; i < number_of_queries; i++)
    {
        std::cin >> type >> name;

        switch(type)
        {
            case 1: 
                std::cin >> marks;
                if(mp.find(name) != mp.end())
                {
                    mp[name] = mp[name] + marks;
                }
                else
                {
                    mp.insert(std::make_pair(name,marks));
                }
                break;
            case 2:
                mp.erase(name);
                break;
            case 3:
                std::cout << mp[name] << std::endl;
                break;
        }
    }
    return 0;
}
