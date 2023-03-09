#include <iostream>
#include <vector>
using namespace std;

int checkElement(vector<int>arr){
    int max=arr[0];
    for (int i = 0; i < arr.size(); i++)
    {
        if(arr[i]>max){
           max=arr[i];
        }
    }
    return max;
}

int main()
{
    vector<int>arr = {1,2,3,-2,4,5};
    cout<<checkElement(arr);
    return 0;
}