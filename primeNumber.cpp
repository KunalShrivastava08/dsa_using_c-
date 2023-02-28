#include <conio.h>
#include <iostream>

using namespace std;
int main()
{
    int num;
    cout << "Enter num" << endl;
    cin >> num;
    bool check=true;
    for(int i=2 ; i<=num/2; i++){
        if (num%i==0)
        {
            check=false;
            break;
        }   
    }
    if(check==true){
        cout << "Number is Prime"<<endl;
    }else{
        cout << "Number is Not Prime"<<endl;
    }
    

    return 0;
}