#include <conio.h>
#include <iostream>

using namespace std;
int main()
{
    int num;
    cout << "Enter num" << endl;
    cin >> num;
    for(int i=0 ; i<num; i++){
           for (int j = 1; j<num-i; j++)
           {
            cout<<"_";
           }
           cout<<"*";
           cout<<endl;
    }
    return 0;
}