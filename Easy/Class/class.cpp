#include <sstream>
#include <iostream>
#include <string>

class Student{
    int age;
    int standard;
    std::string first_name;
    std::string last_name;
    public:
      void set_age(int age_input)
      {
          age = age_input;
      }

      void set_standard(int standard_input)
      {
          standard = standard_input;
      }

      void set_first_name(std::string first_name_input)
      {
          first_name = first_name_input;
      }

      void set_last_name(std::string last_name_input)
      {
          last_name = last_name_input;
      }

      int get_age()
      {
          return age;
      }

      int get_standard()
      {
          return standard;
      }

      std::string get_first_name()
      {
          return first_name;
      }

      std::string get_last_name()
      {
          return last_name;
      }

      std::string to_string()
      {
          std::stringstream ss;
          ss << age << "," << first_name << "," << last_name << "," << standard;
          std::string s = ss.str();
          return s;
      }

};


int main() {
    int age, standard;
    std::string first_name, last_name;
            
    std::cin >> age >> first_name >> last_name >> standard;
                
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
                                    
    std::cout << st.get_age() << "\n";
    std::cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    std::cout << st.get_standard() << "\n";
    std::cout << "\n";
    std::cout << st.to_string();

    return 0;
}
