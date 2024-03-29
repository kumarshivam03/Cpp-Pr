#include <numeric>
int possible(vector<int> &weights, int mid)
{
    int load = 0, days = 1;
    for (int i = 0; i < weights.size(); i++)
    {
        if (weights[i] + load > mid)
        {
            days++;
            load = weights[i];
        }
        else
        {
            load += weights[i];
        }
    }
    return days;
}
class Solution
{
public:
    int shipWithinDays(vector<int> &weights, int days)
    {

        int low = *(max_element(weights.begin(), weights.end()));
        int high = accumulate(weights.begin(), weights.end(), 0);
        long ans = 0;
        while (low <= high)
        {
            int mid = low - (low - high) / 2;
            if (possible(weights, mid) <= days)
            {
                ans = mid;
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        return low;
    }
};