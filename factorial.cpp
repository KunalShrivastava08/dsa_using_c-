#include<conio.h>
#include<iostream>

using namespace std;
int main(){
    int number;
    cout<<"Enter no."<<endl;
    cin>>number;
    int result=1;
    for (int i = 1; i <=number; i++)
    {
        result*=i;
    }
    cout<<"Result : "<<result;
    return 0;
}