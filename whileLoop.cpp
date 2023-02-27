#include<conio.h>
#include<iostream>

using namespace std;
int main(){
    int number;
    cout<<"Enter no."<<endl;
    cin>>number;
    int result=1;
    int i = 1;
    while(i <=number)
    {
        result*=i;
         i++;
    }
    cout<<"Result : "<<result;
    return 0;
}