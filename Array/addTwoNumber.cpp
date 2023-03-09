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
    int car=0;
    while(i>=0 || j>=0){
        int sum=0;
        if(i>=0 && j>=0 ){
            sum=num1[i]+num2[j]+car;
        }else if(i>=0){
            sum=num1[i]+car;
        }else{
            sum=num2[j]+car;
        }
        
        car=0;
        if(sum<10 && sum>=0){
            arr[k]=sum;
            k--;
        }else{
            car=sum/10;
            int tempNum=sum%10;
            arr[k]=tempNum;
            k--;
        }
        i--;
        j--;
    }
    for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i];   
    }

    return 0;
}