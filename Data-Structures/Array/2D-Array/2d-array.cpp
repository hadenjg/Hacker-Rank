#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);


int hourglassSum(vector<vector<int>> arr) {

    //the least value could be -9 * 6 = -63 ill do 100 to be safe
    int max_value = -100;

    for(int i = 0; i < arr.size()-2; ++i)
    {
       for(int j = 0; j < arr.at(i).size()-2; ++j)
       {
           //first line of hourglass
           int hourglass = arr[i][j] + arr[i][j +1] + arr[i][j +2];

           //std::cout << "Hourglass first line: " << hourglass << std::endl;

           //second line of hourglass
           hourglass += arr[i + 1][j + 1];

           //std::cout << "Hourglass second line: " << hourglass << std::endl;

           //third line of hourglass
           hourglass += arr[i + 2][j] + arr[i + 2][j + 1] + arr[i + 2][j + 2];

           //std::cout << "Hourglass third line: " << hourglass << std::endl;

           if(hourglass > max_value)
           {
               max_value = hourglass;
           }
       }
    }

    //std::cout << "MAX_VALUE IS: " << max_value << std::endl;

    return max_value;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    vector<vector<int>> arr(6);

    for (int i = 0; i < 6; i++) {
        arr[i].resize(6);

        string arr_row_temp_temp;
        getline(cin, arr_row_temp_temp);

        vector<string> arr_row_temp = split(rtrim(arr_row_temp_temp));

        for (int j = 0; j < 6; j++) {
            int arr_row_item = stoi(arr_row_temp[j]);

            arr[i][j] = arr_row_item;
        }
    }

    int result = hourglassSum(arr);

    //edited for my testing
    std::cout << result << std::endl;

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}

