int search(vector<int> &arr, int n, int k) // striver o(logn)
{
    int i, j;
    int low = 0, high = n - 1, mid;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == k)
        {
            return mid;
        }
        if (arr[low] <= arr[mid])
        {
            if (arr[low] <= k && k <= arr[mid])
            {
                mid =
                    high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        else
        {
            if (arr[mid] <= k && k <= arr[high])
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
    }
    return -1;
}

// or

int pivot(vector<int> &arr, int n)
{
    int s = 0, e = n - 1;
    while (s < e)
    {
        int mid = s + (e - s) / 2;

        if (arr[mid] >= arr[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
    }
    return s;
}

int binary(vector<int> &arr, int s, int e, int key)
{
    int low = s;
    int high = e;
    while (low <= high)
    {
        int mid = low + (high - low) / 2; // this is used to decrease if low=2^31-1 high=2^31-1 size mid should be in ramge of integer or int mid = (low + high) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        if (key > arr[mid])
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}

int search(vector<int> &arr, int n, int k)
{
    int pivo = pivot(arr, n);
    if (arr[pivo] <= k && k <= arr[n - 1])
    {
        return binary(arr, pivo, n - 1, k);
    }
    else
    {
        return binary(arr, 0, pivo - 1, k);
    }
}
