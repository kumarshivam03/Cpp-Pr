int longestSuccessiveElements(vector<int> &a)
{
    vector<int> t;
    int n = a.size(), i = 0;
    sort(a.begin(), a.end());
    int cnt = 0, longe = 1, Small = INT_MIN;
    for (i = 0; i < n; i++)
    {
        if (a[i] - 1 == Small)
        {
            cnt++;
            Small = a[i];
        }
        else if (Small != a[i])
        {
            cnt = 1;
            Small = a[i];
        }
        longe = max(longe, cnt);
    }

    return longe;
}