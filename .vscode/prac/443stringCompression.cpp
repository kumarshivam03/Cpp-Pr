class Solution // sol by love babbar lec 22
{
public:
    int compress(vector<char> &chars)
    {
        int i = 0, ans = 0;
        int n = chars.size();
        while (i < n)
        {
            int j = i + 1;
            while (j < n && chars[i] == chars[j])
            {
                j++;
            }
            int count = j - i;
            chars[ans++] = chars[i];
            if (count > 1)
            {
                string ct = to_string(count);
                for (char ch : ct)
                {
                    chars[ans++] = ch;
                }
            }
            i = j;
        }
        return ans;
    }
};