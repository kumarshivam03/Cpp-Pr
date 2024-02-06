int floorSqrt(int n)
{
    int s = 0, e = n;
    long long int ans;
    while (s <= e)
    {
        long long int mid = s + (e - s) / 2;
        if ((mid * mid) > n)
        {
            e = mid - 1;
        }
        else if (mid * mid == n)
        {
            return mid;
        }
        else
        {
            ans = mid;
            s = mid + 1;
        }
    }
    return ans;
}
