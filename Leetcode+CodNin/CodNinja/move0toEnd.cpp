vector<int> moveZeros(int n, vector<int> a)
{
    int i = 0;
    for (int j = 0; j < a.size(); j++)
    {
        if (a[j] != 0)
        {
            swap(a[j], a[i]);
            i++;
        }
    }
    return a;
}

// or

vector<int> moveZeros(int n, vector<int> a)
{ // brute force
    int i, j, ct = 0;
    vector<int> temp;
    for (i = 0; i < n; i++)
    {
        if (a[i] != 0)
        {
            temp.push_back(a[i]);
            ct++;
        }
    }
    for (i = 0; i < n - ct; i++)
    {
        temp.push_back(0);
    }
    return temp;
}
