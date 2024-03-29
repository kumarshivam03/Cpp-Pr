#include <iostream>
using namespace std;

int count(int x)
{
    int ct = 0, rem = 0;
    while (x != 0)
    {
        if (x & 1)
        {
            ct++;
        }
        x = x >> 1;
    }
    return ct;
}
int sum(int a, int b)
{
    return count(a) + count(b);
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << "Result is : " << sum(a, b);
}