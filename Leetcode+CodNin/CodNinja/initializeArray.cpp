#include <iostream>
using namespace std;
int main()
{
    int ar[100];
    fill_n(ar, 100, -245); // initalized by -245 in 100 places
    for (int i = 0; i < 100; i++)
    {
        cout << ar[i] << " ";
    }
}