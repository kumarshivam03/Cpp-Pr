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