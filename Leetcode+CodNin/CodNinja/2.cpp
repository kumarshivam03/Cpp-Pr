#include <map>
int majorityElement(vector<int> v)
{
    int i, cnt;
    map<int, int> p;
    for (i = 0; i < v.size(); i++)
    {
        p[v[i]]++;
    }
    for (auto it : p)
    {
        if (it.second > (v.size()) / 2)
        {
            return it.first;
        }
    }
    return -1;
}

#include <map>

int majorityElement(vector<int> v)
{

    // Write your code here

    int n = v.size();

    map<int, int> mpp;

    for (int num : v)
    {

        mpp[num]++;

        if (mpp[num] > n / 2)
        {

            return num;
        }
    }

    return -1;
}
