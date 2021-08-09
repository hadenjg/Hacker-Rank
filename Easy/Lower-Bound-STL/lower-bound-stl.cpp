#include <iostream>
#include <vector>
#include <algorithm>

int main() {

    int number_of_integers;
    std::cin >> number_of_integers;

    int temp;
    std::vector<int> vec;
    for(int i = 0; i < number_of_integers; i++)
    {
        std::cin >> temp;
        vec.push_back(temp);
    }

    int number_of_queries;
    std::cin >> number_of_queries;

    int value;
    std::vector<int>::iterator low;
    for(int k = 0; k < number_of_queries; k++)
    {
        std::cin >> value;
        low = std::lower_bound (vec.begin(), vec.end(), value);

        if(std::binary_search(vec.begin(), vec.end(), value))
        {
            std::cout << "Yes " << (low - vec.begin()+1) << std::endl;
        }
        else
        {
            std::cout << "No " << (low - vec.begin()+1) << std::endl;
        }
    }

    return 0;
}
