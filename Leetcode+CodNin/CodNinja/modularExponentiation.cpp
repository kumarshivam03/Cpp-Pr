#include <bits/stdc++.h>

int modularExponentiation(int x, int n, int m)
{
    int res = 1;
    x %= m; // Ensure x is within the range of m
    while (n > 0)
    {
        if (n & 1)
        {
            res = (1LL * res * x) % m; // Perform modulus operation after each multiplication
        }
        x = (1LL * x * x) % m; // Square x and then take modulus
        n >>= 1;               // Right shift n
    }
    return res;