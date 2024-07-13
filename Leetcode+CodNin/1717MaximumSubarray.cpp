class Solution
{
public:
    int maximumGain(string s, int x, int y)
    {
        vector<char> v, v1;
        int i, j;
        int f, cnt = 0;
        if (x > y)
            f = 1;
        else
            f = 0;

        for (auto i : s)
        {
            if (!v.empty())
            {
                if (f)
                {
                    if (v.back() == 'a' && i == 'b')
                    {
                        cnt += x;
                        v.pop_back();
                    }
                    else
                    {
                        v.push_back(i);
                    }
                }
                else
                {
                    if (v.back() == 'b' && i == 'a')
                    {
                        cnt += y;
                        v.pop_back();
                    }
                    else
                    {
                        v.push_back(i);
                    }
                }
            }
            else
            {
                v.push_back(i);
            }
        }
        for (auto i : v)
        {
            if (!v1.empty())
            {
                if (!f)
                {
                    if (v1.back() == 'a' && i == 'b')
                    {
                        cnt += x;
                        v1.pop_back();
                    }
                    else
                    {
                        v1.push_back(i);
                    }
                }
                else
                {
                    if (v1.back() == 'b' && i == 'a')
                    {
                        cnt += y;
                        v1.pop_back();
                    }
                    else
                    {
                        v1.push_back(i);
                    }
                }
            }
            else
            {
                v1.push_back(i);
            }
        }
        return cnt;
    }
};