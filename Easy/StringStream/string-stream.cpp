#include <sstream>
#include <vector>
#include <iostream>
#include <string>
#include <fstream>


std::vector<int> parseInts(std::string str) {
    std::stringstream ss(str);
    char ch;
    int tmp;
    std::vector<int> results;
    while(ss >> tmp)
    {
        results.push_back(tmp);
        ss >> ch;
    }
    return results;
}

int main() {
    std::ifstream file("test.txt");
    if(file.good())
    {
        std::string str;
        while(getline(file,str))
        {
            std::vector<int> integers = parseInts(str);
            for(int i = 0; i < integers.size(); i++) 
            {
                std::cout << integers[i] << "\n";
            }
            std::cout << "End of line" << std::endl;
        }
    }
    return 0;
}
