#include <conio.h>
#include <iostream>

using namespace std;
int main()
{
    int num;
    cout << "Enter num" << endl;
    cin >> num;
    for(int i=num ; i>=0; i--){
            for (int j = 1; j <= num-i; j++)
            {
                cout<<"  ";
            } 
            for (int j =1 ; j <=i; j++)
            {
                cout<<"* ";
            }  
               
            cout<<endl;
    }
    return 0;
}