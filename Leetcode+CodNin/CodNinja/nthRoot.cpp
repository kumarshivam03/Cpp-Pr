o(n.logN);
log at base 2 int pow(int m, int n)
{
    int i;
    long long ans = 1;
    for (i = 0; i < n; i++)
    {
        ans *= m;
    }
    return ans;
}

int NthRoot(int n, int m)
{
    // Write your code here.
    int low = 0, high = m;

    while (low <= high)
    {
        long long mid = (low + high) / 2;
        if (pow(mid, n) == m)
        {
            return mid;
        }
        else if (pow(mid, n) < m)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}