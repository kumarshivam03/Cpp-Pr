/*

    Time Complexity : O(N), Since we traverse the entire Array(nums) once in the worst case. Where N = size of
    the Array(nums).

    Space Complexity : O(1), Constant Space.

    Solved using Array + Two Pointers.

*/

/***************************************** Approach 1 First Code *****************************************/

class Solution
{
public:
    void nextPermutation(vector<int> &nums)
    {
        int n = nums.size(), index = -1;
        for (int i = n - 2; i >= 0; i--)
        {
            if (nums[i] < nums[i + 1])
            {
                index = i;
                break;
            }
        }
        for (int i = n - 1; i >= index && index != -1; i--)
        {
            if (nums[i] > nums[index])
            {
                swap(nums[i], nums[index]);
                break;
            }
        }
        reverse(nums.begin() + index + 1, nums.end());
    }
};

/***************************************** Approach 1 Second Code *****************************************/

class Solution
{
public:
    void nextPermutation(vector<int> &nums)
    {
        next_permutation(nums.begin(), nums.end());
    }
};