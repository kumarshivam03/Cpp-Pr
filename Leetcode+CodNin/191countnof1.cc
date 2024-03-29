// #include <iostream>
// using namespace std;

// int main()
// {
//     int a = 3, b = 4;
//     cout << (a | b) << endl;
//     cout << (a & b);
// }
class Solution
{
public:
    int hammingWeight(uint32_t n)
    {
        int ct = 0;
        while (n != 0)
        {
            if (n & 1)
            {
                ct++;
            }
            n = n >> 1;
        }
        return ct;
    }
};