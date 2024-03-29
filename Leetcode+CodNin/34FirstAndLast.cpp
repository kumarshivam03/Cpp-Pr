// O(2*logN), where N = size of the given array.
// Reason: We are basically using a lower-bound and upper-bound algorithm.

// Space Complexity: O(1) as we are using no extra space.

int upperBound(vector<int> &arr, int n, int x)
{
    int low = 0, high = n - 1;
    int ans = n;

    while (low <= high)
    {
        int mid = (low + high) / 2;
        // maybe an answer
        if (arr[mid] > x)
        {
            ans = mid;
            // look for smaller index on the left
            high = mid - 1;
        }
        else
        {
            low = mid + 1; // look on the right
        }
    }
    return ans;
}

int lowerBound(vector<int> &arr, int n, int x)
{
    int low = 0, high = n - 1;
    int ans = n;

    while (low <= high)
    {
        int mid = (low + high) / 2;
        // maybe an answer
        if (arr[mid] >= x)
        {
            ans = mid;
            // look for smaller index on the left
            high = mid - 1;
        }
        else
        {
            low = mid + 1; // look on the right
        }
    }
    return ans;
}

class Solution
{
public:
    vector<int> searchRange(vector<int> &nums, int target)
    {
        vector<int> t;
        int n = nums.size();
        int lb = lowerBound(nums, n, target);
        if (lb == n || nums[lb] != target)
            return {-1, -1};
        int ub = upperBound(nums, n, target);
        return {lb, ub - 1};
    }
};
