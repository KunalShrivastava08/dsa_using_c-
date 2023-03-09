#include <conio.h>
#include <iostream>
#include <vector>

using namespace std;
int main()
{
    vector<int>num1={1,2,9,1};
    vector<int>num2={1,2,3};
    int i=num1.size()-1;
    int j=num2.size()-1;
    
    
    vector<int>arr(num1.size()+1,0);
    int k=arr.size()-1;
    while(i>=0 && j>=0){
        if(num1[i]>=num2[j]){
            arr[k]=num1[i]-num2[j];
            k--;
            i--;
            j--;
        }else{
            num1[i-1]=num1[i-1]-1;
            num1[i]=num1[i]+10;
            arr[k]=num1[i]-num2[j];
            k--;
            i--;
            j--;
        }
        
    }

    while(i>=0){
        arr[k]=num1[i];
        i--;
        k--;
    }
    for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i];   
    }

    return 0;
}