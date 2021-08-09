#include <iostream>
#include <string>

class Person{
    protected:
    std::string name;
    int age;
    public:
    virtual void getdata()
    {
        std::cin >> name >> age;
    }

    virtual void putdata()
    {
        std::cout << name << age << std::endl;
    }
};

class Professor: public Person{
    int publications;
    int cur_id;
    public:

    static int prof_id;
    void getdata()
    {
        std::cin >> name >> age >> publications;
    }

    void putdata()
    {
        std::cout << name << " " << age << " " << publications << " " << cur_id << std::endl;
    }

    Professor(){prof_id++; cur_id = prof_id;};
};

class Student: public Person{
    int marks[6];
    int cur_id;
    int sum_of_marks;
    public:

    static int student_id;
    void getdata()
    {
        std::cin >> name >> age;

        for(int i=0; i <6; i++)
        {
            std::cin >> marks[i];
            sum_of_marks = marks[i] + sum_of_marks;
        }
    }

    void putdata()
    {
        std::cout << name << " " << age << " " << sum_of_marks << " " << cur_id << std::endl;
    }

    Student(){student_id++; cur_id = student_id;};
};

int Professor::prof_id = 0;
int Student::student_id = 0;

int main(){

    int n, val;
    std::cin>>n; //The number of objects that is going to be created.
    Person *per[n];

    for(int i = 0;i < n;i++){

        std::cin>>val;
        if(val == 1){
            // If val is 1 current object is of type Professor
            per[i] = new Professor;

        }
        else per[i] = new Student; // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.

    }

    for(int i=0;i<n;i++)
        per[i]->putdata(); // Print the required output for each object.

    return 0;

}

