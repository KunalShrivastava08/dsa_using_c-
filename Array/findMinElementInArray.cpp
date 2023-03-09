#include <iostream>
#include <vector>
using namespace std;

int checkElement(vector<int>arr){
    int min=arr[0];
    for (int i = 0; i < arr.size(); i++)
    {
        if(arr[i]<min){
           min=arr[i];
        }
    }
    return min;
}

int main()
{
    vector<int>arr = {1,2,3,-2,4,5};
    int n = 5;
    cout<<checkElement(arr);
    return 0;
}