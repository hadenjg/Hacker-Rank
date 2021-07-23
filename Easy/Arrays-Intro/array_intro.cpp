#include <iostream>
#include <vector>

int main()
{
    int array_size;
    std::cin >> array_size;

    std::vector<int> vector;

    for(int i =0; i < array_size; i++)
    {
        int x;
        std::cin >> x;
        vector.push_back(x);
    }

    for(int x = 0; x < array_size; x++)
    {
        std::cout << vector.back() << " ";
        vector.pop_back();
    }
    return 0;
}
