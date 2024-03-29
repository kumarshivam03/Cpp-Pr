// using Moore Voting Algorithm  o(n)
class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        int count = 0;
        int candidate = 0;

        for (int num : nums)
        {
            if (count == 0)
            {
                candidate = num;
            }

            if (num == candidate)
            {
                count++;
            }
            else
            {
                count--;
            }
        }

        return candidate;
    }
};

// map
class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        int i, cnt;
        map<int, int> p;
        for (i = 0; i < nums.size(); i++)
        {
            p[nums[i]]++;
        }
        for (auto it : p)
        {
            if (it.second > (nums.size()) / 2)
            {
                return it.first;
            }
        }
        return -1;
    }
};