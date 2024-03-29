https : // leetcode.com/problems/permutation-in-string/solutions/1762469/c-sliding-window-optimized-well-explained/

        class Solution
{

private:
    bool equalFunc(vector<int> c1, vector<int> c2)
    {
        for (int i = 0; i < 26; i++)
        {
            if (c1[i] != c2[i])
            {
                return false;
            }
        }
        return true;
    }

public:
    bool checkInclusion(string s1, string s2)
    {
        vector<int> c1(26, 0);
        for (char ch : s1)
            c1[ch - 'a']++;

        vector<int> c2(26, 0);
        int i = 0, j = 0;
        while (j < s2.size())
        {
            c2[s2[j] - 'a']++;
            if (j - i + 1 == s1.length())
            {
                if (equalFunc(c1, c2))
                {
                    return true;
                }
            }

            if (j - i + 1 < s1.length())
            {
                j++;
            }
            else
            {
                c2[s2[i] - 'a']--;
                i++;
                j++;
            }
        }
        return false;
    }
};