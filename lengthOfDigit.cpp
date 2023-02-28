#include <conio.h>
#include <iostream>

using namespace std;
int main()
{
    int num;
    cout << "Enter num" << endl;
    cin >> num;
    int length=0;

while (num!=0)
{
    num/=10;
    length++;
}
cout<<"Total Length : "<<length;
    
    return 0;
}