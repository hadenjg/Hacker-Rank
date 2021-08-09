#include <sstream>
#include <vector>
#include <iostream>
#include <string>
#include <fstream>

struct student{
    int age;
    std::string first_name;
    std::string last_name;
    int standard;
};

int main() {
    std::string str;
    student st;
    std::cin >> st.age >> st.first_name >> st.last_name >> st.standard;
    std::cout << st.age << " " << st.first_name << " " << st.last_name << " " << st.standard;

    return 0;
}
