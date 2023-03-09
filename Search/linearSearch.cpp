//Linear search
#include<iostream>
#include<vector>
using namespace std;

int search(vector<int> &arr, int k){
    for (int i = 0; i < arr.size(); i++)
    {
        if(arr[i]==k){
            return i;
        }
    }
    
    return -1;
}

int main(){
     vector<int>arr = {2,3,4,10,40};

    int ans = search(arr, 10);

    cout<<ans<<" ";
    

    return 0;
}