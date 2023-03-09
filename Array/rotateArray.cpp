#include<conio.h>
#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int>arr={1,2,3,4,5,6,7};
    int k=3;

    int n=k%arr.size();

    for(int i=0;i<=n;i++){
        for (int j = 0; j < arr.size()-1; j++)
        {
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }

    for (int i = 0; i < arr.size(); i++)
    {
       cout<<arr[i]<<" ";
    }


    return 0;
}

