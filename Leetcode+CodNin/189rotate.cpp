class Solution
{
public:
    void rotate(vector<int> &nums, int k)
    {
        vector<int> b(nums.size());
        for (int i = 0; i < nums.size(); i++)
        {
            b[(i + k) % nums.size()] = nums[i];
        }
        nums = b;
    }
};