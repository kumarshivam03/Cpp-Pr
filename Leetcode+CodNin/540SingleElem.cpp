class Solution
{
public:
    int singleNonDuplicate(vector<int> &nums)
    {
        int mid, low = 0, high = nums.size() - 1, n = nums.size(), ans;
        while (low <= high)
        {
            if (n == 1)
            {
                return nums[0];
            }
            if (nums[0] != nums[1])
            {
                return nums[0];
            }
            if (nums[n - 1] != nums[n - 2])
            {
                return nums[n - 1];
            }
            int mid = (low + high) / 2;
            if (nums[mid] != nums[mid - 1] && nums[mid] != nums[mid + 1])
            {
                return nums[mid];
            }
            if ((mid % 2 != 0 && nums[mid] == nums[mid - 1]) || (mid % 2 == 0 && nums[mid] == nums[mid + 1]))
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
        return -1;
    }
};