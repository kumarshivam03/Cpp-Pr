// optimal o(n*logm)
int lowerBound(vector<int> arr, int n, int x)
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
int rowWithMax1s(vector<vector<int>> &matrix, int n, int m)
{
    int cnt_max = 0;
    int index = -1;

    // traverse the rows:
    for (int i = 0; i < n; i++)
    {
        // get the number of 1's:
        int cnt_ones = m - lowerBound(matrix[i], m, 1);
        if (cnt_ones > cnt_max)
        {
            cnt_max = cnt_ones;
            index = i;
        }
    }
    return index;
}

// brute force o(n*m)
int rowWithMax1s(vector<vector<int>> &matrix, int n, int m)
{
    int row, col;
    int i, j, k, maxCnt = 0, maxRow = 0, cnt = -1;

    for (i = 0; i < n; i++)
    {
        cnt = 0;
        for (j = 0; j < m; j++)
        {
            if (matrix[i][j] == 1)
            {
                cnt++;
            }
        }
        if (cnt > maxCnt)
        {
            maxCnt = cnt;
            maxRow = i;
        }
    }
    if (cnt == -1)
    {
        return -1;
    }

    return maxRow;
}