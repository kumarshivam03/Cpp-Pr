
vector<int> superiorElements(vector<int> &a)
{
    int maxi = INT_MIN;
    int i, n = a.size();
    vector<int> ans;
    for (i = n - 1; i >= 0; i--) // o(n)
    {
        if (a[i] > maxi)
        {
            ans.push_back(a[i]);
        }
        maxi = max(maxi, a[i]);
    }
    return ans;
}
