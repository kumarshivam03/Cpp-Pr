bool possible(vector<int> &nums, int m, int t)
{
    int cnt = 0, tot = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        tot += ceil((double)nums[i] / (double)m);
    }
    if (tot <= t)
    {
        return true;
    }
    return false;
}
class Solution
{
public:
    int smallestDivisor(vector<int> &nums, int threshold)
    {
        int low = 1;
        int high = *max_element(nums.begin(), nums.end());
        int mid;
        long ans = -1;
        while (low <= high)
        {
            mid = low - (low - high) / 2;
            if (possible(nums, mid, threshold))
            {
                ans = mid;
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        return ans;
    }
};