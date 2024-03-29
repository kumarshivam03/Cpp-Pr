#include <climits>
class Solution
{ // only logic is provided
public:
    int reverse(int x)
    {
        int ans = 0, dig, rem;
        while (x != 0)
        {
            rem = x % 10;
            if ((ans > INT_MAX / 10) || (ans < INT_MIN / 10))
            {
                return 0;
            }

            ans = (ans * 10) + rem;
            x = x / 10;
        }
        return ans;
    }
};