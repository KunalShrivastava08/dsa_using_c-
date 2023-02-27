#include<conio.h>
#include<iostream>

using namespace std;
int main(){
    char ch;
    cout<<"Enter data. "<<endl;
    cin>>ch;
    if(ch=='a' || ch=='e'|| ch=='i'|| ch=='o'|| ch=='u'  ){
        cout<<"Char is vowel"<<endl;
    }else{
        cout<<"Char is constaa"<<endl;
    }


    return 0;
}