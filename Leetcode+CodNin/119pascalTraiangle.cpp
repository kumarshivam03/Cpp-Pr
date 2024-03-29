class Solution
{
public:
    vector<int> getRow(int rowIndex)
    {
        vector<vector<int>> ans;
        int i, j;
        for (i = 0; i < rowIndex + 1; i++)
        {
            vector<int> v(i + 1, 1);
            for (j = 1; j < i; j++)
            {
                v[j] = ans[i - 1][j] + ans[i - 1][j - 1];
            }
            ans.push_back(v);
        }

        vector<int> neww;
        neww = ans[rowIndex];
        return neww;
    }
};