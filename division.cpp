#include <conio.h>
#include <iostream>

using namespace std;
int main()
{
    int divident;
    int divisor;
    cout << "Enter Division" << endl;
    cin >> divident;
    cout << "Enter Divident" << endl;
    cin >> divisor;

    int quotient = divident/divisor;
    int remainder = divident%divisor;
    cout << "Quotient : "<< quotient <<endl;
    cout << "Remainder : " <<remainder<<endl;
    return 0;
}