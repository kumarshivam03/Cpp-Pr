bool possible(vector<int> &bloomDay, int mid, int m, int k)
{
    long cnt = 0, tot = 0;
    for (int i = 0; i < bloomDay.size(); i++)
    {
        if (bloomDay[i] <= mid)
        {
            cnt++;
        }
        else
        {
            tot += (cnt / k);
            cnt = 0;
        }
    }
    tot += (cnt / k);
    if (tot >= m)
    {
        return true;
    }
    return false;
}
class Solution
{
public:
    int minDays(vector<int> &bloomDay, int m, int k)
    {
        long long ans = -1;
        int low = *(min_element(bloomDay.begin(), bloomDay.end()));
        int high = *(max_element(bloomDay.begin(), bloomDay.end()));
        long long tyu = m * 1LL * k * 1LL;
        if (bloomDay.size() < tyu)
        {
            return ans;
        }
        while (low <= high)
        {
            int mid = low - (low - high) / 2;

            if (possible(bloomDay, mid, m, k))
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