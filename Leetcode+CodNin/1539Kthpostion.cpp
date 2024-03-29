class Solution
{
public:
    int findKthPositive(vector<int> &arr, int k)
    {
        int i = 1;
        int j = 0;
        int ans = 0;

        while (k)
        {
            if (j < arr.size())
            {
                if (arr[j] == i)
                    j++;
                else
                {
                    k--;
                    ans = i;
                }
            }
            else
            {
                k--;
                ans = i;
            }
            i++;
        }
        return ans;
    }
};