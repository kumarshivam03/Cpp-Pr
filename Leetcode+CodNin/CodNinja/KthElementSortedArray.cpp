int kthElement(vector<int> &arr1, vector<int> &arr2, int n, int m, int k)
{
    int i = 0, j = 0, cnt = 0;
    int e1 = -1, e2 = -1;
    int tot = n + m;
    int i1 = k - 1;
    double ans;
    while (i < arr1.size() && j < arr2.size())
    {
        if (arr1[i] < arr2[j])
        {
            if (cnt == i1)
                e1 = arr1[i];
            cnt++;
            i++;
        }
        else
        {
            if (cnt == i1)
                e1 = arr2[j];
            cnt++;
            j++;
        }
    }
    while (i < arr1.size())
    {
        if (cnt == i1)
            e1 = arr1[i];
        cnt++;
        i++;
    }
    while (j < arr2.size())
    {
        if (cnt == i1)
            e1 = arr2[j];
        cnt++;
        j++;
    }
    return e1;
}