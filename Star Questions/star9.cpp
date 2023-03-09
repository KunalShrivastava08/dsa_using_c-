#include <conio.h>
#include <iostream>

using namespace std;
int main()
{
    int n;
    cout << "Enter num" << endl;
    cin >> n;
    int star = 1;
    int space = n+1;
    int val = 1;

    for (int row = 1; row <= n; row++)
    {
       for (int col = 1; col <= row; col++)
        {
            cout<<"* ";
        }
        for (int col = 1; col <= space; col++)
        {
            cout<<"  ";
        }
        for (int col = 1; col <= row && col<n; col++)
        {
            cout<<"* ";
        }
        cout<<endl;
        space-=2;

    }
    
    
    return 0;
}