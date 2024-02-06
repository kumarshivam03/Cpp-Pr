#include <iostream>
using namespace std;

int factorial(int x)
{
    int i, fact = 1;
    for (i = 1; i <= x; i++)
    {
        fact = fact * i;
    }
    return fact;
}

int nCr(int n, int r)
{
    int num = factorial(n);
    int deno = factorial(r) * factorial(n - r);
    return num / deno;
}

int main()
{
    int n, r;
    cout << "Enter " << endl;
    cin >> n >> r;
    cout << "Result is " << nCr(n, r);
    return 0;
}