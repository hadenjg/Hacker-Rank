#include <iostream>
#include <set>


int main() {

    int number_of_queries;
    std::cin >> number_of_queries;

    int type;
    int value;
    std::set<int> s;
    for(int i =0; i < number_of_queries; i++)
    {
        std::cin >> type >> value;

        if(type == 1)
        {
            s.insert(value);
        }
        else if(type ==2)
        {
            s.erase(value);
        }
        else
        {
            if(s.find(value) != s.end())
            {
                std::cout << "Yes" << std::endl;
            }
            else
            {
                std::cout << "No" << std::endl;
            }
        }
    }

    return 0;
}
