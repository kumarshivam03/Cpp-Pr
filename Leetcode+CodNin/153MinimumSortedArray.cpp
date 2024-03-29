class Solution
{
public:
    int findMin(vector<int> &nums)
    {
        int i, low = 0, high = nums.size() - 1, mid, ans = INT_MAX;
        while (low <= high)
        {
            mid = (low + high) / 2;
            if (nums[low] <= nums[mid])
            {
                ans = min(ans, nums[low]);
                low = mid + 1;
            }
            else
            {
                ans = min(ans, nums[mid]);
                high = mid - 1;
            }
        }
        return ans;
    }
};