// Kadane’s Algorithm : Maximum Subarray Sum in an Array
// Problem Statement: Given an integer array arr, find the contiguous subarray (containing at least one number) which
// has the largest sum and returns its sum and prints the subarray.

class Solution-- -- -- -- -- -- > tc = o(n){
    public :
        int maxSubArray(vector<int> & nums){
            int i;
long long int sum = 0, maxi = INT_MIN;
for (i = 0; i < nums.size(); i++)
{
    sum += nums[i];
    if (sum > maxi)
    {
        maxi = max(sum, maxi);
    }
    if (sum < 0)
    {
        sum = 0;
    }
}
return maxi;
}
}
;