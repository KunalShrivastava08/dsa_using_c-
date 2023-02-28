#include <conio.h>
#include <iostream>

using namespace std;
int main()
{
    int num;
    cout << "Enter num" << endl;
    cin >> num;
    
    for(int i=2 ; i<=num; i++){
        bool check=true;
            for (int j = 2; j <= i/2; j++)
            {
                if (i%j==0)
                {
                    check=false;
                    break;
                }
            }   
        if(check==true){
            cout << i<<" ";
        }
    }
    return 0;
}