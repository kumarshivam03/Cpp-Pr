int isSorted(int n, vector<int> a)
{
    for (int i = 1; i < n; ++i)
    {
        if (a[i] < a[i - 1])
        {
            return 0; // Array is not sorted
        }
    }
    return 1; // Array is sorted
}

// or

int isSorted(int n, vector<int> a)
{

    int p;

    for (int i = 0; i <= n - 1; i++)

    {

        if (a[i] >= a[i - 1])
        {
        }

        else
        {

            return false;
        }
    }

    return true;
}