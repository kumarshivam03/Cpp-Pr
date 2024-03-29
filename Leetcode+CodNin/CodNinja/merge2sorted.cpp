vector<int> sortedArray(vector<int> a, vector<int> b) // optimal soln:- tc=o(n1+n2) sc=o(n1+n2) //worst case
{
    int i = 0, j = 0;
    int n1 = a.size();
    int n2 = b.size();
    vector<int> e;
    while (i < n1 && j < n2)
    {
        if (a[i] <= b[j])
        {
            if (e.size() == 0 || e.back() != a[i])
            {
                e.push_back(a[i]);
            }
            i++;
        }
        else
        {
            if (e.size() == 0 || e.back() != b[j])
            {
                e.push_back(b[j]);
            }
            j++;
        }
    }
    while (j < n2)
    {
        if (e.size() == 0 || e.back() != b[j])
        {
            e.push_back(b[j]);
        }
        j++;
    }
    while (i < n1)
    {
        if (e.size() == 0 || e.back() != a[i])
        {
            e.push_back(a[i]);
        }
        i++;
    }
    return e;
}