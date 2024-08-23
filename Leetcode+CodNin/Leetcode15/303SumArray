
class NumArray
{
    vector<int> A;

public:
    NumArray(vector<int> &a)
    {
        A.push_back(0);
        for (auto &x : a)
            A.push_back(A.back() + x);
    }

    int sumRange(int l, int r)
    {
        return A[r + 1] - A[l];
    }
};