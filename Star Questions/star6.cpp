#include <conio.h>
#include <iostream>

using namespace std;
int main()
{
    int num;
    cout << "Enter num" << endl;
    cin >> num;
    int outerSpace=num/2;
    int innerSpace=-1;
    for(int i=1 ; i<=num; i++){
        for (int j = 1; j <= outerSpace; j++)
        {
            cout<<" ";
        }
        cout<<"*";
        for (int j = 1; j <= innerSpace; j++)
        {
            cout<<" ";
        }
        if(i>1 && i<num){
            cout<<"*";
        }
        
        if(i<=num/2){
            outerSpace--;
            innerSpace+=2;
        }else{
            outerSpace++;
            innerSpace-=2;
        }
        cout<<endl;
        
    }
   
    
    return 0;
}