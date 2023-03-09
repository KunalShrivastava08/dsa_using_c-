// Bubble sort array: O(n^2)

#include<iostream>
#include<vector>
using namespace std;

void swap(vector<int> &arr, int i, int j){
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
    return;
}

void sort(vector<int> &arr){
    for (int i = 0; i < arr.size()-1; i++)
    {
        for (int j = 0; j < arr.size()-i-1; j++)
        {
            if(arr[j]>arr[j+1]){
                swap(arr,j,j+1);
            }
        }
        
    }
    
}

int main(){
     vector<int>arr = {-2,45,0,11,-9};

    sort(arr);

    for(int i=0;i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}