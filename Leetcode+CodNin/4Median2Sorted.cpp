class Solution
{
public:
    double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
    {
        int i = 0, j = 0, cnt = 0;
        int e1 = -1, e2 = -1;
        int n = nums1.size() + nums2.size();
        int i2 = n / 2;
        int i1 = (n / 2) - 1;
        double ans;
        while (i < nums1.size() && j < nums2.size())
        {
            if (nums1[i] < nums2[j])
            {
                if (cnt == i1)
                    e1 = nums1[i];
                if (cnt == i2)
                    e2 = nums1[i];
                cnt++;
                i++;
            }
            else
            {
                if (cnt == i1)
                    e1 = nums2[j];
                if (cnt == i2)
                    e2 = nums2[j];
                cnt++;
                j++;
            }
        }
        while (i < nums1.size())
        {
            if (cnt == i1)
                e1 = nums1[i];
            if (cnt == i2)
                e2 = nums1[i];
            cnt++;
            i++;
        }
        while (j < nums2.size())
        {
            if (cnt == i1)
                e1 = nums2[j];
            if (cnt == i2)
                e2 = nums2[j];
            cnt++;
            j++;
        }
        if (n % 2 == 0)
        {
            return (double)((double)(e1 + e2) / 2);
        }
        else
        {
            return e2;
        }
        return -1;
    }
};