#include <iostream>
using namespace std;
int fibo(int n)
{
    int a = 0, b = 1, temp;
    for (int i = 2; i < n; i++)
    {
        temp = a + b;
        a = b;
        b = temp;
    }
    return temp;
}
int main()
{
    int n;
    cout << "Enter n:";
    cin >> n;
    cout << "Result: " << fibo(n);
}