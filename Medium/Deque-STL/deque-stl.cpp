#include <iostream>
#include <deque> 
using namespace std;

void printKMax(int arr[], int n, int k){
    std::deque<int> mydeque;

    int max;
    for(int i =0; i < n-k+1; i++)
    {
        max = arr[i];
        for(int j=1; j < k; j++)
        {
            if(max < arr[i+j])
            {
                max = arr[i+j];
            }
        }
        mydeque.push_back(max);
    }

    for(std::deque<int>::iterator it = mydeque.begin(); it != mydeque.end(); ++it)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}

int main(){
    int t;
    std::cin >> t;
    while(t>0) {

        int n,k;
        std::cin >> n >> k;
        int i;
        int arr[n];
        for(i=0;i<n;i++)
            std::cin >> arr[i];
        printKMax(arr, n, k);
        t--;
    }
    return 0;
}
