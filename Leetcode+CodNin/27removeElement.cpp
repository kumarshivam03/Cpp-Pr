class Solution
{
public:
    int removeElement(vector<int> &nums, int val)
    {
        int ct = 0;
        // vector<int>ans;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] != val)
            {
                nums[ct] = nums[i];
                ct++;
                // ans.push_back(nums[i]);
            }
        }
        // nums=ans;
        return ct;
    }
};