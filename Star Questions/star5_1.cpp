#include <conio.h>
#include <iostream>

using namespace std;
int main()
{
    int num;
    cout << "Enter num" << endl;
    cin >> num;
    for(int i=0 ; i < num; i++){
            for (int j = 0; j < num; j++)
            {
                if((i+j)==num-1){
                    cout<<"*";
                }else{
                    cout<<"_";
                }
                
            }   
            cout<<endl;
    }
    return 0;
}