#include <sstream>
#include <vector>
#include <iostream>
#include <string>
#include <fstream>

int main() {
    std::string string1, string2;
    //read in the values
    std::cin >> string1 >> string2;
    //the requirements state:
    //In the first line print two space-separated integers, representing the length of string1 and string2 respectively. 
    std::cout << string1.length() << " " << string2.length() << std::endl;
    //the requirements state:
    //In the second line print the string produced by concatenating string1 and string2 
    std::cout << string1 + string2 << std::endl;
    //the requirements state:
    //in the third line print both strings with their first character swapped with the others first character.  The strings must be seperated by a space
    std::cout << string2[0] << string1.substr(1) << " " << string1[0] << string2.substr(1) << std::endl;

    return 0;
}
