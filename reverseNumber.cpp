#include <conio.h>
#include <iostream>

using namespace std;
int main()
{
    int num;
    cout << "Enter num" << endl;
    cin >> num;
    int ans=0;
    while (num!=0)
    {
        int last=num%10;
        num=num/10;
        ans = ans*10 + last;
    }
    cout << "Ans : " <<ans<<endl;

    return 0;
}