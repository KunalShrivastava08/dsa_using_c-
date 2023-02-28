#include <conio.h>
#include <iostream>

using namespace std;
int main()
{
    int num;
    cout << "Enter num" << endl;
    cin >> num;
    int ans=0;
    int temp=num;
    while (temp!=0)
    {
        int last=temp%10;
        temp=temp/10;
        ans = ans*10 + last;
    }

    if(num==ans){
        cout << "Number is Palindrom"<<endl;
    }else{
        cout << "Number is Not Palindrom"<<endl;
    }
    

    return 0;
}