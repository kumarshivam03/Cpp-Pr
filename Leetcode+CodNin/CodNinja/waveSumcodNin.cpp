#include <bits/stdc++.h>
vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{
    int i, j;
    vector<int> ans;
    for (i = 0; i < mCols; i++)
    {
        if (i & 1)
        {
            for (j = nRows - 1; j >= 0; j--)
            {
                ans.push_back(arr[j][i]);
            }
        }
        else
        {
            for (j = 0; j < nRows; j++)
            {
                ans.push_back(arr[j][i]);
            }
        }
    }
    return ans;
}