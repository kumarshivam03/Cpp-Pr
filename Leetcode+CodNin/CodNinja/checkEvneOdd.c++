#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "Enter a:";
    cin >> a;
    if (a & 1) // a=3 :011 & 001 ->001->1 therefore it is true for if condition if all 000 then 0 ,that means even no
    {
        cout << "Odd_no";
    }
    else
    {
        cout << "Even_no";
    }
}