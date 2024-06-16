class Solution
{
public:
    int minPatches(vector<int> &nums, int n)
    {
        long long miss = 1;
        int i = 0, patch = 0;
        while (miss <= n)
        {
            if (i < nums.size() && nums[i] <= miss)
            {
                miss += nums[i];
                i += 1;
            }
            else
            {
                miss += miss;
                patch += 1;
            }
        }
        return patch;
    }
};