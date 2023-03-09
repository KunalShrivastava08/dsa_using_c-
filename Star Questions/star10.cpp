#include <conio.h>
#include <iostream>

using namespace std;
int main()
{
    int n;
    cout << "Enter num" << endl;
    cin >> n;
    int star = n;
    int space = 0;
    int val = 1;

    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= space; col++)
        {
            cout<<"  ";
        }
       for (int col = 1; col <= star; col++)
        {
            cout<<"* ";
        }
        
        cout<<endl;
        if(row<=n/2){
            space++;
            star-=2;
        }else{
            space--;
            star+=2;
        }
        

    }
    
    
    return 0;
}