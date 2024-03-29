int check(vector<int> &arr, int pages)
{
    int i, student = 1, pagestu = 0;
    for (i = 0; i < arr.size(); i++)
    {
        if (arr[i] + pagestu <= pages)
        {
            pagestu += arr[i];
        }
        else
        {
            student++;
            pagestu = arr[i];
        }
    }
    return student;
}
int findPages(vector<int> &arr, int n, int m)
{
    int low = *max_element(arr.begin(), arr.end()), high = accumulate(arr.begin(), arr.end(), 0);
    int ans;
    if (m > n)
    {
        return -1;
    }
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (check(arr, mid) > m)
        {
            ans = mid;
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return low;
}