#include <map>
vector<int> countFrequency(int n, int x, vector<int> &nums)
{
    vector<int> v;
    int i;
    map<int, int> mpp;
    for (i = 0; i < n; i++)
    {
        mpp[nums[i]]++;
    }
    for (i = 0; i < n; i++)
    {
        v.push_back(mpp[i + 1]);
    }
    return v;
}