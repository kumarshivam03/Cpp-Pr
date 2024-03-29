class Solution o(n) optimized{
    public :
        vector<int>
            rearrangeArray(vector<int> & nums){
                vector<int> ans(nums.size(), 0);

int pos = 0, neg = 1;

for (int i = 0; i < nums.size(); i++)
{
    if (nums[i] > 0)
    {
        ans[pos] = nums[i];
        pos += 2;
    }
    else
    {
        ans[neg] = nums[i];
        neg += 2;
    }
}
return ans;
}
}
;

// brute force

class Solution
{
public:
    vector<int> rearrangeArray(vector<int> &nums)
    {
        int i, j = 0, k = 0;
        int n = nums.size();
        vector<int> temp1;
        vector<int> temp2;
        vector<int> temp3;
        for (i = 0; i < n; i++)
        {
            if (nums[i] >= 0)
            {
                temp1.push_back(nums[i]);
            }
            else
            {
                temp2.push_back(nums[i]);
            }
        }
        for (i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                temp3.push_back(temp1[k++]);
            }
            else
            {
                temp3.push_back(temp2[j++]);
            }
        }
        return temp3;
    }
};