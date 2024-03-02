class Solution
{
public:
    int countPrimes(int n)
    {
        vector<bool> g(n + 1, true);
        g[0] = false;
        g[1] = false;
        int ct = 0;
        for (int i = 2; i < n; i++)
        {
            if (g[i])
            {
                ct++;
                for (int j = i * 2; j < n; j = j + i)
                {
                    g[j] = 0;
                }
            }
        }
        return ct;
    }
};