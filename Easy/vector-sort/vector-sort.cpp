#include <sstream>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main(){

    int value;
    int number_of_loops;
    std::vector<int> vec;
    std::cin >> number_of_loops;

    for(int i = 0; i < number_of_loops; i++)
    {
        std::cin >> value;
        vec.push_back(value);
    }
    std::sort(vec.begin(), vec.end());

    for(int k =0; k < number_of_loops; k++)
    {
        std::cout << vec[k] << " ";
    }

    return 0;
}
