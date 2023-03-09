#include <conio.h>
#include <iostream>

using namespace std;
int main()
{
    int n;
    cout << "Enter num" << endl;
    cin >> n;
    int star = 1;
    int space = n/2;
    int val = 1;

    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= space; col++)
        {
            cout<<"  ";
        }
        int temp = val;
        for (int col = 1; col <= star; col++)
        {
            if(col<=star/2){
              cout<<temp<<" ";
            temp++;  
            }else{
                cout<<temp<<" ";
                temp--;
            
            }
        }
        if(row<=n/2){
            space--;
            star+=2;
            val++;
        }else{
            space++;
            star-=2;
            val--;
        }
        cout<<endl;


    }
    
    
    return 0;
}