// o(logn)
int lowerBound(vector<int> arr, int n, int x)
{
    int low = 0, high = n - 1, mid = 0;
    int ans = n;
    while (low <= high)
    {
        mid = (high + low) / 2;
        if (arr[mid] >= x)
        {
            ans = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return ans;
}
// or other stl:-

int lowerBound(vector<int> arr, int n, int x)
{
    int ans = lower_bound(arr.begin(), arr.end(), x) - arr.begin();
    return ans;
}
