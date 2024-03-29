int upperBound(vector<int> &arr, int x, int n)
{
    int low = 0, high = n - 1, mid = 0;
    int ans = n;
    while (low <= high)
    {
        mid = (high + low) / 2;
        if (arr[mid] > x)
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

// or

int upperBound(vector<int> &arr, int x, int n)
{
    int ans = upper_bound(arr.begin(), arr.end(), x) - arr.begin();

    return ans;
}
