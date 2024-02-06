class Solution
{
public:
    bool isPowerOfTwo(int n)
    {
        for (int i = 0; i <= 30; i++)
        {
            int nas = pow(2, i);
            if (nas == n)
            {
                return true;
            }
        }
        return false;
    }
};