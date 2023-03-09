#include <conio.h>
#include <iostream>

using namespace std;
int main()
{
    int num;
    cout << "Enter num" << endl;
    cin >> num;
    for(int i=1 ; i <= num; i++){
            for (int j = 1; j <= num; j++)
            {
                if(j==1 || j==num){
                    cout<<"* ";
                }else if((i>num/2) && ((i==j) || (i+j==num+1))){
                    cout<<"* ";
                }else{
                    cout<<"  ";
                }
            }   
            cout<<endl;
    }
    return 0;
}