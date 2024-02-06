class Solution
{
public:
    bool check(vector<int> &nums)
    {
        int ct = 0, i;
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i - 1] > nums[i])
            {
                ct++;
            }
        }
        if (nums[nums.size() - 1] > nums[0])
        {
            ct++;
        }
        return ct <= 1;
    }
};