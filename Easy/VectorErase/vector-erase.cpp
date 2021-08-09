#include <sstream>
#include <iostream>
#include <string>
#include <vector>

int main(){
    int vec_size;
    int temp;
    std::cin >> vec_size;

    std::vector<int> vec;
    for(int i =0; i < vec_size; i++)
    {
        std::cin >> temp;
        vec.push_back(temp);
    }

    int single_element;
    std::cin >> single_element;

    vec.erase(vec.begin() + single_element-1);

    int range1;
    int range2;

    std::cin >> range1 >> range2;

    vec.erase(vec.begin() + range1-1, vec.begin() + range2-1);

    std::cout << vec.size() << std::endl;

    for(int k = 0; k < vec.size(); k++)
    {
        std::cout << vec[k] << " ";
    }

    return 0;
}
