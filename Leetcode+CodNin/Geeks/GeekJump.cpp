
// memorisation
class Solution
{
public:
    int f(int in, vector<int> &height, vector<int> &dp)
    {
        if (in == 0)
            return 0;
        if (dp[in] != -1)
            return dp[in];
        int left = f(in - 1, height, dp) + abs(height[in] - height[in - 1]);
        int right = INT_MAX;
        if (in > 1)
        {
            right = f(in - 2, height, dp) + abs(height[in] - height[in - 2]);
        }
        return dp[in] = min(left, right);
    }

public:
    int minimumEnergy(vector<int> &height, int n)
    {
        vector<int> dp(n + 1, -1);
        return f(n - 1, height, dp);
    }
};

// tabulation

public:
int minimumEnergy(vector<int> &height, int n)
{
    vector<int> dp(n, 0);
    dp[0] = 0;
    for (int i = 1; i < n; i++)
    {
        int fs = dp[i - 1] + abs(height[i] - height[i - 1]);
        int ss = INT_MAX;
        if (i > 1)
        {
            ss = dp[i - 2] + abs(height[i] - height[i - 2]);
        }
        dp[i] = min(fs, ss);
    }
    return dp[n - 1];
}