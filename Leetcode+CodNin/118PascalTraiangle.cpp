class Solution
{
public:
    vector<vector<int>> generate(int numRows)
    {
        vector<vector<int>> ans;
        int i, j;
        for (i = 0; i < numRows; i++)
        {
            vector<int> v(i + 1, 1);
            for (j = 1; j < i; j++)
            {
                v[j] = ans[i - 1][j] + ans[i - 1][j - 1];
            }
            ans.push_back(v);
        }
        return ans;
    }
};