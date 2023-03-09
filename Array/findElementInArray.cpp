#include <iostream>
#include <vector>
using namespace std;

bool checkElement(vector<int>arr,int n){
    for (int i = 0; i < arr.size(); i++)
    {
        if(arr[i]==n){
            return true;
        }
    }
    return false;
}

int main()
{
    vector<int>arr = {1,2,3,6,4,5};
    int n = 5;
    cout<<checkElement(arr,n);
    return 0;
}