#include <conio.h>
#include <iostream>

using namespace std;
int main()
{
    int num;
    cout << "Enter num" << endl;
    cin >> num;
    for(int i=num ; i>=1; i--){
            for (int j = 1; j <= num; j++)
            {
                if(i-j<=0){
                    cout<<"* ";
                }else{
                    cout<<"  ";
                }
                
            }   
            cout<<endl;
    }
    return 0;
}