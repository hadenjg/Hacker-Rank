#include <iostream>
#include <vector>

int main()
{
    int number_of_arrays;
    int number_of_queries;
    //Read in the number of arrays and number of queries from keyboard input
    std::cin >> number_of_arrays >> number_of_queries;

    std::vector<std::vector<int>> two_dim_vector;
    for(int i =0; i < number_of_arrays; i++)
    {
        int elements_in_array;
        //read in the number of elements in the array from keyboard input
        std::cin >> elements_in_array;
        std::vector<int> temp_vec;
        for(int j=0; j < elements_in_array; j++)
        {
            int value;
            //read in the value of the array and put it in a vector
            std::cin >> value;
            temp_vec.push_back(value);
        }
        //take the finished vector and push it into another vector
        two_dim_vector.push_back(temp_vec);
    }

    for(int k=0; k < number_of_queries; k++)
    {
        int vector_number;
        int vector_value;
        //take in the querie information
        std::cin >> vector_number >> vector_value;
        //grab the vector that the querie is asking for
        std::vector<int> temp = two_dim_vector[vector_number];
        //output the querie requested info
        std::cout << temp[vector_value] << std::endl;
    }
    return 0;

}
