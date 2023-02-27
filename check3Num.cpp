#include <conio.h>
#include <iostream>

using namespace std;
int main()
{
    int num1;
    int num2;
    int num3;
    cout << "Enter 3 numbers" << endl;
    cin >> num1;
    cin >> num2;
    cin >> num3;
    if (num1 >= num2 && num1 >= num3)
    {
        cout << "Num1 is grater" << endl;
    }
    else if (num2 >= num3)
    {
        cout << "Num2 is grater" << endl;
    }
    else
    {
        cout << "Num3 is grater" << endl;
    }

    return 0;
}