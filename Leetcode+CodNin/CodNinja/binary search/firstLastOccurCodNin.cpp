// to find no of occurence of any no is given (result of lbinary-result of fbinary +1) i.e lastOccurIndex-firstOccurIndex+1//love babbar
int fbinary(vector<int> &arr, int size, int key)
{
    int low = 0;
    int high = size - 1;
    int ans = -1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2; // this is used to decrease if low=2^31-1 high=2^31-1 size mid should be in ramge of integer or int mid = (low + high) / 2;
        if (arr[mid] == key)
        {
            ans = mid;
            high = mid - 1;
        }
        else if (key > arr[mid])
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return ans;
}

int lbinary(vector<int> &arr, int size, int key)
{
    int low = 0;
    int high = size - 1;
    int ans = -1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2; // this is used to decrease if low=2^31-1 high=2^31-1 size mid should be in ramge of integer or int mid = (low + high) / 2;
        if (arr[mid] == key)
        {
            ans = mid;
            low = mid + 1;
        }
        else if (key > arr[mid])
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return ans;
}

pair<int, int> firstAndLastPosition(vector<int> &arr, int n, int k)
{
    pair<int, int> p;
    p.first = fbinary(arr, n, k);
    p.second = lbinary(arr, n, k);
    return p;
}

// or striver

int upperBound(vector<int> &arr, int n, int x)
{
    int low = 0, high = n - 1;
    int ans = n;

    while (low <= high)
    {
        int mid = (low + high) / 2;
        // maybe an answer
        if (arr[mid] > x)
        {
            ans = mid;
            // look for smaller index on the left
            high = mid - 1;
        }
        else
        {
            low = mid + 1; // look on the right
        }
    }
    return ans;
}

int lowerBound(vector<int> &arr, int n, int x)
{
    int low = 0, high = n - 1;
    int ans = n;

    while (low <= high)
    {
        int mid = (low + high) / 2;
        // maybe an answer
        if (arr[mid] >= x)
        {
            ans = mid;
            // look for smaller index on the left
            high = mid - 1;
        }
        else
        {
            low = mid + 1; // look on the right
        }
    }
    return ans;
}

pair<int, int> firstAndLastPosition(vector<int> &arr, int n, int k)
{
    int lb = lowerBound(arr, n, k);
    if (lb == n || arr[lb] != k)
        return {-1, -1};
    int ub = upperBound(arr, n, k);
    return {lb, ub - 1};
}
