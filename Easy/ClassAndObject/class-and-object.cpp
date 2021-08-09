#include <sstream>
#include <iostream>
#include <string>
#include <vector>

class Student{
    std::vector<int> scores;
    public:
    void input()
    {
        int temp;
        //read in from cin 5 times
        for(int i=0; i<5; i++)
        {
            std::cin >> temp;
            scores.push_back(temp);
        }
    }

    int calculateTotalScore()
    {
        int total_score = 0;
        int size = scores.size();
        for(int i =0; i < size; i++)
        {
            total_score = scores[i] + total_score;
        }
        return total_score;
    }
};


int main() {
    int n; // number of students
    std::cin >> n;
    Student *s = new Student[n]; // an array of n students
                    
    for(int i = 0; i < n; i++)
    {
        s[i].input();
    }

    // calculate kristen's score
    int kristen_score = s[0].calculateTotalScore();

    // determine how many students scored higher than kristen
    int count = 0; 
    for(int i = 1; i < n; i++)
    {
        int total = s[i].calculateTotalScore();
        if(total > kristen_score)
        {
            count++;
        }
    }

    // print result
    std::cout << count;
                                        
    return 0;
}
